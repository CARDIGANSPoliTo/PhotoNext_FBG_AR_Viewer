using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Unity.Profiling;
using UnityEngine.Profiling;
using System.Diagnostics;
using System.Globalization;

public class MeasuramentLog : MonoBehaviour
{
    StreamWriter logFileTotal;
    StreamWriter logFileSensorPosition;
    StreamWriter logFileMonitoring;

    [SerializeField, Tooltip("The amount of time, in seconds, to collect frames for frame rate calculation.")]
    private float frameSampleRate = 0.1f;

    private static readonly int maxTargetFrameRate = 120;
    private static readonly int maxFrameTimings = 128;
    private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
    private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];

    public float FrameSampleRate
    {
        get { return frameSampleRate; }
        set { frameSampleRate = value; }
    }

    private int frameCount;

    const string logHeader = "Timestamp, CPU, GPU, Memory";
    DateTime startData;
    string data;

    private bool sensorPositioningPhase = false;
    [HideInInspector]
    public bool sensorMonitoringPhase = false;

    // Start is called before the first frame update
    void Start()
    {
        startData = DateTime.Now;
        data = (new DateTimeOffset(startData).ToUnixTimeSeconds()).ToString();
        //Debug.Log(startData);
        string filename = Application.persistentDataPath + "/"+ data + "_simulation_log_total.csv";
        logFileTotal = File.CreateText(filename);

        logFileTotal.WriteLine(logHeader);

        stopwatch.Reset();
        stopwatch.Start();
    }

    public void StartSensorpositioningPhaseLog()
    {
        string filename = Application.persistentDataPath + "/" + data + "_simulation_log_sensor_position_phase.csv";
        logFileSensorPosition = File.CreateText(filename);
        logFileSensorPosition.WriteLine(logHeader);
        sensorPositioningPhase = true;
    }
    public void StartMonitoringPhaseLog()
    {
        string filename = Application.persistentDataPath + "/" + data + "_simulation_log_monitoring_phase.csv";
        logFileMonitoring = File.CreateText(filename);
        logFileMonitoring.WriteLine(logHeader);
        sensorMonitoringPhase = true;
    }
    public void EndSensorpositioningPhaseLog()
    {
        sensorMonitoringPhase = false;
        logFileSensorPosition.Close();
    }

    // Update is called once per frame
    void LateUpdate()
    {
        // Capture frame timings every frame and read from it depending on the frameSampleRate.
        FrameTimingManager.CaptureFrameTimings();
        ++frameCount;
        float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
        if (elapsedSeconds >= frameSampleRate)
        {
            
            int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
            int gpuFrameRate = 0;

            // Many platforms do not yet support the FrameTimingManager. When timing data is returned from the FrameTimingManager we will use
            // its timing data, else we will depend on the stopwatch.
            uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);

            if (frameTimingsCount != 0)
            {
                float cpuFrameTime, gpuFrameTime;
                AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
                cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
                gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
            }

            // Update memory statistics.
            ulong usage = AppMemoryUsage;
            string memory = MemoryUsageToString(usage);

            string logLine = DateTime.Now.ToString() + ", " + Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate).ToString() + ", " + Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate).ToString() + ", " + memory;
            logFileTotal.WriteLine(logLine);

            if (sensorMonitoringPhase)
            {
                logFileMonitoring.WriteLine(logLine);
            }
            else if (sensorPositioningPhase)
            {
                logFileSensorPosition.WriteLine(logLine);
            }
            //se fase monitoring scrivi e setta variabile

            // Reset timers.
            frameCount = 0;
            stopwatch.Reset();
            stopwatch.Start();       
        }

    }

    void OnApplicationQuit()
    {
        if (this.isActiveAndEnabled) {
            logFileTotal.Close();
            //se variabile true
            if(sensorPositioningPhase) logFileSensorPosition.Close();
            if(sensorMonitoringPhase) logFileMonitoring.Close();
        }
        
    }

    private static readonly ProfilerMarker AverageFrameTimingPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.AverageFrameTiming");

    private static void AverageFrameTiming(FrameTiming[] frameTimings, uint frameTimingsCount, out float cpuFrameTime, out float gpuFrameTime)
    {
        using (AverageFrameTimingPerfMarker.Auto())
        {
            double cpuTime = 0.0f;
            double gpuTime = 0.0f;

            for (int i = 0; i < frameTimingsCount; ++i)
            {
                cpuTime += frameTimings[i].cpuFrameTime;
                gpuTime += frameTimings[i].gpuFrameTime;
            }

            cpuTime /= frameTimingsCount;
            gpuTime /= frameTimingsCount;

            cpuFrameTime = (float)(cpuTime * 0.001);
            gpuFrameTime = (float)(gpuTime * 0.001);
        }
    }

    private static ulong AppMemoryUsage
    {
        get
        {
//#if WINDOWS_UWP
                //return MemoryManager.AppMemoryUsage;
//#else
            return (ulong)Profiler.GetTotalAllocatedMemoryLong();
//#endif
        }
    }

    private static ulong AppMemoryUsageLimit
    {
        get
        {
//#if WINDOWS_UWP
 //               return MemoryManager.AppMemoryUsageLimit;
//#else
            return ConvertMegabytesToBytes(SystemInfo.systemMemorySize);
//#endif
        }
    }

    private static readonly ProfilerMarker MemoryUsageToStringPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryUsageToString");

    private static string MemoryUsageToString(ulong memoryUsage)
    {
        using (MemoryUsageToStringPerfMarker.Auto())
        {
            float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
            string specifier = "G";
            CultureInfo culture = CultureInfo.CreateSpecificCulture("eu-ES");
            return memoryUsageMB.ToString(specifier, CultureInfo.InvariantCulture);
        }
    }

    private static readonly ProfilerMarker MemoryItoAPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryItoA");

    private static int MemoryItoA(int value, char[] stringBuffer, int bufferIndex)
    {
        using (MemoryItoAPerfMarker.Auto())
        {
            int startIndex = bufferIndex;

            for (; value != 0; value /= 10)
            {
                stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
            }

            char temp;
            for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
            {
                temp = stringBuffer[startIndex];
                stringBuffer[startIndex] = stringBuffer[endIndex];
                stringBuffer[endIndex] = temp;
            }

            return bufferIndex;
        }
    }

    private static ulong ConvertMegabytesToBytes(int megabytes)
    {
        return ((ulong)megabytes * 1024UL) * 1024UL;
    }

    private static float ConvertBytesToMegabytes(ulong bytes)
    {
        return (bytes / 1024.0f) / 1024.0f;
    }

}

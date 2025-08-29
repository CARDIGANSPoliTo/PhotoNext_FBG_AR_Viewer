Shader "Hidden/Heatmap" {
	Properties{
		//_HeatTex("Texture", 2D) = "white" {}
		//_HeatTexDisplacement("Texture", 2D) = "white" {}
		//_Bending("Value", Range(0.0,1.0)) = 0.0
		//_Amplitude("Amplitude", Float) = 0
		//_BoundZ("BoundZ", Float) = 1
	}

		SubShader{
			Tags{
				  "LightMode" = "ForwardBase"
				}

			Pass{
				Cull Off
				 CGPROGRAM

		#pragma vertex vert             
		#pragma fragment frag
		#pragma multi_compile_instancing
		#include "UnityCG.cginc" // for UnityObjectToWorldNormal
		#include "UnityLightingCommon.cginc" // for _LightColor0

				struct VertexInput {
					float4 vertex : POSITION;
					float3 normal : NORMAL;
					float2 texcoord : TEXCOORD0;
					UNITY_VERTEX_INPUT_INSTANCE_ID //Insert
				};

				struct vertOutput {
					float4 pos		: POSITION;

					fixed4 diff : COLOR0;

					fixed3 worldPos : TEXCOORD1;
					fixed2 uv : TEXCOORD0;
					UNITY_VERTEX_OUTPUT_STEREO //Insert
				};

				uniform int	   _Points_Length = 0;
				uniform float _Type[64];	//per sapere se temp (0) o displ (1)
				uniform float3 _Points[100];		// (x, y, z) = position 
				uniform float2 _Properties[100];	// x = radius, y = intensity

				float4 _tempColors[4];
				float4 _displColors[4];
				float _pointranges[4];

				void init()
				{
					_tempColors[0] = float4(1, 1, 1, 1);
					_tempColors[1] = float4(0, .9, .2, 1);	//verde
					_tempColors[2] = float4(.9, .7, .1, 1);	//giallo
					_tempColors[3] = float4(1, 0, 0, 1);	//rosso

					_displColors[0] = float4(1, 1, 1, 1);
					_displColors[1] = float4(.6, .8, .9, 1);	//celeste
					_displColors[2] = float4(.4, .4, .9, 1);	//blu
					_displColors[3] = float4(.2, 0, .3, 1);	//viola

					_pointranges[0] = 0;
					_pointranges[1] = 0.33;
					_pointranges[2] = 0.66;
					_pointranges[3] = 1.0;

				}

				vertOutput vert(VertexInput input) {
					vertOutput o;

					UNITY_SETUP_INSTANCE_ID(input); //Insert
					UNITY_INITIALIZE_OUTPUT(vertOutput, o); //Insert
					UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o); //Insert


					o.worldPos = mul(unity_ObjectToWorld, input.vertex).xyz;
					o.pos = UnityObjectToClipPos(input.vertex);

					o.uv = input.texcoord;
					half3 worldNormal = UnityObjectToWorldNormal(input.normal);
					half  nl = max(0, dot(worldNormal, _WorldSpaceLightPos0.xyz));
					o.diff = nl * _LightColor0;
					o.diff.rgb += ShadeSH9(half4(worldNormal, 1));


					return o;
				}
				
				float3 getHeatForPixel(float h, float4 colors[4])
				{
					if (h <= _pointranges[0]) {
						return colors[0];
					}
					if (h >= _pointranges[3]) {
						return colors[3];
					}
					for (int i = 1; i < 4; i++) {
						if (h < _pointranges[i]) {
							float dist_from_lower_point = h - _pointranges[i - 1];
							float size_of_point_range = _pointranges[i] - _pointranges[i - 1];

							float ratio_over_lower_point = dist_from_lower_point / size_of_point_range;
							float3 color_range = colors[i] - colors[i - 1];
							float3 color_contribution = color_range * ratio_over_lower_point;

							float3 new_color = colors[i - 1] + color_contribution;
							return new_color;
						}
					}
					return _tempColors[0];
				}

				half4 frag(vertOutput output) : SV_TARGET{	
					
					init();
					// Loops over all the points
					half h = 0;

					half minDistance = 60000; //valore gigante
					bool near = false;
					
					int type;
					//Calculate distance from each point
					for (int i = 0; i < _Points_Length; i++)
					{
						half ri = _Properties[i].x;
						if (ri == 0) { continue; }	//se il raggio è zero salta, il punto non esiste
						
						half di = distance(output.worldPos, _Points[i].xyz);

						half hi = 1 - saturate(di / ri);	//se d>r -> 1 -> hi = 0 h è zero se è lontano
						if (hi != 0) near = true;
						// somma solo se il punto è quello piu vicino
						if (di < minDistance && near)
						{
							minDistance = di;

							h = hi / 2.0 + _Properties[i].y / 2.0;

							//h = hi * _Properties[i].y;//+ (_Properties[i].y/3.0);	//intensità

							type = _Type[i];
						}
						
					}
					if (!near  || _Points_Length == 0) return fixed4(1, 1, 1, 1) * output.diff;
					
					// Converts (0-1) according to the heat texture
					h = saturate(h);
					//ritorna il colore della texture associata

					fixed4 color = fixed4(1, 1, 1, 1);
					float3 heat;

					if (type == 0) {
						heat = getHeatForPixel(h, _tempColors);
					}
					else heat = getHeatForPixel(h, _displColors);

					color *= float4(heat, 0.3);
					
					color *= output.diff;
					return color;
				}
					ENDCG
			}
		}
			Fallback "Diffuse"


}
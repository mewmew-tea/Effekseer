#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_2_0 /EPS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderLighting_PS.h
//    Shader/model_renderer_lighting_PS.fx
//
//
// Parameters:
//
//   float4 fLightAmbient;
//
//
// Registers:
//
//   Name          Reg   Size
//   ------------- ----- ----
//   fLightAmbient c2       1
//

    ps_2_0
    def c0, -1, -0, 0, 0
    dcl v0
    cmp r0, -v0.w, c0.x, c0.y
    texkill r0
    mov r0.w, v0.w
    add r0.xyz, v0, c2
    mov oC0, r0

// approximately 5 instruction slots used
#endif

const BYTE g_ps20_PS[] =
{
      0,   2, 255, 255, 254, 255, 
     35,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  87,   0, 
      0,   0,   0,   2, 255, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
     80,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,   2,   0, 
      1,   0,  10,   0,  64,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  76, 105, 103, 104, 116, 
     65, 109,  98, 105, 101, 110, 
    116,   0, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 115,  95,  50, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  57,  46,  50,  57, 
     46,  57,  53,  50,  46,  51, 
     49,  49,  49,   0,  81,   0, 
      0,   5,   0,   0,  15, 160, 
      0,   0, 128, 191,   0,   0, 
      0, 128,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,  88,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0, 255, 145,   0,   0, 
      0, 160,   0,   0,  85, 160, 
     65,   0,   0,   1,   0,   0, 
     15, 128,   1,   0,   0,   2, 
      0,   0,   8, 128,   0,   0, 
    255, 144,   2,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 144,   2,   0, 228, 160, 
      1,   0,   0,   2,   0,   8, 
     15, 128,   0,   0, 228, 128, 
    255, 255,   0,   0
};
#include "../winhttp.h"

//----- (000000014062D0F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_14062D0F0(__int64 *a1, double a2, float a3)
{
    __int64 v3; // r8
    __m128 v4; // xmm4
    float v5; // xmm3_4
    int v6; // edx
    __int64 result; // rax
    __int64 v8; // rcx

    v3 = *a1;
    v4 = *(__m128 *)&a2;
    v4.m128_f32[0] = (float)(*(float *)&a2 + 3.1415927) * 0.15915494;
    v5 = v4.m128_f32[0];
    v6 = (int)v4.m128_f32[0];
    if ( (int)v4.m128_f32[0] != 0x80000000 && (float)v6 != v4.m128_f32[0] )
        v5 = (float)(v6 - (_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1));
    *(_QWORD *)(v3 + 544) = 0i64;
    *(float *)(v3 + 52) = (float)((float)(v4.m128_f32[0] - v5) * 6.2831855) - 3.1415927;
    *(float *)(v3 + 56) = fmaxf(-1.5707964, fminf(a3, 1.5707964));
    result = a1[1];
    if ( result )
    {
        v8 = *a1;
        if ( *(_DWORD *)(result + 688) )
        {
            *(_OWORD *)(result + 960) = *(_OWORD *)(v8 + 32);
            *(_OWORD *)(result + 1008) = *(_OWORD *)(v8 + 64);
        }
    }
    return result;
}

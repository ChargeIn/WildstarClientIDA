#include "../winhttp.h"

//----- (00000001401749F0) ----------------------------------------------------
char __fastcall sub_1401749F0(__int64 a1, float a2)
{
	__m128 v3; // xmm6
	float v4; // xmm1_4
	unsigned __int64 v5; // xmm2_8
	unsigned __int64 v6; // xmm3_8
	int v7; // ecx
	int v8; // ecx
	double v9; // xmm7_8
	char result; // al
	int v11; // [rsp+88h] [rbp+10h] BYREF

	v3 = (__m128) * (unsigned int*)(a1 + 1024);
	v3.m128_f32[0] = fmaxf(v3.m128_f32[0], fminf(*(float*)(a1 + 1028), a2));
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		v4 = *(float*)(a1 + 1036);
		if (v4 > 0.0)
		{
			HIDWORD(v5) = v3.m128_i32[1];
			*(float*)&v5 = v3.m128_f32[0] / v4;
			v6 = v5;
			v7 = (int)(float)(v3.m128_f32[0] / v4);
			if (v7 != 0x80000000 && (float)v7 != *(float*)&v5)
				v6 = COERCE_UNSIGNED_INT((float)(v7 - (_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1)));
			v8 = (int)*(float*)&v5;
			*(float*)&v6 = *(float*)&v6 * v4;
			if ((int)*(float*)&v5 != 0x80000000 && (float)v8 != *(float*)&v5)
				v5 = COERCE_UNSIGNED_INT((float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1) + v8));
			*(float*)&v5 = *(float*)&v5 * v4;
			if (*(float*)&v6 != *(float*)&v5)
			{
				if (fabs(*(float*)&v5 - v3.m128_f32[0]) >= fabs(v3.m128_f32[0] - *(float*)&v6))
					v3.m128_u64[0] = v6;
				else
					v3.m128_u64[0] = v5;
			}
		}
	}
	v9 = *(float*)(a1 + 1032);
	v11 = 1;
	result = sub_1400D4070(a1, 0x48u, (char*)a1, "ff>b", v3.m128_f32[0], v9, &v11);
	if (v11)
	{
		sub_140174900(a1, *(double*)v3.m128_u64);
		return sub_1400D4070(a1, 0x49u, (char*)a1, byte_1409DDCB4, v3.m128_f32[0], v9);
	}
	return result;
}
// 1409DDCB4: using guessed type _BYTE byte_1409DDCB4[312];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;


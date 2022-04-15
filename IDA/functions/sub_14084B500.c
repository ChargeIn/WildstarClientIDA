#include "../winhttp.h"

//----- (000000014084B500) ----------------------------------------------------
__int64 __fastcall sub_14084B500(unsigned int a1, char a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v5; // r8
	int v6; // edx
	float v7; // xmm2_4
	float v8; // xmm3_4
	float v9; // xmm1_4
	float v10; // xmm3_4
	float v11; // xmm5_4
	float v12; // xmm5_4
	float v13; // xmm3_4
	float v14; // xmm5_4
	float v15; // xmm5_4
	float v16; // xmm3_4
	float v17; // xmm0_4
	float v18; // xmm0_4
	float v19; // xmm3_4
	float v20; // xmm0_4
	float v21; // xmm0_4
	float v22; // xmm3_4
	float v23; // xmm0_4
	float v24; // xmm0_4
	__m128 v25; // xmm0

	if (a1 >= 8)
		return 31i64;
	v5 = (unsigned __int64)a1 << 7;
	byte_140C62000[v5 + 40] = a2;
	if (a3)
	{
		v6 = dword_140C61BFC;
		*(_DWORD*)&byte_140C62000[v5 + 48] = *a3;
		v7 = 0.0;
		*(_DWORD*)&byte_140C62000[v5 + 52] = a3[1];
		*(_DWORD*)&byte_140C62000[v5 + 56] = a3[2];
		*(_DWORD*)&byte_140C62000[v5 + 60] = a3[3];
		*(_DWORD*)&byte_140C62000[v5 + 64] = a3[4];
		*(_DWORD*)&byte_140C62000[v5 + 68] = a3[5];
		*(_QWORD*)&byte_140C62000[v5 + 72] = 0i64;
		v8 = *(float*)&byte_140C62000[v5 + 48] * 0.050000001;
		if (v8 >= -37.0)
		{
			if ((v6 & 1) != 0)
			{
				v9 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v9 = 27866352.0;
				v6 |= 1u;
				dword_140C61BFC = v6;
				dword_140C61BF8 = 1272224376;
			}
			v10 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v8) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v9 * v8) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v9 * v8) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v9 = *(float*)&dword_140C61BF8;
			v10 = 0.0;
		}
		v11 = *(float*)&byte_140C62000[v5 + 52];
		*(float*)&byte_140C62000[v5 + 48] = v10;
		v12 = v11 * 0.050000001;
		if (v12 >= -37.0)
		{
			if ((v6 & 1) == 0)
			{
				v9 = 27866352.0;
				v6 |= 1u;
				dword_140C61BFC = v6;
				dword_140C61BF8 = 1272224376;
			}
			v13 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v12) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v9 * v12) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v9 * v12) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v13 = 0.0;
		}
		v14 = *(float*)&byte_140C62000[v5 + 56];
		*(float*)&byte_140C62000[v5 + 52] = v13;
		v15 = v14 * 0.050000001;
		if (v15 >= -37.0)
		{
			if ((v6 & 1) == 0)
			{
				v9 = 27866352.0;
				v6 |= 1u;
				dword_140C61BFC = v6;
				dword_140C61BF8 = 1272224376;
			}
			v16 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v15) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v9 * v15) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v9 * v15) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v16 = 0.0;
		}
		v17 = *(float*)&byte_140C62000[v5 + 68];
		*(float*)&byte_140C62000[v5 + 56] = v16;
		v18 = v17 * 0.050000001;
		if (v18 >= -37.0)
		{
			if ((v6 & 1) == 0)
			{
				v9 = 27866352.0;
				v6 |= 1u;
				dword_140C61BFC = v6;
				dword_140C61BF8 = 1272224376;
			}
			v19 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v18 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v18 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v18 * v9) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v19 = 0.0;
		}
		v20 = *(float*)&byte_140C62000[v5 + 60];
		*(float*)&byte_140C62000[v5 + 68] = v19;
		v21 = v20 * 0.050000001;
		if (v21 >= -37.0)
		{
			if ((v6 & 1) == 0)
			{
				v9 = 27866352.0;
				v6 |= 1u;
				dword_140C61BFC = v6;
				dword_140C61BF8 = 1272224376;
			}
			v22 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v21 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v21 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v21 * v9) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v22 = 0.0;
		}
		v23 = *(float*)&byte_140C62000[v5 + 64];
		*(float*)&byte_140C62000[v5 + 60] = v22;
		v24 = v23 * 0.050000001;
		if (v24 >= -37.0)
		{
			if ((v6 & 1) == 0)
			{
				v9 = 27866352.0;
				dword_140C61BFC = v6 | 1;
				dword_140C61BF8 = 1272224376;
			}
			v7 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v24 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v24 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v24 * v9) + 1065353200.0) & 0xFF800000);
		}
		*(float*)&byte_140C62000[v5 + 64] = v7;
		return 1i64;
	}
	else
	{
		result = 1i64;
		v25 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
		*(__m128*)& byte_140C62000[v5 + 48] = v25;
		*(__m128*)& byte_140C62000[v5 + 64] = v25;
	}
	return result;
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 140C62000: using guessed type _BYTE byte_140C62000[80];


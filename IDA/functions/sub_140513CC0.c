#include "../winhttp.h"

//----- (0000000140513CC0) ----------------------------------------------------
__int64 __fastcall sub_140513CC0(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax
	__int64 v5; // rdi
	unsigned int v6; // ebx
	float v7; // xmm7_4
	__int64 v8; // rax
	float v9; // xmm8_4
	float v10; // xmm8_4
	__int64 v11; // rax
	float v12; // xmm6_4
	__int64 v13; // rax
	float v14; // xmm0_4
	float v15; // xmm6_4
	__int64 v16; // rax
	double v17; // xmm0_8
	float v18; // xmm1_4
	__m128 v19; // xmm0
	int v20; // ecx

	result = sub_14020CE20(*(_DWORD*)a1);
	v5 = result;
	if (!result)
		return result;
	v6 = 0;
	v7 = 0.0;
	if ((dword_140C8AE90 & 1) != 0)
	{
		if (dword_140C8AE9C)
		{
			v9 = *(float*)&dword_140C8AE98;
			goto LABEL_9;
		}
	}
	else
	{
		dword_140C8AEA4 = 0;
		dword_140C8AEAC = 0;
		dword_140C8AEB4 = 0;
		dword_140C8AEBC = 0;
		dword_140C8AE90 |= 1u;
	}
	dword_140C8AE9C = 1;
	v8 = sub_140200220(0x52Fu);
	if (v8)
	{
		v9 = *(float*)(v8 + 24);
		dword_140C8AE98 = LODWORD(v9);
	}
	else
	{
		v9 = 0.0;
		dword_140C8AE98 = 0;
	}
LABEL_9:
	v10 = (float)(v9 * *(float*)(v5 + 12)) / (float)100;
	if (dword_140C8AEAC)
	{
		v12 = *(float*)&dword_140C8AEA8;
	}
	else
	{
		dword_140C8AEAC = 1;
		v11 = sub_140200220(0x52Fu);
		if (v11)
		{
			v12 = *(float*)(v11 + 32);
			dword_140C8AEA8 = LODWORD(v12);
		}
		else
		{
			v12 = 0.0;
			dword_140C8AEA8 = 0;
		}
	}
	if (dword_140C8AEB4)
	{
		v14 = *(float*)&dword_140C8AEB0;
	}
	else
	{
		dword_140C8AEB4 = 1;
		v13 = sub_140200220(0x52Fu);
		if (v13)
		{
			v14 = *(float*)(v13 + 36);
			dword_140C8AEB0 = LODWORD(v14);
		}
		else
		{
			v14 = 0.0;
			dword_140C8AEB0 = 0;
		}
	}
	v15 = (float)(v12 / v14) * (float)*(int*)(a1 + 4);
	if (dword_140C8AEA4)
	{
		v7 = *(float*)&dword_140C8AEA0;
	}
	else
	{
		dword_140C8AEA4 = 1;
		v16 = sub_140200220(0x52Fu);
		if (v16)
			v7 = *(float*)(v16 + 28);
		dword_140C8AEA0 = LODWORD(v7);
	}
	v17 = sub_1408FBFC0(COERCE_DOUBLE(1076754516i64), v15);
	v18 = *(float*)&v17 * v7;
	v19 = (__m128)0x402DF854u;
	*(double*)v19.m128_u64 = sub_1408FBFC0(COERCE_DOUBLE(1076754516i64), v18);
	v19.m128_f32[0] = v19.m128_f32[0] * v10;
	v20 = (int)v19.m128_f32[0];
	if ((int)v19.m128_f32[0] != 0x80000000 && (float)v20 != v19.m128_f32[0])
		v19.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1) + v20);
	*a2 = 100i64 * (unsigned int)(int)v19.m128_f32[0];
	a2[1] = 1i64;
	a2[2] = 0i64;
	LOBYTE(v6) = *a2 != 0i64;
	return v6;
}
// 140C8AE90: using guessed type int dword_140C8AE90;
// 140C8AE98: using guessed type int dword_140C8AE98;
// 140C8AE9C: using guessed type int dword_140C8AE9C;
// 140C8AEA0: using guessed type int dword_140C8AEA0;
// 140C8AEA4: using guessed type int dword_140C8AEA4;
// 140C8AEA8: using guessed type int dword_140C8AEA8;
// 140C8AEAC: using guessed type int dword_140C8AEAC;
// 140C8AEB0: using guessed type int dword_140C8AEB0;
// 140C8AEB4: using guessed type int dword_140C8AEB4;
// 140C8AEBC: using guessed type int dword_140C8AEBC;


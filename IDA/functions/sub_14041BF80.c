#include "../winhttp.h"

//----- (000000014041BF80) ----------------------------------------------------
__int64 __fastcall sub_14041BF80(_QWORD* a1)
{
	int* v2; // rbp
	int* v3; // rax
	int* v4; // rdi
	__int64 result; // rax
	unsigned int v6; // ebx
	bool v7; // zf
	int v8; // edx
	float v9; // xmm7_4
	__int64 v10; // r14
	_DWORD* v11; // rax
	int v12; // r9d
	__int64 v13; // r8
	int v14; // r9d
	float v15; // ecx
	unsigned __int64 v16; // rcx
	float v17; // xmm0_4
	__int64 v18; // r8
	int v19; // r9d
	float v20; // ecx
	unsigned __int64 v21; // rax
	float v22; // xmm0_4
	__m128 v23; // [rsp+20h] [rbp-68h] BYREF
	__int64 v24; // [rsp+30h] [rbp-58h] BYREF
	__int64 v25; // [rsp+38h] [rbp-50h]
	__int64 v26; // [rsp+40h] [rbp-48h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = sub_140417C90(a1, 1u);
	v4 = v3;
	if (v2)
	{
		if (!v3)
			v4 = v2 + 2;
		v6 = 0;
		v25 = 1i64;
		v7 = *(_DWORD*)(qword_140C65898 + 26180) == 49;
		v24 = 0i64;
		v26 = 0i64;
		if (v7)
			v8 = *(_DWORD*)(qword_140C65898 + 26176);
		else
			v8 = 0;
		v9 = 1.0;
		v10 = sub_1403D90D0(qword_140C65898, v8);
		v11 = (_DWORD*)sub_140243A00(v2[112]);
		if (v11)
		{
			v12 = v11[1];
			v23 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)(unsigned int)v11[3], (__m128)0i64),
				_mm_unpacklo_ps((__m128)(unsigned int)v11[4], (__m128)0i64));
			LODWORD(v9) = sub_1405E6230(qword_140C65898 + 5784, 14, v23.m128_f32, v12).m128_u32[0];
		}
		else if (v10)
		{
			v9 = *(float*)(v10 + 14044);
		}
		v13 = *((_QWORD*)v4 + 5);
		if (v13 > 0)
		{
			v14 = v4[12];
			v15 = v9;
			HIDWORD(v25) = v4[13];
			LODWORD(v25) = v14;
			v24 = v13;
			if (v9 < 0.0)
				LODWORD(v15) = 0x80000000 - LODWORD(v9);
			if ((int)abs32(LODWORD(v15) - 1065353216) > 84 && v14 == 1)
			{
				v16 = 0i64;
				v17 = (float)(int)v13 * v9;
				if (v17 >= 9.223372e18)
				{
					v17 = v17 - 9.223372e18;
					if (v17 < 9.223372e18)
						v16 = 0x8000000000000000ui64;
				}
				v24 = v16 + (unsigned int)(int)v17;
			}
			v6 = 1;
			sub_140501210(a1, &v24);
		}
		v18 = *((_QWORD*)v4 + 8);
		if (v18 > 0)
		{
			v19 = v4[18];
			v20 = v9;
			HIDWORD(v25) = v4[19];
			LODWORD(v25) = v19;
			v24 = v18;
			if (v9 < 0.0)
				LODWORD(v20) = 0x80000000 - LODWORD(v9);
			if ((int)abs32(LODWORD(v20) - 1065353216) > 84 && v19 == 1)
			{
				v21 = 0i64;
				v22 = (float)(int)v18 * v9;
				if (v22 >= 9.223372e18)
				{
					v22 = v22 - 9.223372e18;
					if (v22 < 9.223372e18)
						v21 = 0x8000000000000000ui64;
				}
				v24 = v21 + (unsigned int)(int)v22;
			}
			++v6;
			sub_140501210(a1, &v24);
		}
		return v6;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;


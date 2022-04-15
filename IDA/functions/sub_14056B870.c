#include "../winhttp.h"

//----- (000000014056B870) ----------------------------------------------------
void __fastcall sub_14056B870(void(__fastcall* a1)(__int64 a1, __int64 a2, int a3))
{
	unsigned int* v2; // rax
	unsigned int* v3; // rdi
	float v4; // xmm7_4
	__m128 v5; // xmm6
	__int64 v6; // rax
	__m128 v7; // xmm1
	__int64 v8; // r8
	int* v9; // rcx
	int v10; // edx
	__int64 v11; // rax
	unsigned __int64 v12; // rcx
	int v13[4]; // [rsp+20h] [rbp-58h] BYREF
	void(__fastcall * v14)(__int64, __int64, int); // [rsp+30h] [rbp-48h] BYREF
	void(__fastcall * v15)(__int64, __int64, int); // [rsp+38h] [rbp-40h]
	__int64(__fastcall * v16)(); // [rsp+40h] [rbp-38h]
	__int64 v17; // [rsp+48h] [rbp-30h]

	v2 = (unsigned int*)sub_14024B980(*(_DWORD*)(*((_QWORD*)a1 + 2) + 16i64));
	v3 = v2;
	if (v2)
	{
		if (*((_DWORD*)a1 + 6) || *((_QWORD*)a1 + 5))
			goto LABEL_12;
		v4 = 0.0;
		v5 = _mm_sub_ps(
			*(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64),
			_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v2[3], (__m128)v2[5]), _mm_unpacklo_ps((__m128)v2[4], (__m128)0i64)));
		v6 = sub_140200220(0x214u);
		if (v6)
			v4 = *(float*)(v6 + 24);
		v7 = _mm_mul_ps(v5, v5);
		if ((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) > (float)(v4 * v4))
		{
		LABEL_12:
			v16 = sub_14056B870;
			LODWORD(v14) = 0;
			v15 = a1;
			v17 = 0i64;
			sub_140195960((__int64)a1 + 48, 1000, (__int64)&v14, 4);
		}
		else
		{
			v8 = sub_140248F00(*(_DWORD*)(*((_QWORD*)a1 + 2) + 20i64));
			if (v8)
			{
				v9 = (int*)*((_QWORD*)a1 + 2);
				v14 = a1;
				v10 = *v9;
				LODWORD(v9) = *v3;
				v15 = sub_14056B9F0;
				v11 = 0i64;
				v13[2] = (int)v9;
				v12 = *(_QWORD*)(v8 + 24);
				v13[0] = 0;
				v13[1] = v10;
				if (v12)
				{
					if (v12 <= qword_140C3FE70)
						v11 = v12 + qword_140C3FE68;
				}
				*((_QWORD*)a1 + 5) = sub_140487160(v12, v11, v13, (__int64*)&v14);
			}
		}
	}
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;


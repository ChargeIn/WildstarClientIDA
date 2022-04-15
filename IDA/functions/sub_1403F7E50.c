#include "../winhttp.h"

//----- (00000001403F7E50) ----------------------------------------------------
__int64 __fastcall sub_1403F7E50(
	__int64 a1,
	unsigned int* a2,
	unsigned int a3,
	unsigned int* a4,
	float* a5,
	unsigned int a6,
	unsigned int* a7)
{
	__m128* v7; // rax
	unsigned int v10; // r15d
	float v12; // xmm7_4
	__m128 v13; // xmm8
	__int64 i; // r12
	unsigned int v15; // ebx
	unsigned int* v16; // rax
	unsigned int* v17; // rbx
	__m128 v18; // xmm0
	__m128 v19; // xmm2
	__m128 v20; // xmm6
	int v21; // eax
	__m128 v22; // xmm6
	__m128 v23; // xmm2
	__m128 v24; // xmm3
	float v25; // xmm3_4
	__m128 v26; // xmm6
	__m128 v27; // xmm2
	float v28; // xmm2_4
	__int64 result; // rax
	__m128 v30; // [rsp+20h] [rbp-68h] BYREF

	v7 = *(__m128**)(a1 + 120);
	*a4 = 0;
	v10 = 0;
	v12 = 3.4028235e38;
	v13 = v7[286];
	if (a3)
	{
		for (i = a3; i; --i)
		{
			v15 = *a2;
			if (qword_140C63840)
			{
				v16 = (unsigned int*)qword_140C63840(off_140A6E228, v15, qword_140C63858);
			}
			else
			{
				if (dword_140C63E98 || (int)sub_14024B720() < 0)
					goto LABEL_18;
				v16 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
					qword_140C65388,
					v15);
			}
			v17 = v16;
			if (v16)
			{
				v18 = (__m128)v16[5];
				v19 = (__m128)v16[4];
				v20 = (__m128)v16[3];
				v21 = *(_DWORD*)(a1 + 26444);
				v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, v18), _mm_unpacklo_ps(v19, (__m128)0i64));
				v30 = v22;
				if ((v21 & v17[12]) != 0)
				{
					if (v17[10] != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(a1 + 72) + 8i64))(a1 + 72))
					{
						if (!a6)
							goto LABEL_18;
						if (!(unsigned int)sub_14043E6D0(a1, a6, *a2, v30.m128_f32))
							goto LABEL_18;
						v23 = _mm_sub_ps(v30, v13);
						v24 = _mm_mul_ps(v23, v23);
						v25 = (float)((float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
							+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0])
							- (float)(*((float*)v17 + 1) * *((float*)v17 + 1));
						if (v25 >= v12)
							goto LABEL_18;
						v10 = a6;
						v12 = v25;
						goto LABEL_17;
					}
					v26 = _mm_sub_ps(v22, v13);
					v27 = _mm_mul_ps(v26, v26);
					v28 = (float)((float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
						+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0])
						- (float)(*((float*)v17 + 1) * *((float*)v17 + 1));
					if (v28 < v12)
					{
						v10 = 0;
						v12 = v28;
					LABEL_17:
						*a4 = *a2;
					}
				}
			}
		LABEL_18:
			++a2;
		}
	}
	if (a5)
		*a5 = v12;
	if (a7)
		*a7 = v10;
	result = 2147500037i64;
	if (*a4)
		return 0i64;
	return result;
}
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;


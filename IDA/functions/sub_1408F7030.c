#include "../winhttp.h"

//----- (00000001408F7030) ----------------------------------------------------
__int64 __fastcall sub_1408F7030(__int64 a1, __int64 a2)
{
	int v2; // ebp
	unsigned int i; // edi
	__int64 v6; // rax
	float v7; // xmm8_4
	float v8; // xmm9_4
	__int64 result; // rax
	int v10; // eax
	int v11; // ebp
	float v12; // xmm7_4
	float v13; // xmm6_4
	unsigned int v14; // edi
	unsigned int* v15; // rsi
	__int64 v16; // rdx
	_DWORD* v17; // rcx
	__m128 v18; // xmm1
	int v19; // ecx
	__int64 v20; // rdi
	float v21; // xmm1_4
	float v22; // xmm8_4
	float v23; // xmm0_4
	__int64 v24; // rcx
	float v25; // xmm0_4
	int v26; // eax
	float v27; // xmm1_4
	__int64 v28; // rax
	float v29; // xmm1_4
	float v30; // xmm1_4

	v2 = *(unsigned __int16*)(a2 + 16);
	*(_DWORD*)(a2 + 12) = 45;
	*(_WORD*)(a2 + 18) = v2;
	for (i = 0; i < *(_DWORD*)(a1 + 96); ++i)
		sub_1407E4830(
			(int*)(*(_QWORD*)a2 + 4 * i * (unsigned __int64)*(unsigned __int16*)(a2 + 16)),
			0i64,
			(unsigned int)(4 * v2));
	v6 = *(_QWORD*)(a1 + 24);
	v7 = *(float*)(v6 + 96);
	v8 = *(float*)(a1 + 104) * (double)v2;
	*(_DWORD*)(a1 + 572) = *(_DWORD*)(v6 + 168);
	if (*(_BYTE*)(a1 + 609))
	{
		*(_WORD*)(a1 + 608) = 1;
		*(_QWORD*)(a1 + 584) = 0i64;
		*(_DWORD*)(a1 + 568) = 0;
	}
	result = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(result + 168) = 0;
	if (*(_DWORD*)(a1 + 560))
	{
		v10 = *(_DWORD*)(a1 + 168);
		v11 = 0;
		v12 = *(float*)(a1 + 72) / *(float*)(a1 + 112);
		v13 = (float)(v7 * v8) / (float)v10;
		if (v10)
		{
			do
			{
				v14 = 0;
				v15 = (unsigned int*)(a1 + 80);
				do
				{
					v16 = *(_QWORD*)(a1 + 24);
					if (*(_BYTE*)(v14 + v16 + 152))
					{
						if (v14)
							v17 = (_DWORD*)(v16 + 16i64 * v14 + 8);
						else
							v17 = (_DWORD*)(a1 + 8);
						*(float*)(*(_QWORD*)(a1 + 56) + 4i64 * (v11 + v14 * *(_DWORD*)(a1 + 168))) = sub_140835CA0(
							v17,
							(float)((float)((float)v11 * v13) + *(float*)(a1 + 108))
							* v12,
							*v15,
							v15);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4i64 * (v11 + v14 * *(_DWORD*)(a1 + 168))) = 0;
					}
					++v14;
					++v15;
				} while (v14 < 4);
				++v11;
			} while ((unsigned int)v11 < *(_DWORD*)(a1 + 168));
		}
		v18 = (__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int16*)(a2 + 18));
		v18.m128_f32[0] = v18.m128_f32[0] / (float)*(int*)(a1 + 168);
		v19 = (int)v18.m128_f32[0];
		if ((int)v18.m128_f32[0] != 0x80000000 && (float)v19 != v18.m128_f32[0])
			v18.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v18, v18)) & 1) + v19);
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 8i64))(
			*(_QWORD*)(a1 + 32),
			20i64 * (((int)v18.m128_f32[0] + 3) & 0xFFFFFFFC));
		v20 = result;
		if (!result)
		{
		LABEL_28:
			*(_DWORD*)(a2 + 12) = 2;
			return result;
		}
		sub_1408F95C0((unsigned int*)(a1 + 96), a2, (float*)result);
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32), v20);
	}
	v21 = *(float*)(a1 + 112);
	v22 = (float)(v7 * v8) + *(float*)(a1 + 108);
	*(float*)(a1 + 108) = v22;
	if (v22 < v21)
		return result;
	v23 = sub_1408FDE98(v22, v21);
	result = *(unsigned int*)(a1 + 68);
	++* (_DWORD*)(a1 + 64);
	*(float*)(a1 + 108) = v23;
	if ((_DWORD)result && *(_DWORD*)(a1 + 64) >= (unsigned int)result)
	{
		*(_DWORD*)(a2 + 12) = 17;
		return result;
	}
	v24 = *(_QWORD*)(a1 + 24);
	*(_BYTE*)(a1 + 609) = 1;
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(v24 + 72);
	v25 = *(float*)(v24 + 76);
	v26 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
	*(_DWORD*)(a1 + 248) = v26;
	v27 = (float)v26;
	v28 = *(_QWORD*)(a1 + 24);
	v29 = (float)((float)((float)(v27 * 2.3283064e-10) * 2.0) - 1.0) * v25;
	*(float*)(a1 + 76) = v29;
	v30 = v29 + *(float*)(v28 + 72);
	*(float*)(a1 + 112) = v30;
	if (v30 <= 0.1)
		v30 = 0.1;
	*(float*)(a1 + 112) = v30;
	result = sub_1408F79A0(a1);
	if ((_DWORD)result != 1)
		goto LABEL_28;
	sub_1408F81A0(a1);
	result = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;


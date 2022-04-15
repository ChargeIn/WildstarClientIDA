#include "../winhttp.h"

//----- (00000001408F98E0) ----------------------------------------------------
__int64 __fastcall sub_1408F98E0(__int64 a1)
{
	double v2; // xmm0_8
	__int64 v3; // r8
	int v4; // ecx
	float v5; // xmm1_4
	__int64 result; // rax
	int v7; // ebp
	__int64 v8; // r11
	__int64 v9; // rdx
	__int64 v10; // rsi
	unsigned __int64 v11; // rdi
	int v12; // r8d
	__int64 v13; // r10
	unsigned __int64 v14; // rdi
	int v15; // r9d
	float v16; // xmm2_4
	int v17; // eax
	int v18; // eax
	int v19; // eax
	unsigned int v20; // eax
	__m128i v21; // xmm0
	unsigned int v22; // r9d
	int v23; // ecx
	__int64 v24; // r8
	__int64 v25; // rdx
	unsigned int v26; // eax
	__m128i v27; // xmm0
	__int64 v28; // rcx
	unsigned __int64 v29; // r8
	__int64 v30; // rcx
	__int64 v31; // rdx

	v2 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), (float)(*(float*)(a1 + 92) * 0.02) - 2.0);
	v3 = *(int*)(a1 + 464);
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 28i64);
	v5 = *(float*)&v2 * 16.0;
	if ((_DWORD)v3 == 1 && v4 != -1)
		v4 = -1;
	result = (unsigned int)(v3 - v4 - 1);
	v7 = result;
	if ((int)result <= v4)
		v7 = v4;
	v8 = 0i64;
	v9 = *(int*)(a1 + 464);
	if (v4 == -1)
	{
		if (v3 >= 4)
		{
			v28 = 0i64;
			v29 = ((unsigned __int64)(v3 - 4) >> 2) + 1;
			v8 = 4 * v29;
			do
			{
				v28 += 112i64;
				*(float*)(v28 + *(_QWORD*)(a1 + 40) - 112) = v5;
				*(float*)(v28 + *(_QWORD*)(a1 + 40) - 84) = v5;
				*(float*)(v28 + *(_QWORD*)(a1 + 40) - 56) = v5;
				result = *(_QWORD*)(a1 + 40);
				*(float*)(v28 + result - 28) = v5;
				--v29;
			} while (v29);
		}
		if (v8 < v9)
		{
			v30 = 28 * v8;
			v31 = v9 - v8;
			do
			{
				result = *(_QWORD*)(a1 + 40);
				v30 += 28i64;
				*(float*)(v30 + result - 28) = v5;
				--v31;
			} while (v31);
		}
	}
	else
	{
		v10 = 0i64;
		if (v3 >= 4)
		{
			v11 = (unsigned __int64)(v3 - 4) >> 2;
			v12 = 2 - v4;
			v13 = 0i64;
			v14 = v11 + 1;
			v15 = v4 - 2;
			LODWORD(v8) = 4 * v14;
			v10 = 4 * v14;
			v16 = 1.0 / (float)v7;
			do
			{
				v17 = v15 + 2;
				if (v15 + 2 < 0)
					v17 = v12 - 2;
				*(float*)(v13 + *(_QWORD*)(a1 + 40)) = (float)((float)v17 * v16) * v5;
				v18 = v15 + 1;
				if (v15 + 1 < 0)
					v18 = v12 - 1;
				*(float*)(v13 + *(_QWORD*)(a1 + 40) + 28) = (float)((float)v18 * v16) * v5;
				v19 = v12;
				if (v15 >= 0)
					v19 = v15;
				*(float*)(v13 + *(_QWORD*)(a1 + 40) + 56) = (float)((float)v19 * v16) * v5;
				v20 = v15 - 1;
				if (v15 - 1 < 0)
					v20 = v12 + 1;
				v21 = _mm_cvtsi32_si128(v20);
				result = *(_QWORD*)(a1 + 40);
				v13 += 112i64;
				v15 -= 4;
				v12 += 4;
				*(float*)(v13 + result - 28) = (float)(_mm_cvtepi32_ps(v21).m128_f32[0] * v16) * v5;
				--v14;
			} while (v14);
		}
		if (v10 < v9)
		{
			v22 = v8 - v4;
			v23 = v4 - v8;
			v24 = 28 * v10;
			v25 = v9 - v10;
			do
			{
				v26 = v22;
				v24 += 28i64;
				if (v23 >= 0)
					v26 = v23;
				--v23;
				++v22;
				v27 = _mm_cvtsi32_si128(v26);
				result = *(_QWORD*)(a1 + 40);
				*(float*)(v24 + result - 28) = (float)(_mm_cvtepi32_ps(v27).m128_f32[0] * (float)(1.0 / (float)v7)) * v5;
				--v25;
			} while (v25);
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;


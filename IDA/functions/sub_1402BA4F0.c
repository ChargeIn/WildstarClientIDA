#include "../winhttp.h"

//----- (00000001402BA4F0) ----------------------------------------------------
__int64 __fastcall sub_1402BA4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, float* a6, __int64* a7)
{
	__int64 v7; // rax
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rdi
	unsigned __int64 v13; // r10
	_WORD* v14; // rdx
	__int64 v15; // rcx
	float v16; // xmm6_4
	unsigned __int64 v17; // r8
	__int64 v18; // rcx
	unsigned __int64 v19; // rdx
	float v20; // xmm6_4
	float v21; // xmm6_4
	float v22; // xmm6_4
	__int64 v23; // rcx
	unsigned __int64 v24; // rdx
	unsigned __int64 v25; // r15
	float v26; // xmm6_4
	int* v27; // rax
	int* v28; // rdx
	int* v29; // rbp
	__int64 v30; // rcx
	__int64 v31; // rbp

	v7 = *(_QWORD*)(a2 + 80);
	v8 = *(unsigned __int16*)(v7 + 2 * a4);
	v9 = *(unsigned __int16*)(v7 + 2 * a3);
	v13 = v8;
	if (v8 > v9)
	{
		v14 = (_WORD*)(*(_QWORD*)(a2 + 128) + 2 * v8);
		v15 = 4 * (*(unsigned __int16*)(v7 + 2 * a4) - a5);
		do
		{
			--v14;
			--v13;
			v15 -= 4i64;
			if (*v14 != *(_WORD*)(a1 + 252))
				break;
			*(_DWORD*)(v15 + *(_QWORD*)(a1 + 2376)) = 0;
		} while (v13 > v9);
	}
	v16 = 0.0;
	v17 = v9;
	if (v9 < v8)
	{
		if ((__int64)(v8 - v9) >= 4)
		{
			v18 = 4 * (v9 - a5);
			v19 = ((v8 - v9 - 4) >> 2) + 1;
			v17 = v9 + 4 * v19;
			do
			{
				v18 += 16i64;
				*(float*)(v18 + *(_QWORD*)(a1 + 2384) - 16) = v16;
				v20 = v16 + *(float*)(v18 + *(_QWORD*)(a1 + 2376) - 16);
				*(float*)(v18 + *(_QWORD*)(a1 + 2384) - 12) = v20;
				v21 = v20 + *(float*)(v18 + *(_QWORD*)(a1 + 2376) - 12);
				*(float*)(v18 + *(_QWORD*)(a1 + 2384) - 8) = v21;
				v22 = v21 + *(float*)(v18 + *(_QWORD*)(a1 + 2376) - 8);
				*(float*)(v18 + *(_QWORD*)(a1 + 2384) - 4) = v22;
				v16 = v22 + *(float*)(v18 + *(_QWORD*)(a1 + 2376) - 4);
				--v19;
			} while (v19);
		}
		if (v17 < v8)
		{
			v23 = 4 * (v17 - a5);
			v24 = v8 - v17;
			do
			{
				v23 += 4i64;
				*(float*)(v23 + *(_QWORD*)(a1 + 2384) - 4) = v16;
				v16 = v16 + *(float*)(v23 + *(_QWORD*)(a1 + 2376) - 4);
				--v24;
			} while (v24);
		}
	}
	v25 = *(_QWORD*)(a1 + 2416);
	v26 = v16 + *(float*)(a1 + 80);
	if (v25 <= v25 + 1)
	{
		v27 = sub_14018DB00(*(_QWORD*)(a1 + 2408), v25 + 1, 24i64);
		v28 = *(int**)(a1 + 2408);
		v29 = v27;
		if (v28 != v27)
		{
			sub_1407DB590(v27, v28, 24i64 * *(_QWORD*)(a1 + 2416));
			v30 = *(_QWORD*)(a1 + 2408);
			if (v30)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
			*(_QWORD*)(a1 + 2408) = v29;
		}
	}
	*(_QWORD*)(a1 + 2416) = v25 + 1;
	v31 = 3 * v25;
	*(_QWORD*)(*(_QWORD*)(a1 + 2408) + 8 * v31) = v9;
	*(_QWORD*)(*(_QWORD*)(a1 + 2408) + 8 * v31 + 8) = v8;
	*(float*)(*(_QWORD*)(a1 + 2408) + 8 * v31 + 16) = v26;
	if (a7)
	{
		sub_140115D60(a7, v25 + 1);
		*(_QWORD*)(*a7 + 24 * v25) = a3;
		*(_QWORD*)(*a7 + 24 * v25 + 8) = a4;
		*(float*)(*a7 + 24 * v25 + 16) = v26;
	}
	if (v26 > *a6)
		*a6 = v26;
	a6[1] = *(float*)(a1 + 52) + a6[1];
	return 0i64;
}


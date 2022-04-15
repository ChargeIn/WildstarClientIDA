#include "../winhttp.h"

//----- (00000001408F0E10) ----------------------------------------------------
float* __fastcall sub_1408F0E10(__int64 a1)
{
	float* result; // rax
	float* v3; // rbx
	__int64 v4; // rbp
	float v5; // xmm6_4
	unsigned int v6; // edi
	unsigned int v7; // ecx
	__int64 v8; // r14
	unsigned int v9; // eax
	__int64 v10; // r15
	unsigned int v11; // ecx
	__int64 v12; // rcx

	result = *(float**)(a1 + 8);
	v3 = *(float**)(a1 + 32);
	v4 = *((_QWORD*)result + 7);
	v5 = result[17];
	v6 = 0;
	v7 = *(_DWORD*)(a1 + 40) & 0xFFFFFFFC;
	if (v7)
	{
		v8 = v4 + 8;
		v9 = ((v7 - 1) >> 2) + 1;
		v10 = v9;
		v6 = 4 * v9;
		do
		{
			sub_1408F1570(
				v5,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v8 - 8)),
				*(float*)(v8 + 4),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)v8),
				(float)*(int*)(a1 + 20),
				v3,
				v3 + 4,
				v3 + 8);
			*(_DWORD*)(v8 - 8) = *(_DWORD*)(v8 + 8);
			*(_DWORD*)(v8 - 4) = *(_DWORD*)(v8 + 12);
			*(_DWORD*)v8 = *(_DWORD*)(v8 + 16);
			*(_DWORD*)(v8 + 4) = *(_DWORD*)(v8 + 20);
			sub_1408F1570(
				v5,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v8 - 8)),
				*(float*)(v8 + 4),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)v8),
				(float)*(int*)(a1 + 20),
				v3 + 1,
				v3 + 5,
				v3 + 9);
			*(_DWORD*)(v8 - 8) = *(_DWORD*)(v8 + 24);
			*(_DWORD*)(v8 - 4) = *(_DWORD*)(v8 + 28);
			*(_DWORD*)v8 = *(_DWORD*)(v8 + 32);
			*(_DWORD*)(v8 + 4) = *(_DWORD*)(v8 + 36);
			sub_1408F1570(
				v5,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v8 - 8)),
				*(float*)(v8 + 4),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)v8),
				(float)*(int*)(a1 + 20),
				v3 + 2,
				v3 + 6,
				v3 + 10);
			*(_DWORD*)(v8 - 8) = *(_DWORD*)(v8 + 40);
			*(_DWORD*)(v8 - 4) = *(_DWORD*)(v8 + 44);
			*(_DWORD*)v8 = *(_DWORD*)(v8 + 48);
			*(_DWORD*)(v8 + 4) = *(_DWORD*)(v8 + 52);
			result = sub_1408F1570(
				v5,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v8 - 8)),
				*(float*)(v8 + 4),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)v8),
				(float)*(int*)(a1 + 20),
				v3 + 3,
				v3 + 7,
				v3 + 11);
			v3 += 12;
			v8 += 64i64;
			--v10;
		} while (v10);
	}
	for (; v6 < *(_DWORD*)(a1 + 40); ++v3)
	{
		result = sub_1408F1570(
			v5,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v4 + 16i64 * v6)),
			*(float*)(v4 + 16i64 * v6 + 12),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v4 + 16i64 * v6 + 8)),
			(float)*(int*)(a1 + 20),
			v3,
			v3 + 4,
			v3 + 8);
		++v6;
	}
	v11 = (*(_DWORD*)(a1 + 40) + 3) & 0xFFFFFFFC;
	if (v6 < v11)
	{
		result = v3 + 8;
		v12 = v11 - v6;
		do
		{
			*(result - 8) = 0.0;
			*(result - 4) = 0.0;
			*result++ = 0.0;
			--v12;
		} while (v12);
	}
	return result;
}


#include "../winhttp.h"

//----- (00000001408CE340) ----------------------------------------------------
int* __fastcall sub_1408CE340(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	int* result; // rax
	float v9; // xmm0_4
	int v10; // xmm1_4
	__int64 v11; // rdx
	float v12; // xmm6_4
	bool v13; // r12
	__m128* v14; // rax
	__m128* v15; // rbp

	*(_DWORD*)(a1 + 832) = 0;
	sub_1408CED00(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 24));
	if (*(_DWORD*)(a1 + 24) != *(_DWORD*)(a1 + 40))
	{
		sub_1408ACA90((_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 16));
		if ((unsigned int)sub_1408AC810(
			a1 + 72,
			*(_QWORD*)(a1 + 16),
			*(_DWORD*)(a1 + 56),
			*(_DWORD*)(a1 + 60),
			*(_DWORD*)(a1 + 24),
			1) != 1)
			return sub_1408CE520(a1, a2, a3, a4);
		sub_1408ACBB0(a1 + 72);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 24);
	}
	v9 = *(float*)(a1 + 64);
	v10 = 1153957888;
	v11 = (unsigned int)(4 * *(_DWORD*)(a1 + 808));
	v12 = v9 + *(float*)(a1 + 28);
	if (v12 >= 1600.0 || (v10 = 1103626240, v12 <= 25.0))
	{
		v12 = *(float*)&v10;
		goto LABEL_13;
	}
	if (v12 != 100.0)
	{
	LABEL_13:
		*(_WORD*)(a1 + 824) = 0;
		goto LABEL_14;
	}
	if ((float)(v9 + *(float*)(a1 + 44)) != 100.0)
		*(_WORD*)(a1 + 824) = 256;
	if (*(_BYTE*)(a1 + 825))
		++* (_BYTE*)(a1 + 824);
LABEL_14:
	v13 = *(_BYTE*)(a1 + 824) == 8;
	v14 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
		*(_QWORD*)(a1 + 16),
		v11);
	v15 = v14;
	if (!v14)
		return sub_1408CE520(a1, a2, a3, a4);
	sub_1408ACC80(a1 + 72, a2, a3, a4, v12, v13, v14);
	if (v13)
		*(_WORD*)(a1 + 824) = 0;
	(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v15);
	result = (int*)*(unsigned int*)(a4 + 12);
	if ((_DWORD)result == 45 || (_DWORD)result == 17)
	{
		sub_1408CE940(
			a4,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 52)),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 36)),
			1);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a1 + 28);
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a1 + 32);
		result = (int*)*(unsigned int*)(a1 + 36);
		*(_DWORD*)(a1 + 52) = (_DWORD)result;
	}
	return result;
}


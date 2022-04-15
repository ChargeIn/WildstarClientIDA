#include "../winhttp.h"

//----- (00000001408AB390) ----------------------------------------------------
__m128* __fastcall sub_1408AB390(__int64 a1, __int64 a2)
{
	int v4; // esi
	__int64 v5; // rdx
	unsigned int v6; // ecx
	__int64 v7; // r14
	__int64 v8; // rdi
	__int64 v9; // rbp
	__m128* result; // rax
	__int64 v11; // rcx
	char v12; // al
	__int64 v13; // rdi
	unsigned int i; // edi
	char v15; // cl
	char v16; // al
	char v17; // cl
	int v18; // edx
	char v19; // cl
	int v20; // edx
	__int64 v21; // rax
	__m128* v22; // rdi

	sub_1408AC580(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 2288));
	v4 = 0;
	if (*(_BYTE*)(a1 + 2465))
		*(_DWORD*)(a1 + 2348) = 0;
	v5 = *(_QWORD*)(a1 + 8);
	v6 = 0;
	while (!*(_BYTE*)(v6 + v5 + 8))
	{
		if (++v6 >= 3)
			goto LABEL_46;
	}
	v7 = 2i64;
	if (*(char*)(v5 + 8) < 0 || (*(_BYTE*)(v5 + 9) & 0x40) != 0)
	{
		v8 = a1 + 24;
		v9 = 2i64;
		do
		{
			sub_1408AD480(v8, *(_QWORD*)(a1 + 16));
			v8 += 944i64;
			--v9;
		} while (v9);
		result = (__m128*)sub_1408AB860(a1);
		if ((_DWORD)result != 1)
			return result;
		sub_1408AB980(a1);
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = *(_BYTE*)(v11 + 8);
	if ((v12 & 0x20) == 0 && (v12 & 0x40) == 0 && (*(_BYTE*)(v11 + 9) & 0x20) == 0 && (v12 & 1) == 0 && (v12 & 2) == 0)
	{
	LABEL_31:
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 8i64) & 4) != 0)
		{
			sub_1408ABAA0(a1);
			result = (__m128*)sub_1408ABA10(a1);
			if ((_DWORD)result != 1)
				return result;
			sub_1408ABB00(a1);
		}
		v17 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 9i64);
		if ((v17 & 2) != 0 || (v17 & 8) != 0 || (v17 & 4) != 0 || (v17 & 0x10) != 0)
		{
			v18 = *(_DWORD*)(a1 + 2288);
			if (v18)
				sub_1408ADE90(
					(float*)(a1 + 1912),
					v18 - 1,
					*(_DWORD*)(a1 + 2460),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 2296)),
					*(float*)(a1 + 2292),
					*(float*)(a1 + 2300));
		}
		v19 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 10i64);
		if ((v19 & 1) != 0 || (v19 & 4) != 0 || (v19 & 2) != 0 || (v19 & 8) != 0)
		{
			v20 = *(_DWORD*)(a1 + 2316);
			if (v20)
				sub_1408ADE90(
					(float*)(a1 + 2028),
					v20 - 1,
					*(_DWORD*)(a1 + 2460),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 2324)),
					*(float*)(a1 + 2320),
					*(float*)(a1 + 2328));
		}
	LABEL_46:
		v21 = *(_QWORD*)(a1 + 8);
		*(_WORD*)(v21 + 8) = 0;
		*(_BYTE*)(v21 + 10) = 0;
		if (*(_BYTE*)(a1 + 2312))
			v4 = 4 * *(_DWORD*)(a1 + 760);
		if (*(_BYTE*)(a1 + 2340))
			v4 = 4 * *(_DWORD*)(a1 + 1704);
		result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 8i64))(
			*(_QWORD*)(a1 + 16),
			v4 + 8 * (unsigned int)*(unsigned __int16*)(a2 + 16));
		v22 = result;
		if (result)
		{
			sub_1408AE870(a2, a1 + 24, result);
			return (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 16) + 16i64))(
				*(_QWORD*)(a1 + 16),
				v22);
		}
		return result;
	}
	v13 = a1 + 24;
	do
	{
		sub_1408AD480(v13, *(_QWORD*)(a1 + 16));
		v13 += 944i64;
		--v7;
	} while (v7);
	for (i = 0; i < *(_DWORD*)(a1 + 2456); ++i)
		sub_1408ADC30(a1 + 8 * (i + 2 * (i + 134i64)), *(_QWORD*)(a1 + 16));
	sub_1408AB6A0(a1, *(_DWORD*)(a2 + 8));
	v15 = 0;
	v16 = 1;
	if (*(_BYTE*)(a1 + 2312))
		v15 = 1;
	if (!*(_BYTE*)(a1 + 2340) && !v15 || (*(_DWORD*)(a2 + 8) & *(_DWORD*)(a1 + 2452)) == 0)
		v16 = 0;
	*(_BYTE*)(a1 + 2464) = v16;
	result = (__m128*)sub_1408AB860(a1);
	if ((_DWORD)result == 1)
	{
		result = (__m128*)sub_1408ABA10(a1);
		if ((_DWORD)result == 1)
		{
			sub_1408AB980(a1);
			sub_1408ABB00(a1);
			goto LABEL_31;
		}
	}
	return result;
}


#include "../winhttp.h"

//----- (00000001407167B0) ----------------------------------------------------
__int64 __fastcall sub_1407167B0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	int* v10; // rbx
	int** v11; // rdx
	__int64 v12; // rax
	int v13; // esi
	int** i; // rax
	int v16; // [rsp+20h] [rbp-38h]
	int v17; // [rsp+28h] [rbp-30h]

	v9 = sub_14018B280(112i64, 0);
	v10 = v9;
	if (v9)
	{
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		*(_QWORD*)v9 = off_140B73B20;
		*((_QWORD*)v9 + 7) = 0i64;
		*((_QWORD*)v9 + 8) = 0i64;
		*((_QWORD*)v9 + 9) = 0i64;
		*((_QWORD*)v9 + 10) = 0i64;
		*((_QWORD*)v9 + 11) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v10[2] = a2;
	v10[3] = 0;
	*((_QWORD*)v10 + 2) = a5;
	if (a5)
	{
		v11 = (int**)(a5 + 144);
		if (!*((_QWORD*)v10 + 3))
		{
			*((_QWORD*)v10 + 3) = v11;
			*((_QWORD*)v10 + 4) = *v11;
			*v11 = v10;
			v12 = *((_QWORD*)v10 + 4);
			if (v12)
				*(_QWORD*)(v12 + 24) = v10 + 8;
		}
	}
	v13 = sub_140786B60(
		(__int64)(v10 + 14),
		*(_DWORD*)a3,
		*(int**)(a3 + 8),
		*(int**)(a3 + 16),
		v16,
		v17,
		*(_DWORD*)(a3 + 24),
		a4);
	if (v13 >= 0)
	{
		if (!*((_QWORD*)v10 + 5))
		{
			for (i = (int**)(a1 + 16); *i; i = (int**)(*i + 12))
				;
			*((_QWORD*)v10 + 5) = i;
			*((_QWORD*)v10 + 6) = 0i64;
			*i = v10;
		}
		return 0i64;
	}
	else
	{
		(**(void(__fastcall***)(int*, __int64))v10)(v10, 1i64);
		return (unsigned int)v13;
	}
}
// 140716876: variable 'v16' is possibly undefined
// 140716876: variable 'v17' is possibly undefined
// 140B73B20: using guessed type __int64 (__fastcall *off_140B73B20[53])();


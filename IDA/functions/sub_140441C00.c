#include "../winhttp.h"

//----- (0000000140441C00) ----------------------------------------------------
__int64 __fastcall sub_140441C00(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 i; // rdi
	int* v6; // rax
	_DWORD* v7; // r9
	_QWORD* v8; // r8
	__int64 v9; // rcx
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	for (i = a2; i; --i)
	{
		if (a1)
		{
			v6 = sub_14018B280(32i64, 0);
			*(_QWORD*)(a1 + 8) = v6;
			*(_QWORD*)v6 = v6;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = *(_QWORD*)(a1 + 8);
			v7 = *(_DWORD**)(a3 + 8);
			v8 = *(_QWORD**)v7;
			v11 = **(_QWORD**)(a1 + 8);
			sub_140441830(v9, &v11, v8, v7);
			sub_140440C40(a1 + 16, a3 + 16);
			sub_1403D2AA0(a1 + 48, a3 + 48);
		}
		a1 += 80i64;
	}
	return a1;
}
// 140441C59: variable 'v9' is possibly undefined


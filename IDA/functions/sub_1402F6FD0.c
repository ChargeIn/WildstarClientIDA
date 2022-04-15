#include "../winhttp.h"

//----- (00000001402F6FD0) ----------------------------------------------------
__int64 __fastcall sub_1402F6FD0(__int64* a1, int a2, unsigned __int16 a3, int a4)
{
	__int64 v4; // rax
	unsigned int v9; // eax
	__int64 v10; // r10
	unsigned int v11; // r8d
	unsigned int v12; // ebx
	__int64 v13; // rsi
	unsigned int v14; // eax
	__int64 v15; // rsi
	__int64 v16; // rdx
	__int64 v17; // rdi
	__int64 v18; // r9
	_DWORD* i; // r8
	__int64 v20; // rdx
	__int64 v21; // rcx
	int v23[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *a1;
	v23[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v4 + 1400))(a1, v23);
	v9 = sub_1402F6C40(a1, a2, a3);
	v10 = a1[8];
	v11 = 0;
	v12 = *(_DWORD*)(v10 + 656);
	v13 = v9;
	v14 = v12;
	v15 = *(_QWORD*)(v10 + 24) + 112 * v13;
	if (v12)
	{
		do
		{
			v16 = (v14 + v11) >> 1;
			if (*(_DWORD*)(*(_QWORD*)(v10 + 664) + 4 * v16) >= *(_DWORD*)(v15 + 12))
				v14 = (v14 + v11) >> 1;
			else
				v11 = v16 + 1;
		} while (v11 < v14);
	}
	if (v14 < v12)
	{
		v17 = *(_QWORD*)(v10 + 664);
		v18 = 2i64 * v14;
		for (i = (_DWORD*)(v17 + 4i64 * v14); *i < *(_DWORD*)(v15 + 16); ++i)
		{
			v20 = *(unsigned __int16*)(*(_QWORD*)(v10 + 672) + v18);
			v21 = *(_QWORD*)(v10 + 648);
			if (!*(_WORD*)(v21 + 8 * v20) && *(_DWORD*)(v21 + 8 * v20 + 4) == a4)
				return (unsigned int)(*(_DWORD*)(v17 + 4i64 * v14) - *(_DWORD*)(v15 + 12));
			++v14;
			v18 += 2i64;
			if (v14 >= v12)
				return 0xFFFFFFFFi64;
		}
	}
	return 0xFFFFFFFFi64;
}
// 1402F6FD0: using guessed type int var_18[6];


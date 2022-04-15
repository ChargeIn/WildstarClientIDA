#include "../winhttp.h"

//----- (0000000140069960) ----------------------------------------------------
__int64 __fastcall sub_140069960(__int64 a1, int a2)
{
	bool v2; // zf
	__int64 v5; // rax
	int v6; // ebp
	__int64 v7; // rax
	unsigned int* v8; // rsi
	__int64 v9; // rdi
	__int64* v10; // rax
	__int64 v11; // rdx
	__int64 result; // rax
	__int64 v13; // [rsp+20h] [rbp-58h] BYREF
	int v14; // [rsp+28h] [rbp-50h]
	int v15[6]; // [rsp+38h] [rbp-40h] BYREF

	v2 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v5 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v5;
	}
	v6 = 0;
	v7 = sub_140065780(a1);
	v8 = *(unsigned int**)(a1 + 48);
	v9 = v7;
	if ((unsigned int)sub_140065BB0((__int64*)v8, v7, (__int64)v15, 1) == 8)
	{
		v13 = v9;
		v14 = 4;
		v15[2] = sub_14006A4A0(v8, (int*)&v13, (__int64)&v13);
	}
	while (*(_DWORD*)(a1 + 16) == 46)
		sub_140066620(a1, v15);
	if (*(_DWORD*)(a1 + 16) == 58)
	{
		v6 = 1;
		sub_140066620(a1, v15);
	}
	sub_140067170(a1, (__int64)&v13, v6, a2);
	sub_14006ACC0(*(_QWORD*)(a1 + 48), v15, (int*)&v13);
	v10 = *(__int64**)(a1 + 48);
	v11 = *((int*)v10 + 12);
	result = *v10;
	*(_DWORD*)(*(_QWORD*)(result + 40) + 4 * v11 - 4) = a2;
	return result;
}


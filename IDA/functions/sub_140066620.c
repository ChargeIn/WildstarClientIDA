#include "../winhttp.h"

//----- (0000000140066620) ----------------------------------------------------
int __fastcall sub_140066620(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	int v5; // r8d
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int* v9; // rcx
	int result; // eax
	__int64 v11; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h]
	int v13[4]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v14; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 48);
	sub_14006A700(v2, a2);
	if (*a2 != 12)
		goto LABEL_5;
	if (a2[4] == a2[5])
		goto LABEL_6;
	v5 = a2[2];
	if (v5 >= *(unsigned __int8*)(v2 + 74))
		sub_14006A980(v2, a2, v5);
	else
		LABEL_5:
	sub_14006AAE0(v2, a2);
LABEL_6:
	v6 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v6)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v7 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v7;
	}
	v8 = sub_140065780(a1);
	v9 = *(unsigned int**)(a1 + 48);
	v11 = v8;
	v12 = 4;
	v14 = -1i64;
	v13[0] = 4;
	v13[2] = sub_14006A4A0(v9, (int*)&v11, (__int64)&v11);
	result = sub_14006ABD0(v2, (__int64)v13);
	a2[3] = result;
	*a2 = 9;
	return result;
}


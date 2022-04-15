#include "../winhttp.h"

//----- (0000000140066040) ----------------------------------------------------
signed __int64 __fastcall sub_140066040(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rsi
	_QWORD* v5; // rax
	_QWORD* v6; // rbp
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // edx
	int v11; // edx
	__int64 v12; // rax
	signed __int64 result; // rax
	int v14; // edx
	int v15; // edx

	v2 = a1[7];
	v5 = sub_140060D90(v2);
	*(_QWORD*)a2 = v5;
	v6 = v5;
	*(_QWORD*)(a2 + 16) = a1[6];
	*(_QWORD*)(a2 + 24) = a1;
	*(_QWORD*)(a2 + 32) = v2;
	a1[6] = a2;
	*(_DWORD*)(a2 + 48) = 0;
	*(_QWORD*)(a2 + 52) = -1i64;
	*(_QWORD*)(a2 + 60) = 0i64;
	*(_DWORD*)(a2 + 68) = 0;
	*(_WORD*)(a2 + 72) = 0;
	*(_BYTE*)(a2 + 74) = 0;
	*(_QWORD*)(a2 + 40) = 0i64;
	v7 = a1[10];
	*((_BYTE*)v6 + 115) = 2;
	v6[8] = v7;
	v8 = sub_14005C1B0(v2, 0, 0);
	*(_QWORD*)(a2 + 8) = v8;
	v9 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v9 = v8;
	*(_DWORD*)(v9 + 8) = 5;
	if ((__int64)(*(_QWORD*)(v2 + 56) - *(_QWORD*)(v2 + 16)) <= 16)
	{
		v10 = *(_DWORD*)(v2 + 88);
		if (v10 < 1)
			v11 = v10 + 1;
		else
			v11 = 2 * v10;
		sub_140061210(v2, v11);
	}
	*(_QWORD*)(v2 + 16) += 16i64;
	v12 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v12 = v6;
	*(_DWORD*)(v12 + 8) = 9;
	result = *(_QWORD*)(v2 + 56) - *(_QWORD*)(v2 + 16);
	if (result <= 16)
	{
		v14 = *(_DWORD*)(v2 + 88);
		if (v14 < 1)
			v15 = v14 + 1;
		else
			v15 = 2 * v14;
		result = sub_140061210(v2, v15);
	}
	*(_QWORD*)(v2 + 16) += 16i64;
	return result;
}


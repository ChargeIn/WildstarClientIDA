#include "../winhttp.h"

//----- (0000000140795300) ----------------------------------------------------
__int64 __fastcall sub_140795300(__int64 a1, int a2)
{
	_DWORD* v2; // r8
	__int64 v4; // rdi
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v2 = *(_DWORD**)(a1 + 16);
	v2[2] = 1;
	*v2 = a2 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = *(_QWORD*)(a1 + 16);
	v5 = -1i64;
	do
		++v5;
	while (aIsdst[v5]);
	v6 = sub_140062650(a1, (unsigned __int64*)aIsdst, v5);
	v7 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v9 = v6;
	v10 = 4;
	result = sub_14005EA50(a1, (__int64*)(v4 - 32), (int*)&v9, v7);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}


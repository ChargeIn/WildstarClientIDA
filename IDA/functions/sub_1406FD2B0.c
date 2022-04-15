#include "../winhttp.h"

//----- (00000001406FD2B0) ----------------------------------------------------
__int64 __fastcall sub_1406FD2B0(_QWORD* a1)
{
	unsigned int v2; // eax
	int v3; // r10d
	unsigned int v4; // r8d
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rcx
	bool v8; // zf
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	__int64 v12; // [rsp+30h] [rbp+8h]

	v2 = sub_140056D60(a1, 1u);
	v3 = 0;
	v4 = v2;
	if (!v2)
		goto LABEL_11;
	v5 = *(_QWORD*)(qword_140C658D8 + 40);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v12 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v12 = *(_QWORD*)(qword_140C658D8 + 40);
	v8 = v12 == v5;
	v9 = 1;
	if (v8)
		LABEL_11:
	v9 = 0;
	v10 = (_DWORD*)a1[2];
	v8 = v9 == 0;
	result = 1i64;
	LOBYTE(v3) = !v8;
	v10[2] = 1;
	*v10 = v3;
	a1[2] += 16i64;
	return result;
}
// 140C658D8: using guessed type __int64 qword_140C658D8;


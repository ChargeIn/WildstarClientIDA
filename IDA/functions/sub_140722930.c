#include "../winhttp.h"

//----- (0000000140722930) ----------------------------------------------------
__int64 __fastcall sub_140722930(__int64 a1, __int64 a2)
{
	_DWORD* v3; // r8
	__int64 v4; // r10
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax
	int v9; // ecx
	__int64 v10; // rax
	int v11; // edx
	__int64 v12; // [rsp+10h] [rbp+8h]

	if (!a2)
		return 101i64;
	v3 = *(_DWORD**)(a2 + 24);
	if (!v3)
		return 101i64;
	v4 = *(_QWORD*)(qword_140C65978 + 112);
	v5 = *(_QWORD*)(v4 + 8);
	v6 = v4;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *v3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v4 || (v12 = v6, *v3 < *(_DWORD*)(v6 + 32)))
		v12 = *(_QWORD*)(qword_140C65978 + 112);
	if (v12 == v4)
	{
		result = 101i64;
		if (v3[1] == 4)
			return 3i64;
	}
	else
	{
		v8 = *(_QWORD*)(v12 + 40);
		v9 = *(_DWORD*)(v8 + 16);
		v10 = *(_QWORD*)(v8 + 8);
		if (v9)
			v11 = *(_DWORD*)(v10 + 4);
		else
			v11 = *(_DWORD*)(v10 + 8);
		if (v11 && (!v9 || *(_DWORD*)(v10 + 4) == 1 && *(_DWORD*)(a2 + 440) == 4))
			return 3i64;
		else
			return 101i64;
	}
	return result;
}
// 140C65978: using guessed type __int64 qword_140C65978;


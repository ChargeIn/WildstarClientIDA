#include "../winhttp.h"

//----- (0000000140722830) ----------------------------------------------------
__int64 __fastcall sub_140722830(__int64 a1, __int64 a2)
{
	_DWORD* v2; // r8
	__int64 v3; // r10
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx
	int v8; // ecx
	int v9; // eax
	__int64 v10; // [rsp+10h] [rbp+8h]

	if (!a2)
		return 101i64;
	v2 = *(_DWORD**)(a2 + 24);
	if (!v2)
		return 101i64;
	v3 = *(_QWORD*)(qword_140C65978 + 112);
	v4 = *(_QWORD*)(v3 + 8);
	v5 = v3;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < *v2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v3 || (v10 = v5, *v2 < *(_DWORD*)(v5 + 32)))
		v10 = *(_QWORD*)(qword_140C65978 + 112);
	if (v10 == v3)
	{
		result = 101i64;
		if (v2[1] == 4)
			return 3i64;
	}
	else
	{
		v7 = *(_QWORD*)(v10 + 40);
		if (!*(_DWORD*)(v7 + 16))
			return 2i64;
		if (qword_140C65970
			&& *(_DWORD*)(qword_140C65970 + 8) == 3
			&& ((v8 = *(_DWORD*)(*(_QWORD*)(v7 + 8) + 4i64), v8 == 1)
				|| v8 == 2 && ((v9 = *(_DWORD*)(a2 + 440), v9 == 3) || !v9)))
		{
			return 2i64;
		}
		else
		{
			return 101i64;
		}
	}
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65978: using guessed type __int64 qword_140C65978;


#include "../winhttp.h"

//----- (000000014047BBA0) ----------------------------------------------------
__int64 __fastcall sub_14047BBA0(_DWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	_DWORD* v4; // rcx
	int v5; // r8d
	__int64 v6; // rdx
	int v7; // r8d

	v2 = sub_1403D90D0(qword_140C65898, a1[48]);
	v3 = v2;
	if (!v2)
		return 7i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
		return 7i64;
	if (!*(_QWORD*)(v3 + 24))
		return 7i64;
	v4 = *(_DWORD**)(v3 + 184);
	if (!v4)
		return 7i64;
	v5 = a1[49];
	v6 = (unsigned int)a1[50];
	if (v5)
	{
		v7 = v5 - 1;
		if (v7)
		{
			if (v7 == 1 && (unsigned int)v6 < v4[12])
				return (unsigned int)v4[v6 + 13];
		}
		else if ((unsigned int)v6 < v4[5])
		{
			return (unsigned int)v4[v6 + 6];
		}
	}
	else if ((unsigned int)v6 < v4[2])
	{
		return (unsigned int)v4[v6 + 3];
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (000000014049CCC0) ----------------------------------------------------
__int64 __fastcall sub_14049CCC0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdi
	_DWORD* v11; // rax
	unsigned int v12; // ecx
	unsigned int v13; // edx
	int v14; // ebx

	v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 192));
	if (!v8 || *(_DWORD*)(v8 + 128) != 7)
		return a3 == 2;
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 192));
	v10 = v9;
	if (v9
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9)
		&& (v11 = *(_DWORD**)(v10 + 24)) != 0i64)
	{
		v12 = 0;
		v13 = 0;
		if (!a4 || *v11 == a4)
			v13 = 1;
		if (a5 != -1 && *(_DWORD*)(a2 + 200) != a5)
			v13 = 0;
		v14 = a3 - 1;
		if (v14)
		{
			if (v14 == 1)
				LOBYTE(v12) = v13 == 0;
		}
		else
		{
			return v13;
		}
	}
	else
	{
		return a3 == 2;
	}
	return v12;
}
// 140C65898: using guessed type __int64 qword_140C65898;


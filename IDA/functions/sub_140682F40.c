#include "../winhttp.h"

//----- (0000000140682F40) ----------------------------------------------------
__int64 __fastcall sub_140682F40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // r11
	int v8; // ecx
	int v9; // ebx
	unsigned int v10; // eax
	__int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = sub_140617410((__int64)v4, *v4)) != 0)
	{
		v6 = sub_140616CF0(v5);
		if (v6 != *(_DWORD*)(v7 + 144)
			|| (v8 = *(_DWORD*)(*(_QWORD*)(v7 + 152) + 4i64), (v8 & 0xFFFFFFFA) != 0)
			|| v8 == 4)
		{
			v9 = dword_140C636A8 + *(_DWORD*)(v7 + 4) - *(_DWORD*)(v7 + 8);
		}
		else
		{
			v9 = dword_140C636A8 - *(_DWORD*)(v7 + 12);
		}
		v10 = sub_140616B80(v7);
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		if (v9 > v10)
			v9 = v10;
		result = 1i64;
		*(double*)v11 = (double)v9;
		a1[2] += 16i64;
	}
	else
	{
		v13 = a1[2];
		*(_QWORD*)v13 = 0i64;
		*(_DWORD*)(v13 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140682FBD: variable 'v7' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;


#include "../winhttp.h"

//----- (0000000140878340) ----------------------------------------------------
int __fastcall sub_140878340(__int64 a1)
{
	int result; // eax
	unsigned int i; // ecx
	__int64 v4; // rcx
	__int64 v5; // rax
	char v6[8]; // [rsp+20h] [rbp-58h] BYREF
	unsigned int v7; // [rsp+28h] [rbp-50h]
	__int64 v8; // [rsp+2Ch] [rbp-4Ch]
	int v9; // [rsp+38h] [rbp-40h] BYREF
	int v10; // [rsp+3Ch] [rbp-3Ch] BYREF
	__int64 v11; // [rsp+40h] [rbp-38h]

	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 32) + 200i64))(*(_QWORD*)(a1 + 32), v6);
	result = WORD4(xmmword_140C61C90);
	if (v7 < WORD4(xmmword_140C61C90))
	{
		if (!v7 && v8)
			*(_BYTE*)(a1 + 126) = 1;
		for (i = v7; *(_DWORD*)(a1 + 120) != v7; i = v7)
		{
			v9 = 0;
			sub_1407E4830(&v10, 0i64, 0x28ui64);
			v4 = *(unsigned __int16*)(a1 + 50);
			v10 = *(unsigned __int16*)(a1 + 124) << 10;
			v5 = *(_QWORD*)(a1 + 8 * v4 + 56);
			LOWORD(v4) = v4 + 1;
			*(_WORD*)(a1 + 50) = v4;
			v11 = v5;
			if ((_WORD)v4 == 8)
				*(_WORD*)(a1 + 50) = 0;
			(*(void(__fastcall**)(_QWORD, int*, _QWORD))(**(_QWORD**)(a1 + 32) + 168i64))(*(_QWORD*)(a1 + 32), &v9, 0i64);
			++v7;
		}
		result = WORD4(xmmword_140C61C90);
		if (i < WORD4(xmmword_140C61C90))
			return sub_140856280((void**)&qword_140C61B68[5].LockCount);
	}
	return result;
}
// 140C61C90: using guessed type __int128 xmmword_140C61C90;
// 140878340: using guessed type char var_58[8];


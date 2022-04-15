#include "../winhttp.h"

//----- (0000000140843780) ----------------------------------------------------
__int64 __fastcall sub_140843780(int* a1, unsigned int a2)
{
	__int64 result; // rax
	int* v5; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdx

	result = a2 % 0xC1;
	v5 = &a1[2 * result];
	v6 = 0i64;
	v7 = *((_QWORD*)v5 + 1);
	if (v7)
	{
		while (*(_DWORD*)(v7 + 8) != a2)
		{
			v6 = (_QWORD*)v7;
			v7 = *(_QWORD*)v7;
			if (!v7)
				return result;
		}
		v8 = *(_QWORD*)v7;
		if (v6)
			*v6 = v8;
		else
			*((_QWORD*)v5 + 1) = v8;
		v9 = *(_QWORD*)(v7 + 32);
		if (v9)
		{
			*(_QWORD*)(v7 + 40) = v9;
			sub_140881720(dword_140C10F20, v9);
			*(_QWORD*)(v7 + 32) = 0i64;
			*(_QWORD*)(v7 + 40) = 0i64;
			*(_DWORD*)(v7 + 48) = 0;
		}
		result = sub_140881720(*a1, v7);
		--a1[388];
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;


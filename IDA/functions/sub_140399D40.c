#include "../winhttp.h"

//----- (0000000140399D40) ----------------------------------------------------
__int64 __fastcall sub_140399D40(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	int* v4; // rax
	int* v5; // rbx
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // rax

	v2 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 30i64;
	v4 = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
	v5 = v4;
	if (!v4)
		return 22i64;
	v6 = v4[117];
	if (v6
		&& (v7 = sub_1402085E0(v6)) != 0
		&& (v8 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v7 + 4), *(_QWORD*)(v2 + 120))) != 0)
	{
		return sub_1403991B0(v2, v5, v8);
	}
	else
	{
		return 23i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;


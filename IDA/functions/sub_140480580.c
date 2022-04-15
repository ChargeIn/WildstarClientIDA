#include "../winhttp.h"

//----- (0000000140480580) ----------------------------------------------------
__int64 __fastcall sub_140480580(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rsi
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 i; // rax
	__int64 j; // rax

	v3 = qword_140C65970;
	if (!*(_QWORD*)(qword_140C65970 + 88))
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65968 + 112);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v8;
	if (v8)
	{
		do
		{
			if (a2 >= *(_DWORD*)(v9 + 32))
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v7 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		} while (v9);
		do
		{
			if (*(_DWORD*)(v8 + 32) < a2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v6 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		} while (v8);
	}
	if (v6 == v7)
		return 0i64;
	while (!(unsigned int)sub_1404818E0(v3, *(unsigned int***)(v6 + 40), a3))
	{
		v10 = *(_QWORD*)(v6 + 24);
		if (v10)
		{
			v6 = *(_QWORD*)(v6 + 24);
			for (i = *(_QWORD*)(v10 + 16); i; i = *(_QWORD*)(i + 16))
				v6 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = j;
			if (*(_QWORD*)(v6 + 24) != j)
				v6 = j;
		}
		if (v6 == v7)
			return 0i64;
	}
	return 1i64;
}
// 1404805EA: conditional instruction was optimized away because rax.8!=0
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;


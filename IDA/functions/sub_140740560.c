#include "../winhttp.h"

//----- (0000000140740560) ----------------------------------------------------
__int64 __fastcall sub_140740560(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v4; // ecx
	unsigned int v5; // eax
	int* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_5;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_5;
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_5;
		v5 = 6;
	}
	else
	{
		v5 = v4 - 1;
		if ((unsigned int)(v4 - 1) >= 7)
		{
		LABEL_5:
			*(_DWORD*)(a1[2] + 8i64) = 0;
		LABEL_6:
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v3 + 4i64 * v5 + 24), 0i64);
	if (!v7)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_6;
	}
	v8 = (unsigned __int64*)sub_14018F0E0(&v10, *((unsigned __int16**)v7 + 61))[1];
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		sub_140058710((__int64)a1, v8, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (!v11)
		return 1i64;
	sub_14018B900(v11, 0);
	return 1i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;


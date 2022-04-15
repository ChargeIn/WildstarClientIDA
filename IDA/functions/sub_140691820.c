#include "../winhttp.h"

//----- (0000000140691820) ----------------------------------------------------
__int64 __fastcall sub_140691820(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int16* v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	__int64 v11; // [rsp+48h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	sub_14018EFA0(&v8, (__int64)L"%llu", (*(_QWORD*)(v4 + 16) << 32) + **(unsigned int**)(v4 + 8));
	v5 = (unsigned __int64*)sub_14018F0E0(&v10, v9)[1];
	if (v5)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v5 + v6));
		sub_140058710((__int64)a1, v5, v6);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v11)
		sub_14018B900(v11, 0);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 1i64;
}
// 140B33B48: using guessed type wchar_t aLlu_5[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;


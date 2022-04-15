#include "../winhttp.h"

//----- (00000001406F0800) ----------------------------------------------------
__int64 __fastcall sub_1406F0800(_QWORD* a1)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rcx
	char* v4; // rdx
	int* v5; // rbx
	__int64 v6; // rcx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]

	if (!qword_140C65970 || !qword_140C65898 || *(_DWORD*)(qword_140C65970 + 8) != 2)
		return 0i64;
	v2 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v3 = v2;
	if (v3[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v3))
		{
			v4 = 0i64;
			goto LABEL_14;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v3 = dword_140A12138;
		if (a1[3] < a1[2])
			v3 = (_DWORD*)a1[3];
	}
	v4 = (char*)(*(_QWORD*)v3 + 32i64);
LABEL_14:
	sub_14018F2D0(&v8, v4);
	v5 = v9;
	sub_140398540(v6, v9);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 0i64;
}
// 1406F089F: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;


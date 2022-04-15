#include "../winhttp.h"

//----- (0000000140166A70) ----------------------------------------------------
__int64 __fastcall sub_140166A70(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	_DWORD* v4; // rcx
	int v5; // r9d
	int v6; // eax
	BOOL v7; // eax

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = dword_140A12138;
	v5 = v3;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 32i64);
	v6 = v4[2];
	v7 = v6 && (v6 != 1 || *v4);
	sub_140163460(v2, v5 - 1, v7);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


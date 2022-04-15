#include "../winhttp.h"

//----- (0000000140183A20) ----------------------------------------------------
__int64 __fastcall sub_140183A20(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__int64 v4; // r8
	int v5; // eax
	_BOOL8 v6; // rdx

	v2 = sub_140183600(a1);
	v3 = dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v5 = v3[2];
	v6 = v5 && (v5 != 1 || *v3);
	(*(void(__fastcall**)(__int64, _BOOL8))(*(_QWORD*)v4 + 640i64))(v4, v6);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


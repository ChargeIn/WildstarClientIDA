#include "../winhttp.h"

//----- (00000001404F8E00) ----------------------------------------------------
__int64 __fastcall sub_1404F8E00(_QWORD* a1)
{
	unsigned int v1; // esi
	__int64 v3; // rdi
	_DWORD* v4; // rax
	int v5; // ecx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v1 = 1;
	v3 = sub_1404F87C0(a1, 1u);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (!v5 || v5 == 1 && !*v4)
		v1 = 0;
	v6 = *(_QWORD*)(v3 + 2328);
	if (v6 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	v7 = *(_QWORD*)(v3 + 2168);
	if (v7)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 176i64))(v7, v1);
		sub_1404FFDD0(v3);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


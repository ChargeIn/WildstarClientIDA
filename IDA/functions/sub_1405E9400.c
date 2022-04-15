#include "../winhttp.h"

//----- (00000001405E9400) ----------------------------------------------------
__int64 __fastcall sub_1405E9400(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	unsigned int v3; // r10d
	_QWORD* v4; // r11
	__int64 v5; // rax
	__int64 v6; // rcx

	v2 = sub_1400580E0(a1, a2);
	if ((v2 == dword_140A12138 || v2[2]) && (v5 = sub_140056AB0(v4, v3)) != 0 && (v6 = *(_QWORD*)(v5 + 8)) != 0)
		return sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v6 + 8), *(_QWORD*)(qword_140C65898 + 120));
	else
		return 0i64;
}
// 1405E942E: variable 'v4' is possibly undefined
// 1405E942E: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;


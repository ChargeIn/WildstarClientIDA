#include "../winhttp.h"

//----- (000000014070EC40) ----------------------------------------------------
__int64 __fastcall sub_14070EC40(_QWORD* a1)
{
	int v1; // edi
	int v3; // eax
	_DWORD* v4; // rcx
	int v5; // edx

	v1 = 1;
	v3 = sub_140056D60(a1, 1u);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (!v5 || v5 == 1 && !*v4)
		v1 = 0;
	sub_1405DF0E0(qword_140C65898 + 26680, v3, v1);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (0000000140536E00) ----------------------------------------------------
__int64 __fastcall sub_140536E00(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	int v4; // eax

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		if (v4 && (v4 != 1 || *v3))
		{
			qword_140C65B10 = v2;
			*(_DWORD*)(v2 + 1216) = 1;
			return 0i64;
		}
		if (qword_140C65B10 == v2)
		{
			*(_DWORD*)(qword_140C65B10 + 1216) = 0;
			qword_140C65B10 = 0i64;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65B10: using guessed type __int64 qword_140C65B10;


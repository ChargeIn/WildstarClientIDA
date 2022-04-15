#include "../winhttp.h"

//----- (000000014052EB50) ----------------------------------------------------
__int64 __fastcall sub_14052EB50(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	int v4; // eax
	int v5; // r8d

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = 0;
		v5 = v3[2];
		if (v5 && (v5 != 1 || *v3))
		{
			LOBYTE(v4) = 1;
			*(_DWORD*)(v2 + 1328) = v4;
			return 0i64;
		}
		LOBYTE(v4) = 0;
		*(_DWORD*)(v2 + 1328) = v4;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


#include "../winhttp.h"

//----- (000000014073F1C0) ----------------------------------------------------
__int64 __fastcall sub_14073F1C0(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v3; // rdx
	_DWORD* v4; // rcx
	int v5; // eax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *v2;
		if (*v2)
		{
			v4 = dword_140A12138;
			if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
				v4 = (_DWORD*)(a1[3] + 16i64);
			v5 = v4[2];
			if (v5 && (v5 != 1 || *v4))
			{
				*(_DWORD*)(v3 + 100) = 1;
				*(_DWORD*)(v3 + 96) = 1;
				return 0i64;
			}
			*(_DWORD*)(v3 + 96) = 1;
			*(_DWORD*)(v3 + 100) = 0;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


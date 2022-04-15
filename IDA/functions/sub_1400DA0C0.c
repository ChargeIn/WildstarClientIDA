#include "../winhttp.h"

//----- (00000001400DA0C0) ----------------------------------------------------
__int64 __fastcall sub_1400DA0C0(_QWORD* a1)
{
	int v1; // ebx
	__int64 v3; // rdx
	__int64 v4; // r8
	_DWORD* v5; // rcx
	int v6; // eax

	v1 = 1;
	v4 = sub_1400D66A0(a1, 1u);
	if (v4)
	{
		v5 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v5 = (_DWORD*)(a1[3] + 16i64);
		v6 = v5[2];
		if (!v6 || v6 == 1 && !*v5)
			v1 = 0;
		LOBYTE(v3) = v1 != 0;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 104i64))(v4, v3);
	}
	return 0i64;
}
// 1400DA115: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];


#include "../winhttp.h"

//----- (00000001400D9990) ----------------------------------------------------
__int64 __fastcall sub_1400D9990(_QWORD* a1)
{
	int v1; // esi
	__int64 v3; // rdi
	__int64 v4; // rdx
	_DWORD* v5; // rcx
	int v6; // eax

	v1 = 1;
	v3 = sub_1400D66A0(a1, 1u);
	if (v3)
	{
		v4 = sub_1400D66A0(a1, 2u);
		if (v4)
		{
			v5 = dword_140A12138;
			if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
				v5 = (_DWORD*)(a1[3] + 32i64);
			v6 = v5[2];
			if (!v6 || v6 == 1 && !*v5)
				v1 = 0;
			if (*(_QWORD*)(v4 + 16) == v3)
				sub_1400C7E00(v3, v4, v1 != 0);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


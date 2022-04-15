#include "../winhttp.h"

//----- (0000000140131880) ----------------------------------------------------
__int64 __fastcall sub_140131880(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rcx
	_DWORD* v4; // rax
	int v5; // edx
	__int64 v6; // rcx

	v1 = 1;
	v3 = sub_140131630(a1, 1u);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (!v5 || v5 == 1 && !*v4)
		v1 = 0;
	*(_BYTE*)(v3 + 1436) &= ~0x40u;
	*(_BYTE*)(v3 + 1436) |= (v1 != 0) << 6;
	v6 = *(_QWORD*)(v3 + 1560);
	if (v6 && (*(_BYTE*)(v6 + 28) & 1) != 0)
		sub_1400D42F0(v6, v1 != 0, 0, 4.0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


#include "../winhttp.h"

//----- (000000014041CC50) ----------------------------------------------------
__int64 __fastcall sub_14041CC50(_QWORD* a1)
{
	__int64** v2; // rax
	int v3; // esi
	__int64 v4; // rdi
	_DWORD* v5; // rcx
	int* v6; // rax
	int v7; // ecx
	bool v8; // cf
	int v9; // ecx
	_DWORD* v10; // rax

	v2 = (__int64**)sub_140417660((__int64)a1, 1);
	v3 = 0;
	if (v2
		&& (!*v2 ? (v4 = 0i64) : (v4 = **v2),
			v4
			&& (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 96i64))(v4) || (unsigned int)sub_140569F10(v4))))
	{
		v5 = (_DWORD*)a1[2];
		*v5 = 0;
		v5[2] = 1;
	}
	else
	{
		v6 = sub_140417BF0(a1, 1u);
		if (!v6
			|| (v6[84] & 8) != 0
			|| (v6[83] & 0xC0) != 0
			|| v6[106]
			|| (v7 = v6[85], (v7 & 0x80) == 0)
			|| (v7 & 0x8000) != 0
			|| (v8 = (v7 & 0x10000) != 0, v9 = 1, v8))
		{
			v9 = 0;
		}
		v10 = (_DWORD*)a1[2];
		LOBYTE(v3) = v9 != 0;
		v10[2] = 1;
		*v10 = v3;
	}
	a1[2] += 16i64;
	return 1i64;
}


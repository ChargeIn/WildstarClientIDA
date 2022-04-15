#include "../winhttp.h"

//----- (000000014041A050) ----------------------------------------------------
__int64 __fastcall sub_14041A050(_QWORD* a1)
{
	unsigned int* v2; // rcx
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // rax
	int v6; // ecx
	_DWORD* v7; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h]

	v2 = (unsigned int*)sub_140417BF0(a1, 1u);
	if (v2)
	{
		v3 = qword_140C65898;
		v9 = 0i64;
		v10 = 0i64;
		LODWORD(v9) = v2[114];
		v4 = sub_1400B5DF0(qword_140C658F0, *v2, 0i64);
		if (v4 && (v5 = (unsigned int)v4[114], (_DWORD)v5))
			v6 = *(unsigned __int16*)(v3 + 2 * v5 + 328);
		else
			v6 = 0;
		v7 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			HIDWORD(v9) = v6;
		else
			HIDWORD(v9) = sub_140056D60(a1, 2u);
		v10 = -4294966996i64;
		sub_1403F4900(qword_140C65898, 0x184u, (__int64)&v9);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;


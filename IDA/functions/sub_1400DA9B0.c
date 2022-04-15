#include "../winhttp.h"

//----- (00000001400DA9B0) ----------------------------------------------------
__int64 __fastcall sub_1400DA9B0(_QWORD* a1)
{
	_QWORD* v2; // rdi
	char* v3; // rax
	__int64 v4; // rbx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD*)sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v6, v3);
		v4 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v2 + 456i64))(v2, v7);
		if (v7)
			sub_14018B900(v7, 0);
		if (v4)
			v2[83] &= ~v4;
	}
	return 0i64;
}


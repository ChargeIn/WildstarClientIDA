#include "../winhttp.h"

//----- (000000014070DAD0) ----------------------------------------------------
__int64 __fastcall sub_14070DAD0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rdi
	char* v5; // rax
	_WORD* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	_WORD* v9; // [rsp+38h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_1405E2300(qword_140C65898 + 26680, v2);
	if (v3)
	{
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v8, v5);
		v6 = v9;
		sub_1405DE700(v7, (__int64*)(v3 + 184), v9);
		if (v6)
			sub_14018B900((__int64)v6, 0);
		return 0i64;
	}
	else
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 0);
		return 0i64;
	}
}
// 14070DB64: variable 'v7' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;


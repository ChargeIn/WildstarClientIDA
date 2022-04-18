#include "../winhttp.h"

//----- (000000014070D5C0) ----------------------------------------------------
__int64 __fastcall sub_14070D5C0(_QWORD* a1)
{
	int v2; // esi
	int v3; // eax
	__int64 v4; // rdi
	char* v5; // rdx
	_DWORD* v6; // rax
	__int64 v7; // rcx
	_WORD* v8; // rbx
	__int64 v10; // [rsp+30h] [rbp-48h] BYREF
	__int64 v11; // [rsp+38h] [rbp-40h]
	__int64 v12; // [rsp+50h] [rbp-28h] BYREF
	_WORD* v13; // [rsp+58h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_1405E29A0(qword_140C65898 + 26680, v3);
	if (v4)
	{
		v5 = (char*)sub_14018F0E0(&v10, word_1409F8AA4)[1];
		v6 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			v5 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v12, v5);
		v7 = v11;
		if (v11)
			sub_14018B900(v11, 0);
		v8 = v13;
		sub_1405DE590(v7, (__int64*)(v4 + 176), v2, v13);
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
	else
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 0);
	}
	return 0i64;
}
// 14070D6A9: variable 'v7' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 1409F8AA4: using guessed type unsigned __int16 word_1409F8AA4[28];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


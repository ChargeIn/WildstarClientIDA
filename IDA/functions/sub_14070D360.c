#include "../winhttp.h"

//----- (000000014070D360) ----------------------------------------------------
__int64 __fastcall sub_14070D360(_QWORD* a1)
{
	int v2; // esi
	int* v3; // rax
	__int64 v4; // rdi
	char* v5; // rax
	_DWORD* v6; // rcx
	__int64 v7; // rcx
	_WORD* v8; // rbx
	int v10; // [rsp+20h] [rbp-58h]
	__int64 v11; // [rsp+30h] [rbp-48h] BYREF
	__int64 v12; // [rsp+38h] [rbp-40h]
	__int64 v13; // [rsp+50h] [rbp-28h] BYREF
	_WORD* v14; // [rsp+58h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (int*)sub_1406622C0((__int64)a1, 2);
	if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
	{
		v5 = (char*)sub_14018F0E0(&v11, word_1409F8B0C)[1];
		v6 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			v5 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v13, v5);
		v7 = v12;
		if (v12)
			sub_14018B900(v12, 0);
		v8 = v14;
		sub_1405DE590(v7, (__int64*)(v4 + 416), v2, v14);
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
	else
	{
		v10 = 0;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v10);
	}
	return 0i64;
}
// 14070D422: variable 'v7' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 1409F8B0C: using guessed type unsigned __int16 word_1409F8B0C[28];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


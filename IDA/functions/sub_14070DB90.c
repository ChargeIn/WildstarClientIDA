//----- (000000014070DB90) ----------------------------------------------------
__int64 __fastcall sub_14070DB90(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rdi
	int v5; // esi
	char* v6; // rax
	_DWORD* v7; // rcx
	__int64 v8; // rcx
	_WORD* v9; // rbx
	__int64 v10; // [rsp+30h] [rbp-48h] BYREF
	__int64 v11; // [rsp+38h] [rbp-40h]
	__int64 v12; // [rsp+50h] [rbp-28h] BYREF
	_WORD* v13; // [rsp+58h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_1405E2300(qword_140C65898 + 26680, v2);
	if (v3)
	{
		v5 = sub_140056D60(a1, 2u);
		v6 = (char*)sub_14018F0E0(&v10, *(unsigned __int16**)(v3 + 216))[1];
		v7 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v12, v6);
		v8 = v11;
		if (v11)
			sub_14018B900(v11, 0);
		v9 = v13;
		sub_1405DE590(v8, (__int64*)(v3 + 184), v5, v13);
		if (v9)
			sub_14018B900((__int64)v9, 0);
		return 0i64;
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 0);
		return 0i64;
	}
}
// 14070DC87: variable 'v8' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


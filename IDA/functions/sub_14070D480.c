#include "../winhttp.h"

//----- (000000014070D480) ----------------------------------------------------
__int64 __fastcall sub_14070D480(_QWORD* a1)
{
	int v2; // esi
	unsigned __int64 v3; // rdx
	_QWORD* v4; // rax
	__int64 v5; // rdi
	char* v6; // rdx
	_DWORD* v7; // rax
	__int64 v8; // rcx
	_WORD* v9; // rbx
	int v11; // [rsp+20h] [rbp-58h]
	__int64 v12; // [rsp+30h] [rbp-48h] BYREF
	__int64 v13; // [rsp+38h] [rbp-40h]
	__int64 v14; // [rsp+50h] [rbp-28h] BYREF
	_WORD* v15; // [rsp+58h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (int)(sub_140056D60(a1, 2u) + 1);
	v4 = *(_QWORD**)(qword_140C65898 + 27728);
	if (!v4 || v3 >= v4[12])
		goto LABEL_16;
	if (v3)
	{
		if (v3 <= v4[13])
			--v3;
	}
	else
	{
		v3 = v4[13];
	}
	v5 = *(_QWORD*)(v4[11] + 8 * v3);
	if (v5)
	{
		v6 = (char*)sub_14018F0E0(&v12, word_1409F8ADC)[1];
		v7 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v14, v6);
		v8 = v13;
		if (v13)
			sub_14018B900(v13, 0);
		v9 = v15;
		sub_1405DE590(v8, (__int64*)(v5 + 16), v2, v15);
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
	else
	{
	LABEL_16:
		v11 = 0;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v11);
	}
	return 0i64;
}
// 14070D567: variable 'v8' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 1409F8ADC: using guessed type unsigned __int16 word_1409F8ADC[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


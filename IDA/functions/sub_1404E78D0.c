#include "../winhttp.h"

//----- (00000001404E78D0) ----------------------------------------------------
__int64 __fastcall sub_1404E78D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // ebp
	_DWORD* v4; // rdi
	unsigned int v5; // esi
	_DWORD* v6; // rax
	unsigned int v7; // r14d
	_DWORD* v8; // rax
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	int v11; // eax
	__int64 v12; // rax

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	v4 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a1, 1u);
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 40;
	else
		v7 = sub_140056D60(a1, 2u);
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v2 = sub_140056D60(a1, 3u);
	v9 = a1[2];
	v10 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v10 >= v9 || v10 == dword_140A12138 || *(_DWORD*)(a1[3] + 56i64) != 1)
		goto LABEL_26;
	if ((unsigned __int64)v10 < v9)
		v4 = (_DWORD*)(a1[3] + 48i64);
	v11 = v4[2];
	if (v11 && (v11 != 1 || *v4))
	{
		if (v5 > *(_DWORD*)(qword_140C658C8 + 4))
			v5 = *(_DWORD*)(qword_140C658C8 + 4);
		v12 = sub_140020690(qword_140C658C8, v5);
	}
	else
	{
	LABEL_26:
		if (v5 > *(_DWORD*)(qword_140C658C8 + 4))
			v5 = *(_DWORD*)(qword_140C658C8 + 4);
		v12 = sub_140436D70(qword_140C658C8, v5);
	}
	return sub_1403ABF30(v12, v7, v2, (__int64)a1);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658C8: using guessed type __int64 qword_140C658C8;


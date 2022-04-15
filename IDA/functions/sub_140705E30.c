#include "../winhttp.h"

//----- (0000000140705E30) ----------------------------------------------------
__int64 __fastcall sub_140705E30(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // edi
	int v4; // r15d
	int v5; // eax
	unsigned int v6; // ebp
	_DWORD* v7; // rax
	int v8; // eax
	__int64 v9; // r13
	unsigned int v10; // esi
	unsigned int v11; // eax
	_DWORD* v12; // rcx
	_DWORD* v13; // rax
	int v15; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v16; // [rsp+5Ch] [rbp+14h]
	int v17; // [rsp+60h] [rbp+18h] BYREF
	unsigned int v18; // [rsp+64h] [rbp+1Ch]

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	v4 = 0;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a1, 1u);
	v6 = v5 - 1;
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v8 = 0;
	else
		v8 = sub_140056D60(a1, 2u);
	v9 = qword_140C65898;
	v10 = v8 - 1;
	v11 = *(_DWORD*)(qword_140C65898 + 196);
	if (v6 >= v11 || v10 >= v11)
		goto LABEL_18;
	v17 = 1;
	v18 = v6;
	v15 = 1;
	v16 = v10;
	if (sub_1403AC780(qword_140C65898 + 160, &v17))
	{
	LABEL_17:
		LOBYTE(v4) = (unsigned int)sub_1403C17D0(v9, &v17, &v15, 0) == 0;
	LABEL_18:
		v13 = (_DWORD*)a1[2];
		LOBYTE(v2) = v4 != 0;
		v13[2] = 1;
		*v13 = v2;
		goto LABEL_19;
	}
	if (sub_1403AC780(v9 + 160, &v15))
	{
		v18 = v10;
		v16 = v6;
		goto LABEL_17;
	}
	v12 = (_DWORD*)a1[2];
	*v12 = 1;
	v12[2] = 1;
LABEL_19:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (00000001406A3BA0) ----------------------------------------------------
__int64 __fastcall sub_1406A3BA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rcx
	int* v6; // rax
	int* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rcx
	int* v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	_DWORD* v14; // rax
	unsigned int v15; // ecx
	unsigned int v16; // eax
	_DWORD* v17; // rax
	unsigned __int64 v19; // [rsp+30h] [rbp-F8h] BYREF
	int v20; // [rsp+38h] [rbp-F0h]
	__int64(__fastcall * *v21)(); // [rsp+40h] [rbp-E8h] BYREF
	char v22[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v23; // [rsp+50h] [rbp-D8h]
	_WORD* v24; // [rsp+58h] [rbp-D0h]
	__int128 v25; // [rsp+100h] [rbp-28h]
	int* v26; // [rsp+110h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	if (!sub_1405A8A40(v3, *(_DWORD*)(v4 + 8)))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_26:
		a1[2] += 16i64;
		return 1i64;
	}
	if ((unsigned int)sub_1405A4850(v5, 85))
	{
		v14 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v14 >= a1[2] || v14 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v15 = 0;
		else
			v15 = sub_140056D60(a1, 2u);
		v19 = 0i64;
		v20 = 0;
		v16 = *(_DWORD*)(v4 + 8);
		v20 = 0;
		v19 = __PAIR64__(v15, v16);
		sub_1403F4900(qword_140C65898, 0x35Du, (__int64)&v19);
		v17 = (_DWORD*)a1[2];
		*v17 = 1;
		v17[2] = 1;
		goto LABEL_26;
	}
	sub_1400B6F30((__int64)&v21);
	v21 = off_140B69230;
	v26 = 0i64;
	v25 = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v25 = v6;
	*((_QWORD*)&v25 + 1) = v6;
	v26 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v7 = sub_14018B280(96i64, 0);
	if (v7)
		v8 = (_QWORD*)sub_1404DB7E0((__int64)v7, *(_QWORD*)(qword_140C65898 + 120));
	else
		v8 = 0i64;
	sub_1400B7480((__int64)&v21, v8);
	v10 = (int*)sub_14034BDD0(v9, 651166);
	if (v10)
	{
		v11 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v11;
			while (*((_WORD*)v10 + v11));
		}
		sub_14001C480((__int64)v22, v10, (int*)((char*)v10 + 2 * v11));
	}
	else if (v23 != v24)
	{
		*v23 = 0;
		v24 = v23;
	}
	v12 = sub_1400B7660(&v21);
	sub_1400EA3E0(
		*(_QWORD*)(qword_140C65898 + 29504),
		"GenericFloater",
		"US",
		*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
		*(_QWORD*)(v12 + 8));
	*(_DWORD*)(a1[2] + 8i64) = 0;
	v13 = v25;
	a1[2] += 16i64;
	if (v13)
		sub_14018B900(v13, 0);
	sub_1400B7390(&v21);
	return 1i64;
}
// 1406A3BD6: variable 'v3' is possibly undefined
// 1406A3BF1: variable 'v5' is possibly undefined
// 1406A3C8F: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406A3BA0: using guessed type char var_E0[8];


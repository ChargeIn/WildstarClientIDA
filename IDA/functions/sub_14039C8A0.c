#include "../winhttp.h"

//----- (000000014039C8A0) ----------------------------------------------------
void __fastcall sub_14039C8A0(__int64 a1, _QWORD* a2)
{
	int v4; // edx
	__int64 v5; // rdi
	unsigned int* v6; // rcx
	__int64 v7; // rcx
	int* v8; // rax
	__int64* v9; // rdi
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // edx
	__int16* v14; // rax
	int v15; // eax
	int* v16; // rax
	__int64 v17; // rbx
	_QWORD* v18; // rax
	__int64 v19; // rcx
	int* v20; // rax
	int* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // rcx
	int* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // [rsp+30h] [rbp-D0h] BYREF
	int v29; // [rsp+38h] [rbp-C8h]
	__int64 v30; // [rsp+40h] [rbp-C0h] BYREF
	char v31[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v32; // [rsp+50h] [rbp-B0h]
	_WORD* v33; // [rsp+58h] [rbp-A8h]
	__int64 v34; // [rsp+100h] [rbp+0h]
	int v35; // [rsp+138h] [rbp+38h] BYREF

	if (!a2)
		return;
	v4 = *(_DWORD*)(a2[8] + 432i64);
	if (!v4)
		return;
	v5 = sub_1405A8A40(a1, v4);
	if (!(unsigned int)sub_140552550(v5, -8193))
	{
		v6 = *(unsigned int**)(v5 + 8);
		if ((v6[3] & 0x800) != 0 && v6[75] < 4)
		{
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v6) == 4)
			{
				v35 = 0;
				v35 = **(_DWORD**)(v5 + 8);
				sub_1403F4900(qword_140C65898, 0x365u, (__int64)&v35);
			}
			else
			{
				v28 = 0i64;
				v29 = 0;
				v7 = *(_QWORD*)(*(__int64(__fastcall**)(_QWORD*, int*))(*a2 + 32i64))(a2, &v35);
				v8 = *(int**)(v5 + 8);
				v28 = v7;
				v29 = *v8;
				sub_1403F4900(qword_140C65898, 0x35Bu, (__int64)&v28);
			}
		}
		else
		{
			v9 = (__int64*)(*(__int64(__fastcall**)(_QWORD*, int*))(*a2 + 32i64))(a2, &v35);
			if ((_DWORD)qword_140C7DC60)
				sub_1405548F0((__int64)&qword_140C7DC60);
			HIDWORD(qword_140C7DC60) = 0;
			v10 = *v9;
			dword_140C7DC68 = 0;
			LODWORD(qword_140C7DC74) = 0;
			qword_140C7DC6C = v10;
			sub_1405546B0((__int64)&qword_140C7DC60, 0, 0);
		}
		return;
	}
	v11 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v5 + 8));
	if (v11 > 0)
	{
		if (v11 <= 2)
		{
			v13 = 3974;
			goto LABEL_17;
		}
		if (v11 == 3)
		{
			v13 = 3973;
		LABEL_17:
			v14 = sub_14034BDD0(v12, v13);
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"GenericFloater",
				"US",
				*(unsigned int*)(*(_QWORD*)(a1 + 120) + 8i64),
				v14);
			return;
		}
	}
	v15 = sub_140552550(v5, -1);
	if (v15 == 3)
	{
		sub_1404DDE90(&v30);
		v24 = sub_14018B280(96i64, 0);
		v17 = 0i64;
		if (v24)
			v25 = (_QWORD*)sub_1404DB7E0((__int64)v24, *(_QWORD*)(a1 + 120));
		else
			v25 = 0i64;
		sub_1400B7480((__int64)&v30, v25);
		v20 = (int*)sub_14034BDD0(v26, 99852);
		if (v20)
		{
			if (*(_WORD*)v20)
			{
				do
					++v17;
				while (*((_WORD*)v20 + v17));
			}
			goto LABEL_42;
		}
		goto LABEL_38;
	}
	if (v15 == 15)
	{
		sub_1404DDE90(&v30);
		v21 = sub_14018B280(96i64, 0);
		v17 = 0i64;
		if (v21)
			v22 = (_QWORD*)sub_1404DB7E0((__int64)v21, *(_QWORD*)(a1 + 120));
		else
			v22 = 0i64;
		sub_1400B7480((__int64)&v30, v22);
		v20 = (int*)sub_14034BDD0(v23, 344071);
		if (v20)
		{
			if (*(_WORD*)v20)
			{
				do
					++v17;
				while (*((_WORD*)v20 + v17));
			}
			goto LABEL_42;
		}
	LABEL_38:
		if (v32 != v33)
		{
			*v32 = 0;
			v33 = v32;
		}
		goto LABEL_43;
	}
	sub_1404DDE90(&v30);
	v16 = sub_14018B280(96i64, 0);
	v17 = 0i64;
	if (v16)
		v18 = (_QWORD*)sub_1404DB7E0((__int64)v16, *(_QWORD*)(a1 + 120));
	else
		v18 = 0i64;
	sub_1400B7480((__int64)&v30, v18);
	v20 = (int*)sub_14034BDD0(v19, 99853);
	if (!v20)
		goto LABEL_38;
	if (*(_WORD*)v20)
	{
		do
			++v17;
		while (*((_WORD*)v20 + v17));
	}
LABEL_42:
	sub_14001C480((__int64)v31, v20, (int*)((char*)v20 + 2 * v17));
LABEL_43:
	v27 = sub_1400B7660(&v30);
	sub_1400EA3E0(
		*(_QWORD*)(qword_140C65898 + 29504),
		"GenericFloater",
		"US",
		*(unsigned int*)(*(_QWORD*)(a1 + 120) + 8i64),
		*(_QWORD*)(v27 + 8));
	if (v34)
		sub_14018B900(v34, 0);
	sub_1400B7390(&v30);
}
// 14039CA22: variable 'v12' is possibly undefined
// 14039CAB1: variable 'v19' is possibly undefined
// 14039CB18: variable 'v23' is possibly undefined
// 14039CB75: variable 'v26' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 14039C8A0: using guessed type char var_D8[8];


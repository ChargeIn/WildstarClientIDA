#include "../winhttp.h"

//----- (0000000140557000) ----------------------------------------------------
__int64 __fastcall sub_140557000(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v6; // r13
	int v7; // eax
	unsigned int v8; // r14d
	int* v9; // rax
	int* v10; // rsi
	int* v11; // rax
	int* v12; // rdi
	__int64 v13; // rcx
	int* v14; // rbx
	__int64 v15; // rax
	unsigned int v16; // ebp
	__int64 v17; // rax
	unsigned int v18; // r9d
	unsigned int v19; // eax
	unsigned __int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rax
	int* v24; // r9
	int v25; // ebx
	unsigned int v26; // eax
	int v27; // ecx
	int* v28; // rbx
	__int64 v29; // rcx
	int* v30; // rbx
	__int64 v31; // rcx
	__int16* v32; // rbx
	__int64 v33; // rcx
	__int16* v34; // rax
	_QWORD* v35; // rax
	_DWORD v36[4]; // [rsp+30h] [rbp-58h] BYREF
	char v37[8]; // [rsp+40h] [rbp-48h] BYREF
	int* v38; // [rsp+48h] [rbp-40h]
	char v39[8]; // [rsp+50h] [rbp-38h] BYREF
	int* v40; // [rsp+58h] [rbp-30h]
	__int64 v41; // [rsp+90h] [rbp+8h] BYREF

	v41 = a1;
	result = sub_1405A8A40(a1, a2);
	v6 = result;
	if (!result)
		return result;
	v7 = qword_140C7DC74;
	v8 = 0;
	if (a2 == (_DWORD)qword_140C7DC74)
		v7 = 0;
	LODWORD(qword_140C7DC74) = v7;
	v9 = sub_14018B280(24i64, 0);
	*(_QWORD*)v9 = v9;
	v10 = v9;
	v40 = v9;
	*((_QWORD*)v9 + 1) = v9;
	v11 = sub_14018B280(24i64, 0);
	*(_QWORD*)v11 = v11;
	*((_QWORD*)v11 + 1) = v11;
	v12 = v11;
	v38 = v11;
	sub_140551AC0((__int64*)v6, (__int64)v39, (__int64)v37);
	v14 = *(int**)v12;
	if (*(int**)v12 == v12)
	{
	LABEL_21:
		if (!dword_140C7DC68)
			sub_1403D90D0(qword_140C65898, SHIDWORD(qword_140C7DC60));
		v25 = sub_14077CA60(v13, 6, *(unsigned int**)(v6 + 8));
		v26 = sub_14077CB20(qword_140C7DC90, *v24, 6);
		v27 = dword_140C4D1E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D1E0)
			v27 = *(_DWORD*)qword_140C63750;
		sub_1405581C0(&qword_140C7DC60, v25, v26, byte_140C4D1F0[v27]);
		LOBYTE(v8) = dword_140C7DC68 != 0;
		v36[0] = a2;
		v36[1] = a3;
		v36[2] = v8;
		sub_1403F4900(qword_140C65898, 0x35Du, (__int64)v36);
		v8 = 1;
		goto LABEL_26;
	}
	while (1)
	{
		v15 = *((_QWORD*)v14 + 2);
		if (*(_DWORD*)(v15 + 8) == 4)
		{
			v16 = *(_DWORD*)(v15 + 12);
			if (qword_140C63840)
			{
				v17 = qword_140C63840(off_140A6DDC8, v16, qword_140C63858);
			}
			else
			{
				if (dword_140C63E34 || (int)sub_140246220() < 0)
					goto LABEL_20;
				v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64160 + 24i64))(qword_140C64160, v16);
			}
			if (!v17)
				goto LABEL_20;
			v18 = *(_DWORD*)(v17 + 4);
			v19 = 0;
			v20 = *(_QWORD*)(qword_140C65898 + 5792);
			if (v20)
			{
				v21 = *(_QWORD*)(qword_140C65898 + 5784);
				v13 = 0i64;
				while (*(_DWORD*)(*(_QWORD*)(v21 + 8 * v13) + 8i64) != v18)
				{
					v13 = ++v19;
					if (v19 >= v20)
						goto LABEL_19;
				}
				v13 = v19;
				v22 = *(_QWORD*)(v21 + 8i64 * v19);
				if (v22)
				{
					if (*(_DWORD*)(v22 + 12))
						goto LABEL_20;
				}
			}
		LABEL_19:
			v23 = sub_1405BE150(v13, v18);
			if (v23)
				break;
		}
	LABEL_20:
		v14 = *(int**)v14;
		if (v14 == v12)
			goto LABEL_21;
	}
	v32 = sub_14034BDD0(v13, *(_DWORD*)(v23 + 4));
	v34 = sub_14034BDD0(v33, 60109);
	v35 = sub_14018D540(&v41, (__int64)v34, v32);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GenericError", "iS", 1i64, *v35);
	if (v41)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
LABEL_26:
	v28 = *(int**)v12;
	while (v28 != v12)
	{
		v29 = (__int64)v28;
		v28 = *(int**)v28;
		sub_14018B900(v29, 0);
	}
	*(_QWORD*)v12 = v12;
	*((_QWORD*)v12 + 1) = v12;
	sub_14018B900((__int64)v12, 0);
	v30 = *(int**)v10;
	while (v30 != v10)
	{
		v31 = (__int64)v30;
		v30 = *(int**)v30;
		sub_14018B900(v31, 0);
	}
	*(_QWORD*)v10 = v10;
	*((_QWORD*)v10 + 1) = v10;
	sub_14018B900((__int64)v10, 0);
	return v8;
}
// 140557169: variable 'v13' is possibly undefined
// 1405571AF: variable 'v24' is possibly undefined
// 1405572D6: variable 'v33' is possibly undefined
// 140A6DDC8: using guessed type wchar_t *off_140A6DDC8[2];
// 140C4D1E0: using guessed type int dword_140C4D1E0;
// 140C4D1F0: using guessed type unsigned __int8 byte_140C4D1F0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E34: using guessed type int dword_140C63E34;
// 140C64160: using guessed type __int64 qword_140C64160;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DC90: using guessed type __int64 qword_140C7DC90;
// 140557000: using guessed type char var_48[8];
// 140557000: using guessed type char var_38[8];


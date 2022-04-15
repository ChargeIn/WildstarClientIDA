#include "../winhttp.h"

//----- (000000014011B780) ----------------------------------------------------
_QWORD* __fastcall sub_14011B780(_QWORD* a1, __int64 a2, int* a3)
{
	__int64 v6; // rdi
	int* v7; // r14
	__int64 v8; // rax
	bool v9; // zf
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	int* v12; // rax
	int* v13; // rax
	unsigned __int16* v14; // rsi
	int* v15; // r12
	__int64 v16; // rax
	__int64 v17; // rsi
	int* v18; // rsi
	__int64 v19; // rax
	int* v20; // r14
	__int64 v21; // r13
	_WORD* v22; // rax
	int* v23; // rbx
	__int64 v24; // rcx
	__int64 v25; // r12
	_QWORD* v26; // r13
	_QWORD* v27; // r14
	_QWORD* v28; // rbx
	int* v29; // r14
	_QWORD* v30; // rbx
	__int16* v31; // rax
	__int64 v32; // rcx
	int* v33; // r12
	int* v34; // r14
	__int64 v35; // rbx
	unsigned __int64 v36; // rbx
	_QWORD* v37; // r13
	_QWORD* v38; // r14
	_QWORD* v39; // rbx
	int* v40; // rbx
	int* v41; // rbx
	_QWORD* v42; // rax
	int* v43; // rbx
	__int64 v44; // rcx
	int* v45; // rax
	int* v46; // rbx
	int* v48; // rbx
	__int64 v49; // [rsp+30h] [rbp-69h] BYREF
	int* v50; // [rsp+38h] [rbp-61h]
	int* v51; // [rsp+40h] [rbp-59h]
	int* v52; // [rsp+48h] [rbp-51h]
	__int64 v53; // [rsp+50h] [rbp-49h] BYREF
	int* v54; // [rsp+58h] [rbp-41h]
	int* v55; // [rsp+60h] [rbp-39h]
	int* v56; // [rsp+68h] [rbp-31h]
	int* v57; // [rsp+70h] [rbp-29h]
	__int64 v58; // [rsp+78h] [rbp-21h] BYREF
	int* v59; // [rsp+80h] [rbp-19h]
	_WORD* v60; // [rsp+88h] [rbp-11h]
	__int64 v61; // [rsp+90h] [rbp-9h]
	char v62[8]; // [rsp+98h] [rbp-1h] BYREF
	int* v63; // [rsp+A0h] [rbp+7h]
	__int64 v65; // [rsp+B0h] [rbp+17h]
	int* v67; // [rsp+110h] [rbp+77h]
	_QWORD* v68; // [rsp+118h] [rbp+7Fh]
	_QWORD* v69; // [rsp+118h] [rbp+7Fh]

	if (a3 && *(_WORD*)a3)
	{
		v6 = 0i64;
		v7 = 0i64;
		v67 = 0i64;
		v8 = 0i64;
		do
			v9 = *((_WORD*)a3 + ++v8) == 0;
		while (!v9);
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v7 = sub_14018B280(2 * (v10 + 1), 0);
			v67 = v7;
		}
		v11 = 2 * v10;
		sub_1407DB590(v7, a3, v11);
		v57 = (int*)((char*)v7 + v11);
		if ((int*)((char*)v7 + v11))
			*(_WORD*)((char*)v7 + v11) = 0;
		v12 = sub_14018B280(16i64, 0);
		v50 = v12;
		v51 = v12;
		v52 = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v13 = sub_14018B280(16i64, 0);
		v14 = (unsigned __int16*)v13;
		v54 = v13;
		v55 = v13;
		v56 = v13 + 4;
		if (v13)
			*(_WORD*)v13 = 0;
		if (*(_WORD*)v7 == 47)
		{
			v15 = 0i64;
			v63 = 0i64;
			v65 = 0i64;
			v16 = 0i64;
			do
				v9 = asc_140A1E2F0[++v16] == 0;
			while (!v9);
			v17 = (2 * v16) >> 1;
			if ((unsigned __int64)(v17 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v15 = sub_14018B280(2 * (v17 + 1), 0);
				v63 = v15;
				v65 = (__int64)v15 + 2 * v17 + 2;
			}
			sub_1407DB590(v15, (int*)L" \t\r\n", 2 * v17);
			if ((int*)((char*)v15 + 2 * v17))
				*((_WORD*)v15 + v17) = 0;
			v18 = (int*)((char*)v7 + 2);
			v19 = 0i64;
			v59 = 0i64;
			v20 = 0i64;
			v61 = 0i64;
			if (*(_WORD*)v18)
			{
				do
					++v19;
				while (*((_WORD*)v18 + v19));
			}
			v21 = (2 * v19) >> 1;
			if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v20 = sub_14018B280(2 * (v21 + 1), 0);
				v59 = v20;
				v61 = (__int64)v20 + 2 * v21 + 2;
			}
			sub_1407DB590(v20, v18, 2 * v21);
			v22 = (_WORD*)v20 + v21;
			v60 = v22;
			if (v22)
				*v22 = 0;
			sub_14018FBD0((__int64)&v58, &v53, &v49, (__int64)v62);
			if (v20)
				sub_14018B900((__int64)v20, 0);
			if (v15)
				sub_14018B900((__int64)v15, 0);
			v14 = (unsigned __int16*)v54;
			if (v54 == v55)
			{
				a1[1] = 0i64;
				a1[2] = 0i64;
				a1[3] = 0i64;
				v23 = sub_14018B280(2i64, 0);
				a1[1] = v23;
				a1[3] = (char*)v23 + 2;
				a1[2] = v23;
				sub_1407DB590(v23, &dword_1409D653C, 0i64);
				a1[2] = v23;
				if (v23)
					*(_WORD*)v23 = 0;
				if (v14)
					sub_14018B900((__int64)v14, 0);
				if (v50)
					sub_14018B900((__int64)v50, 0);
				v24 = (__int64)v67;
			LABEL_84:
				sub_14018B900(v24, 0);
				return a1;
			}
			v25 = a2;
			v26 = *(_QWORD**)(a2 + 3600);
			v27 = v26;
			v28 = (_QWORD*)v26[1];
			while (v28)
			{
				if ((int)sub_14018E2C0(v28[5], v14) < 0)
				{
					v28 = (_QWORD*)v28[3];
				}
				else
				{
					v27 = v28;
					v28 = (_QWORD*)v28[2];
				}
			}
			if (v27 == v26 || (v68 = v27, (int)sub_14018E2C0((__int64)v14, (unsigned __int16*)v27[5]) < 0))
				v68 = v26;
			v29 = v67;
			v30 = v68;
		}
		else
		{
			v31 = sub_14034BDD0((__int64)(v13 + 4), 101);
			v32 = 0i64;
			v33 = 0i64;
			v34 = (int*)v31;
			if (*v31)
			{
				do
					++v32;
				while (v31[v32]);
			}
			v35 = (2 * v32) >> 1;
			if ((unsigned __int64)(v35 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v33 = sub_14018B280(2 * (v35 + 1), 0);
			v36 = 2 * v35;
			sub_1407DB590(v33, v34, v36);
			if ((int*)((char*)v33 + v36))
				*(_WORD*)((char*)v33 + v36) = 0;
			v37 = *(_QWORD**)(a2 + 3600);
			v38 = v37;
			v39 = (_QWORD*)v37[1];
			while (v39)
			{
				if ((int)sub_14018E2C0(v39[5], (unsigned __int16*)v33) < 0)
				{
					v39 = (_QWORD*)v39[3];
				}
				else
				{
					v38 = v39;
					v39 = (_QWORD*)v39[2];
				}
			}
			if (v38 == v37 || (v69 = v38, (int)sub_14018E2C0((__int64)v33, (unsigned __int16*)v38[5]) < 0))
				v69 = v37;
			v30 = v69;
			if (v33)
				sub_14018B900((__int64)v33, 0);
			v29 = v67;
			sub_14001C480((__int64)&v49, v67, v57);
			v25 = a2;
		}
		if (v30 == *(_QWORD**)(v25 + 3600))
		{
			v40 = sub_14018B280(10i64, 0);
			v54 = v40;
			v56 = (int*)((char*)v40 + 10);
			sub_1407DB590(v40, (int*)"SlashCmd_", 9ui64);
			v9 = (int*)((char*)v40 + 9) == 0i64;
			v41 = (int*)((char*)v40 + 9);
			v55 = v41;
			if (!v9)
				*(_BYTE*)v41 = 0;
			v42 = sub_14018F0E0(&v58, v14);
			sub_14001B050(&v53, (int*)v42[1], (int*)v42[2]);
			if (v59)
				sub_14018B900((__int64)v59, 0);
			v43 = v54;
			if (!(unsigned __int8)sub_1400EA3E0(v25, v54, "SS", v14, v50))
			{
				v45 = (int*)sub_14034BDD0(v44, 22);
				a1[1] = 0i64;
				a1[2] = 0i64;
				a1[3] = 0i64;
				if (*(_WORD*)v45)
				{
					do
						++v6;
					while (*((_WORD*)v45 + v6));
				}
				sub_14001C1B0(a1, v45, (__int64)v45 + 2 * v6);
				if (v43)
					sub_14018B900((__int64)v43, 0);
			LABEL_79:
				if (v14)
					sub_14018B900((__int64)v14, 0);
				if (v50)
					sub_14018B900((__int64)v50, 0);
				v24 = (__int64)v29;
				goto LABEL_84;
			}
			if (v43)
				sub_14018B900((__int64)v43, 0);
		}
		else
		{
			((void(__fastcall*)(__int64*, _QWORD))v30[8])(&v49, v30[9]);
		}
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v46 = sub_14018B280(2i64, 0);
		a1[1] = v46;
		a1[3] = (char*)v46 + 2;
		a1[2] = v46;
		sub_1407DB590(v46, &dword_1409D657C, 0i64);
		a1[2] = v46;
		if (v46)
			*(_WORD*)v46 = 0;
		goto LABEL_79;
	}
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v48 = sub_14018B280(2i64, 0);
	a1[1] = v48;
	a1[3] = (char*)v48 + 2;
	a1[2] = v48;
	sub_1407DB590(v48, &dword_1409D6494, 0i64);
	a1[2] = v48;
	if (v48)
		*(_WORD*)v48 = 0;
	return a1;
}
// 14011BC41: variable 'v44' is possibly undefined
// 1409D6494: using guessed type int dword_1409D6494;
// 1409D653C: using guessed type int dword_1409D653C;
// 1409D657C: using guessed type int dword_1409D657C;
// 140A1E2F0: using guessed type wchar_t asc_140A1E2F0[5];
// 14011B780: using guessed type char var_58[8];


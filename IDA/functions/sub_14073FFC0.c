#include "../winhttp.h"

//----- (000000014073FFC0) ----------------------------------------------------
__int64 __fastcall sub_14073FFC0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	unsigned int v19; // eax
	unsigned int v20; // ebp
	unsigned int v21; // edi
	__int64 v22; // rax
	int* v23; // rbx
	unsigned __int64 v24; // r15
	int** v25; // rsi
	int* v26; // rax
	int* v27; // rcx
	__int64 v29; // [rsp+20h] [rbp-28h] BYREF
	int v30; // [rsp+28h] [rbp-20h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Costume");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v29 = v4;
	v30 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v29, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5F200;
	if (off_140C5F200)
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v29 = v17;
			v30 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v29, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Costume", &off_140B74CC8);
	if (qword_140C4B728)
		return 1i64;
	if (qword_140C63838)
	{
		v19 = qword_140C63838(off_140A6A168, qword_140C63858);
	LABEL_18:
		v20 = v19;
		goto LABEL_19;
	}
	if (dword_140C63EAC)
	{
		v20 = 0;
	}
	else
	{
		if ((int)sub_1401FCCC0() >= 0)
		{
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AE0 + 40i64))(qword_140C63AE0);
			goto LABEL_18;
		}
		v20 = 0;
	}
LABEL_19:
	v21 = 0;
	if (v20)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63EAC && (int)sub_1401FCCC0() >= 0)
			{
				v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 32i64))(qword_140C63AE0, v21);
				goto LABEL_25;
			}
		LABEL_32:
			if (++v21 >= v20)
				return 1i64;
		}
		v22 = qword_140C63848(off_140A6A168, v21, qword_140C63858);
	LABEL_25:
		v23 = (int*)v22;
		if (v22 && *(_DWORD*)(v22 + 20) == 1)
		{
			if (qword_140C4B728 == qword_140C4B730)
				sub_1400290D0((__int64)&qword_140C4B728);
			v24 = qword_140C4B740(v23 + 3);
			v25 = (int**)(qword_140C4B738 + 8 * (v24 % qword_140C4B730));
			v26 = sub_14018B280(24i64, 0);
			if (v26)
			{
				v27 = *v25;
				*(_QWORD*)v26 = v24;
				*((_QWORD*)v26 + 1) = v27;
				v26[4] = v23[3];
				v26[5] = *v23;
			}
			*v25 = v26;
			++qword_140C4B728;
		}
		goto LABEL_32;
	}
	return 1i64;
}
// 1407400C3: variable 'v14' is possibly undefined
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140B74CC8: using guessed type void *off_140B74CC8;
// 140C4B728: using guessed type __int64 qword_140C4B728;
// 140C4B730: using guessed type __int64 qword_140C4B730;
// 140C4B738: using guessed type __int64 qword_140C4B738;
// 140C4B740: using guessed type __int64 (__fastcall *qword_140C4B740)(_QWORD);
// 140C5F200: using guessed type char *off_140C5F200;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;


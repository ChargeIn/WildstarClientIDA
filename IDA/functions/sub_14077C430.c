#include "../winhttp.h"

//----- (000000014077C430) ----------------------------------------------------
_QWORD* __fastcall sub_14077C430(_QWORD* a1)
{
	__int64 v1; // rsi
	int v3; // eax
	unsigned __int64 v4; // rax
	__int64 v5; // rax
	unsigned __int64 v6; // kr00_8
	int* v7; // rax
	unsigned __int64 v8; // r8
	unsigned int v9; // r15d
	unsigned int v10; // eax
	unsigned int v11; // r13d
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned int v14; // ebp
	__int64 v15; // rax
	int* v16; // r12
	unsigned __int64 v17; // rbp
	_QWORD* v18; // rbx
	int* v19; // rax
	int* v20; // rbx
	int** v21; // rbx
	unsigned __int64 v22; // rbp
	int** v23; // r14
	int* v24; // rax
	int* v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rbx
	__int64 v30; // [rsp+50h] [rbp+8h] BYREF

	v1 = 0i64;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6C858, qword_140C63858);
	}
	else if (dword_140C64B74)
	{
		v3 = 0;
	}
	else if ((int)sub_14022C1A0() >= 0)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C638F8 + 40i64))(qword_140C638F8);
	}
	else
	{
		v3 = 0;
	}
	*a1 = 0i64;
	v4 = sub_1401A40C0((unsigned int)(v3 + 1));
	a1[1] = v4;
	v6 = v4;
	v5 = 8 * v4;
	if (!is_mul_ok(v6, 8ui64))
		v5 = -1i64;
	v7 = sub_14018B280(v5, 0);
	v8 = 8i64 * a1[1];
	a1[2] = v7;
	sub_1407E4830(v7, 0i64, v8);
	v9 = 0;
	a1[3] = sub_14077CCC0;
	a1[4] = sub_1402DD540;
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6C858, qword_140C63858);
	}
	else
	{
		if (dword_140C64B74 || (int)sub_14022C1A0() < 0)
			goto LABEL_47;
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C638F8 + 40i64))(qword_140C638F8);
	}
	v11 = v10;
	if (v10)
	{
		do
		{
			if (qword_140C63848)
			{
				v12 = qword_140C63848(off_140A6C858, v9, qword_140C63858);
			}
			else
			{
				if (dword_140C64B74)
				{
					v13 = 0i64;
					goto LABEL_24;
				}
				if ((int)sub_14022C1A0() < 0)
				{
					v13 = 0i64;
					goto LABEL_24;
				}
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638F8 + 32i64))(qword_140C638F8, v9);
			}
			v13 = v12;
		LABEL_24:
			v14 = *(_DWORD*)(v13 + 12);
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A6C970, v14, qword_140C63858);
				goto LABEL_29;
			}
			if (!dword_140C65234 && (int)sub_14022D6E0() >= 0)
			{
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A50 + 24i64))(qword_140C64A50, v14);
			LABEL_29:
				v16 = (int*)v15;
				if (v15)
				{
					v30 = *(_QWORD*)(v13 + 4);
					v17 = ((__int64(__fastcall*)(__int64*))a1[3])(&v30);
					v18 = *(_QWORD**)(a1[2] + 8 * (v17 % a1[1]));
					if (!v18)
						goto LABEL_34;
					while (v17 != *v18 || !((unsigned int(__fastcall*)(__int64*, _QWORD*))a1[4])(&v30, v18 + 2))
					{
						v18 = (_QWORD*)v18[1];
						if (!v18)
							goto LABEL_34;
					}
					v21 = (int**)(v18 + 3);
					if (v21)
					{
						v20 = *v21;
					}
					else
					{
					LABEL_34:
						v19 = sub_14018B280(24i64, 0);
						v20 = v19;
						if (v19)
						{
							*((_QWORD*)v19 + 2) = 0i64;
							*((_QWORD*)v19 + 1) = 0i64;
						}
						else
						{
							v20 = 0i64;
						}
						if (*a1 == a1[1])
							sub_1400290D0((__int64)a1);
						v22 = ((__int64(__fastcall*)(__int64*))a1[3])(&v30);
						v23 = (int**)(a1[2] + 8 * (v22 % a1[1]));
						v24 = sub_14018B280(32i64, 0);
						if (v24)
						{
							v25 = *v23;
							*(_QWORD*)v24 = v22;
							*((_QWORD*)v24 + 1) = v25;
							v26 = v30;
							*((_QWORD*)v24 + 3) = v20;
							*((_QWORD*)v24 + 2) = v26;
						}
						else
						{
							v24 = 0i64;
						}
						*v23 = v24;
						++* a1;
					}
					sub_140003460((__int64*)v20 + 1, v16);
				}
			}
			++v9;
		} while (v9 < v11);
	}
LABEL_47:
	if (a1[1])
	{
		while (1)
		{
			v27 = *(_QWORD*)(a1[2] + 8 * v1);
			if (v27)
				break;
		LABEL_51:
			if ((unsigned __int64)++v1 >= a1[1])
				return a1;
		}
		while (1)
		{
			v28 = *(_QWORD*)(v27 + 8);
			if (!(unsigned int)sub_14077C7F0(v27 + 24))
				break;
			v27 = v28;
			if (!v28)
				goto LABEL_51;
		}
	}
	return a1;
}
// 140A6C858: using guessed type wchar_t *off_140A6C858[2];
// 140A6C970: using guessed type wchar_t *off_140A6C970[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638F8: using guessed type __int64 qword_140C638F8;
// 140C64A50: using guessed type __int64 qword_140C64A50;
// 140C64B74: using guessed type int dword_140C64B74;
// 140C65234: using guessed type int dword_140C65234;


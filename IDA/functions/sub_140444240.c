#include "../winhttp.h"

//----- (0000000140444240) ----------------------------------------------------
__int64 __fastcall sub_140444240(__int64 a1)
{
	unsigned __int64 v1; // rdi
	__int64 v2; // rbp
	unsigned __int64 v3; // r13
	int* v4; // rsi
	unsigned int v5; // eax
	unsigned int v6; // r12d
	unsigned int v7; // r15d
	__int64 v8; // rax
	_DWORD* v9; // rbx
	unsigned int v10; // ebp
	__int64 v11; // rax
	unsigned int v12; // ebp
	__int64 v13; // rax
	unsigned int v14; // ebp
	__int64 v15; // rax
	int* v16; // rax
	int* v17; // rbp
	int* v18; // rax
	int* v19; // rbx
	unsigned __int64 v20; // rax
	__int64 v21; // rax
	unsigned __int64 v22; // kr00_8
	int* v23; // rax
	unsigned __int64 v24; // r8

	v1 = 0i64;
	v2 = a1;
	v3 = 0i64;
	v4 = 0i64;
	sub_140236320();
	sub_140236BA0();
	if (qword_140C63838)
	{
		v5 = qword_140C63838(off_140A6B010, qword_140C63858);
	}
	else
	{
		if (dword_140C64B2C)
		{
			v6 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14020E980() < 0)
		{
			v6 = 0;
			goto LABEL_9;
		}
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64298 + 40i64))(qword_140C64298);
	}
	v6 = v5;
LABEL_9:
	v7 = 0;
	if (!v6)
		goto LABEL_47;
	do
	{
		if (qword_140C63848)
		{
			v8 = qword_140C63848(off_140A6B010, v7, qword_140C63858);
		}
		else
		{
			if (dword_140C64B2C)
			{
				v9 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_14020E980() < 0)
			{
				v9 = 0i64;
				goto LABEL_18;
			}
			v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64298 + 32i64))(qword_140C64298, v7);
		}
		v9 = (_DWORD*)v8;
	LABEL_18:
		v10 = v9[3];
		if (v10)
		{
			if (qword_140C63840)
			{
				v11 = qword_140C63840(off_140A6D0A8, v10, qword_140C63858);
			}
			else
			{
				if (dword_140C64D94 || (int)sub_140236320() < 0)
					goto LABEL_45;
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653F0 + 24i64))(qword_140C653F0, v10);
			}
			if (!v11)
				goto LABEL_45;
		}
		v12 = v9[4];
		if (v12)
		{
			if (qword_140C63840)
			{
				v13 = qword_140C63840(off_140A6D0A8, v12, qword_140C63858);
			}
			else
			{
				if (dword_140C64D94 || (int)sub_140236320() < 0)
					goto LABEL_45;
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653F0 + 24i64))(qword_140C653F0, v12);
			}
			if (!v13)
				goto LABEL_45;
		}
		v14 = v9[1];
		if (v14)
		{
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A6C2E0, v14, qword_140C63858);
			}
			else
			{
				if (dword_140C647D0 || (int)sub_140225760() < 0)
					goto LABEL_45;
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64208 + 24i64))(qword_140C64208, v14);
			}
			if (!v15 || v9[3])
				goto LABEL_45;
		}
		v16 = sub_14018DB00((__int64)v4, v3 + 1, 8i64);
		*(_QWORD*)&v16[2 * v3] = v9;
		v17 = v16;
		if (v4 != v16)
		{
			sub_1407DB590(v16, v4, 8 * v3);
			if (v4)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
			v4 = v17;
		}
		++v3;
	LABEL_45:
		++v7;
	} while (v7 < v6);
	v2 = a1;
LABEL_47:
	v18 = sub_14018B280(40i64, 0);
	v19 = v18;
	if (v18)
	{
		*(_QWORD*)v18 = 0i64;
		v20 = sub_1401A40C0(v3);
		*((_QWORD*)v19 + 1) = v20;
		v22 = v20;
		v21 = 8 * v20;
		if (!is_mul_ok(v22, 8ui64))
			v21 = -1i64;
		v23 = sub_14018B280(v21, 0);
		v24 = 8i64 * *((_QWORD*)v19 + 1);
		*((_QWORD*)v19 + 2) = v23;
		sub_1407E4830(v23, 0i64, v24);
		*((_QWORD*)v19 + 3) = sub_1400522D0;
		*((_QWORD*)v19 + 4) = sub_1400522E0;
	}
	else
	{
		v19 = 0i64;
	}
	*(_QWORD*)(v2 + 96) = v19;
	if (v3)
	{
		do
		{
			sub_1400BD4A0(*(_QWORD*)(v2 + 96), *(int**)&v4[2 * v1], *(int**)&v4[2 * v1]);
			++v1;
		} while (v1 < v3);
	}
	if (v4)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	return 0i64;
}
// 140A6B010: using guessed type wchar_t *off_140A6B010[2];
// 140A6C2E0: using guessed type wchar_t *off_140A6C2E0[2];
// 140A6D0A8: using guessed type wchar_t *off_140A6D0A8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64208: using guessed type __int64 qword_140C64208;
// 140C64298: using guessed type __int64 qword_140C64298;
// 140C647D0: using guessed type int dword_140C647D0;
// 140C64B2C: using guessed type int dword_140C64B2C;
// 140C64D94: using guessed type int dword_140C64D94;
// 140C653F0: using guessed type __int64 qword_140C653F0;


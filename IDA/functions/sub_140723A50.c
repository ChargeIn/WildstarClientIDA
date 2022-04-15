#include "../winhttp.h"

//----- (0000000140723A50) ----------------------------------------------------
_QWORD* __fastcall sub_140723A50(_QWORD* a1)
{
	__int64(__fastcall * v1)(wchar_t**, __int64); // rax
	unsigned int v3; // eax
	unsigned __int64 v4; // rax
	__int64 v5; // rax
	unsigned __int64 v6; // kr00_8
	int* v7; // rax
	unsigned __int64 v8; // r8
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax

	v1 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*a1 = 0i64;
	if (v1)
	{
		v3 = v1(off_140A6A2B8, qword_140C63858);
	}
	else if (dword_140C643F4 || (int)sub_1401FE640() < 0)
	{
		v3 = 0;
	}
	else
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F40 + 40i64))(qword_140C64F40);
	}
	a1[1] = 0i64;
	v4 = sub_1401A40C0(v3);
	a1[2] = v4;
	v6 = v4;
	v5 = 8 * v4;
	if (!is_mul_ok(v6, 8ui64))
		v5 = -1i64;
	v7 = sub_14018B280(v5, 0);
	v8 = 8i64 * a1[2];
	a1[3] = v7;
	sub_1407E4830(v7, 0i64, v8);
	a1[4] = sub_1400522D0;
	a1[5] = sub_1400522E0;
	v9 = sub_14018B280(24i64, 0);
	a1[7] = v9;
	*(_QWORD*)v9 = v9;
	*(_QWORD*)(a1[7] + 8i64) = a1[7];
	v10 = sub_14018B280(24i64, 0);
	a1[9] = v10;
	*(_QWORD*)v10 = v10;
	*(_QWORD*)(a1[9] + 8i64) = a1[9];
	v11 = sub_14018B280(24i64, 0);
	a1[11] = v11;
	*(_QWORD*)v11 = v11;
	*(_QWORD*)(a1[11] + 8i64) = a1[11];
	v12 = sub_14018B280(24i64, 0);
	a1[13] = v12;
	*(_QWORD*)v12 = v12;
	*(_QWORD*)(a1[13] + 8i64) = a1[13];
	return a1;
}
// 140A6A2B8: using guessed type wchar_t *off_140A6A2B8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C643F4: using guessed type int dword_140C643F4;
// 140C64F40: using guessed type __int64 qword_140C64F40;


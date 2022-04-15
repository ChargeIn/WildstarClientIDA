//----- (0000000140716980) ----------------------------------------------------
_QWORD* __fastcall sub_140716980(_QWORD* a1)
{
	__int64(__fastcall * v1)(wchar_t**, __int64); // rax
	unsigned int v3; // eax
	unsigned __int64 v4; // rax
	__int64 v5; // rax
	unsigned __int64 v6; // kr00_8
	int* v7; // rax
	unsigned __int64 v8; // r8

	v1 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*a1 = 0i64;
	if (v1)
	{
		v3 = v1(off_140A6A328, qword_140C63858);
	}
	else if (dword_140C6546C || (int)sub_1401FEEC0() < 0)
	{
		v3 = 0;
	}
	else
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D20 + 40i64))(qword_140C64D20);
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
	return a1;
}
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C6546C: using guessed type int dword_140C6546C;


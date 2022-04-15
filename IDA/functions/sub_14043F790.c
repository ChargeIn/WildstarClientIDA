//----- (000000014043F790) ----------------------------------------------------
__int64 sub_14043F790()
{
	int* v1; // rax
	__int64 v2; // rdx
	int* v3; // rbx
	unsigned int v4; // edi
	unsigned int v5; // eax
	int v6; // edi

	if (qword_140C658E8)
		return 0i64;
	v1 = sub_14018B280(112i64, 0);
	v3 = v1;
	if (v1)
	{
		sub_140440040(v1);
		v4 = 0;
		*((_QWORD*)v3 + 11) = 0i64;
		*((_QWORD*)v3 + 12) = 0i64;
		*((_QWORD*)v3 + 13) = 0i64;
	}
	else
	{
		v4 = 0;
		v3 = 0i64;
	}
	if (qword_140C63838)
	{
		v5 = qword_140C63838(off_140A69FA8, qword_140C63858);
	LABEL_11:
		v4 = v5;
		goto LABEL_12;
	}
	if (!dword_140C64F1C && (int)sub_1401FAAC0() >= 0)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65438 + 40i64))(qword_140C65438);
		goto LABEL_11;
	}
LABEL_12:
	v6 = sub_14043F8C0((__int64)v3, v2, v4);
	if (v6 >= 0)
	{
		qword_140C658E8 = (__int64)v3;
		return 0i64;
	}
	else
	{
		if (v3)
			sub_14043F870((__int64)v3);
		return (unsigned int)v6;
	}
}
// 14043F822: variable 'v2' is possibly undefined
// 140A69FA8: using guessed type wchar_t *off_140A69FA8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64F1C: using guessed type int dword_140C64F1C;
// 140C65438: using guessed type __int64 qword_140C65438;
// 140C658E8: using guessed type __int64 qword_140C658E8;


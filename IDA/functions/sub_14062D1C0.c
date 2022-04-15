//----- (000000014062D1C0) ----------------------------------------------------
__int64* __fastcall sub_14062D1C0(__int64* a1)
{
	__int64(__fastcall * v1)(wchar_t**, __int64); // rax
	int v3; // eax
	unsigned __int64 v4; // rdi
	int* v5; // rax
	int* v6; // rsi
	int* v7; // rax
	int* v8; // rdx
	int* v9; // rdi
	__int64 v10; // rcx

	v1 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	a1[1] = 0i64;
	*a1 = 0i64;
	a1[3] = 0i64;
	a1[2] = 0i64;
	if (v1)
	{
		v3 = v1(off_140A6DF18, qword_140C63858);
	}
	else if (dword_140C646D4)
	{
		v3 = 0;
	}
	else if ((int)sub_140247BA0() >= 0)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C58 + 40i64))(qword_140C63C58);
	}
	else
	{
		v3 = 0;
	}
	v4 = (unsigned int)(v3 + 10);
	if (a1[1] > v4)
		a1[1] = v4;
	v5 = sub_14018DBC0(*a1, (unsigned int)(v3 + 10), 40i64);
	v6 = v5;
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 40 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v6;
	}
	if (a1[3] > v4)
		a1[3] = v4;
	v7 = sub_14018DBC0(a1[2], v4, 8i64);
	v8 = (int*)a1[2];
	v9 = v7;
	if (v8 != v7)
	{
		sub_1407DB590(v7, v8, 8 * a1[3]);
		v10 = a1[2];
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		a1[2] = (__int64)v9;
	}
	a1[6] = 0i64;
	a1[4] = 0i64;
	return a1;
}
// 140A6DF18: using guessed type wchar_t *off_140A6DF18[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C58: using guessed type __int64 qword_140C63C58;
// 140C646D4: using guessed type int dword_140C646D4;


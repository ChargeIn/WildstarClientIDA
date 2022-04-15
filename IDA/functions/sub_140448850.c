//----- (0000000140448850) ----------------------------------------------------
__int64 __fastcall sub_140448850(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int* i; // rbx
	unsigned int v7; // esi
	__int64 v8; // rax
	unsigned int v9; // esi
	unsigned int* v10; // rax

	v2 = qword_140C658F8;
	v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72))
		+ 48 * a2;
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 112) + 32i64))(*(_QWORD*)(v2 + 112));
	v5 = *(int*)(v3 + 24);
	if ((int)v5 >= *(_DWORD*)(v3 + 28))
		return 0i64;
	for (i = (unsigned int*)(v4 + 4 * v5); ; ++i)
	{
		v7 = *i;
		if (qword_140C63848)
		{
			v8 = qword_140C63848(off_140A6B4E0, v7, qword_140C63858);
		}
		else if (dword_140C652CC)
		{
			v8 = 0i64;
		}
		else
		{
			v8 = (int)sub_140214760() >= 0
				? (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65580 + 32i64))(qword_140C65580, v7)
				: 0i64;
		}
		v9 = *(_DWORD*)(v8 + 8);
		if (qword_140C63840)
		{
			v10 = (unsigned int*)qword_140C63840(off_140A6E180, v9, qword_140C63858);
		}
		else if (dword_140C64698)
		{
			v10 = 0i64;
		}
		else
		{
			v10 = (int)sub_14024AA60() >= 0
				? (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
					qword_140C63C08,
					v9)
				: 0i64;
		}
		if (!v10[5])
			break;
		LODWORD(v5) = v5 + 1;
		if ((int)v5 >= *(_DWORD*)(v3 + 28))
			return 0i64;
	}
	return *v10;
}
// 140A6B4E0: using guessed type wchar_t *off_140A6B4E0[2];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;
// 140C652CC: using guessed type int dword_140C652CC;
// 140C65580: using guessed type __int64 qword_140C65580;
// 140C658F8: using guessed type __int64 qword_140C658F8;


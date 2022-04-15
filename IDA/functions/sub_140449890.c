//----- (0000000140449890) ----------------------------------------------------
__int64 __fastcall sub_140449890(int a1, __int64 a2)
{
	__int64 v4; // rsi
	unsigned __int64 v5; // r14
	__int64 i; // rdi
	__int64 v7; // rbx
	unsigned int(__fastcall * **v8)(_QWORD); // rcx
	__int64 v10; // rdi
	__int64 v11; // rbx
	unsigned int v12; // ebx

	if (!qword_140C658F8)
		return 0i64;
	v4 = 0i64;
	v5 = 0i64;
	if (!(*(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		/ 0x30ui64))
		return 0i64;
	for (i = 0i64; ; i += 80i64)
	{
		v7 = qword_140C658F8;
		if (*(_QWORD*)(qword_140C658F8 + 8)
			&& v5 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64)
		{
			v8 = (unsigned int(__fastcall***)(_QWORD))(i + *(_QWORD*)(v7 + 8));
		}
		else
		{
			v8 = 0i64;
		}
		if ((**v8)(v8) == a1)
			break;
		if (++v5 >= *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64)
			return 0i64;
	}
	v10 = qword_140C658F8;
	v11 = a2
		+ *(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72))
			+ 48 * v5
			+ 40);
	v12 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 112) + 32i64))(*(_QWORD*)(v10 + 112))
		+ 4 * v11);
	if (qword_140C63848)
		return qword_140C63848(off_140A6B438, v12, qword_140C63858);
	if (!dword_140C63900 && (int)sub_140213AA0() >= 0)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645E8 + 32i64))(qword_140C645E8, v12);
	return v4;
}
// 140A6B438: using guessed type wchar_t *off_140A6B438[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63900: using guessed type int dword_140C63900;
// 140C645E8: using guessed type __int64 qword_140C645E8;
// 140C658F8: using guessed type __int64 qword_140C658F8;


//----- (000000014043D7E0) ----------------------------------------------------
__int64 __fastcall sub_14043D7E0(int a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rax

	v2 = *(_DWORD*)(qword_140C65898 + 29932);
	if (!v2)
		return 0i64;
	while (a1 != v2)
	{
		if (qword_140C63840)
		{
			v3 = qword_140C63840(off_140A6E3E8, v2, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				return 0i64;
			v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v2);
		}
		if (v3)
		{
			v2 = *(_DWORD*)(v3 + 8);
			if (v2)
				continue;
		}
		return 0i64;
	}
	return 1i64;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65898: using guessed type __int64 qword_140C65898;


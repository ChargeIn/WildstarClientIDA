//----- (0000000140887F10) ----------------------------------------------------
_QWORD* __fastcall sub_140887F10(__int64 a1, __int64* a2, __int64 a3, _QWORD* a4)
{
	_QWORD* v6; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rdi
	int v11; // ebx

	v6 = 0i64;
	*a4 = 0i64;
	v8 = sub_1408819F0(dword_140C111C0, 208i64);
	v9 = (_QWORD*)v8;
	if (!v8)
	{
		sub_140883340(a1, 100);
		v8 = sub_1408819F0(dword_140C111C0, 208i64);
		v9 = (_QWORD*)v8;
		if (!v8)
			return 0i64;
	}
	sub_1408836F0(v8);
	v9[23] = 0i64;
	v9[24] = 0i64;
	v9[25] = 0i64;
	*v9 = off_1409A7F28;
	v9[15] = off_1409A7F60;
	if ((unsigned int)sub_140884D60((__int64)v9, a1, a2) != 1)
	{
		if (v9)
		{
			v11 = dword_140C111C0;
			(*(void(__fastcall**)(_QWORD*, _QWORD)) * v9)(v9, 0i64);
			sub_140881720(v11, (__int64)v9);
		}
		return 0i64;
	}
	sub_140883CD0(a1, (__int64)v9);
	if (v9)
		v6 = v9 + 15;
	*a4 = v6;
	return v9;
}
// 1409A7F28: using guessed type __int64 (__fastcall *off_1409A7F28[13])();
// 1409A7F60: using guessed type __int64 (__fastcall *off_1409A7F60[6])();
// 140C111C0: using guessed type int dword_140C111C0;


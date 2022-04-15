//----- (00000001403C9450) ----------------------------------------------------
__int64 __fastcall sub_1403C9450(__int64 a1, unsigned int a2, int a3)
{
	unsigned int v5; // esi
	_DWORD* v6; // rax
	unsigned int v7; // ebx

	if (a2 == a3)
		return 1i64;
	v5 = 0;
	v6 = (_DWORD*)sub_14024DB80(a2);
	if (v6)
	{
		while (a3 != *v6)
		{
			v7 = v6[2];
			if (qword_140C63840)
			{
				v6 = (_DWORD*)qword_140C63840(off_140A6E3E8, v7, qword_140C63858);
			}
			else
			{
				if (dword_140C64634 || (int)sub_14024D920() < 0)
					return v5;
				v6 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
					qword_140C64270,
					v7);
			}
			if (!v6)
				return 0i64;
		}
		return 1;
	}
	return v5;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;


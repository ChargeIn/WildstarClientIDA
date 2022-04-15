//----- (00000001403C9210) ----------------------------------------------------
__int64 sub_1403C9210()
{
	__int64 v0; // rsi
	unsigned int v1; // edi
	__int64 v2; // rax
	unsigned int v3; // ebx
	__int64 v4; // rcx
	__int64 v5; // rax

	v0 = qword_140C65898;
	v1 = 0;
	v2 = sub_14024DB80(*(_DWORD*)(qword_140C65898 + 29932));
	if (!v2)
		goto LABEL_11;
	while (!*(_DWORD*)(v2 + 32))
	{
		v3 = *(_DWORD*)(v2 + 8);
		if (qword_140C63840)
		{
			v2 = qword_140C63840(off_140A6E3E8, v3, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				goto LABEL_11;
			v2 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v3);
		}
		if (!v2)
			goto LABEL_11;
	}
	v1 = *(_DWORD*)(v2 + 32);
	if (!v1)
	{
	LABEL_11:
		v4 = *(_QWORD*)(v0 + 120);
		if (v4)
		{
			if (sub_1403B48B0(v4))
			{
				v5 = *(_QWORD*)(v0 + 120);
				if (!v5 || (*(_DWORD*)(v5 + 5544) & 2) != 0)
					return 4i64;
			}
		}
	}
	return v1;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65898: using guessed type __int64 qword_140C65898;


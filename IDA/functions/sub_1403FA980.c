//----- (00000001403FA980) ----------------------------------------------------
__int64 __fastcall sub_1403FA980(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	unsigned __int64 v4; // rdx
	unsigned int v5; // esi
	unsigned __int64 v6; // rax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 32792);
	v5 = 1;
	v6 = 0i64;
	if (v4)
	{
		v7 = *(_DWORD**)(qword_140C65898 + 32784);
		while (*v7 != a2)
		{
			++v6;
			v7 += 2;
			if (v6 >= v4)
				goto LABEL_7;
		}
		v5 = *(unsigned __int16*)(*(_QWORD*)(qword_140C65898 + 32784) + 8 * v6 + 4);
	}
LABEL_7:
	if (!dword_140C7E6A0[0])
		sub_1406454B0();
	if (qword_140C63840)
	{
		v8 = (_DWORD*)qword_140C63840(off_140A6E180, a2, qword_140C63858);
	}
	else
	{
		if (dword_140C64698 || (int)sub_14024AA60() < 0)
			goto LABEL_17;
		v8 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
			qword_140C63C08,
			a2);
	}
	if (v8)
	{
		v2 = v8[19];
		if (*((_DWORD*)&qword_140C7E6A4 + (int)v8[20]) - v8[18] < v2)
			v2 = *((_DWORD*)&qword_140C7E6A4 + (int)v8[20]) - v8[18];
	}
LABEL_17:
	if (v5 < v2)
		return v5;
	return v2;
}
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;


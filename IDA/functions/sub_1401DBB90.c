//----- (00000001401DBB90) ----------------------------------------------------
__int64 __fastcall sub_1401DBB90(int a1)
{
	unsigned int v2; // eax
	unsigned int v3; // esi
	unsigned int v4; // ebx
	_DWORD* v5; // rax

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6C938, qword_140C63858);
	}
	else
	{
		if (dword_140C64C3C)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14022D2A0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63918 + 40i64))(qword_140C63918);
	}
	v3 = v2;
LABEL_9:
	v4 = 0;
	if (!v3)
		return 0i64;
	while (1)
	{
		if (qword_140C63848)
		{
			v5 = (_DWORD*)qword_140C63848(off_140A6C938, v4, qword_140C63858);
		}
		else if (dword_140C64C3C)
		{
			v5 = 0i64;
		}
		else
		{
			v5 = (int)sub_14022D2A0() >= 0
				? (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63918 + 32i64))(
					qword_140C63918,
					v4)
				: 0i64;
		}
		if (a1 == v5[26] || a1 == v5[25] || a1 == v5[24] || a1 == v5[27])
			break;
		if (++v4 >= v3)
			return 0i64;
	}
	return 1i64;
}
// 140A6C938: using guessed type wchar_t *off_140A6C938[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63918: using guessed type __int64 qword_140C63918;
// 140C64C3C: using guessed type int dword_140C64C3C;


//----- (0000000140701950) ----------------------------------------------------
__int64 sub_140701950()
{
	unsigned int i; // ebx
	unsigned int v1; // eax
	int* v2; // rax

	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v1 = qword_140C63838(off_140A6D968, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C642C0 || (int)sub_140240D20() < 0)
			break;
		v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64B30 + 40i64))(qword_140C64B30);
	LABEL_7:
		if (i >= v1)
			return 0i64;
		if (qword_140C63848)
		{
			v2 = (int*)qword_140C63848(off_140A6D968, i, qword_140C63858);
		}
		else if (dword_140C642C0)
		{
			v2 = 0i64;
		}
		else if ((int)sub_140240D20() >= 0)
		{
			v2 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B30 + 32i64))(qword_140C64B30, i);
		}
		else
		{
			v2 = 0i64;
		}
		sub_1406020B0(qword_140C65898 + 27664, *v2, 0);
	}
	return 0i64;
}
// 140A6D968: using guessed type wchar_t *off_140A6D968[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642C0: using guessed type int dword_140C642C0;
// 140C64B30: using guessed type __int64 qword_140C64B30;
// 140C65898: using guessed type __int64 qword_140C65898;


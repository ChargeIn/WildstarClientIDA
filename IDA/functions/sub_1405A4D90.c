//----- (00000001405A4D90) ----------------------------------------------------
__int64 __fastcall sub_1405A4D90(__int64 a1, int a2)
{
	unsigned int i; // ebx
	unsigned int v4; // eax
	__int64 v5; // rax

	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v4 = qword_140C63838(off_140A6D428, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C63AB0 || (int)sub_14023A720() < 0)
			break;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64198 + 40i64))(qword_140C64198);
	LABEL_7:
		if (i >= v4)
			return 0i64;
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6D428, i, qword_140C63858);
		}
		else if (dword_140C63AB0)
		{
			v5 = 0i64;
		}
		else if ((int)sub_14023A720() >= 0)
		{
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64198 + 32i64))(qword_140C64198, i);
		}
		else
		{
			v5 = 0i64;
		}
		if (a2 == *(_DWORD*)(v5 + 4))
			return *(unsigned int*)(v5 + 8);
	}
	return 0i64;
}
// 140A6D428: using guessed type wchar_t *off_140A6D428[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AB0: using guessed type int dword_140C63AB0;
// 140C64198: using guessed type __int64 qword_140C64198;


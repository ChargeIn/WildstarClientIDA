//----- (0000000140833000) ----------------------------------------------------
void sub_140833000()
{
	if (qword_140C61C60)
	{
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 40i64))(qword_140C61C60) == 1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 48i64))(qword_140C61C60);
			if (!dword_140C61C50 || (unsigned int)(LODWORD(qword_140C61B68[4].SpinCount) - dword_140C61C50) > 8)
				dword_140C61C50 = qword_140C61B68[4].SpinCount;
		}
	}
	if (qword_140C61C58)
	{
		if (sub_1408462D0(qword_140C61C58))
			sub_140846140(qword_140C61C58);
	}
}
// 140C61C50: using guessed type int dword_140C61C50;
// 140C61C58: using guessed type __int64 qword_140C61C58;
// 140C61C60: using guessed type __int64 qword_140C61C60;


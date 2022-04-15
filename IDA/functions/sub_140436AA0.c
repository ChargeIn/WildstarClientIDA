//----- (0000000140436AA0) ----------------------------------------------------
__int64 __fastcall sub_140436AA0(__int64(__fastcall*** a1)(_QWORD), int a2)
{
	__int64 result; // rax
	bool v3; // zf

	if (a2 == 22)
	{
		result = qword_140C658C8;
		v3 = *(_DWORD*)qword_140C658C8 == 1;
	}
	else
	{
		if (a2 != 48)
			return result;
		result = qword_140C658C8;
		v3 = *(_DWORD*)qword_140C658C8 == 2;
	}
	if (v3)
		return (**a1)(a1);
	return result;
}
// 140C658C8: using guessed type __int64 qword_140C658C8;


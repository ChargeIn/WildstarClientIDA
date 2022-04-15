//----- (00000001402EC8C0) ----------------------------------------------------
__int64 __fastcall sub_1402EC8C0(__int64 a1, _WORD* a2, int a3, __int64 a4, int a5, __int64 a6)
{
	_QWORD* v6; // rsi
	unsigned int v9; // r10d
	int v10; // ebx
	__int64 v11; // rdx

	v6 = (_QWORD*)qword_140C65800;
	if (!a6)
		return 2147942487i64;
	if (a2 && *a2)
	{
		if ((*(int(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)qword_140C65670 + 136i64))(
			qword_140C65670,
			a2,
			3i64) >= 0)
			return 0i64;
		sub_1400035B0();
		if (a3)
		{
			v10 = a3 - 1;
			if (v10)
			{
				if (v10 != 1)
					return v9;
				v11 = v6[267];
			}
			else
			{
				v11 = v6[266];
			}
		}
		else
		{
			v11 = v6[265];
		}
	}
	else if (a3)
	{
		if (a3 == 1)
		{
			v11 = *(_QWORD*)(qword_140C65800 + 2152);
		}
		else
		{
			if (a3 != 2)
				return 2147942487i64;
			v11 = *(_QWORD*)(qword_140C65800 + 2160);
		}
	}
	else
	{
		v11 = *(_QWORD*)(qword_140C65800 + 2144);
	}
	return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 128i64))(
		qword_140C65670,
		v11,
		a6);
}
// 1402EC94F: variable 'v9' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65800: using guessed type __int64 qword_140C65800;


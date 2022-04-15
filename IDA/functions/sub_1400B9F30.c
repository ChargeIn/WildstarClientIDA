//----- (00000001400B9F30) ----------------------------------------------------
_QWORD* __fastcall sub_1400B9F30(_QWORD* a1, __int64 a2, __int64(__fastcall*** a3)(_QWORD, unsigned __int64))
{
	__int64 v4; // rcx
	unsigned __int64 v6; // rdx
	_QWORD* result; // rax

	v4 = a1[6];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[6] = 0i64;
	}
	v6 = 0i64;
	result = a1 + 6;
	do
	{
		if (*result)
			break;
		++v6;
		++result;
	} while (v6 < 3);
	if (a3)
	{
		result = (_QWORD*)(**a3)(a3, v6);
		if (*a1)
		{
			if ((a1[4] & 2) != 0)
				result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)(_QWORD, unsigned __int64), _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a1 + 24i64))(
					*a1,
					a3,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
		}
		a1[6] = a3;
	}
	return result;
}


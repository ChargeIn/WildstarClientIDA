//----- (000000014058F720) ----------------------------------------------------
__int64 __fastcall sub_14058F720(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	void(__fastcall * ***v9)(_QWORD); // rbx
	void(__fastcall * **v10)(_QWORD); // rcx

	v6 = (*(__int64(__fastcall**)(__int64))(a1 + 24))(a2);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 32))(a2, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	v9 = (void(__fastcall****)(_QWORD))(v7 + 3);
	if (!v9)
		return 0i64;
	if (a3)
	{
		v10 = *v9;
		if ((void(__fastcall***)(_QWORD)) * a3 != *v9)
		{
			if (v10)
				(**v10)(v10);
			if (*a3)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a3 + 8i64))(*a3);
			*a3 = *v9;
		}
	}
	return 1i64;
}


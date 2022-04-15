//----- (00000001400035C0) ----------------------------------------------------
_QWORD* __fastcall sub_1400035C0(_QWORD* a1, void(__fastcall*** a2)(_QWORD))
{
	if ((void(__fastcall***)(_QWORD)) * a1 != a2)
	{
		if (a2)
			(**a2)(a2);
		if (*a1)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = a2;
	}
	return a1;
}


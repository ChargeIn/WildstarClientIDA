//----- (00000001402EFCA0) ----------------------------------------------------
_QWORD* __fastcall sub_1402EFCA0(_QWORD* a1, __int64 a2, void(__fastcall*** a3)(_QWORD, _QWORD*))
{
	_QWORD* v4; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	*a1 = &off_140B64078;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[1] = a2;
	v4 = (_QWORD*)(a2 + 72);
	if (!a1[2])
	{
		a1[2] = v4;
		v6 = a1 + 3;
		*v6 = *v4;
		*v4 = a1;
		if (*v6)
			*(_QWORD*)(*v6 + 16i64) = v6;
	}
	*a1 = off_140B63F78;
	a1[4] = 0i64;
	if (a3)
	{
		(**a3)(a3, v4);
		v7 = a1[4];
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[4] = a3;
	}
	return a1;
}
// 140B63F78: using guessed type __int64 (__fastcall *off_140B63F78[33])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();


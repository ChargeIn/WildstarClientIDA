//----- (00000001402EFF50) ----------------------------------------------------
__int64 __fastcall sub_1402EFF50(__int64 a1, __int64 a2, int a3, void(__fastcall*** a4)(_QWORD, _QWORD*), int a5)
{
	_QWORD* v6; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx

	*(_QWORD*)a1 = &off_140B64078;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 8) = a2;
	v6 = (_QWORD*)(a2 + 72);
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v6;
		v8 = a1 + 24;
		*(_QWORD*)v8 = *v6;
		*v6 = a1;
		if (*(_QWORD*)v8)
			*(_QWORD*)(*(_QWORD*)v8 + 16i64) = v8;
	}
	*(_QWORD*)a1 = off_140B63FB8;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 36) = 1;
	if (*(void(__fastcall****)(_QWORD, _QWORD*))(a1 + 40) != a4)
	{
		if (a4)
			(**a4)(a4, v6);
		v9 = *(_QWORD*)(a1 + 40);
		if (v9)
			(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v9 + 8i64))(v9, v6);
		*(_QWORD*)(a1 + 40) = a4;
	}
	*(_DWORD*)(a1 + 48) = a5;
	return a1;
}
// 1402EFFD8: variable 'v6' is possibly undefined
// 140B63FB8: using guessed type __int64 (__fastcall *off_140B63FB8[25])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();


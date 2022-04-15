//----- (0000000140339D70) ----------------------------------------------------
__int64 __fastcall sub_140339D70(__int64 a1, _QWORD* a2)
{
	if (*(_DWORD*)(*a2 + 280i64) != 1)
		shutdown(*(_QWORD*)(*a2 + 272i64), 1);
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
	return 0i64;
}


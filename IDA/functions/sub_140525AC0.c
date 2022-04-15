//----- (0000000140525AC0) ----------------------------------------------------
_QWORD* __fastcall sub_140525AC0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 1472);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, a2, 0i64);
		return a2;
	}
	else
	{
		*a2 = 0i64;
		return a2;
	}
}


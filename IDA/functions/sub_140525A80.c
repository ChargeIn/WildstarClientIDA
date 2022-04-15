//----- (0000000140525A80) ----------------------------------------------------
_QWORD* __fastcall sub_140525A80(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v3; // rcx

	v3 = *(_QWORD*)(a1 + 1472);
	if (v3)
	{
		LOBYTE(a3) = 1;
		(*(void(__fastcall**)(__int64, _QWORD*, __int64))(*(_QWORD*)v3 + 16i64))(v3, a2, a3);
		return a2;
	}
	else
	{
		*a2 = 0i64;
		return a2;
	}
}


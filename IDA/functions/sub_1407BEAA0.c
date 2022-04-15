//----- (00000001407BEAA0) ----------------------------------------------------
__int64 __fastcall sub_1407BEAA0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)(a1 + 40);
	if (!v2)
		return 1i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2))
	{
		v3 = *(_QWORD*)(a1 + 40);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		return 1i64;
	}
	return 0i64;
}


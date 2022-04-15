//----- (00000001402BC300) ----------------------------------------------------
__int64 __fastcall sub_1402BC300(__int64 a1, int a2)
{
	__int64 v3; // rcx

	if (*(_DWORD*)(a1 + 56) != a2)
	{
		*(_DWORD*)(a1 + 56) = a2;
		v3 = *(_QWORD*)(a1 + 64);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 64) = 0i64;
		}
	}
	return 0i64;
}


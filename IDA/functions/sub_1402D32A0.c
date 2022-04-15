//----- (00000001402D32A0) ----------------------------------------------------
__int64 __fastcall sub_1402D32A0(_QWORD* a1)
{
	__int64 v2; // rcx

	if (*((_DWORD*)a1 + 6))
		return 1i64;
	v2 = *a1;
	if (!v2)
	{
	LABEL_6:
		*((_DWORD*)a1 + 6) = 1;
		return 1i64;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
	{
		sub_1402D3300(a1);
		if (*a1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
			*a1 = 0i64;
		}
		goto LABEL_6;
	}
	return 0i64;
}


//----- (00000001407A2CF0) ----------------------------------------------------
__int64 __fastcall sub_1407A2CF0(__int64 a1, int a2, unsigned __int64* a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // rbx

	v4 = a4;
	if (a4 >= (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
		return 0i64;
	while ((*(unsigned int(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a1 + 64i64))(a1, v4) != a2)
	{
		if (++v4 >= (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
			return 0i64;
	}
	*a3 = v4;
	return 1i64;
}


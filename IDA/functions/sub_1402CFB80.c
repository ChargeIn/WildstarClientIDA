//----- (00000001402CFB80) ----------------------------------------------------
__int64 __fastcall sub_1402CFB80(__int64 a1, __int64 a2)
{
	unsigned __int64 v5; // rbp
	__int64 v6; // rdi

	if (*(_DWORD*)(a1 + 228))
		return 1i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1)
		|| !(unsigned int)sub_1402D32A0(*(_QWORD**)(a1 + 24)))
	{
		return 0i64;
	}
	v5 = 0i64;
	if ((*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64)
	{
		v6 = 0i64;
		while ((unsigned int)sub_1402D7F70(v6 + *(_QWORD*)(a1 + 304), a2))
		{
			++v5;
			v6 += 192i64;
			if (v5 >= (*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64)
				goto LABEL_10;
		}
		return 0i64;
	}
	else
	{
	LABEL_10:
		*(_DWORD*)(a1 + 228) = 1;
		return 1i64;
	}
}


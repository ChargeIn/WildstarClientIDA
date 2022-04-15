//----- (00000001403746E0) ----------------------------------------------------
__int64 __fastcall sub_1403746E0(__int64 a1, __int64 a2)
{
	unsigned int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v4 = 0;
	if (!*(_DWORD*)(a1 + 44))
	{
	LABEL_8:
		*(_DWORD*)(a1 + 28) = 1;
		return 1i64;
	}
	while (1)
	{
		v5 = *(_QWORD*)(a1 + 8i64 * v4 + 48);
		if (!v5)
			goto LABEL_7;
		v6 = *(_QWORD*)(v5 + 16);
		if (!v6)
			goto LABEL_7;
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
			return 0i64;
		sub_140373540(v5);
		v7 = *(_QWORD*)(v5 + 16);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(v5 + 16) = 0i64;
		}
	LABEL_7:
		if (++v4 >= *(_DWORD*)(a1 + 44))
			goto LABEL_8;
	}
}


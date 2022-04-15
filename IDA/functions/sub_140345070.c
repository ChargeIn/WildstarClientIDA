//----- (0000000140345070) ----------------------------------------------------
__int64 __fastcall sub_140345070(__int64 a1)
{
	int v1; // esi
	unsigned int v3; // ebx
	int v4; // eax
	int v5; // eax
	int v6; // ecx
	int v7; // eax
	int v8; // ecx
	int v9; // eax
	int v10; // ecx
	int v11; // eax
	int v12; // ecx
	int v13; // eax
	int v14; // ecx
	int v15; // eax

	v1 = 0;
	v3 = 0;
	if (*(_DWORD*)(a1 + 2512))
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 2504) + 8i64))(a1 + 2504);
		if (v4 < 0)
			v3 = v4;
		*(_DWORD*)(a1 + 2512) = v4 < 0;
	}
	if (*(_DWORD*)(a1 + 2488))
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 2480) + 8i64))(a1 + 2480);
		v6 = 0;
		if (v5 < 0)
			v3 = v5;
		LOBYTE(v6) = v5 < 0;
		*(_DWORD*)(a1 + 2488) = v6;
	}
	if (*(_DWORD*)(a1 + 2352))
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 2344) + 8i64))(a1 + 2344);
		v8 = 0;
		if (v7 < 0)
			v3 = v7;
		LOBYTE(v8) = v7 < 0;
		*(_DWORD*)(a1 + 2352) = v8;
	}
	if (*(_DWORD*)(a1 + 160))
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 152) + 8i64))(a1 + 152);
		v10 = 0;
		if (v9 < 0)
			v3 = v9;
		LOBYTE(v10) = v9 < 0;
		*(_DWORD*)(a1 + 160) = v10;
	}
	if (*(_DWORD*)(a1 + 96))
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 88) + 8i64))(a1 + 88);
		v12 = 0;
		if (v11 < 0)
			v3 = v11;
		LOBYTE(v12) = v11 < 0;
		*(_DWORD*)(a1 + 96) = v12;
	}
	if (*(_DWORD*)(a1 + 64))
	{
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 56) + 8i64))(a1 + 56);
		v14 = 0;
		if (v13 < 0)
			v3 = v13;
		LOBYTE(v14) = v13 < 0;
		*(_DWORD*)(a1 + 64) = v14;
	}
	if (*(_DWORD*)(a1 + 40))
	{
		v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 32) + 8i64))(a1 + 32);
		if (v15 < 0)
			v3 = v15;
		LOBYTE(v1) = v15 < 0;
		*(_DWORD*)(a1 + 40) = v1;
	}
	return v3;
}


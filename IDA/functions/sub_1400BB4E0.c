//----- (00000001400BB4E0) ----------------------------------------------------
void __fastcall sub_1400BB4E0(__int64 a1, __int64** a2, int a3, int a4, int a5)
{
	__int64* v5; // rdi
	__int64 v6; // rsi
	__int64 v7; // r15
	__int64 v9; // rbx
	__int64 v11; // rcx
	__int64 v12; // rbp
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64* v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rcx

	v5 = 0i64;
	v6 = a4;
	v7 = a3;
	v9 = a1 + 24i64 * a5;
	if (!*(_DWORD*)(v9 + 316)
		|| (v11 = *(_QWORD*)(v9 + 304)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11))
	{
		v12 = *(_QWORD*)(v9 + 304);
	}
	else
	{
		v12 = 0i64;
	}
	v13 = a1 + 24 * v6;
	if (!*(_DWORD*)(v13 + 316)
		|| (v14 = *(_QWORD*)(v13 + 304)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14))
	{
		v15 = *(__int64**)(v13 + 304);
	}
	else
	{
		v15 = 0i64;
	}
	v16 = a1 + 24 * v7;
	if (!*(_DWORD*)(v16 + 316)
		|| (v17 = *(_QWORD*)(v16 + 304)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17))
	{
		v5 = *(__int64**)(v16 + 304);
	}
	sub_1400B9E10(a2, v5, v15, v12);
}


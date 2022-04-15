//----- (0000000140402CF0) ----------------------------------------------------
void __fastcall sub_140402CF0(__int64 a1)
{
	unsigned __int64 v1; // rbp
	unsigned __int64 i; // rbx
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 j; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	unsigned __int64 k; // rbx
	__int64 v16; // rcx
	__int64 v17; // rcx

	v1 = *(_QWORD*)(a1 + 8);
	for (i = 0i64; i < v1; ++i)
	{
		v4 = *(_QWORD*)(*(_QWORD*)a1 + 8 * i);
		if (v4)
		{
			sub_1404019F0(*(__int64**)(*(_QWORD*)a1 + 8 * i));
			sub_14018B900(v4, 0);
		}
	}
	v5 = *(_QWORD*)(a1 + 264);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = *(_QWORD*)(a1 + 248);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	sub_14040B000((__int64*)(a1 + 232));
	v7 = *(_QWORD*)(a1 + 208);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	sub_140195D70(a1 + 128);
	*(_DWORD*)(a1 + 128) = 0;
	v8 = *(_QWORD**)(a1 + 144);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 152);
	v9 = *(_QWORD**)(a1 + 152);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v10 = *(_QWORD*)(a1 + 104);
	if (v10)
		sub_14018B900(v10, 0);
	v11 = *(_QWORD*)(a1 + 88);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	for (j = 0i64; j < *(_QWORD*)(a1 + 80); ++j)
	{
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8 * j);
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	}
	v14 = *(_QWORD*)(a1 + 72);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	for (k = 0i64; k < *(_QWORD*)(a1 + 64); ++k)
	{
		v16 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * k);
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	}
	v17 = *(_QWORD*)(a1 + 56);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	sub_140019490((_QWORD*)(a1 + 16));
	sub_14018B900(*(_QWORD*)(a1 + 32), 0);
	*(_QWORD*)(a1 + 32) = 0i64;
	if (*(_QWORD*)a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
}


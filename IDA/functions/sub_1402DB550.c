//----- (00000001402DB550) ----------------------------------------------------
void __fastcall sub_1402DB550(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	_QWORD* i; // rdi
	__int64 v6; // r9
	unsigned __int64 j; // rsi
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int64 k; // rsi
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rcx
	unsigned __int64 m; // rsi
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rcx
	unsigned __int64 n; // rsi
	__int64 v20; // rdi
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23[6]; // [rsp+30h] [rbp-18h] BYREF

	*(_QWORD*)a1 = off_140B62D20;
	v2 = *(_QWORD*)(a1 + 1584);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *(_QWORD*)(a1 + 1584);
		v23[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v23);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1584) + 8i64))(*(_QWORD*)(a1 + 1584));
		*(_QWORD*)(a1 + 1584) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 1600);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 1600) = 0i64;
	}
	sub_1401981B0((__int64**)(a1 + 2040));
	for (i = *(_QWORD**)(a1 + 1656); i; i = (_QWORD*)i[684])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*i + 24i64))(i);
		sub_1400035B0();
	}
	if (*(_QWORD*)(a1 + 1824))
	{
		do
			sub_1400035B0();
		while (*(_QWORD*)(v6 + 56));
	}
	sub_1401981B0((__int64**)(a1 + 2040));
	if (*(_QWORD*)(a1 + 2040))
		sub_1401A4A00((const void***)(a1 + 2040));
	if (*(_QWORD*)(a1 + 1824))
		sub_1401A4A00((const void***)(a1 + 1824));
	for (j = 0i64; j < *(_QWORD*)(a1 + 1792); ++j)
	{
		v8 = *(_QWORD*)(a1 + 1800) + 8 * j;
		while (*(_QWORD*)v8)
		{
			v9 = *(_QWORD*)v8;
			*(_QWORD*)v8 = *(_QWORD*)(*(_QWORD*)v8 + 8i64);
			sub_14018B900(v9, 0);
		}
	}
	v10 = *(_QWORD*)(a1 + 1800);
	*(_QWORD*)(a1 + 1784) = 0i64;
	sub_14018B900(v10, 0);
	*(_QWORD*)(a1 + 1800) = 0i64;
	for (k = 0i64; k < *(_QWORD*)(a1 + 1752); ++k)
	{
		v12 = *(_QWORD*)(a1 + 1760) + 8 * k;
		while (*(_QWORD*)v12)
		{
			v13 = *(_QWORD*)v12;
			*(_QWORD*)v12 = *(_QWORD*)(*(_QWORD*)v12 + 8i64);
			sub_14018B900(v13, 0);
		}
	}
	v14 = *(_QWORD*)(a1 + 1760);
	*(_QWORD*)(a1 + 1744) = 0i64;
	sub_14018B900(v14, 0);
	*(_QWORD*)(a1 + 1760) = 0i64;
	for (m = 0i64; m < *(_QWORD*)(a1 + 1712); ++m)
	{
		v16 = *(_QWORD*)(a1 + 1720) + 8 * m;
		while (*(_QWORD*)v16)
		{
			v17 = *(_QWORD*)v16;
			*(_QWORD*)v16 = *(_QWORD*)(*(_QWORD*)v16 + 8i64);
			sub_14018B900(v17, 0);
		}
	}
	v18 = *(_QWORD*)(a1 + 1720);
	*(_QWORD*)(a1 + 1704) = 0i64;
	sub_14018B900(v18, 0);
	*(_QWORD*)(a1 + 1720) = 0i64;
	for (n = 0i64; n < *(_QWORD*)(a1 + 1672); ++n)
	{
		v20 = *(_QWORD*)(a1 + 1680) + 8 * n;
		while (*(_QWORD*)v20)
		{
			v21 = *(_QWORD*)v20;
			*(_QWORD*)v20 = *(_QWORD*)(*(_QWORD*)v20 + 8i64);
			sub_14018B900(v21, 0);
		}
	}
	v22 = *(_QWORD*)(a1 + 1680);
	*(_QWORD*)(a1 + 1664) = 0i64;
	sub_14018B900(v22, 0);
	*(_QWORD*)(a1 + 1680) = 0i64;
	if (*(_QWORD*)(a1 + 1656))
		sub_1401A4A00((const void***)(a1 + 1656));
}
// 1402DB63F: variable 'v6' is possibly undefined
// 140B62D20: using guessed type __int64 (__fastcall *off_140B62D20[26])();
// 1402DB550: using guessed type int var_18[6];


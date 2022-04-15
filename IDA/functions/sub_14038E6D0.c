//----- (000000014038E6D0) ----------------------------------------------------
void __fastcall sub_14038E6D0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r11
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	*(_QWORD*)a1 = off_140B65ED0;
	v2 = *(_QWORD*)(a1 + 432);
	if (v2)
		sub_1403762E0(v2);
	while (*(_QWORD*)(a1 + 440))
	{
		if (*(_QWORD*)(a1 + 440))
		{
			sub_140390120(*(_QWORD**)(a1 + 440));
			sub_14018B900(v3, 0);
		}
	}
	v4 = *(_QWORD**)(a1 + 456);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 464);
	v5 = *(_QWORD*)(a1 + 464);
	if (v5)
		*(_QWORD*)(v5 + 456) = *(_QWORD*)(a1 + 456);
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	v6 = *(_QWORD**)(a1 + 504);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 512);
	v7 = *(_QWORD*)(a1 + 512);
	if (v7)
		*(_QWORD*)(v7 + 504) = *(_QWORD*)(a1 + 504);
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	v8 = *(_QWORD**)(a1 + 488);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 496);
	v9 = *(_QWORD*)(a1 + 496);
	if (v9)
		*(_QWORD*)(v9 + 488) = *(_QWORD*)(a1 + 488);
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	v10 = *(_QWORD**)(a1 + 472);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 480);
	v11 = *(_QWORD*)(a1 + 480);
	if (v11)
		*(_QWORD*)(v11 + 472) = *(_QWORD*)(a1 + 472);
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	v12 = *(_QWORD**)(a1 + 456);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 464);
	v13 = *(_QWORD*)(a1 + 464);
	if (v13)
		*(_QWORD*)(v13 + 456) = *(_QWORD*)(a1 + 456);
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	if (*(_QWORD*)(a1 + 440))
		sub_1401A4A00((const void***)(a1 + 440));
	v14 = *(_QWORD*)(a1 + 344);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	v15 = *(_QWORD*)(a1 + 336);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
}
// 14038E71B: variable 'v3' is possibly undefined
// 140B65ED0: using guessed type __int64 (__fastcall *off_140B65ED0[41])();


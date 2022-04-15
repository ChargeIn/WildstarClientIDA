//----- (000000014044A9B0) ----------------------------------------------------
__int64 __fastcall sub_14044A9B0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx

	sub_14044DCC0((_QWORD*)a1);
	v2 = *(_QWORD*)(a1 + 496);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = *(_QWORD*)(a1 + 488);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = *(_QWORD*)(a1 + 480);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = *(_QWORD*)(a1 + 472);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = *(_QWORD*)(a1 + 464);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = *(_QWORD*)(a1 + 456);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v8 = *(_QWORD*)(a1 + 424);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = *(_QWORD*)(a1 + 416);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	v10 = *(_QWORD*)(a1 + 408);
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	v11 = *(_QWORD*)(a1 + 392);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	v12 = *(_QWORD*)(a1 + 376);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	sub_140008410(a1 + 344);
	sub_14018B900(*(_QWORD*)(a1 + 352), 0);
	sub_140195D70(a1 + 272);
	*(_DWORD*)(a1 + 272) = 0;
	v13 = *(_QWORD**)(a1 + 288);
	if (v13)
		*v13 = *(_QWORD*)(a1 + 296);
	v14 = *(_QWORD**)(a1 + 296);
	if (v14)
		*v14 = *(_QWORD*)(a1 + 288);
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	if (*(_QWORD*)(a1 + 256))
	{
		sub_14001A270(a1 + 240, *(_QWORD**)(*(_QWORD*)(a1 + 248) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 248) + 16i64) = *(_QWORD*)(a1 + 248);
		*(_QWORD*)(*(_QWORD*)(a1 + 248) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24i64) = *(_QWORD*)(a1 + 248);
		*(_QWORD*)(a1 + 256) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 248), 0);
	if (*(_QWORD*)(a1 + 216))
	{
		sub_14001A270(a1 + 200, *(_QWORD**)(*(_QWORD*)(a1 + 208) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 16i64) = *(_QWORD*)(a1 + 208);
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 24i64) = *(_QWORD*)(a1 + 208);
		*(_QWORD*)(a1 + 216) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 208), 0);
	if (*(_QWORD*)(a1 + 184))
	{
		sub_14001A270(a1 + 168, *(_QWORD**)(*(_QWORD*)(a1 + 176) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 176) + 16i64) = *(_QWORD*)(a1 + 176);
		*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 176) + 24i64) = *(_QWORD*)(a1 + 176);
		*(_QWORD*)(a1 + 184) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 176), 0);
	if (*(_QWORD*)(a1 + 152))
	{
		sub_14001A270(a1 + 136, *(_QWORD**)(*(_QWORD*)(a1 + 144) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 144) + 16i64) = *(_QWORD*)(a1 + 144);
		*(_QWORD*)(*(_QWORD*)(a1 + 144) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 144) + 24i64) = *(_QWORD*)(a1 + 144);
		*(_QWORD*)(a1 + 152) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 144), 0);
	v15 = *(_QWORD*)(a1 + 120);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	v16 = *(_QWORD*)(a1 + 104);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	v17 = *(_QWORD*)(a1 + 88);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	v18 = *(_QWORD*)(a1 + 72);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	sub_140451620((__int64*)(a1 + 56));
	sub_140451450((__int64*)(a1 + 32));
	return sub_140451300((__int64*)(a1 + 16));
}


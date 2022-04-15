#include "../winhttp.h"

//----- (000000014038ACF0) ----------------------------------------------------
void __fastcall sub_14038ACF0(__int64 a1)
{
	bool v1; // zf
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // r11
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	_QWORD* v22; // rcx
	__int64 v23; // rcx
	_QWORD* v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rcx
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx
	_QWORD* v30; // rcx
	__int64 v31; // rcx
	_QWORD* v32; // rcx
	__int64 v33; // rcx
	_QWORD* v34; // rcx
	_QWORD* v35; // rcx
	_QWORD* v36; // rcx

	v1 = *(_DWORD*)(a1 + 228) == 0;
	*(_QWORD*)a1 = off_140B65D10;
	if (!v1 && !*(_QWORD*)(a1 + 1168))
		sub_140367870(*(_QWORD*)(a1 + 16), (float*)(a1 + 384));
	v3 = *(_QWORD**)(a1 + 1008);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 1016);
	v4 = *(_QWORD*)(a1 + 1016);
	if (v4)
		*(_QWORD*)(v4 + 1008) = *(_QWORD*)(a1 + 1008);
	*(_QWORD*)(a1 + 1008) = 0i64;
	*(_QWORD*)(a1 + 1016) = 0i64;
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 976);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 976) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 984);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 984) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 944);
	if (v8)
		sub_1403762E0(v8);
	while (*(_QWORD*)(a1 + 952))
	{
		if (*(_QWORD*)(a1 + 952))
		{
			sub_14038FDB0(*(_QWORD**)(a1 + 952));
			sub_14018B900(v9, 0);
		}
	}
	--* (_QWORD*)(*(_QWORD*)(a1 + 16) + 5240i64);
	v10 = *(_QWORD**)(a1 + 1184);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 1192);
	v11 = *(_QWORD*)(a1 + 1192);
	if (v11)
		*(_QWORD*)(v11 + 1184) = *(_QWORD*)(a1 + 1184);
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	v12 = *(_QWORD**)(a1 + 1168);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 1176);
	v13 = *(_QWORD*)(a1 + 1176);
	if (v13)
		*(_QWORD*)(v13 + 1168) = *(_QWORD*)(a1 + 1168);
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	v14 = *(_QWORD**)(a1 + 1152);
	if (v14)
		*v14 = *(_QWORD*)(a1 + 1160);
	v15 = *(_QWORD*)(a1 + 1160);
	if (v15)
		*(_QWORD*)(v15 + 1152) = *(_QWORD*)(a1 + 1152);
	*(_QWORD*)(a1 + 1152) = 0i64;
	*(_QWORD*)(a1 + 1160) = 0i64;
	v16 = *(_QWORD**)(a1 + 1136);
	if (v16)
		*v16 = *(_QWORD*)(a1 + 1144);
	v17 = *(_QWORD*)(a1 + 1144);
	if (v17)
		*(_QWORD*)(v17 + 1136) = *(_QWORD*)(a1 + 1136);
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1144) = 0i64;
	v18 = *(_QWORD**)(a1 + 1120);
	if (v18)
		*v18 = *(_QWORD*)(a1 + 1128);
	v19 = *(_QWORD*)(a1 + 1128);
	if (v19)
		*(_QWORD*)(v19 + 1120) = *(_QWORD*)(a1 + 1120);
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1128) = 0i64;
	v20 = *(_QWORD**)(a1 + 1104);
	if (v20)
		*v20 = *(_QWORD*)(a1 + 1112);
	v21 = *(_QWORD*)(a1 + 1112);
	if (v21)
		*(_QWORD*)(v21 + 1104) = *(_QWORD*)(a1 + 1104);
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	v22 = *(_QWORD**)(a1 + 1088);
	if (v22)
		*v22 = *(_QWORD*)(a1 + 1096);
	v23 = *(_QWORD*)(a1 + 1096);
	if (v23)
		*(_QWORD*)(v23 + 1088) = *(_QWORD*)(a1 + 1088);
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_QWORD*)(a1 + 1096) = 0i64;
	v24 = *(_QWORD**)(a1 + 1072);
	if (v24)
		*v24 = *(_QWORD*)(a1 + 1080);
	v25 = *(_QWORD*)(a1 + 1080);
	if (v25)
		*(_QWORD*)(v25 + 1072) = *(_QWORD*)(a1 + 1072);
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	v26 = *(_QWORD**)(a1 + 1056);
	if (v26)
		*v26 = *(_QWORD*)(a1 + 1064);
	v27 = *(_QWORD*)(a1 + 1064);
	if (v27)
		*(_QWORD*)(v27 + 1056) = *(_QWORD*)(a1 + 1056);
	*(_QWORD*)(a1 + 1056) = 0i64;
	*(_QWORD*)(a1 + 1064) = 0i64;
	v28 = *(_QWORD**)(a1 + 1040);
	if (v28)
		*v28 = *(_QWORD*)(a1 + 1048);
	v29 = *(_QWORD*)(a1 + 1048);
	if (v29)
		*(_QWORD*)(v29 + 1040) = *(_QWORD*)(a1 + 1040);
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1048) = 0i64;
	v30 = *(_QWORD**)(a1 + 1024);
	if (v30)
		*v30 = *(_QWORD*)(a1 + 1032);
	v31 = *(_QWORD*)(a1 + 1032);
	if (v31)
		*(_QWORD*)(v31 + 1024) = *(_QWORD*)(a1 + 1024);
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	v32 = *(_QWORD**)(a1 + 1008);
	if (v32)
		*v32 = *(_QWORD*)(a1 + 1016);
	v33 = *(_QWORD*)(a1 + 1016);
	if (v33)
		*(_QWORD*)(v33 + 1008) = *(_QWORD*)(a1 + 1008);
	*(_QWORD*)(a1 + 1008) = 0i64;
	*(_QWORD*)(a1 + 1016) = 0i64;
	if (*(_QWORD*)(a1 + 952))
		sub_1401A4A00((const void***)(a1 + 952));
	sub_140195D70(a1 + 848);
	*(_DWORD*)(a1 + 848) = 0;
	v34 = *(_QWORD**)(a1 + 864);
	if (v34)
		*v34 = *(_QWORD*)(a1 + 872);
	v35 = *(_QWORD**)(a1 + 872);
	if (v35)
		*v35 = *(_QWORD*)(a1 + 864);
	*(_QWORD*)(a1 + 864) = 0i64;
	*(_QWORD*)(a1 + 872) = 0i64;
	v36 = *(_QWORD**)(a1 + 200);
	if (v36)
		sub_1407C2B30(v36, *(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 208), 9);
}
// 14038ADE9: variable 'v9' is possibly undefined
// 140B65D10: using guessed type __int64 (__fastcall *off_140B65D10[14])();


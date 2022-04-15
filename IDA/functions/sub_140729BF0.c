//----- (0000000140729BF0) ----------------------------------------------------
__int64 __fastcall sub_140729BF0(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rcx
	int v4; // esi
	__int64 v5; // r14
	unsigned int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v11; // [rsp+20h] [rbp-20h] BYREF
	__int64 v12; // [rsp+28h] [rbp-18h]
	__int128 v13; // [rsp+30h] [rbp-10h]

	sub_14078A2E0(*(_QWORD*)(a1 + 1272));
	sub_14078A2E0(*(_QWORD*)(a1 + 1272) + 152i64);
	sub_14078A2E0(*(_QWORD*)(a1 + 1272) + 304i64);
	v2 = *(_QWORD*)(a1 + 1176);
	v3 = *(_QWORD*)(v2 + 96);
	v12 = 1065353216i64;
	v13 = 0ui64;
	if (*(_QWORD*)(a1 + 80))
	{
		v11 = 1117i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v11);
		*(_DWORD*)(v2 + 104) = 6;
	}
	else
	{
		v11 = 6675i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v11);
		*(_DWORD*)(v2 + 104) = 7;
	}
	sub_140789A90(*(_QWORD*)(a1 + 1368));
	v4 = *(_DWORD*)(a1 + 80);
	v5 = *(_QWORD*)(a1 + 1184);
	if (v4)
		v6 = dword_140C39740[v4 - 1];
	else
		v6 = 165;
	v7 = *(_QWORD*)(v5 + 80);
	v11 = v6;
	v12 = 1065353216i64;
	v13 = 0ui64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v11);
	*(_DWORD*)(v5 + 88) = v4;
	v8 = *(_QWORD*)(a1 + 1160);
	v11 = 1109i64;
	v12 = 1065353216i64;
	LODWORD(v13) = 0;
	*(_QWORD*)((char*)&v13 + 4) = 1i64;
	HIDWORD(v13) = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v8 + 584i64))(v8, 0i64, &v11);
	v9 = *(_QWORD*)(a1 + 1424);
	*(_DWORD*)(a1 + 20) = 7;
	return sub_1400EA3E0(v9, "FortuneCoinSpent", &unk_1409D15AA);
}
// 140C39740: using guessed type _DWORD dword_140C39740[16];


//----- (00000001407C2D70) ----------------------------------------------------
__int64 __fastcall sub_1407C2D70(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // ecx
	int* v5; // rax
	int v6; // ecx
	int v7; // eax
	int v8; // eax

	v2 = a1 + 32;
	*(_QWORD*)(v2 - 32) = off_140B79930;
	sub_1407C3170(v2);
	*(_QWORD*)(a1 + 1248) = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	*(_QWORD*)(a1 + 1264) = 0i64;
	sub_1402C8DB0((_QWORD*)(a1 + 1272));
	*(_QWORD*)(a1 + 1328) = 0i64;
	sub_1407E4830((int*)(a1 + 1344), 0i64, 0x310ui64);
	*(_QWORD*)(a1 + 2972) = 0i64;
	*(_DWORD*)(a1 + 2980) = 0;
	sub_1407E4830((int*)(a1 + 3008), 0i64, 0x310ui64);
	v3 = a1 + 5440;
	v4 = 7;
	do
	{
		--v4;
		v3 += 32i64;
		*(_OWORD*)(v3 - 32) = xmmword_140C777D0;
		*(_OWORD*)(v3 - 16) = xmmword_140B7B240;
	} while (v4 >= 0);
	*(_QWORD*)(a1 + 5736) = 0i64;
	*(_QWORD*)(a1 + 5776) = 0i64;
	*(_QWORD*)(a1 + 5784) = 0i64;
	*(_QWORD*)(a1 + 5792) = 0i64;
	*(_QWORD*)(a1 + 6152) = 0i64;
	*(_QWORD*)(a1 + 6160) = 0i64;
	*(_QWORD*)(a1 + 6168) = 0i64;
	*(_QWORD*)(a1 + 6320) = 0i64;
	*(_QWORD*)(a1 + 6560) = 0i64;
	*(_QWORD*)(a1 + 6568) = 0i64;
	*(_QWORD*)(a1 + 6576) = 0i64;
	*(_QWORD*)(a1 + 6584) = 0i64;
	sub_1400522F0((_QWORD*)(a1 + 6592));
	*(_QWORD*)(a1 + 6632) = 0i64;
	sub_1400522F0((_QWORD*)(a1 + 6640));
	*(_QWORD*)(a1 + 6680) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 1312) = 0i64;
	*(_DWORD*)(a1 + 1320) = 0;
	*(_QWORD*)(a1 + 2960) = 0i64;
	*(_DWORD*)(a1 + 2968) = 0;
	*(_QWORD*)(a1 + 2984) = 0i64;
	*(_QWORD*)(a1 + 2992) = 0i64;
	*(_QWORD*)(a1 + 3000) = 0i64;
	*(_QWORD*)(a1 + 5744) = 0i64;
	*(_QWORD*)(a1 + 5752) = 0i64;
	*(_QWORD*)(a1 + 5760) = 0i64;
	*(_QWORD*)(a1 + 5768) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	*(_OWORD*)(a1 + 1344) = COERCE_UNSIGNED_INT(1.0 * 3.5449078);
	*(_OWORD*)(a1 + 1360) = 0ui64;
	*(_OWORD*)(a1 + 1392) = COERCE_UNSIGNED_INT(
		_mm_shuffle_ps((__m128)xmmword_140B7B240, (__m128)xmmword_140B7B240, 85).m128_f32[0]
		* 3.5449078);
	*(_DWORD*)(a1 + 1376) = 0;
	*(_OWORD*)(a1 + 1408) = 0u;
	*(_OWORD*)(a1 + 1440) = COERCE_UNSIGNED_INT(1.0 * 3.5449078);
	*(_DWORD*)(a1 + 1424) = 0;
	*(_OWORD*)(a1 + 1456) = 0u;
	*(_DWORD*)(a1 + 1472) = 0;
	*(_DWORD*)(a1 + 2040) = 1176256512;
	*(_DWORD*)(a1 + 2044) = 1181376512;
	*(_QWORD*)(a1 + 6056) = 0i64;
	*(_QWORD*)(a1 + 6064) = 0i64;
	*(_QWORD*)(a1 + 6072) = 0i64;
	v5 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 6080) = 0i64;
	*(_DWORD*)(a1 + 6240) = 0;
	v6 = *v5;
	v7 = dword_140C54E50;
	if (v6 < dword_140C54E50)
		v7 = v6;
	v8 = dword_140C54E60[v7];
	*(_DWORD*)(a1 + 6248) = 1;
	*(_DWORD*)(a1 + 6244) = v8;
	*(__m256*)(a1 + 6256) = ymmword_140C78390;
	*(_OWORD*)(a1 + 6288) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 6304) = xmmword_140C783C0;
	*(_DWORD*)(a1 + 6328) = sub_14018CDF0();
	*(_QWORD*)(a1 + 6384) = 0i64;
	*(_QWORD*)(a1 + 6392) = 0i64;
	*(_QWORD*)(a1 + 6400) = 0i64;
	*(_QWORD*)(a1 + 6408) = 0i64;
	*(_QWORD*)(a1 + 6416) = 0i64;
	*(_QWORD*)(a1 + 6424) = 0i64;
	*(_QWORD*)(a1 + 6432) = 0i64;
	*(_QWORD*)(a1 + 6440) = 0i64;
	*(_QWORD*)(a1 + 6448) = 0i64;
	*(_QWORD*)(a1 + 6456) = 0i64;
	*(_QWORD*)(a1 + 6464) = 0i64;
	*(_QWORD*)(a1 + 6472) = 0i64;
	*(_QWORD*)(a1 + 6480) = 0i64;
	sub_14018CDF0();
	*(_DWORD*)(a1 + 6544) = 1;
	*(_DWORD*)(a1 + 6548) = 2;
	*(_DWORD*)(a1 + 6552) = 3;
	return a1;
}
// 140B79930: using guessed type __int64 (__fastcall *off_140B79930[7])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C54E50: using guessed type int dword_140C54E50;
// 140C54E60: using guessed type int dword_140C54E60[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;


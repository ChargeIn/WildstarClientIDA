//----- (0000000140548DB0) ----------------------------------------------------
__int64 sub_140548DB0()
{
	__int64* v0; // rbx
	__int64 v1; // rdi
	__int64 v2; // rbp
	__int64* v3; // rbx
	__int64* v4; // rdi
	__int64 v5; // r14
	__int64 v6; // rbp
	__int64 result; // rax
	__int64 v8[7]; // [rsp+50h] [rbp-68h] BYREF
	__int64 v9[3]; // [rsp+88h] [rbp-30h] BYREF

	xmmword_140C7D7D0[0] = xmmword_140B7B220;
	xmmword_140C7D7E0 = xmmword_140B7B220;
	xmmword_140C7D7F0[0] = xmmword_140B7AF80;
	xmmword_140C7D810[0] = xmmword_140B7B0D0;
	xmmword_140C7D820 = xmmword_140B7B0D0;
	xmmword_140C7D790[0] = xmmword_140B7AF80;
	xmmword_140C7D7A0[0] = xmmword_140B7B1E0;
	xmmword_140C7D800[0] = xmmword_140B7B1E0;
	xmmword_140C7D7C0[0] = xmmword_140B7AE70;
	xmmword_140C7D7B0[0] = xmmword_140B7AFB0;
	xmmword_140C7D870 = xmmword_140B7B160;
	xmmword_140C7D880 = xmmword_140B7B160;
	xmmword_140C7D890 = xmmword_140B7ADF0;
	xmmword_140C7D8B0 = xmmword_140B7B0D0;
	xmmword_140C7D8C0 = xmmword_140B7B0D0;
	xmmword_140C7D830 = xmmword_140B7ADF0;
	xmmword_140C7D840 = xmmword_140B7B010;
	xmmword_140C7D8A0 = xmmword_140B7B010;
	xmmword_140C7D860 = xmmword_140B7AEC0;
	xmmword_140C7D850 = xmmword_140B7B080;
	xmmword_140C7D910 = xmmword_140B7B170;
	xmmword_140C7D920 = xmmword_140B7B170;
	xmmword_140C7D930 = xmmword_140B7AE60;
	xmmword_140C7D950 = xmmword_140B7B0D0;
	xmmword_140C7D960 = xmmword_140B7B0D0;
	xmmword_140C7D9D0 = xmmword_140B7AD50;
	xmmword_140C7D8D0 = xmmword_140B7AE60;
	xmmword_140C7D8E0 = xmmword_140B7B100;
	xmmword_140C7D940 = xmmword_140B7B100;
	xmmword_140C7D8F0 = xmmword_140B7B020;
	xmmword_140C7D900 = xmmword_140B7AD50;
	xmmword_140C7D9B0 = xmmword_140B7B150;
	xmmword_140C7D9C0 = xmmword_140B7B150;
	xmmword_140C7D9F0 = xmmword_140B7B0D0;
	xmmword_140C7DA00 = xmmword_140B7B0D0;
	xmmword_140C7D970 = xmmword_140B7AD50;
	xmmword_140C7D980 = xmmword_140B7AE00;
	xmmword_140C7D9E0 = xmmword_140B7AE00;
	xmmword_140C7D9A0 = xmmword_140B7B0E0;
	xmmword_140C7D990 = xmmword_140B7AEA0;
	sub_140549270();
	xmmword_140C7D730 = 0i64;
	xmmword_140C7D740 = 0i64;
	v8[4] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_000_ramp.tex";
	xmmword_140C7D770 = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A640);
	v8[5] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_001_ramp.tex";
	v0 = v9;
	xmmword_140C7D780 = xmmword_140C7D770;
	xmmword_140C7D6F0 = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A930);
	v8[6] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_002_ramp.tex";
	v1 = 0i64;
	xmmword_140C7D700 = xmmword_140C7D6F0;
	v9[0] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_000_ramp.tex";
	v2 = 3i64;
	xmmword_140C7D750 = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A950);
	v9[1] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_001_ramp.tex";
	xmmword_140C7D760 = xmmword_140C7D750;
	xmmword_140C7D710 = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A920);
	v9[2] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_002_ramp.tex";
	xmmword_140C7D720 = xmmword_140C7D710;
	v8[0] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_000_Color.tex";
	v8[1] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_001_Color.tex";
	v8[2] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_Active_000_Color.tex";
	v8[3] = (__int64)L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_Active_001_Color.tex";
	do
	{
		if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			*(v0 - 3),
			0i64,
			1i64,
			1,
			0,
			0,
			0,
			&qword_140C65B18[v1]) < 0)
			sub_1400035B0();
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			*v0,
			0i64,
			1i64,
			1,
			0,
			0,
			0,
			&qword_140C65B30[v1]) < 0)
			sub_1400035B0();
		++v1;
		++v0;
		--v2;
	} while (v2);
	v3 = v8;
	v4 = qword_140C65B48;
	v5 = 2i64;
	do
	{
		v6 = 2i64;
		do
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				*v3,
				0i64,
				1i64,
				1,
				21,
				0,
				0,
				v4);
			if ((int)result < 0)
				result = sub_1400035B0();
			++v4;
			++v3;
			--v6;
		} while (v6);
		--v5;
	} while (v5);
	return result;
}
// 140B16A60: using guessed type wchar_t aArtFxTextureTe_8[68];
// 140B16B00: using guessed type wchar_t aArtFxTextureTe_7[68];
// 140B16BA0: using guessed type wchar_t aArtFxTextureTe_4[68];
// 140B16C40: using guessed type wchar_t aArtFxTextureTe_3[68];
// 140B16CE0: using guessed type wchar_t aArtFxTextureTe_6[61];
// 140B16D60: using guessed type wchar_t aArtFxTextureTe_5[61];
// 140B16DE0: using guessed type wchar_t aArtFxTextureTe_0[65];
// 140B16E90: using guessed type wchar_t aArtFxTextureTe[65];
// 140B16F80: using guessed type wchar_t aArtFxTextureTe_2[68];
// 140B17020: using guessed type wchar_t aArtFxTextureTe_1[65];
// 140B7A640: using guessed type __int128 xmmword_140B7A640;
// 140B7A920: using guessed type __int128 xmmword_140B7A920;
// 140B7A930: using guessed type __int128 xmmword_140B7A930;
// 140B7A950: using guessed type __int128 xmmword_140B7A950;
// 140B7AD50: using guessed type __int128 xmmword_140B7AD50;
// 140B7ADF0: using guessed type __int128 xmmword_140B7ADF0;
// 140B7AE00: using guessed type __int128 xmmword_140B7AE00;
// 140B7AE60: using guessed type __int128 xmmword_140B7AE60;
// 140B7AE70: using guessed type __int128 xmmword_140B7AE70;
// 140B7AEA0: using guessed type __int128 xmmword_140B7AEA0;
// 140B7AEC0: using guessed type __int128 xmmword_140B7AEC0;
// 140B7AF80: using guessed type __int128 xmmword_140B7AF80;
// 140B7AFB0: using guessed type __int128 xmmword_140B7AFB0;
// 140B7B010: using guessed type __int128 xmmword_140B7B010;
// 140B7B020: using guessed type __int128 xmmword_140B7B020;
// 140B7B080: using guessed type __int128 xmmword_140B7B080;
// 140B7B0D0: using guessed type __int128 xmmword_140B7B0D0;
// 140B7B0E0: using guessed type __int128 xmmword_140B7B0E0;
// 140B7B100: using guessed type __int128 xmmword_140B7B100;
// 140B7B150: using guessed type __int128 xmmword_140B7B150;
// 140B7B160: using guessed type __int128 xmmword_140B7B160;
// 140B7B170: using guessed type __int128 xmmword_140B7B170;
// 140B7B1E0: using guessed type __int128 xmmword_140B7B1E0;
// 140B7B220: using guessed type __int128 xmmword_140B7B220;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65B18: using guessed type __int64 qword_140C65B18[3];
// 140C65B30: using guessed type __int64 qword_140C65B30[3];
// 140C65B48: using guessed type __int64 qword_140C65B48[];
// 140C7D6F0: using guessed type __int128 xmmword_140C7D6F0;
// 140C7D700: using guessed type __int128 xmmword_140C7D700;
// 140C7D710: using guessed type __int128 xmmword_140C7D710;
// 140C7D720: using guessed type __int128 xmmword_140C7D720;
// 140C7D730: using guessed type __int128 xmmword_140C7D730;
// 140C7D740: using guessed type __int128 xmmword_140C7D740;
// 140C7D750: using guessed type __int128 xmmword_140C7D750;
// 140C7D760: using guessed type __int128 xmmword_140C7D760;
// 140C7D770: using guessed type __int128 xmmword_140C7D770;
// 140C7D780: using guessed type __int128 xmmword_140C7D780;
// 140C7D790: using guessed type __int128 xmmword_140C7D790[];
// 140C7D7A0: using guessed type __int128 xmmword_140C7D7A0[];
// 140C7D7B0: using guessed type __int128 xmmword_140C7D7B0[];
// 140C7D7C0: using guessed type __int128 xmmword_140C7D7C0[];
// 140C7D7D0: using guessed type __int128 xmmword_140C7D7D0[];
// 140C7D7E0: using guessed type __int128 xmmword_140C7D7E0;
// 140C7D7F0: using guessed type __int128 xmmword_140C7D7F0[];
// 140C7D800: using guessed type __int128 xmmword_140C7D800[];
// 140C7D810: using guessed type __int128 xmmword_140C7D810[];
// 140C7D820: using guessed type __int128 xmmword_140C7D820;
// 140C7D830: using guessed type __int128 xmmword_140C7D830;
// 140C7D840: using guessed type __int128 xmmword_140C7D840;
// 140C7D850: using guessed type __int128 xmmword_140C7D850;
// 140C7D860: using guessed type __int128 xmmword_140C7D860;
// 140C7D870: using guessed type __int128 xmmword_140C7D870;
// 140C7D880: using guessed type __int128 xmmword_140C7D880;
// 140C7D890: using guessed type __int128 xmmword_140C7D890;
// 140C7D8A0: using guessed type __int128 xmmword_140C7D8A0;
// 140C7D8B0: using guessed type __int128 xmmword_140C7D8B0;
// 140C7D8C0: using guessed type __int128 xmmword_140C7D8C0;
// 140C7D8D0: using guessed type __int128 xmmword_140C7D8D0;
// 140C7D8E0: using guessed type __int128 xmmword_140C7D8E0;
// 140C7D8F0: using guessed type __int128 xmmword_140C7D8F0;
// 140C7D900: using guessed type __int128 xmmword_140C7D900;
// 140C7D910: using guessed type __int128 xmmword_140C7D910;
// 140C7D920: using guessed type __int128 xmmword_140C7D920;
// 140C7D930: using guessed type __int128 xmmword_140C7D930;
// 140C7D940: using guessed type __int128 xmmword_140C7D940;
// 140C7D950: using guessed type __int128 xmmword_140C7D950;
// 140C7D960: using guessed type __int128 xmmword_140C7D960;
// 140C7D970: using guessed type __int128 xmmword_140C7D970;
// 140C7D980: using guessed type __int128 xmmword_140C7D980;
// 140C7D990: using guessed type __int128 xmmword_140C7D990;
// 140C7D9A0: using guessed type __int128 xmmword_140C7D9A0;
// 140C7D9B0: using guessed type __int128 xmmword_140C7D9B0;
// 140C7D9C0: using guessed type __int128 xmmword_140C7D9C0;
// 140C7D9D0: using guessed type __int128 xmmword_140C7D9D0;
// 140C7D9E0: using guessed type __int128 xmmword_140C7D9E0;
// 140C7D9F0: using guessed type __int128 xmmword_140C7D9F0;
// 140C7DA00: using guessed type __int128 xmmword_140C7DA00;


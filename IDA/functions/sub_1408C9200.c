#include "../winhttp.h"

//----- (00000001408C9200) ----------------------------------------------------
__int64 __fastcall sub_1408C9200(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	int v6; // xmm8_4
	double v7; // xmm0_8
	int v8; // xmm7_4
	double v9; // xmm0_8
	double v10; // xmm0_8
	int v11; // eax
	int v12; // ecx
	int v13; // eax
	int v14; // eax
	int v15; // eax
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 8) = 1067030938;
	*(_DWORD*)(a1 + 12) = 1074790400;
	*(_DWORD*)(a1 + 16) = 1120403456;
	*(_QWORD*)(a1 + 20) = 1127481344i64;
	*(_DWORD*)(a1 + 28) = 1120403456;
	*(_QWORD*)(a1 + 32) = 1065353216i64;
	*(_DWORD*)(a1 + 40) = 1148846080;
	*(_QWORD*)(a1 + 44) = 1065353216i64;
	*(_DWORD*)(a1 + 52) = 1176256512;
	*(_DWORD*)(a1 + 56) = 1065353216;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), 0.0);
	v6 = LODWORD(v5);
	*(_DWORD*)(a1 + 60) = LODWORD(v5);
	*(_DWORD*)(a1 + 64) = LODWORD(v5);
	*(_DWORD*)(a1 + 68) = LODWORD(v5);
	v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -4.8000002);
	*(_DWORD*)(a1 + 76) = v6;
	v8 = LODWORD(v7);
	*(_DWORD*)(a1 + 72) = LODWORD(v7);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -1.0);
	*(_DWORD*)(a1 + 80) = LODWORD(v9);
	v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -1.15);
	v11 = dword_140C13210;
	v12 = dword_140C13224;
	*(_DWORD*)(a1 + 124) = v8;
	*(_DWORD*)(a1 + 120) = v6;
	*(_DWORD*)(a1 + 84) = LODWORD(v10);
	*(_DWORD*)(a1 + 156) = v11;
	*(_DWORD*)(a1 + 160) = dword_140C13214;
	v13 = dword_140C13218;
	*(_DWORD*)(a1 + 92) = 23;
	*(_DWORD*)(a1 + 164) = v13;
	v14 = dword_140C1321C;
	*(_QWORD*)(a1 + 96) = 1103626240i64;
	*(_DWORD*)(a1 + 168) = v14;
	v15 = dword_140C13220;
	*(_DWORD*)(a1 + 104) = 1109393408;
	*(_DWORD*)(a1 + 172) = v15;
	*(_DWORD*)(a1 + 176) = v12;
	*(_DWORD*)(a1 + 180) = dword_140C13228;
	v16 = dword_140C1322C;
	*(_WORD*)(a1 + 152) = 256;
	*(_DWORD*)(a1 + 184) = v16;
	v17 = dword_140C13230;
	*(_DWORD*)(a1 + 108) = 1117782016;
	*(_DWORD*)(a1 + 188) = v17;
	v18 = dword_140C13234;
	*(_DWORD*)(a1 + 112) = 1120403456;
	*(_DWORD*)(a1 + 192) = v18;
	v19 = dword_140C13238;
	*(_DWORD*)(a1 + 116) = 8;
	*(_QWORD*)(a1 + 128) = 3i64;
	*(_DWORD*)(a1 + 136) = 3;
	*(_DWORD*)(a1 + 140) = 1;
	*(_DWORD*)(a1 + 196) = v19;
	*(_DWORD*)(a1 + 144) = 3;
	*(_DWORD*)(a1 + 148) = 2;
	*(_BYTE*)(a1 + 88) = 1;
	*(_BYTE*)(a1 + 154) = 1;
	return 1i64;
}
// 140C13210: using guessed type int dword_140C13210;
// 140C13214: using guessed type int dword_140C13214;
// 140C13218: using guessed type int dword_140C13218;
// 140C1321C: using guessed type int dword_140C1321C;
// 140C13220: using guessed type int dword_140C13220;
// 140C13224: using guessed type int dword_140C13224;
// 140C13228: using guessed type int dword_140C13228;
// 140C1322C: using guessed type int dword_140C1322C;
// 140C13230: using guessed type int dword_140C13230;
// 140C13234: using guessed type int dword_140C13234;
// 140C13238: using guessed type int dword_140C13238;


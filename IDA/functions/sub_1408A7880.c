//----- (00000001408A7880) ----------------------------------------------------
__int64 __fastcall sub_1408A7880(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 12);
	*(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 16);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 17);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 21);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 25);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 29);
	*(_BYTE*)(a1 + 44) = *(_BYTE*)(a2 + 33);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 34);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 38);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 42);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 46);
	*(_BYTE*)(a1 + 64) = *(_BYTE*)(a2 + 50);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 51);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 55);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 59);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 63);
	*(_BYTE*)(a1 + 84) = *(_BYTE*)(a2 + 67);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 + 80);
	*(_BYTE*)(a1 + 104) = *(_BYTE*)(a2 + 84);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 85);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 89);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 93);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 97);
	*(_BYTE*)(a1 + 124) = *(_BYTE*)(a2 + 101);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 102);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 106);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 110);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 114);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 118) * 0.050000001);
	*(_DWORD*)(a1 + 148) = LODWORD(v4);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(v2 + 118);
	*(_BYTE*)(a1 + 25) = 1;
	*(_BYTE*)(a1 + 45) = 1;
	*(_BYTE*)(a1 + 65) = 1;
	*(_BYTE*)(a1 + 85) = 1;
	*(_BYTE*)(a1 + 105) = 1;
	*(_BYTE*)(a1 + 125) = 1;
	*(_BYTE*)(a1 + 144) = 1;
	return 1i64;
}


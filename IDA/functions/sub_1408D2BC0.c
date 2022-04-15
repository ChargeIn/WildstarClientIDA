//----- (00000001408D2BC0) ----------------------------------------------------
__int64 __fastcall sub_1408D2BC0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8
	double v5; // xmm0_8

	v2 = a2 + 1;
	*(_BYTE*)(a1 + 33) = *(_BYTE*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 1);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 5);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 9);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 13);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 17);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 21);
	*(_BYTE*)(a1 + 53) = *(_BYTE*)(a2 + 25);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 26);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 30);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 34);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 38);
	*(_BYTE*)(a1 + 73) = *(_BYTE*)(a2 + 42);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 43);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 47);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 51);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 55);
	*(_BYTE*)(a1 + 101) = *(_BYTE*)(a2 + 59);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 80);
	*(_BYTE*)(a1 + 137) = *(_BYTE*)(a2 + 84);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 85);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 89);
	*(_BYTE*)(a1 + 125) = *(_BYTE*)(a2 + 93);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 94);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 98);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 102);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 106);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 110);
	*(_BYTE*)(a1 + 153) = *(_BYTE*)(a2 + 114);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 115);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 119);
	*(_DWORD*)(a1 + 148) = *(_DWORD*)(a2 + 123);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 127) * 0.050000001);
	*(_DWORD*)(a1 + 156) = LODWORD(v4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 130) * 0.050000001);
	*(_DWORD*)(a1 + 160) = LODWORD(v5);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(v2 + 134);
	*(_BYTE*)(a1 + 32) = 1;
	*(_BYTE*)(a1 + 52) = 1;
	*(_BYTE*)(a1 + 72) = 1;
	*(_BYTE*)(a1 + 100) = 1;
	*(_BYTE*)(a1 + 124) = 1;
	*(_BYTE*)(a1 + 136) = 1;
	*(_BYTE*)(a1 + 152) = 1;
	*(_BYTE*)(a1 + 168) = 1;
	return 1i64;
}


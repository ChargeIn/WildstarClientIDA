//----- (00000001408A5620) ----------------------------------------------------
__int64 __fastcall sub_1408A5620(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	float v4; // xmm4_4
	float v5; // xmm3_4
	float v6; // xmm2_4
	int v7; // xmm0_4
	double v8; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 64) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 12);
	v4 = *(float*)(a2 + 16);
	*(float*)(a1 + 20) = v4;
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	v5 = *(float*)(a2 + 28);
	*(float*)(a1 + 32) = v5;
	v6 = *(float*)(a2 + 32);
	*(float*)(a1 + 36) = v6;
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 40);
	v7 = *(_DWORD*)(a2 + 44);
	*(float*)(a1 + 20) = v4 * 0.0099999998;
	*(float*)(a1 + 32) = v5 * 0.0099999998;
	*(_DWORD*)(a1 + 44) = v7;
	*(float*)(a1 + 36) = v6 * 0.0099999998;
	v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 48) * 0.050000001);
	*(_DWORD*)(a1 + 52) = LODWORD(v8);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(v2 + 48);
	*(_BYTE*)(a1 + 68) = *(_BYTE*)(v2 + 52);
	*(_BYTE*)(a1 + 69) = *(_BYTE*)(v2 + 53);
	*(_BYTE*)(a1 + 70) = *(_BYTE*)(v2 + 54);
	*(_BYTE*)(a1 + 71) = 1;
	*(_BYTE*)(a1 + 60) = 1;
	return 1i64;
}


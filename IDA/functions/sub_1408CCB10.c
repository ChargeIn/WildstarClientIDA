//----- (00000001408CCB10) ----------------------------------------------------
__int64 __fastcall sub_1408CCB10(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8
	double v5; // xmm0_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 4);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 8) * 0.050000001);
	*(_DWORD*)(a1 + 16) = LODWORD(v4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 8) * 0.050000001);
	*(_DWORD*)(a1 + 20) = LODWORD(v5);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v2 + 12);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(v2 + 16);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 20) * 0.050000001);
	*(_DWORD*)(a1 + 28) = LODWORD(v6);
	v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 24) * 0.050000001);
	*(_DWORD*)(a1 + 32) = LODWORD(v7);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(v2 + 28);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(v2 + 32);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(v2 + 36);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(v2 + 40);
	v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 44) * 0.050000001);
	*(_DWORD*)(a1 + 60) = LODWORD(v8);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 48) * 0.050000001);
	*(_DWORD*)(a1 + 64) = LODWORD(v9);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(v2 + 52);
	*(_BYTE*)(a1 + 72) = *(_BYTE*)(v2 + 56);
	*(_BYTE*)(a1 + 73) = *(_BYTE*)(v2 + 57);
	*(_WORD*)(a1 + 8) = -1;
	*(_BYTE*)(a1 + 10) = -1;
	return 1i64;
}


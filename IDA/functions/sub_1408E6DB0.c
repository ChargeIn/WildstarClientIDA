//----- (00000001408E6DB0) ----------------------------------------------------
__int64 __fastcall sub_1408E6DB0(_DWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8
	double v5; // xmm0_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	double v11; // xmm0_8

	v2 = a2 + 4;
	a1[2] = *(_DWORD*)a2;
	a1[3] = *(_DWORD*)(a2 + 4);
	a1[4] = *(_DWORD*)(a2 + 8);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 12) * 0.050000001);
	a1[5] = LODWORD(v4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 12) * 0.050000001);
	a1[6] = LODWORD(v5);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 16) * 0.050000001);
	a1[7] = LODWORD(v6);
	v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 20) * 0.050000001);
	a1[8] = LODWORD(v7);
	v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 24) * 0.050000001);
	a1[9] = LODWORD(v8);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 28) * 0.050000001);
	a1[10] = LODWORD(v9);
	v10 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 32) * 0.050000001);
	a1[11] = LODWORD(v10);
	v11 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 36) * 0.050000001);
	a1[12] = LODWORD(v11);
	a1[13] = *(_DWORD*)(v2 + 40);
	return 1i64;
}


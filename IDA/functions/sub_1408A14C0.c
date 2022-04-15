//----- (00000001408A14C0) ----------------------------------------------------
__int64 __fastcall sub_1408A14C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	float v4; // xmm7_4
	float v5; // xmm6_4
	double v6; // xmm0_8
	char v7; // al

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)a2;
	v4 = *(float*)(a2 + 4);
	*(float*)(a1 + 8) = v4;
	v5 = *(float*)(a2 + 8);
	*(float*)(a1 + 12) = v5;
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 12) * 0.050000001);
	*(_DWORD*)(a1 + 16) = LODWORD(v6);
	*(_BYTE*)(a1 + 20) = *(_BYTE*)(v2 + 12);
	v7 = *(_BYTE*)(v2 + 13);
	*(float*)(a1 + 8) = v4 * 0.0099999998;
	*(float*)(a1 + 12) = v5 * 0.0099999998;
	*(_BYTE*)(a1 + 28) = v7;
	*(_BYTE*)(a1 + 21) = 1;
	*(_BYTE*)(a1 + 29) = 1;
	return 1i64;
}


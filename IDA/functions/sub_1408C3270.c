//----- (00000001408C3270) ----------------------------------------------------
__int64 __fastcall sub_1408C3270(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8
	double v5; // xmm0_8
	double v6; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 32) = *(_DWORD*)a2;
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 4) * 0.050000001);
	*(_DWORD*)(a1 + 36) = LODWORD(v4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v2 + 4) * 0.050000001);
	*(_DWORD*)(a1 + 40) = LODWORD(v5);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(v2 + 8);
	*(_BYTE*)(a1 + 48) = *(_BYTE*)(v2 + 12);
	*(_BYTE*)(a1 + 49) = *(_BYTE*)(v2 + 13);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)(v2 + 14) * 0.00083333335);
	*(_DWORD*)(a1 + 28) = LODWORD(v6);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(v2 + 18);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(v2 + 22);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(v2 + 26);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(v2 + 30);
	*(_WORD*)(a1 + 8) = -1;
	return 1i64;
}


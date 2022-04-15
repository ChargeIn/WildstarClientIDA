//----- (00000001408AC200) ----------------------------------------------------
__int64 __fastcall sub_1408AC200(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	__int64 v5; // rbp
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm0_8
	double v9; // xmm0_8

	v4 = a1 + 28;
	v5 = 2i64;
	do
	{
		*(_BYTE*)(v4 + 8) = *(_BYTE*)a2;
		v6 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)(a2 + 1) * 0.00083333335);
		*(_DWORD*)v4 = LODWORD(v6);
		v7 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 5) * 0.050000001);
		v4 += 28i64;
		a2 += 25i64;
		*(_DWORD*)(v4 - 24) = LODWORD(v7);
		*(_DWORD*)(v4 - 44) = *(_DWORD*)(a2 - 16);
		*(_DWORD*)(v4 - 40) = *(_DWORD*)(a2 - 12);
		*(_DWORD*)(v4 - 36) = *(_DWORD*)(a2 - 8);
		*(_DWORD*)(v4 - 32) = *(_DWORD*)(a2 - 4);
		--v5;
	} while (v5);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)a2;
	v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 4) * 0.050000001);
	*(_DWORD*)(a1 + 72) = LODWORD(v8);
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 8) * 0.050000001);
	*(_DWORD*)(a1 + 76) = LODWORD(v9);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 12);
	*(_BYTE*)(a1 + 84) = *(_BYTE*)(a2 + 16);
	*(_BYTE*)(a1 + 85) = *(_BYTE*)(a2 + 17);
	*(_WORD*)(a1 + 8) = -1;
	*(_BYTE*)(a1 + 10) = -1;
	return 1i64;
}


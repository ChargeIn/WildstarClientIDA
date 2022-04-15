//----- (00000001407CC850) ----------------------------------------------------
void __fastcall sub_1407CC850(__int64 a1, float a2, float a3, int a4, int a5, int a6, int a7)
{
	float v9; // xmm10_4
	float v10; // xmm9_4
	float v11; // xmm11_4
	float v12; // xmm0_4

	v9 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)a5));
	v10 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)a5));
	v11 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)a6));
	v12 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)a6));
	*(float*)a1 = a2;
	*(float*)(a1 + 4) = a3;
	*(_DWORD*)(a1 + 8) = 1065353216;
	*(_DWORD*)(a1 + 12) = 1065353216;
	*(float*)(a1 + 16) = v11 * v10;
	*(float*)(a1 + 20) = v11 * v9;
	*(float*)(a1 + 24) = fabs(v12) * v12;
	*(float*)(a1 + 28) = (float)a4;
	*(float*)(a1 + 32) = -v9;
	*(float*)(a1 + 36) = v10;
	*(_DWORD*)(a1 + 40) = 0;
	*(_DWORD*)(a1 + 44) = a7;
	*(float*)(a1 + 48) = v12 * v10;
	*(float*)(a1 + 52) = v12 * v9;
	*(float*)(a1 + 56) = -v11;
	*(_DWORD*)(a1 + 60) = 1065353216;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;


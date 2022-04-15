//----- (000000014089C120) ----------------------------------------------------
__int64 __fastcall sub_14089C120(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 4) * 0.050000001);
	*(_DWORD*)(a1 + 12) = LODWORD(v4);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(v2 + 4);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(v2 + 8);
	*(_BYTE*)(a1 + 24) = -1;
	return 1i64;
}


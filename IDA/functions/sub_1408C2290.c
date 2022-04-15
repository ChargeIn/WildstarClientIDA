//----- (00000001408C2290) ----------------------------------------------------
__int64 __fastcall sub_1408C2290(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	double v4; // xmm0_8

	v2 = a2 + 4;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 12);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a2 + 16) * 0.050000001);
	*(_DWORD*)(a1 + 20) = LODWORD(v4);
	*(_BYTE*)(a1 + 32) = *(_BYTE*)(v2 + 16);
	*(_BYTE*)(a1 + 33) = *(_BYTE*)(v2 + 17);
	*(_BYTE*)(a1 + 24) = 1;
	*(_BYTE*)(a1 + 34) = 1;
	return 1i64;
}


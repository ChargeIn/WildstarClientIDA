//----- (00000001403838D0) ----------------------------------------------------
__int64 __fastcall sub_1403838D0(__int64 a1, __int64 a2)
{
	float v2; // xmm0_4
	float v3; // xmm1_4
	int v5; // eax
	int v6; // r8d
	int v7; // eax
	int v8; // r8d
	int v9; // r8d
	int v10; // ecx

	v2 = *(float*)(a1 + 48);
	v3 = *(float*)(a2 + 48);
	if (v2 < v3)
		return 0xFFFFFFFFi64;
	if (v2 > v3)
		return 1i64;
	v5 = *(_DWORD*)(a1 + 52);
	v6 = *(_DWORD*)(a2 + 52);
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	if (v5 > v6)
		return 1i64;
	v7 = *(_DWORD*)(a1 + 12);
	v8 = *(_DWORD*)(a2 + 12);
	if (v7 < v8)
		return 0xFFFFFFFFi64;
	if (v7 > v8)
		return 1i64;
	v9 = *(_DWORD*)(a1 + 8);
	v10 = *(_DWORD*)(a2 + 8);
	if (v9 < v10)
		return 0xFFFFFFFFi64;
	return v9 > v10;
}


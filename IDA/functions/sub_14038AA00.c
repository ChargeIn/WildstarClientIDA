//----- (000000014038AA00) ----------------------------------------------------
__int64 __fastcall sub_14038AA00(_DWORD* a1, _DWORD* a2)
{
	int v2; // eax
	int v3; // r8d
	int v5; // eax
	int v6; // r8d
	int v7; // ecx
	int v8; // edx

	v2 = a1[7];
	v3 = a2[7];
	if (v2 > v3)
		return 0xFFFFFFFFi64;
	if (v2 < v3)
		return 1i64;
	v5 = a1[3];
	v6 = a2[3];
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	if (v5 > v6)
		return 1i64;
	v7 = a1[2];
	v8 = a2[2];
	if (v7 < v8)
		return 0xFFFFFFFFi64;
	return v7 > v8;
}


//----- (00000001406077A0) ----------------------------------------------------
bool __fastcall sub_1406077A0(_DWORD* a1, _DWORD* a2)
{
	unsigned int v2; // eax
	unsigned int v3; // r8d
	unsigned int v5; // eax
	unsigned int v6; // r8d

	v2 = a1[2];
	v3 = a2[2];
	if (v2 < v3)
		return 1;
	if (v2 > v3)
		return 0;
	v5 = a1[3];
	v6 = a2[3];
	if (v5 < v6)
		return 1;
	return v5 <= v6 && a1[4] < a2[4];
}


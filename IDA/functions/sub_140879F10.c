//----- (0000000140879F10) ----------------------------------------------------
float __fastcall sub_140879F10(__int64 a1, _DWORD* a2)
{
	int v2; // r8d
	int i; // ecx

	v2 = 0;
	for (i = a2[1] & 0x3FFFF; i; i &= i - 1)
		++v2;
	return (float)(36 * v2 * *a2) * 0.000015625001;
}


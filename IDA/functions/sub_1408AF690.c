//----- (00000001408AF690) ----------------------------------------------------
bool __fastcall sub_1408AF690(_DWORD* a1)
{
	unsigned int v2; // edx
	unsigned int v3; // eax
	int v4; // edx

	if (a1[3])
		return 0;
	v2 = (unsigned int)(a1[1] + a1[6]) % *a1;
	v3 = a1[2];
	if (v2 < v3)
		v4 = *a1 + v3 - v2;
	else
		v4 = v2 - v3;
	return v4 == 0;
}


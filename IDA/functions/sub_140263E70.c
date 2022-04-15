//----- (0000000140263E70) ----------------------------------------------------
__int64 __fastcall sub_140263E70(_DWORD* a1)
{
	unsigned int v1; // r8d
	unsigned int v2; // r9d
	unsigned int v3; // r10d
	int v4; // ebx
	int i; // edx

	v1 = a1[1];
	v2 = a1[2];
	v3 = a1[3];
	v4 = a1[5];
	for (i = 0; v4; --v4)
	{
		if ((unsigned int)(a1[6] - 13) > 2)
			i += v1 * v2 * v3;
		else
			i += v3 * ((v1 + 3) >> 2) * ((v2 + 3) >> 2);
		v1 = (v1 >> 1 == 0) + (v1 >> 1);
		v2 = (v2 >> 1 == 0) + (v2 >> 1);
		v3 = (v3 >> 1 == 0) + (v3 >> 1);
	}
	if (*a1 == 2)
		i *= 6;
	return (unsigned int)(i * dword_140AE6320[a1[6]]);
}
// 140AE6320: using guessed type _DWORD dword_140AE6320[28];


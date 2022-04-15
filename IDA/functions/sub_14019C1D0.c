//----- (000000014019C1D0) ----------------------------------------------------
__int64 __fastcall sub_14019C1D0(_DWORD* a1, int* a2)
{
	int v2; // r9d
	int v4; // r8d
	int v5; // ecx
	int v6; // eax
	int v7; // eax
	__int64 result; // rax

	v2 = *a2;
	if (a1[26] < *a2)
		v2 = a1[26];
	v4 = a2[1];
	if (a1[27] < v4)
		v4 = a1[27];
	v5 = a2[2];
	if (a1[28] < v5)
		v5 = a1[28];
	v6 = a1[23];
	if (v6 < v2)
		v6 = v2;
	*a2 = v6;
	v7 = a1[24];
	if (v7 < v4)
		v7 = v4;
	a2[1] = v7;
	result = (unsigned int)a1[25];
	if ((int)result < v5)
		result = (unsigned int)v5;
	a2[2] = result;
	return result;
}


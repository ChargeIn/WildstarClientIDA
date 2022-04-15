//----- (0000000140779E40) ----------------------------------------------------
void __fastcall sub_140779E40(__int64 a1)
{
	int v1; // edx
	float v3; // xmm1_4
	float v4; // xmm1_4

	v1 = *(_DWORD*)(a1 + 188);
	if (v1)
		v3 = *(float*)(a1 + 180);
	else
		v3 = -*(float*)(a1 + 184);
	*(float*)(a1 + 176) = (float)((float)*(int*)(a1 + 164) * v3) + *(float*)(a1 + 176);
	if (*(_DWORD*)(a1 + 192) != v1)
	{
		sub_1407797A0(a1, v1, 0);
		sub_1407797A0(a1, *(_DWORD*)(a1 + 188) == 0, 2);
		*(_DWORD*)(a1 + 192) = *(_DWORD*)(a1 + 188);
	}
	v4 = *(float*)(a1 + 176);
	if (v4 >= 0.0)
	{
		if (v4 >= 1.0)
			sub_140779660(a1, 1i64);
	}
	else
	{
		*(_DWORD*)(a1 + 176) = 0;
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;


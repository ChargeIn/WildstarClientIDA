//----- (000000014017E260) ----------------------------------------------------
__int64 __fastcall sub_14017E260(__int64 a1, int* a2)
{
	if (*(_DWORD*)(a1 + 2172))
	{
		*(float*)(a1 + 2160) = sub_1408FDE98(
			(float)(*a2 - *(_DWORD*)(a1 + 2164)) / (float)((float)*(int*)(a1 + 1048) * 0.25),
			*(float*)&dword_140C3CFB8 * 2.0)
			+ *(float*)(a1 + 2160);
		*(_DWORD*)(a1 + 2164) = *a2;
		*(_DWORD*)(a1 + 2168) = a2[1];
	}
	return sub_1400D23B0(a1, a2);
}
// 140C3CFB8: using guessed type int dword_140C3CFB8;


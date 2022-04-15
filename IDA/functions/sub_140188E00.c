//----- (0000000140188E00) ----------------------------------------------------
__int64 __fastcall sub_140188E00(__int64 a1, __int64 a2, __int64 a3)
{
	float* v4; // rsi
	float* v5; // rdi
	__int64 v6; // r9
	__int64 i; // rax

	if (*(_DWORD*)(a1 + 4))
		return a1 + 8;
	v4 = *(float**)(a1 + 16);
	v5 = *(float**)(a1 + 24);
	if (v4 != v5)
	{
		v6 = 0i64;
		for (i = ((char*)v5 - (char*)v4) >> 5; i != 1; ++v6)
			i >>= 1;
		sub_140189050((__int64)v4, *(_QWORD*)(a1 + 24), a3, 2 * v6);
		sub_1401891A0(v4, v5);
	}
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 4) = 1;
	return a1 + 8;
}


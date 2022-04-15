//----- (000000014085FFB0) ----------------------------------------------------
__int64 __fastcall sub_14085FFB0(__int64 a1, int a2, char a3)
{
	unsigned int v3; // kr00_4

	v3 = dword_140C110B4;
	*(_BYTE*)(a1 + 383) &= 0xF3u;
	*(_BYTE*)(a1 + 383) |= (unsigned __int8)(8 * (a3 & 1)) | 2;
	*(_DWORD*)(a1 + 372) = a2 * (v3 / 0x3E8);
	return sub_140858700(6u, a1);
}
// 140C110B4: using guessed type int dword_140C110B4;


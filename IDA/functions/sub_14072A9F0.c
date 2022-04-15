//----- (000000014072A9F0) ----------------------------------------------------
__int64 __fastcall sub_14072A9F0(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax

	a1[7] = *a2;
	a1[8] = a2[1];
	a1[9] = a2[2];
	a1[10] = a2[3];
	a1[11] = a2[4];
	a1[12] = a2[5];
	a1[13] = a2[6];
	a1[14] = a2[7];
	a1[15] = a2[8];
	a1[16] = a2[9];
	LODWORD(result) = dword_140C546F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C546F0)
		LODWORD(result) = *(_DWORD*)qword_140C63750;
	result = (int)result;
	if (byte_140C54700[(int)result])
	{
		result = 0i64;
		*(_QWORD*)(a1 + 9) = 2i64;
		a1[8] = 0;
	}
	return result;
}
// 140C546F0: using guessed type int dword_140C546F0;
// 140C54700: using guessed type _BYTE byte_140C54700[32];
// 140C63750: using guessed type __int64 qword_140C63750;


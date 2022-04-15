//----- (0000000140878AA0) ----------------------------------------------------
__int64 __fastcall sub_140878AA0(__int64 a1, char a2)
{
	unsigned __int16 v2; // ax
	__int64 result; // rax

	v2 = *(_WORD*)(a1 + 84);
	if (v2 > 1u)
		*(_WORD*)(a1 + 84) = v2 - 1;
	result = 45i64;
	if (a2)
		return 17i64;
	return result;
}


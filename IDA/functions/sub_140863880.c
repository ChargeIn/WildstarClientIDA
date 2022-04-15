//----- (0000000140863880) ----------------------------------------------------
char __fastcall sub_140863880(__int64 a1)
{
	char v2; // al
	char result; // al

	v2 = sub_14085CE70((__int64*)(a1 + 1056));
	*(_BYTE*)(a1 + 1048) &= ~1u;
	result = v2 & 1;
	*(_BYTE*)(a1 + 1048) |= result;
	return result;
}


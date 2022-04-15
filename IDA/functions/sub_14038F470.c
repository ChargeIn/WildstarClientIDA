//----- (000000014038F470) ----------------------------------------------------
int __fastcall sub_14038F470(__int64 a1, __int16 a2)
{
	int result; // eax

	result = 0;
	if ((a2 & 1) != 0)
		result = 32;
	if ((a2 & 4) != 0)
		result |= 0x40u;
	if ((a2 & 8) != 0)
		result |= 0x80u;
	if ((a2 & 0x800) != 0)
		result |= 0x100u;
	*(_DWORD*)(a1 + 300) &= 0xFFFFFE1F;
	*(_DWORD*)(a1 + 300) |= result;
	return result;
}


//----- (00000001400A8B30) ----------------------------------------------------
__int64 __fastcall sub_1400A8B30(__int64 a1, unsigned __int16* a2)
{
	__int64 result; // rax

	result = sub_1400A8A90(a1, a2);
	if ((int)result >= 0)
	{
		result = sub_1400A8A90(a1, a2 + 1);
		if ((int)result >= 0)
			return sub_1400A8A90(a1, a2 + 2);
	}
	return result;
}


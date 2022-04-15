//----- (000000014009B700) ----------------------------------------------------
__int64 __fastcall sub_14009B700(__int64 a1, unsigned __int16** a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *a2);
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, a2[1]);
		if ((int)result >= 0)
			return sub_140336040(a1, a2[2]);
	}
	return result;
}


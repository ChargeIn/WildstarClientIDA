//----- (000000014007DC80) ----------------------------------------------------
__int64 __fastcall sub_14007DC80(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_14007D9C0(a1, a2);
	if ((int)result >= 0)
	{
		result = sub_14007D010(a1, (unsigned int*)(a2 + 48));
		if ((int)result >= 0)
		{
			result = sub_14007DA70(a1, a2 + 56);
			if ((int)result >= 0)
				return sub_14007D4A0(a1, (unsigned int*)(a2 + 88));
		}
	}
	return result;
}


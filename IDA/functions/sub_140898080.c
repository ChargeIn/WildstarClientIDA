//----- (0000000140898080) ----------------------------------------------------
__int64 __fastcall sub_140898080(__int64 a1)
{
	__int64 result; // rax

	if (*(_BYTE*)(a1 + 74))
	{
		*(_BYTE*)(a1 + 74) = 1;
	}
	else
	{
		if (*(_QWORD*)(a1 + 8))
			result = sub_140898080();
		*(_BYTE*)(a1 + 74) = 1;
	}
	return result;
}


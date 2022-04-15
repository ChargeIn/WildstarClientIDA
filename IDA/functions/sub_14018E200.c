//----- (000000014018E200) ----------------------------------------------------
__int64 __fastcall sub_14018E200(_WORD* a1)
{
	__int64 result; // rax

	result = 0i64;
	if (*a1)
	{
		do
			++result;
		while (a1[result]);
	}
	return result;
}


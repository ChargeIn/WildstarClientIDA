//----- (00000001407E6CBC) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407E6CBC(_WORD* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax

	for (result = 0i64; result < a2; ++a1)
	{
		if (!*a1)
			break;
		++result;
	}
	return result;
}


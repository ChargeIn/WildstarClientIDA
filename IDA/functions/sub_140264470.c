//----- (0000000140264470) ----------------------------------------------------
__int64 __fastcall sub_140264470(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v4; // rdx
	__int64 result; // rax

	v3 = a3;
	if (a3)
	{
		v4 = a2 - a1;
		do
		{
			result = *(unsigned __int16*)(v4 + a1);
			a1 += 2i64;
			*(_WORD*)(a1 - 2) = result;
			--v3;
		} while (v3);
	}
	return result;
}


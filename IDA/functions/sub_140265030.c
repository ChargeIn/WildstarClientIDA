//----- (0000000140265030) ----------------------------------------------------
__int64 __fastcall sub_140265030(_WORD* a1, float* a2, int a3)
{
	float* i; // r9
	__int64 result; // rax

	for (i = &a2[4 * a3]; a2 < i; ++a1)
	{
		if (a1)
		{
			result = (unsigned int)(int)(float)((float)(fmaxf(0.0, fminf(*a2, 1.0)) * 65535.0) + 0.5);
			*a1 = result;
		}
		a2 += 4;
	}
	return result;
}


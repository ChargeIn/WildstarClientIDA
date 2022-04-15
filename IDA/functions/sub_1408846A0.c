//----- (00000001408846A0) ----------------------------------------------------
__int64 __fastcall sub_1408846A0(unsigned int a1, unsigned int a2)
{
	unsigned int k; // r8d
	unsigned int v3; // edx
	char i; // cl
	bool j; // cf
	unsigned int v6; // eax

	k = a2;
	if (a1 < a2)
	{
		k = a1;
		a1 = a2;
	}
	v3 = a1 % k;
	if (a1 % k)
	{
		for (i = 0; (((unsigned __int8)v3 | (unsigned __int8)k) & 1) == 0; ++i)
		{
			k >>= 1;
			v3 >>= 1;
		}
		for (; (k & 1) == 0; k >>= 1)
			;
		for (; (v3 & 1) == 0; v3 >>= 1)
			;
		for (j = k < v3; k != v3; j = k < v3)
		{
			if (j)
			{
				v6 = k;
				k = v3;
				v3 = v6;
			}
			for (k = (k - v3) >> 1; (k & 1) == 0; k >>= 1)
				;
		}
		k <<= i;
	}
	return k;
}


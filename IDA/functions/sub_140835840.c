//----- (0000000140835840) ----------------------------------------------------
__int64 __fastcall sub_140835840(__int64 a1, __int64 a2, float a3, unsigned __int64 a4, char a5)
{
	float* v9; // rax

	sub_1408373C0(a1, a2, a3, a4);
	if (a5)
	{
		if (a2)
			sub_140835110((__int64*)(a1 + 24), a4);
		return 1i64;
	}
	else if (a2)
	{
		*(float*)(a2 + 8) = a3;
		return 1i64;
	}
	else
	{
		v9 = (float*)sub_140834FE0((__int64*)(a1 + 24), a4);
		if (v9)
		{
			v9[2] = a3;
			return 1i64;
		}
		else
		{
			return 2i64;
		}
	}
}


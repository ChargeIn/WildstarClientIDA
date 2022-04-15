//----- (0000000140345630) ----------------------------------------------------
__int64 __fastcall sub_140345630(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
	unsigned int v6; // edi
	int v9; // r8d
	int v11; // ebx
	int v12; // eax

	v6 = 0;
	if (a3)
	{
		v9 = a3 - 1;
		if (v9)
		{
			if (v9 != 1)
				return 2147500037i64;
			v11 = 2;
		}
		else
		{
			v11 = 1;
		}
	}
	else
	{
		v11 = 0;
	}
	v12 = sub_140345250(a1, a6);
	if ((unsigned int)sub_1408272F0(a4, v11, a2, a5, v12, 0) != 1)
		return (unsigned int)-2147467259;
	return v6;
}


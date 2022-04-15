//----- (0000000140445440) ----------------------------------------------------
__int64 __fastcall sub_140445440(unsigned int* a1, int a2)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax

	if (a2)
	{
		v3 = a2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				v5 = v4 - 1;
				if (v5)
				{
					if (v5 != 1)
						return 0i64;
					if (!a1[9])
					{
						a1[9] = 1;
						v7 = sub_140200220(0x44Du);
						if (v7)
						{
							result = *(unsigned int*)(v7 + 20);
							a1[8] = result;
							return result;
						}
						a1[8] = 0;
					}
					return a1[8];
				}
				else
				{
					if (!a1[7])
					{
						a1[7] = 1;
						v8 = sub_140200220(0x44Du);
						if (v8)
						{
							result = *(unsigned int*)(v8 + 16);
							a1[6] = result;
							return result;
						}
						a1[6] = 0;
					}
					return a1[6];
				}
			}
			else
			{
				if (!a1[5])
				{
					a1[5] = 1;
					v9 = sub_140200220(0x44Du);
					if (v9)
					{
						result = *(unsigned int*)(v9 + 12);
						a1[4] = result;
						return result;
					}
					a1[4] = 0;
				}
				return a1[4];
			}
		}
		else
		{
			if (!a1[3])
			{
				a1[3] = 1;
				v10 = sub_140200220(0x44Du);
				if (v10)
				{
					result = *(unsigned int*)(v10 + 8);
					a1[2] = result;
					return result;
				}
				a1[2] = 0;
			}
			return a1[2];
		}
	}
	else
	{
		if (!a1[1])
		{
			a1[1] = 1;
			v11 = sub_140200220(0x44Du);
			if (v11)
			{
				result = *(unsigned int*)(v11 + 4);
				*a1 = result;
				return result;
			}
			*a1 = 0;
		}
		return *a1;
	}
}


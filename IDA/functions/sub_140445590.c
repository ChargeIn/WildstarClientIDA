//----- (0000000140445590) ----------------------------------------------------
float __fastcall sub_140445590(float* a1, int a2)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
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
						return 0.0;
					if (!*((_DWORD*)a1 + 9))
					{
						*((_DWORD*)a1 + 9) = 1;
						v7 = sub_140200220(0x44Du);
						if (v7)
						{
							a1[8] = *(float*)(v7 + 40);
							return a1[8];
						}
						a1[8] = 0.0;
					}
					return a1[8];
				}
				else
				{
					if (!*((_DWORD*)a1 + 7))
					{
						*((_DWORD*)a1 + 7) = 1;
						v8 = sub_140200220(0x44Du);
						if (v8)
						{
							a1[6] = *(float*)(v8 + 36);
							return a1[6];
						}
						a1[6] = 0.0;
					}
					return a1[6];
				}
			}
			else
			{
				if (!*((_DWORD*)a1 + 5))
				{
					*((_DWORD*)a1 + 5) = 1;
					v9 = sub_140200220(0x44Du);
					if (v9)
					{
						a1[4] = *(float*)(v9 + 32);
						return a1[4];
					}
					a1[4] = 0.0;
				}
				return a1[4];
			}
		}
		else
		{
			if (!*((_DWORD*)a1 + 3))
			{
				*((_DWORD*)a1 + 3) = 1;
				v10 = sub_140200220(0x44Du);
				if (v10)
				{
					a1[2] = *(float*)(v10 + 28);
					return a1[2];
				}
				a1[2] = 0.0;
			}
			return a1[2];
		}
	}
	else
	{
		if (!*((_DWORD*)a1 + 1))
		{
			*((_DWORD*)a1 + 1) = 1;
			v11 = sub_140200220(0x44Du);
			if (v11)
			{
				*a1 = *(float*)(v11 + 24);
				return *a1;
			}
			*a1 = 0.0;
		}
		return *a1;
	}
}


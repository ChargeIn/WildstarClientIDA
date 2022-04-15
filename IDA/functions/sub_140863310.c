//----- (0000000140863310) ----------------------------------------------------
bool __fastcall sub_140863310(__int64 a1, float a2, int a3)
{
	int v3; // r8d
	int v4; // r8d
	int v5; // r8d
	bool result; // al

	v3 = a3 - 11;
	if (v3)
	{
		v4 = v3 - 9;
		if (v4)
		{
			v5 = v4 - 1;
			if (v5)
			{
				if (v5 == 43)
				{
					result = a2 > 0.0;
					*(_BYTE*)(a1 + 808) = a2 > 0.0;
				}
			}
			else
			{
				*(float*)(a1 + 800) = a2;
			}
		}
		else
		{
			*(float*)(a1 + 796) = a2;
		}
	}
	else
	{
		*(float*)(a1 + 804) = a2;
	}
	return result;
}


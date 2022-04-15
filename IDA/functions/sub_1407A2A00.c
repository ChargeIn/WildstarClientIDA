//----- (00000001407A2A00) ----------------------------------------------------
__int64 __fastcall sub_1407A2A00(float a1)
{
	if (a1 > 0.0)
	{
		if (a1 < 32000.0)
		{
			if (a1 < 16000.0)
			{
				if (a1 < 8000.0)
				{
					if (a1 < 4000.0)
						return (unsigned int)(a1 >= 2000.0) + 5;
					else
						return 7i64;
				}
				else
				{
					return 8i64;
				}
			}
			else
			{
				return 9i64;
			}
		}
		else
		{
			return 10i64;
		}
	}
	else if (a1 > -32000.0)
	{
		if (a1 > -16000.0)
		{
			if (a1 > -8000.0)
			{
				if (a1 > -4000.0)
					return (unsigned int)(a1 > -2000.0) + 4;
				else
					return 3i64;
			}
			else
			{
				return 2i64;
			}
		}
		else
		{
			return 1i64;
		}
	}
	else
	{
		return 0i64;
	}
}


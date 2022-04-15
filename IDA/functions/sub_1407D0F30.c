//----- (00000001407D0F30) ----------------------------------------------------
__int64 __fastcall sub_1407D0F30(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 result; // rax

	result = sub_1407D7270(a1, a2, a3 + 2);
	if ((int)result >= 0)
	{
		result = sub_1407D7380(a1, a2, a3 + 6);
		if ((int)result >= 0)
		{
			result = sub_1407D7470(a1, a2, a3 + 10);
			if ((int)result >= 0)
			{
				result = sub_1407D7470(a1, a2, a3 + 14);
				if ((int)result >= 0)
				{
					result = sub_1407D7470(a1, a2, a3 + 18);
					if ((int)result >= 0)
					{
						result = sub_1407D7560(a1, a2, a3 + 26);
						if ((int)result >= 0)
						{
							result = sub_1407D75F0(a1, a2, a3 + 32);
							if ((int)result >= 0)
							{
								result = sub_1407D7680(a1, a2, a3 + 22);
								if ((int)result >= 0)
									return 0i64;
							}
						}
					}
				}
			}
		}
	}
	return result;
}


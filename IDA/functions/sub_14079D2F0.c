#include "../winhttp.h"

//----- (000000014079D2F0) ----------------------------------------------------
unsigned int* __fastcall sub_14079D2F0(__int64 a1, int a2)
{
	int v2; // edx
	int v3; // edx
	int v4; // edx
	unsigned int* result; // rax

	if (a2)
	{
		v2 = a2 - 1;
		if (v2)
		{
			v3 = v2 - 1;
			if (v3)
			{
				v4 = v3 - 1;
				if (v4)
				{
					if (v4 == 1)
					{
						if (dword_140DC4DD4)
						{
							return (unsigned int*)(unsigned int)dword_140DC4DD0;
						}
						else
						{
							dword_140DC4DD4 = 1;
							result = (unsigned int*)sub_140200220(0x4F4u);
							if (result)
							{
								result = (unsigned int*)result[5];
								dword_140DC4DD0 = (int)result;
							}
							else
							{
								dword_140DC4DD0 = 0;
							}
						}
					}
					else
					{
						return 0i64;
					}
				}
				else if (dword_140DC4DCC)
				{
					return (unsigned int*)(unsigned int)dword_140DC4DC8;
				}
				else
				{
					dword_140DC4DCC = 1;
					result = (unsigned int*)sub_140200220(0x4F4u);
					if (result)
					{
						result = (unsigned int*)result[4];
						dword_140DC4DC8 = (int)result;
					}
					else
					{
						dword_140DC4DC8 = 0;
					}
				}
			}
			else if (dword_140DC4DC4)
			{
				return (unsigned int*)(unsigned int)dword_140DC4DC0;
			}
			else
			{
				dword_140DC4DC4 = 1;
				result = (unsigned int*)sub_140200220(0x4F4u);
				if (result)
				{
					result = (unsigned int*)result[3];
					dword_140DC4DC0 = (int)result;
				}
				else
				{
					dword_140DC4DC0 = 0;
				}
			}
		}
		else if (dword_140DC4DBC)
		{
			return (unsigned int*)(unsigned int)dword_140DC4DB8;
		}
		else
		{
			dword_140DC4DBC = 1;
			result = (unsigned int*)sub_140200220(0x4F4u);
			if (result)
			{
				result = (unsigned int*)result[2];
				dword_140DC4DB8 = (int)result;
			}
			else
			{
				dword_140DC4DB8 = 0;
			}
		}
	}
	else if (dword_140DC4DB4)
	{
		return (unsigned int*)(unsigned int)dword_140DC4DB0;
	}
	else
	{
		dword_140DC4DB4 = 1;
		result = (unsigned int*)sub_140200220(0x4F4u);
		if (result)
		{
			result = (unsigned int*)result[1];
			dword_140DC4DB0 = (int)result;
		}
		else
		{
			dword_140DC4DB0 = 0;
		}
	}
	return result;
}
// 140DC4DB0: using guessed type int dword_140DC4DB0;
// 140DC4DB4: using guessed type int dword_140DC4DB4;
// 140DC4DB8: using guessed type int dword_140DC4DB8;
// 140DC4DBC: using guessed type int dword_140DC4DBC;
// 140DC4DC0: using guessed type int dword_140DC4DC0;
// 140DC4DC4: using guessed type int dword_140DC4DC4;
// 140DC4DC8: using guessed type int dword_140DC4DC8;
// 140DC4DCC: using guessed type int dword_140DC4DCC;
// 140DC4DD0: using guessed type int dword_140DC4DD0;
// 140DC4DD4: using guessed type int dword_140DC4DD4;


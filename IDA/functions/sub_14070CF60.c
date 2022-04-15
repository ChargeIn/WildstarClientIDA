#include "../winhttp.h"

//----- (000000014070CF60) ----------------------------------------------------
__int64 __fastcall sub_14070CF60(__int64 a1, int a2)
{
	int v2; // edx
	int v3; // edx
	int v4; // edx
	__int64 result; // rax

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
						if (dword_140C8B0D8)
						{
							return qword_140C8B0D0;
						}
						else
						{
							dword_140C8B0D8 = 1;
							result = sub_140200220(0x25Au);
							if (result)
							{
								result = *(unsigned int*)(result + 20);
								qword_140C8B0D0 = result;
							}
							else
							{
								qword_140C8B0D0 = 0i64;
							}
						}
					}
					else
					{
						return 0i64;
					}
				}
				else if (dword_140C8B0C8)
				{
					return qword_140C8B0C0;
				}
				else
				{
					dword_140C8B0C8 = 1;
					result = sub_140200220(0x25Au);
					if (result)
					{
						result = *(unsigned int*)(result + 16);
						qword_140C8B0C0 = result;
					}
					else
					{
						qword_140C8B0C0 = 0i64;
					}
				}
			}
			else if (dword_140C8B0B8)
			{
				return qword_140C8B0B0;
			}
			else
			{
				dword_140C8B0B8 = 1;
				result = sub_140200220(0x25Au);
				if (result)
				{
					result = *(unsigned int*)(result + 12);
					qword_140C8B0B0 = result;
				}
				else
				{
					qword_140C8B0B0 = 0i64;
				}
			}
		}
		else if (dword_140C8B0A8)
		{
			return qword_140C8B0A0;
		}
		else
		{
			dword_140C8B0A8 = 1;
			result = sub_140200220(0x25Au);
			if (result)
			{
				result = *(unsigned int*)(result + 8);
				qword_140C8B0A0 = result;
			}
			else
			{
				qword_140C8B0A0 = 0i64;
			}
		}
	}
	else if (dword_140C8B098)
	{
		return qword_140C8B090;
	}
	else
	{
		dword_140C8B098 = 1;
		result = sub_140200220(0x25Au);
		if (result)
		{
			result = *(unsigned int*)(result + 4);
			qword_140C8B090 = result;
		}
		else
		{
			qword_140C8B090 = 0i64;
		}
	}
	return result;
}
// 140C8B090: using guessed type __int64 qword_140C8B090;
// 140C8B098: using guessed type int dword_140C8B098;
// 140C8B0A0: using guessed type __int64 qword_140C8B0A0;
// 140C8B0A8: using guessed type int dword_140C8B0A8;
// 140C8B0B0: using guessed type __int64 qword_140C8B0B0;
// 140C8B0B8: using guessed type int dword_140C8B0B8;
// 140C8B0C0: using guessed type __int64 qword_140C8B0C0;
// 140C8B0C8: using guessed type int dword_140C8B0C8;
// 140C8B0D0: using guessed type __int64 qword_140C8B0D0;
// 140C8B0D8: using guessed type int dword_140C8B0D8;


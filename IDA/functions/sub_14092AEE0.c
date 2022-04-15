#include "../winhttp.h"

//----- (000000014092AEE0) ----------------------------------------------------
__int64 __fastcall sub_14092AEE0(unsigned int* a1, int a2, int a3, __int64 a4, int a5, unsigned __int64 a6)
{
	char* v10; // rax
	char* v11; // rax
	int v12; // esi
	int v13; // ebp
	char* v14; // rax
	char* v15; // rax

	a1[26] = 0;
	if (!a3 && (a5 & 0x100) == 0)
		return 0i64;
	if ((a5 & 0x200) == 0)
	{
		v12 = 12;
		if (a3 <= 12)
			v12 = a3;
		v13 = a3 & 0x100;
		if ((a3 & 0x100) != 0 && a5 <= 12)
		{
			v12 = a5;
			goto LABEL_24;
		}
		if (a2)
		{
			v14 = sub_14092D140((__int64)a1, 1, v12, 0i64, a5, a6);
			if (v14)
			{
				*v14 = 99;
				goto LABEL_24;
			}
		}
		else
		{
			a1[26] = 1;
			if (!(unsigned int)sub_14092AA10(a1, v12, 0i64, a5, a6))
			{
				a1[26] = 0;
			LABEL_24:
				if (v13)
				{
					a1[26] = 1;
					v15 = sub_14092D140((__int64)a1, 1, v12, 0i64, a3, a4);
					if (!v15)
						return *a1;
					*v15 = -119;
					a1[26] = 0;
				}
				return 0i64;
			}
		}
		return *a1;
	}
	if (a3 <= 12)
	{
		if (!a2 && a6 > 0x7FFFFFFF)
			return sub_14092A980(a1, a3, a6);
		v10 = sub_14092D140((__int64)a1, 1, 512, (int)a6, a3, a4);
		if (!v10)
			return *a1;
		*v10 = -57;
		return 0i64;
	}
	a1[26] = 1;
	v11 = sub_14092D140((__int64)a1, 1, 512, (int)a6, a3, a4);
	if (!v11)
		return *a1;
	*v11 = -57;
	a1[26] = 0;
	return 0i64;
}


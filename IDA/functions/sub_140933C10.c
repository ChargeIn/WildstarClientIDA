#include "../winhttp.h"

//----- (0000000140933C10) ----------------------------------------------------
__int64 __fastcall sub_140933C10(unsigned int a1, _WORD* a2, int a3)
{
	__int16 v3; // r9
	unsigned int v5; // ebx
	unsigned __int16* v7; // rdx
	__int16 i; // ax
	int v9; // r8d
	unsigned int v10; // r8d
	_WORD* v11; // rdx
	unsigned int v12; // r9d

	v3 = *a2;
	v5 = *a2 & 1;
	if (a1 < 0x100
		&& (v3 & 2) != 0
		&& ((unsigned __int8)(1 << (a1 & 7)) & *((_BYTE*)a2 + ((unsigned __int64)a1 >> 3) + 2)) != 0)
	{
		return v5 == 0;
	}
	v7 = a2 + 1;
	if ((v3 & 2) != 0)
		v7 += 16;
	for (i = *v7; *v7; i = *v7)
	{
		++v7;
		if (i == 1)
		{
			v9 = *v7++;
			if (a3)
			{
				if ((v9 & 0xFC00) == 55296)
					v9 = (((v9 & 0x3FF) << 10) | *v7++ & 0x3FF) + 0x10000;
			}
			if (a1 == v9)
				return v5 == 0;
		}
		else if (i == 2)
		{
			v10 = *v7;
			if (a3)
			{
				v11 = v7 + 1;
				if ((v10 & 0xFC00) == 55296)
					v10 = (((v10 & 0x3FF) << 10) | *v11++ & 0x3FF) + 0x10000;
				v12 = (unsigned __int16)*v11;
				v7 = v11 + 1;
				if ((v12 & 0xFC00) == 55296)
					v12 = (((v12 & 0x3FF) << 10) | *v7++ & 0x3FF) + 0x10000;
			}
			else
			{
				v12 = v7[1];
				v7 += 2;
			}
			if (a1 >= v10 && a1 <= v12)
				return v5 == 0;
		}
	}
	return v5;
}


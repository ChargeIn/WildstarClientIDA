#include "../winhttp.h"

//----- (000000014006B0C0) ----------------------------------------------------
void __fastcall sub_14006B0C0(__int64 a1, int* a2)
{
	int v4; // eax
	int v5; // r8d

	sub_14006A700(a1, a2);
	if (*a2 != 1)
	{
		switch (*a2)
		{
		case 2:
			v4 = sub_14006A030((__int64*)a1);
			break;
		case 3:
			goto LABEL_10;
		case 10:
			v4 = a2[2];
			break;
		default:
			v4 = sub_14006AF20((__int64*)a1, a2, 1);
			break;
		}
		if (v4 != -1)
			sub_14006A3C0((__int64*)a1, a2 + 4, v4);
	}
LABEL_10:
	v5 = a2[5];
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
	if (v5 != -1)
		sub_14006A3C0((__int64*)a1, (int*)(a1 + 56), v5);
	a2[5] = -1;
}


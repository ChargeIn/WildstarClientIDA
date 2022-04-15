#include "../winhttp.h"

//----- (00000001400E8D60) ----------------------------------------------------
__int64 __fastcall sub_1400E8D60(char* a1)
{
	unsigned int v1; // r10d
	char** i; // r11
	int v3; // eax
	_BYTE* v4; // r8

	v1 = 0;
	for (i = off_140C2C4D0; ; ++i)
	{
		v3 = **i;
		if (v3 == *a1)
			break;
	LABEL_6:
		if ((unsigned __int64)(int)++v1 >= 0x50)
			return 0i64;
	}
	v4 = a1;
	while ((_BYTE)v3)
	{
		LOBYTE(v3) = (v4++)[*i - a1 + 1];
		if ((_BYTE)v3 != *v4)
			goto LABEL_6;
	}
	return v1;
}
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];


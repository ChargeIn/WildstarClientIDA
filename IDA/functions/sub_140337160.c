#include "../winhttp.h"

//----- (0000000140337160) ----------------------------------------------------
__int64 __fastcall sub_140337160(__int64 a1, _BYTE* a2, __int64 a3)
{
	int v3; // r9d
	__int64 v4; // rbx
	int v7; // eax
	__int64 v9; // [rsp+38h] [rbp+10h] BYREF

	v3 = 0;
	v4 = a3;
	if ((a3 & 1) != 0)
	{
		v7 = sub_140336C60(a1, &v9, 8ui64);
		--v4;
		*a2++ = v9;
		v3 = v7;
	}
	if ((v4 & 2) != 0 && v3 >= 0)
	{
		v4 -= 2i64;
		a2 += 2;
		v3 = sub_140336C60(a1, &v9, 0x10ui64);
		*((_WORD*)a2 - 1) = v9;
	}
	if ((v4 & 4) != 0 && v3 >= 0)
	{
		v4 -= 4i64;
		a2 += 4;
		v3 = sub_140336C60(a1, &v9, 0x20ui64);
		*((_DWORD*)a2 - 1) = v9;
	}
	for (; v4; v4 -= 8i64)
	{
		if (v3 < 0)
			break;
		a2 += 8;
		v3 = sub_140336C60(a1, &v9, 0x40ui64);
		*((_QWORD*)a2 - 1) = v9;
	}
	return (unsigned int)v3;
}


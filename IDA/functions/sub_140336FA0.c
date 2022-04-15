#include "../winhttp.h"

//----- (0000000140336FA0) ----------------------------------------------------
__int64 __fastcall sub_140336FA0(_QWORD* a1, _QWORD* a2)
{
	_QWORD* v2; // rax
	unsigned __int8* v3; // r10
	_QWORD* v4; // r11
	__int64 v6; // rdx
	unsigned __int64 v7; // rdi
	__int64 v8; // rbx
	unsigned __int64 v10; // r9
	char v11; // cl

	v2 = (_QWORD*)a1[6];
	v3 = (unsigned __int8*)a1[3];
	v4 = (_QWORD*)a1[2];
	*a2 = 0i64;
	v6 = a1[4];
	v7 = 0i64;
	v8 = v6;
	if (v2)
		v2 = (_QWORD*)*v2;
	if (!v4)
	{
		if (!v2)
			return 2147942438i64;
		v3 = (unsigned __int8*)v2[2];
		v4 = v2;
		v8 = 0i64;
	}
	if (v4[4] - a1[3] < (unsigned __int64)(v6 + 39) >> 3)
	{
		if (!v2)
			return 2147942438i64;
		do
		{
			if (v3 == (unsigned __int8*)v4[4])
			{
				v2 = (_QWORD*)v2[7];
				if (!v2)
					return 2147942438i64;
				v3 = (unsigned __int8*)v2[2];
				v4 = v2;
				v8 = 0i64;
			}
			else
			{
				v10 = 8 - v8;
				if (8 - v8 > 32 - v7)
					v10 = 32 - v7;
				v11 = v7;
				v7 += v10;
				*a2 |= (((1i64 << v10) - 1) & ((unsigned __int64)*v3 >> v8)) << v11;
				v8 = ((_BYTE)v10 + (_BYTE)v8) & 7;
				if (!(_DWORD)v8)
					++v3;
			}
		} while (v7 < 0x20);
		return 0i64;
	}
	else
	{
		*a2 = (unsigned int)sub_14001B320(a1[3], v6, 0x20ui64);
		return 0i64;
	}
}


#include "../winhttp.h"

//----- (00000001407F7F18) ----------------------------------------------------
__int64 __fastcall sub_1407F7F18(int a1, int a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	__int64 v4; // r9
	char v5; // cl
	int v6; // r11d
	__int64 v7; // rax
	__int64 v8; // rax

	v2 = (__int64)a1 >> 5;
	v3 = 88i64 * (a1 & 0x1F);
	v4 = qword_140C60410[v2];
	v5 = *(_BYTE*)(v4 + v3 + 8);
	v6 = (char)(2 * *(_BYTE*)(v4 + v3 + 56)) >> 1;
	if (a2 == 0x4000)
	{
		*(_BYTE*)(v4 + v3 + 8) = v5 | 0x80;
		*(_BYTE*)(qword_140C60410[v2] + v3 + 56) &= 0x80u;
	}
	else if (a2 == 0x8000)
	{
		*(_BYTE*)(v4 + v3 + 8) = v5 & 0x7F;
	}
	else if (((a2 - 0x10000) & 0xFFFEFFFF) != 0)
	{
		if (a2 == 0x40000)
		{
			*(_BYTE*)(v4 + v3 + 8) = v5 | 0x80;
			v7 = qword_140C60410[v2];
			*(_BYTE*)(v7 + v3 + 56) &= 0x81u;
			*(_BYTE*)(v7 + v3 + 56) |= 1u;
		}
	}
	else
	{
		*(_BYTE*)(v4 + v3 + 8) = v5 | 0x80;
		v8 = qword_140C60410[v2];
		*(_BYTE*)(v8 + v3 + 56) &= 0x82u;
		*(_BYTE*)(v8 + v3 + 56) |= 2u;
	}
	if ((v5 & 0x80) != 0)
		return v6 != 0 ? 0x10000 : 0x4000;
	else
		return 0x8000i64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];


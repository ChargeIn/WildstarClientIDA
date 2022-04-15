#include "../winhttp.h"

//----- (00000001407F0D9C) ----------------------------------------------------
__int64 __fastcall sub_1407F0D9C(WCHAR* a1, WCHAR* a2, __int64 a3)
{
	unsigned int v3; // r9d
	__int64 v4; // r11
	signed __int64 v6; // r10
	unsigned __int16 v7; // cx
	WCHAR v8; // r8

	v3 = 0;
	v4 = a3;
	if (dword_140C5F560)
		return sub_1407F0E34(a1, a2, a3, 0i64);
	if (a3)
	{
		if (!a1 || !a2)
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return 0x7FFFFFFFi64;
		}
		v6 = (char*)a1 - (char*)a2;
		do
		{
			v7 = *(WCHAR*)((char*)a2 + v6);
			if ((unsigned __int16)(v7 - 65) <= 0x19u)
				v7 += 32;
			v8 = *a2;
			if ((unsigned __int16)(*a2 - 65) <= 0x19u)
				v8 += 32;
			++a2;
			--v4;
		} while (v4 && v7 && v7 == v8);
		return v7 - (unsigned int)v8;
	}
	return v3;
}
// 140C5F560: using guessed type int dword_140C5F560;


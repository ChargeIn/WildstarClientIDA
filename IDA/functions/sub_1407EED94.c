#include "../winhttp.h"

//----- (00000001407EED94) ----------------------------------------------------
__int64 __fastcall sub_1407EED94(int a1)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	unsigned int v4; // edi

	if (a1 == -2)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		return 0xFFFFFFFFi64;
	}
	if (a1 < 0
		|| a1 >= (unsigned int)dword_140DC523C
		|| (v2 = (__int64)a1 >> 5, v3 = 88i64 * (a1 & 0x1F), (*(_BYTE*)(qword_140C60410[v2] + v3 + 8) & 1) == 0))
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	sub_1407F5268(a1);
	if ((*(_BYTE*)(qword_140C60410[v2] + v3 + 8) & 1) != 0)
	{
		v4 = sub_1407EEE58(a1);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		v4 = -1;
	}
	sub_1407F56C8(a1);
	return v4;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;


#include "../winhttp.h"

//----- (00000001407F0FB0) ----------------------------------------------------
__int64 __fastcall sub_1407F0FB0(int a1, LARGE_INTEGER a2, DWORD a3)
{
	__int64 v6; // rsi
	__int64 v7; // rbx
	LARGE_INTEGER v8; // rbx

	if (a1 == -2)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		return -1i64;
	}
	if (a1 < 0
		|| a1 >= (unsigned int)dword_140DC523C
		|| (v6 = (__int64)a1 >> 5, v7 = 88i64 * (a1 & 0x1F), (*(_BYTE*)(qword_140C60410[v6] + v7 + 8) & 1) == 0))
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		sub_1407DC370();
		return -1i64;
	}
	sub_1407F5268(a1);
	if ((*(_BYTE*)(qword_140C60410[v6] + v7 + 8) & 1) != 0)
	{
		v8 = sub_1407F1094(a1, a2, a3);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		*(_DWORD*)sub_1407DE140() = 0;
		v8.QuadPart = -1i64;
	}
	sub_1407F56C8(a1);
	return v8.QuadPart;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;


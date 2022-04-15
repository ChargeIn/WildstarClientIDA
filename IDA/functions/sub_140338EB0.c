#include "../winhttp.h"

//----- (0000000140338EB0) ----------------------------------------------------
__int64 __fastcall sub_140338EB0(__int64 a1, DWORD a2, __int64 a3)
{
	__int64 v7[2]; // [rsp+40h] [rbp-1038h] BYREF
	char Buffer[4096]; // [rsp+50h] [rbp-1028h] BYREF

	sub_1401B3450(Buffer, 2048i64, a2);
	if (a3)
	{
		if (!*(_WORD*)(a3 + 78))
			sub_140334D90(a3);
		v7[0] = 0x141DECDB8i64;
		return sub_1401A3130(11, 0, v7, a1, a3 + 78, a2, Buffer);
	}
	else
	{
		v7[0] = 0x141DECD90i64;
		return sub_1401A3130(11, 0, v7, a1, a2, Buffer);
	}
}
// 140338EB0: using guessed type char Buffer[4096];


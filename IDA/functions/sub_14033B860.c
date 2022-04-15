//----- (000000014033B860) ----------------------------------------------------
__int64 __fastcall sub_14033B860(__int64 a1, int a2, __int64 a3)
{
	unsigned int v6; // r8d
	__int64 v8[2]; // [rsp+40h] [rbp-1038h] BYREF
	char Buffer[4096]; // [rsp+50h] [rbp-1028h] BYREF

	if (a2 > 0)
		v6 = (unsigned __int16)a2 | 0x80070000;
	else
		v6 = a2;
	sub_1401B3450(Buffer, 2048i64, v6);
	if (a3)
	{
		if (!*(_WORD*)(a3 + 78))
			sub_140334D90(a3);
		v8[0] = 0x141DECF98i64;
		return sub_1401A3130(99, 0, v8, a1, a3 + 78, a2, Buffer);
	}
	else
	{
		v8[0] = 0x141DED238i64;
		return sub_1401A3130(99, 0, v8, a1, a2, Buffer);
	}
}
// 14033B860: using guessed type char Buffer[4096];


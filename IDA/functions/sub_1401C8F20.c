//----- (00000001401C8F20) ----------------------------------------------------
__int64 __fastcall sub_1401C8F20(__int64 a1)
{
	__int16 v1; // ax
	__int16 j; // ax
	__int16 i; // ax

	v1 = *(_WORD*)(a1 + 28);
	*(_BYTE*)(v1 + a1 + 30) = 0x80;
	if (v1 <= 55)
	{
		for (i = ++ * (_WORD*)(a1 + 28); i < 56; i = *(_WORD*)(a1 + 28))
		{
			*(_BYTE*)(i + a1 + 30) = 0;
			++* (_WORD*)(a1 + 28);
		}
	}
	else
	{
		for (j = ++ * (_WORD*)(a1 + 28); j < 64; j = *(_WORD*)(a1 + 28))
		{
			*(_BYTE*)(j + a1 + 30) = 0;
			++* (_WORD*)(a1 + 28);
		}
		sub_1401C8CE0((int*)a1);
		for (; *(__int16*)(a1 + 28) < 56; ++ * (_WORD*)(a1 + 28))
			*(_BYTE*)(*(__int16*)(a1 + 28) + a1 + 30) = 0;
	}
	*(_BYTE*)(a1 + 86) = *(_BYTE*)(a1 + 27);
	*(_BYTE*)(a1 + 87) = *(_BYTE*)(a1 + 26);
	*(_BYTE*)(a1 + 88) = BYTE1(*(_DWORD*)(a1 + 24));
	*(_BYTE*)(a1 + 89) = *(_BYTE*)(a1 + 24);
	*(_BYTE*)(a1 + 90) = *(_BYTE*)(a1 + 23);
	*(_BYTE*)(a1 + 91) = *(_BYTE*)(a1 + 22);
	*(_BYTE*)(a1 + 92) = BYTE1(*(_DWORD*)(a1 + 20));
	*(_BYTE*)(a1 + 93) = *(_BYTE*)(a1 + 20);
	return sub_1401C8CE0((int*)a1);
}


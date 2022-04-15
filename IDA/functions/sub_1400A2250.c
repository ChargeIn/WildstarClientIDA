//----- (00000001400A2250) ----------------------------------------------------
__int64 __fastcall sub_1400A2250(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006BF60(a1, (_WORD*)a3, 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BF60(a1, (_WORD*)(a3 + 2), 0x10ui64);
		if ((int)result >= 0)
		{
			result = sub_140337160(a1, (_BYTE*)(a3 + 4), 32i64);
			if ((int)result >= 0)
				return sub_14006BE30(a1, (_BYTE*)(a3 + 36), 8ui64);
		}
	}
	return result;
}


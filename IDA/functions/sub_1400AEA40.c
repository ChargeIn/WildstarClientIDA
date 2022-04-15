//----- (00000001400AEA40) ----------------------------------------------------
__int64 __fastcall sub_1400AEA40(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result < 0)
		return result;
	if (a3 == -4)
		return 2147500037i64;
	result = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, (_DWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 4ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 1ui64);
					if ((int)result >= 0)
						return sub_14006C090(a1, (_DWORD*)(a3 + 24), 1ui64);
				}
			}
		}
	}
	return result;
}


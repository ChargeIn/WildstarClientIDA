//----- (00000001400A2EB0) ----------------------------------------------------
__int64 __fastcall sub_1400A2EB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	unsigned __int16 v7; // [rsp+40h] [rbp+18h] BYREF

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 3ui64);
	if ((int)result >= 0)
	{
		if (a3 == -8)
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					v7 = 0;
					result = sub_14006BF60(a1, &v7, 0x10ui64);
					if ((int)result >= 0)
					{
						result = sub_140337160(a1, (_BYTE*)(a3 + 24), 2i64 * v7);
						if ((int)result >= 0)
						{
							*(_WORD*)(a3 + 88) = 0;
							return sub_14006C090(a1, (_DWORD*)(a3 + 92), 0xEui64);
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400A2F2A: variable 'v6' is possibly undefined


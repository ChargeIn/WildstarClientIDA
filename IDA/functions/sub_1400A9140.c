//----- (00000001400A9140) ----------------------------------------------------
__int64 __fastcall sub_1400A9140(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
					if ((int)result >= 0)
					{
						result = sub_14006BF60(a1, (_WORD*)(a3 + 24), 0x10ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 5ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C120(a1, (__int64*)(a3 + 40), v7);
										if ((int)result >= 0)
											return sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400A91D0: variable 'v6' is possibly undefined
// 1400A9238: variable 'v7' is possibly undefined


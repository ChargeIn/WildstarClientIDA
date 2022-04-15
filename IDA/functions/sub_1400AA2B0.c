//----- (00000001400AA2B0) ----------------------------------------------------
__int64 __fastcall sub_1400AA2B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8
	__int64 v8; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x12ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 32), v7);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C120(a1, (__int64*)(a3 + 48), v8);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x12ui64);
									if ((int)result >= 0)
										return sub_140337160(a1, (_BYTE*)(a3 + 60), 20i64);
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
// 1400AA326: variable 'v6' is possibly undefined
// 1400AA34C: variable 'v7' is possibly undefined
// 1400AA372: variable 'v8' is possibly undefined


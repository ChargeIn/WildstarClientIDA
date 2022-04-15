//----- (00000001400AE470) ----------------------------------------------------
__int64 __fastcall sub_1400AE470(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C1C0(a1, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, a3 + 1);
		if ((int)result >= 0)
		{
			result = sub_14006C1C0(a1, a3 + 2);
			if ((int)result >= 0)
			{
				result = sub_1400A8A30(a1, v6, a3 + 3);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 6, 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C1C0(a1, a3 + 7);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, a3 + 8, 0x20ui64);
							if ((int)result >= 0)
								return sub_14006C090(a1, a3 + 9, 1ui64);
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400AE4C8: variable 'v6' is possibly undefined


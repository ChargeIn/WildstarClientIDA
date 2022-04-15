//----- (00000001400ADEC0) ----------------------------------------------------
__int64 __fastcall sub_1400ADEC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, (_DWORD*)(a3 + 4));
		if ((int)result >= 0)
		{
			result = sub_14006C1C0(a1, (_DWORD*)(a3 + 8));
			if ((int)result >= 0)
			{
				result = sub_1400A8B70(a1, v6, (_WORD*)(a3 + 12));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 4ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 1ui64);
								if ((int)result >= 0)
									return sub_14006C090(a1, (_DWORD*)(a3 + 36), 1ui64);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400ADF26: variable 'v6' is possibly undefined


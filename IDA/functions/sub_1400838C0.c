//----- (00000001400838C0) ----------------------------------------------------
__int64 __fastcall sub_1400838C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			if (a3 == -16)
			{
				return 2147500037i64;
			}
			else
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0xEui64);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 24), v6);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
						if ((int)result >= 0)
							return sub_14006C090(a1, (_DWORD*)(a3 + 36), 1ui64);
					}
				}
			}
		}
	}
	return result;
}
// 14008394A: variable 'v6' is possibly undefined


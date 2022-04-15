//----- (00000001400841D0) ----------------------------------------------------
__int64 __fastcall sub_1400841D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
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
					result = sub_1400A8BF0(a1, v7, (_DWORD*)(a3 + 24));
					if ((int)result >= 0)
						return sub_14006C090(a1, (_DWORD*)(a3 + 56), 1ui64);
				}
			}
		}
	}
	return result;
}
// 140084240: variable 'v6' is possibly undefined
// 140084250: variable 'v7' is possibly undefined


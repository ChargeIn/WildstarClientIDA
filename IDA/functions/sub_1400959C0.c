//----- (00000001400959C0) ----------------------------------------------------
__int64 __fastcall sub_1400959C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 0x11ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 3, 0x11ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 4, 0x11ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 5, 0x20ui64);
						if ((int)result >= 0)
							return sub_1400A8A30(a1, v6, a3 + 6);
					}
				}
			}
		}
	}
	return result;
}
// 140095A6C: variable 'v6' is possibly undefined


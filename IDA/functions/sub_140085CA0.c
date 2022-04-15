//----- (0000000140085CA0) ----------------------------------------------------
__int64 __fastcall sub_140085CA0(__int64 a1, __int64 a2, int* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BF60(a1, (_WORD*)a3 + 2, 0x10ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BF60(a1, (_WORD*)a3 + 3, 0x10ui64);
			if ((int)result >= 0)
			{
				v7 = *a3;
				if (v7 >= 0xC)
					return 2147500037i64;
				return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_140085D2A[v7])(a1, a2, a3 + 2);
			}
		}
	}
	return result;
}
// 140C1EC90: using guessed type __int64 (__fastcall *funcs_140085D2A[43])();


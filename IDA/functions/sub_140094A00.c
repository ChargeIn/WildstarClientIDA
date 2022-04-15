//----- (0000000140094A00) ----------------------------------------------------
__int64 __fastcall sub_140094A00(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BE30(a1, (_BYTE*)(a3 + 8), 8ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A8A30(a1, v6, (_DWORD*)(a3 + 12));
				if ((int)result >= 0)
				{
					result = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
					if ((int)result >= 0)
						return sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
				}
			}
		}
	}
	return result;
}
// 140094A6A: variable 'v6' is possibly undefined


//----- (00000001400A8BF0) ----------------------------------------------------
__int64 __fastcall sub_1400A8BF0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3 + 2, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 3, 0xFui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 4, 0x20ui64);
			if ((int)result >= 0)
				return sub_14006C090(a1, a3 + 6, 0x20ui64);
		}
	}
	return result;
}


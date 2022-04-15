//----- (0000000140091140) ----------------------------------------------------
__int64 __fastcall sub_140091140(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x11ui64);
		if ((int)result >= 0)
		{
			result = sub_140337160(a1, (_BYTE*)(a3 + 16), 32i64);
			if ((int)result >= 0)
				return sub_14006C1C0(a1, (_DWORD*)(a3 + 48));
		}
	}
	return result;
}


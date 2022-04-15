//----- (00000001400A37D0) ----------------------------------------------------
__int64 __fastcall sub_1400A37D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 2ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BE30(a1, (_BYTE*)(a3 + 8), 8ui64);
			if ((int)result >= 0)
				return sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
		}
	}
	return result;
}


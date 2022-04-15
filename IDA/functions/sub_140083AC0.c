//----- (0000000140083AC0) ----------------------------------------------------
__int64 __fastcall sub_140083AC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			v6 = a3 + 16;
			if (!v6)
				return 2147500037i64;
			result = sub_14006C090(a1, (_DWORD*)v6, 0xEui64);
			if ((int)result >= 0)
				return sub_14006C120(a1, (__int64*)(v6 + 8), v7);
		}
	}
	return result;
}
// 140083B29: variable 'v7' is possibly undefined


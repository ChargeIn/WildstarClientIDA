//----- (000000014008C450) ----------------------------------------------------
__int64 __fastcall sub_14008C450(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xFui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
				return sub_14006C120(a1, (__int64*)(a3 + 16), v6);
		}
	}
	return result;
}
// 14008C4BA: variable 'v6' is possibly undefined


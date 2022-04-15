//----- (0000000140099840) ----------------------------------------------------
__int64 __fastcall sub_140099840(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rbx
	__int64 v8; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
		{
			v7 = a3 + 16;
			if (!v7)
				return 2147500037i64;
			result = sub_14006C090(a1, (_DWORD*)v7, 0xEui64);
			if ((int)result >= 0)
				return sub_14006C120(a1, (__int64*)(v7 + 8), v8);
		}
	}
	return result;
}
// 14009986E: variable 'v6' is possibly undefined
// 1400998A9: variable 'v8' is possibly undefined


//----- (0000000140085060) ----------------------------------------------------
__int64 __fastcall sub_140085060(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
			return sub_1400A8A30(a1, v7, (_DWORD*)(a3 + 16));
	}
	return result;
}
// 14008509E: variable 'v6' is possibly undefined
// 1400850AE: variable 'v7' is possibly undefined


//----- (0000000140090730) ----------------------------------------------------
__int64 __fastcall sub_140090730(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_140337160(a1, (_BYTE*)(a3 + 8), 40i64);
		if ((int)result >= 0)
			return sub_14006C120(a1, (__int64*)(a3 + 48), v6);
	}
	return result;
}
// 14009077E: variable 'v6' is possibly undefined


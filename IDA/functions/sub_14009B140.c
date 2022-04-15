//----- (000000014009B140) ----------------------------------------------------
__int64 __fastcall sub_14009B140(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 8ui64);
	if ((int)result >= 0)
	{
		result = sub_140099BB0(a1, v6, a3 + 8);
		if ((int)result >= 0)
			return sub_14006C120(a1, (__int64*)(a3 + 64), v7);
	}
	return result;
}
// 14009B17E: variable 'v6' is possibly undefined
// 14009B18E: variable 'v7' is possibly undefined


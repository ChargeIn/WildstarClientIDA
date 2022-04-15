//----- (00000001400A0300) ----------------------------------------------------
__int64 __fastcall sub_1400A0300(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
		return sub_1400A9C20(a1, v6, (__int64)(a3 + 2));
	return result;
}
// 1400A033E: variable 'v6' is possibly undefined


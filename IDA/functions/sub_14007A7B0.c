//----- (000000014007A7B0) ----------------------------------------------------
__int64 __fastcall sub_14007A7B0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xEui64);
	if ((int)result >= 0)
		return sub_14007A730(a1, v6, a3 + 1);
	return result;
}
// 14007A7EE: variable 'v6' is possibly undefined


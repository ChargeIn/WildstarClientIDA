//----- (000000014009C920) ----------------------------------------------------
__int64 __fastcall sub_14009C920(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64* v6; // rbx
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result < 0)
		return result;
	v6 = (__int64*)(a3 + 2);
	if (!v6)
		return 2147500037i64;
	result = sub_14006C090(a1, v6, 0xEui64);
	if ((int)result >= 0)
		return sub_14006C120(a1, v6 + 1, v7);
	return result;
}
// 14009C979: variable 'v7' is possibly undefined


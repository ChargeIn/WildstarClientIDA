//----- (000000014009F960) ----------------------------------------------------
__int64 __fastcall sub_14009F960(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 1ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 1ui64);
		if ((int)result >= 0)
			return sub_14009F0A0(a1, v6, a3 + 2);
	}
	return result;
}
// 14009F9B4: variable 'v6' is possibly undefined

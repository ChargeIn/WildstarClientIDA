//----- (00000001401B5400) ----------------------------------------------------
__int64 __fastcall sub_1401B5400(__int64 a1, WCHAR* a2, __int64 a3, const WCHAR* a4, const WCHAR* a5)
{
	__int64 result; // rax
	WCHAR v8; // cx
	char v9[528]; // [rsp+30h] [rbp-228h] BYREF

	if (a5)
	{
		if (!*a5)
		{
			result = 0i64;
			*a2 = 0;
			return result;
		}
		if (*a5 == 92 || (v8 = a5[1], v8 == 58) || v8 && a5[2] == 58)
		{
			a4 = a5;
		}
		else
		{
			sub_14001B370(v9, 260i64, L"%s\\%s");
			a4 = (const WCHAR*)v9;
		}
	}
	result = GetFullPathNameW(a4, 0x104u, a2, 0i64);
	if ((_DWORD)result)
	{
		if (a2[(unsigned int)result - 1] == 92)
		{
			result = (unsigned int)result - 1i64;
			a2[result] = 0;
		}
	}
	return result;
}
// 140A47428: using guessed type wchar_t aSS_9[6];


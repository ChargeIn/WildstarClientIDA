//----- (00000001407E0740) ----------------------------------------------------
__int64 __fastcall sub_1407E0740(const WCHAR* a1, _WORD* a2, int a3)
{
	__int64 v7; // rax
	unsigned __int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // [rsp+0h] [rbp-48h] BYREF
	__int64* v11; // [rsp+20h] [rbp-28h]

	v11 = &v10;
	if (!a1 || !a2 || !*a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v7 = sub_1407EE90C();
	v8 = v7;
	if (!v7)
	{
		*(_DWORD*)sub_1407DE1B0() = 24;
		return 0i64;
	}
	if (*a1)
	{
		v9 = sub_1407EEA40(a1, a2, a3, v7);
		sub_1407DE044(v8);
		return v9;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407EED30(v11, &loc_1407E07E6);
		return 0i64;
	}
}


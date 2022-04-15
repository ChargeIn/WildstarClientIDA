//----- (00000001404C6650) ----------------------------------------------------
void __fastcall sub_1404C6650(__int64 a1, int a2)
{
	int v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	void(__fastcall * v6)(__int64*); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	if (!*(_QWORD*)(a1 + 704))
	{
		(**(void(__fastcall***)(__int64))a1)(a1);
		v4 = 0;
		v5 = a1;
		v6 = sub_1404C66D0;
		v7 = 0i64;
		sub_140195960(a1 + 688, 100, (__int64)&v4, 4);
		*(_DWORD*)(a1 + 760) = 0;
		*(_DWORD*)(a1 + 764) = a2;
	}
}


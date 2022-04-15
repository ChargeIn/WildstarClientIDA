//----- (00000001404D9CA0) ----------------------------------------------------
void __fastcall sub_1404D9CA0(__int64 a1, int a2)
{
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	void(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v3 = 0;
		v4 = sub_14001C280(a1);
		v6 = 0i64;
		v5 = sub_1404D9D30;
		sub_140195960(a1 + 30648, dword_140C65904, (__int64)&v3, 4);
	}
	else
	{
		*(_DWORD*)(a1 + 30196) = 0;
		sub_140195D70(a1 + 30648);
		if (*(_DWORD*)(a1 + 25480))
			*(_BYTE*)(a1 + 25508) |= 1u;
	}
}
// 140C65904: using guessed type int dword_140C65904;


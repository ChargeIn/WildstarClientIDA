//----- (00000001404D9A10) ----------------------------------------------------
void __fastcall sub_1404D9A10(__int64 a1, int a2, int a3)
{
	int v4; // eax
	__int64 v5; // rcx
	int v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	void(__fastcall * v8)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v4 = dword_140C49E80;
		if (*(_DWORD*)qword_140C63750 < dword_140C49E80)
			v4 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C49E90 + v4))
		{
			if (a3 == 4)
				sub_14039EFF0(a1, 4, 0);
		}
		v6 = 0;
		v7 = sub_14001C280(a1);
		v9 = 0i64;
		v8 = sub_1404D9AD0;
		sub_140195960(a1 + 30432, dword_140C65904, (__int64)&v6, 4);
	}
	else
	{
		v5 = a1 + 30432;
		*(_DWORD*)(v5 - 248) = 0;
		sub_140195D70(v5);
	}
}
// 140C49E80: using guessed type int dword_140C49E80;
// 140C49E90: using guessed type int dword_140C49E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65904: using guessed type int dword_140C65904;


//----- (00000001404D9870) ----------------------------------------------------
void __fastcall sub_1404D9870(__int64 a1, int a2, int a3)
{
	int v4; // eax
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	void(__fastcall * v7)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		dword_140C89AA0 = 0;
		v4 = dword_140C49E80;
		if (*(_DWORD*)qword_140C63750 < dword_140C49E80)
			v4 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C49E90 + v4))
		{
			if (a3 == 4)
				sub_14039EFF0(a1, 2, 0);
		}
		v5 = 0;
		v6 = sub_14001C280(a1);
		v8 = 0i64;
		v7 = sub_1404D9930;
		sub_140195960(a1 + 30288, dword_140C65904, (__int64)&v5, 4);
	}
	else
	{
		*(_DWORD*)(a1 + 30176) = 0;
		sub_140195D70(a1 + 30288);
	}
}
// 140C49E80: using guessed type int dword_140C49E80;
// 140C49E90: using guessed type int dword_140C49E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65904: using guessed type int dword_140C65904;
// 140C89AA0: using guessed type int dword_140C89AA0;


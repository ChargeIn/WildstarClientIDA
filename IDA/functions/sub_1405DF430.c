//----- (00000001405DF430) ----------------------------------------------------
void __fastcall sub_1405DF430(__int64 a1)
{
	int v1; // edx
	int v2; // eax
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	*(_DWORD*)(a1 + 836) = *(_DWORD*)(qword_140C65898 + 31560) != 127;
	if (!*(_DWORD*)(a1 + 752))
	{
		v3 = 0;
		v6 = 0i64;
		v1 = *(_DWORD*)qword_140C63750;
		v5 = sub_1405DF4C0;
		v2 = dword_140C7E180;
		v4 = a1;
		if (v1 < dword_140C7E180)
			v2 = v1;
		sub_140195960(a1 + 840, 1000 * *((_DWORD*)&xmmword_140C7E190 + v2), (__int64)&v3, 4);
	}
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E180: using guessed type int dword_140C7E180;
// 140C7E190: using guessed type __int128 xmmword_140C7E190;


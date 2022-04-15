#include "../winhttp.h"

//----- (00000001404D9AE0) ----------------------------------------------------
void __fastcall sub_1404D9AE0(__int64 a1, int a2, int a3)
{
	int v5; // eax
	__int64 v6; // rcx
	int v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	void(__fastcall * v9)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v10; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		if (sub_1404DAC20(a1))
		{
			v5 = dword_140C49E80;
			if (*(_DWORD*)qword_140C63750 < dword_140C49E80)
				v5 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C49E90 + v5))
			{
				if (a3 == 4)
					sub_14039EFF0(a1, 3, 0);
			}
		}
		v7 = 0;
		v8 = sub_14001C280(a1);
		v10 = 0i64;
		v9 = sub_1404D9BB0;
		sub_140195960(a1 + 30504, dword_140C65904, (__int64)&v7, 4);
	}
	else
	{
		v6 = a1 + 30504;
		*(_DWORD*)(v6 - 316) = 0;
		sub_140195D70(v6);
	}
}
// 140C49E80: using guessed type int dword_140C49E80;
// 140C49E90: using guessed type int dword_140C49E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65904: using guessed type int dword_140C65904;


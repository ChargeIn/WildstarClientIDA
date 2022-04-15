#include "../winhttp.h"

//----- (000000014057E670) ----------------------------------------------------
void __fastcall sub_14057E670(_QWORD* a1, __int128* a2)
{
	__int128 v2; // xmm1
	__int128 v3; // [rsp+20h] [rbp-68h]
	__int128 v4; // [rsp+30h] [rbp-58h] BYREF
	__int128 v5; // [rsp+40h] [rbp-48h] BYREF
	__int128 v6; // [rsp+50h] [rbp-38h]
	__int128 v7; // [rsp+60h] [rbp-28h]

	v4 = 0ui64;
	v5 = 0ui64;
	v6 = 0ui64;
	v7 = 0ui64;
	LODWORD(v3) = *(_DWORD*)(qword_140C635F0 + 5760);
	*((_QWORD*)&v3 + 1) = *a1;
	v4 = v3;
	if (a2)
	{
		v2 = a2[1];
		v5 = *a2;
		v6 = v2;
		v7 = a2[2];
	}
	else
	{
		sub_1407E4830((int*)&v5, 0i64, 0x30ui64);
	}
	sub_1403F4900(qword_140C65898, 0x4A6u, (__int64)&v4);
}
// 14057E6CB: variable 'v3' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


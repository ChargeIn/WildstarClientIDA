#include "../winhttp.h"

//----- (00000001403A1AA0) ----------------------------------------------------
void __fastcall sub_1403A1AA0(__int64 a1)
{
	int v2[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v3; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v4)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v5; // [rsp+38h] [rbp-20h]
	int v6; // [rsp+40h] [rbp-18h]

	if (!*(_DWORD*)(a1 + 29776)
		&& ((unsigned int)sub_14055A260((_DWORD*)(a1 + 29488))
			|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088))))
	{
		v2[0] = 4;
		v2[1] = 1;
		v3 = sub_14001C280(a1);
		v5 = 0i64;
		v6 = 1;
		v4 = sub_1403A1B40;
		sub_14019DCA0((__int64)v2, 0, 0i64, (int**)(a1 + 27872));
	}
}


#include "../winhttp.h"

//----- (0000000140611E30) ----------------------------------------------------
__int64 __fastcall sub_140611E30(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	int v4; // edx
	int v6; // [rsp+20h] [rbp-28h]
	int v7; // [rsp+28h] [rbp-20h]
	int v8; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD*)a2;
	if (*(_QWORD*)a2 != qword_140C65938)
	{
		v4 = *(_DWORD*)(a2 + 8);
		qword_140C65938 = v2;
		sub_140489AA0(a1, v4);
		v8 = *(_DWORD*)(a2 + 8) & 8;
		v7 = *(_DWORD*)(a2 + 8) & 4;
		v6 = *(_DWORD*)(a2 + 8) & 2;
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"QuestPeriodicReset",
			"bbbb",
			*(_DWORD*)(a2 + 8) & 1,
			v6,
			v7,
			v8);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65938: using guessed type __int64 qword_140C65938;


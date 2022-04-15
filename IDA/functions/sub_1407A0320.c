#include "../winhttp.h"

//----- (00000001407A0320) ----------------------------------------------------
void __fastcall sub_1407A0320(__int64 a1, unsigned int a2)
{
	int v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	int(__fastcall * v6)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(a1 + 32))
		sub_140195D70(a1 + 16);
	*(_DWORD*)a1 = dword_140C636A8;
	if (a2 > *(_DWORD*)(a1 + 88))
		*(_DWORD*)(a1 + 88) = a2;
	v4 = 0;
	v7 = 0i64;
	v5 = a1;
	v6 = sub_1407A0390;
	sub_140195960(a1 + 16, a2, (__int64)&v4, 4);
}
// 140C636A8: using guessed type int dword_140C636A8;


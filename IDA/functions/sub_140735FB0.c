#include "../winhttp.h"

//----- (0000000140735FB0) ----------------------------------------------------
__int64 __fastcall sub_140735FB0(_QWORD* a1)
{
	int v1; // eax
	__int64 v2; // rcx
	__int64 v3; // rax
	int v5; // [rsp+20h] [rbp-38h]
	__int64 v6; // [rsp+30h] [rbp-28h] BYREF
	__int64 v7; // [rsp+38h] [rbp-20h]
	__int64 v8; // [rsp+40h] [rbp-18h]

	v1 = sub_140056D60(a1, 1u);
	v3 = sub_1404B7220(v2, v1);
	if (v3)
	{
		v6 = 0i64;
		v7 = 0i64;
		v8 = 0i64;
		v6 = *(_QWORD*)(v3 + 184);
		v7 = *(_QWORD*)(v3 + 192);
		sub_1403F4740(qword_140C65898, 0x515u, (__int64)&v6);
	}
	else
	{
		v5 = 3;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F9264, v5);
	}
	return 0i64;
}
// 140735FC0: variable 'v2' is possibly undefined
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;


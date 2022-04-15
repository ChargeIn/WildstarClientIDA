#include "../winhttp.h"

//----- (000000014057EC50) ----------------------------------------------------
void __fastcall sub_14057EC50(__int64* a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // [rsp+20h] [rbp-48h]
	_QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v5; // [rsp+48h] [rbp-20h]
	__int64 v6; // [rsp+50h] [rbp-18h]
	__int64 v7; // [rsp+58h] [rbp-10h]

	v2 = *a1;
	v4[0] = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v4[2] = 0i64;
	v7 = 0i64;
	v4[1] = v2;
	LODWORD(v3) = *(_DWORD*)(qword_140C635F0 + 5760);
	v4[0] = v3;
	LODWORD(v7) = 9;
	v6 = a2;
	v5 = 0i64;
	sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)v4);
}
// 14057EC99: variable 'v3' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (000000014057E8D0) ----------------------------------------------------
void __fastcall sub_14057E8D0(__int64* a1)
{
	__int64 v1; // rcx
	__int64 v2; // [rsp+20h] [rbp-48h]
	_QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v4; // [rsp+48h] [rbp-20h]
	__int64 v5; // [rsp+50h] [rbp-18h]
	__int64 v6; // [rsp+58h] [rbp-10h]

	v1 = *a1;
	v3[0] = 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v3[2] = 0i64;
	v6 = 0i64;
	v3[1] = v1;
	LODWORD(v2) = *(_DWORD*)(qword_140C635F0 + 5760);
	v3[0] = v2;
	LODWORD(v6) = 10;
	v5 = 0i64;
	v4 = 0i64;
	sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)v3);
}
// 14057E91D: variable 'v2' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


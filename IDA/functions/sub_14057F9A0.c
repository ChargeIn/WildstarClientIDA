#include "../winhttp.h"

//----- (000000014057F9A0) ----------------------------------------------------
void __fastcall sub_14057F9A0(__int64* a1, int a2, __int64 a3)
{
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-48h]
	_QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v6; // [rsp+40h] [rbp-28h]
	__int64 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+50h] [rbp-18h]
	__int64 v9; // [rsp+58h] [rbp-10h]

	v3 = *a1;
	v5[0] = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v6 = 0i64;
	v9 = 0i64;
	v5[1] = v3;
	LODWORD(v4) = *(_DWORD*)(qword_140C635F0 + 5760);
	v5[0] = v4;
	LODWORD(v9) = 23;
	v8 = 0i64;
	LODWORD(v6) = a2;
	v7 = a3;
	sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)v5);
}
// 14057F9E5: variable 'v4' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


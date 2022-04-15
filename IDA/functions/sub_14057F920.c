#include "../winhttp.h"

//----- (000000014057F920) ----------------------------------------------------
void __fastcall sub_14057F920(__int64* a1, int a2, __int64 a3)
{
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-48h]
	_QWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+50h] [rbp-18h]
	__int64 v8; // [rsp+58h] [rbp-10h]

	v3 = *a1;
	v5[0] = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v5[2] = 0i64;
	v8 = 0i64;
	v5[1] = v3;
	LODWORD(v4) = *(_DWORD*)(qword_140C635F0 + 5760);
	v5[0] = v4;
	LODWORD(v8) = 22;
	v7 = a3;
	v6 = a2;
	sub_1403F4900(qword_140C65898, 0x4B3u, (__int64)v5);
}
// 14057F96C: variable 'v4' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (000000014057FB20) ----------------------------------------------------
void __fastcall sub_14057FB20(__int64* a1, __int64 a2)
{
	__int64 v2; // rcx
	int v3; // r8d
	__int64 v4; // [rsp+20h] [rbp-38h]
	_QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v6; // [rsp+40h] [rbp-18h]

	v2 = *a1;
	v5[0] = 0i64;
	v6 = 0i64;
	v5[1] = v2;
	v3 = *(_DWORD*)(qword_140C635F0 + 5760);
	v6 = a2;
	LODWORD(v4) = v3;
	v5[0] = v4;
	sub_1403F4900(qword_140C65898, 0x4A8u, (__int64)v5);
}
// 14057FB66: variable 'v4' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;


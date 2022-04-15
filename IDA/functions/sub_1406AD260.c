#include "../winhttp.h"

//----- (00000001406AD260) ----------------------------------------------------
__int64 __fastcall sub_1406AD260(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rcx
	int v4; // eax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]
	__int64 v8; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || !*(_QWORD*)(v2 + 8))
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_9;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v8))
	{
		v7 = 3;
		v3 = &v6;
		v6 = v8;
	LABEL_9:
		sub_1404B7950((__int64)v3, (int)*(double*)v3);
		return 1i64;
	}
	sub_1404B7950((__int64)v3, 0);
	return 1i64;
}
// 1406AD2EE: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];


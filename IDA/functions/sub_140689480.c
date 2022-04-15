#include "../winhttp.h"

//----- (0000000140689480) ----------------------------------------------------
__int64 __fastcall sub_140689480(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64* v4; // rax
	__int64* v5; // rcx
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = *(_QWORD*)(qword_140C65980 + 48);
	if (*(_QWORD*)v2 == v2)
		return 0i64;
	v3 = *(_QWORD*)(*(_QWORD*)v2 + 16i64);
	if (!v3)
		return 0i64;
	v4 = *(__int64**)(a1 + 24);
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v4 < *(_QWORD*)(a1 + 16))
		v5 = v4;
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
	{
	LABEL_9:
		sub_1405F4D60(v3, (int)*(double*)v5);
		return 0i64;
	}
	if (v6 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v10))
	{
		v9 = 3;
		v5 = &v8;
		v8 = v10;
		goto LABEL_9;
	}
	sub_1405F4D60(v3, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65980: using guessed type __int64 qword_140C65980;


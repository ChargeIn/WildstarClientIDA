#include "../winhttp.h"

//----- (000000014014DFE0) ----------------------------------------------------
__int64 __fastcall sub_14014DFE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // r9
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]

	v2 = sub_140059170(a1, 0xCui64);
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 0;
	v3 = a1[4];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"EulerAngles", 0xBui64);
	v5 = a1[2];
	v7 = v4;
	v8 = 4;
	sub_14005E8E0((__int64)a1, v3 + 160, (int*)&v7, v5);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}


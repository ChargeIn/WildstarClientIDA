#include "../winhttp.h"

//----- (0000000140530EC0) ----------------------------------------------------
__int64 __fastcall sub_140530EC0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // ecx
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v10))
		{
			v5 = 0;
			goto LABEL_9;
		}
		v9 = 3;
		v3 = &v8;
		v8 = v10;
	}
	v5 = (int)*(double*)v3;
LABEL_9:
	v6 = 1;
	if (v5 > 1)
		v6 = v5;
	*(_DWORD*)(v2 + 1268) = v6;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


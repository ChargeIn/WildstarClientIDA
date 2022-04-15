#include "../winhttp.h"

//----- (0000000140416000) ----------------------------------------------------
__int64 __fastcall sub_140416000(_QWORD* a1)
{
	__int64* v1; // rdx
	int v3; // eax
	unsigned int v4; // edx
	int* v5; // rax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (a1[3] < a1[2])
		v1 = (__int64*)a1[3];
	v3 = *((_DWORD*)v1 + 2);
	if (v3 != 3)
	{
		if (v3 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v9))
		{
			v4 = 0;
			goto LABEL_8;
		}
		v8 = 3;
		v1 = &v7;
		v7 = v9;
	}
	v4 = (int)*(double*)v1;
LABEL_8:
	v5 = sub_1400B5DF0(qword_140C658F0, v4, 0i64);
	return sub_140415C70(a1, (__int64)v5);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658F0: using guessed type __int64 qword_140C658F0;


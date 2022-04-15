#include "../winhttp.h"

//----- (00000001406C29F0) ----------------------------------------------------
__int64 __fastcall sub_1406C29F0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // r9d
	_QWORD* v6; // rcx
	_QWORD* v7; // rax
	unsigned __int64 i; // rdx
	__int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1406C01C0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v13))
	{
		v12 = 3;
		v3 = &v11;
		v11 = v13;
	LABEL_8:
		v5 = (int)*(double*)v3;
		goto LABEL_9;
	}
	v5 = 0;
LABEL_9:
	v6 = *(_QWORD**)(v2 + 1080);
	v7 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		do
		{
			for (i = 0i64; i < v7[4]; ++i)
			{
				v9 = *(_QWORD*)(v7[3] + 8 * i);
				if (*(_DWORD*)(v9 + 12) == v5)
					*(_DWORD*)(v9 + 376) = 1;
			}
			v7 = (_QWORD*)*v7;
		} while (v7 != *(_QWORD**)(v2 + 1080));
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


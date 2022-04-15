#include "../winhttp.h"

//----- (00000001405348C0) ----------------------------------------------------
__int64 __fastcall sub_1405348C0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // r9d
	_QWORD* v6; // rcx
	_QWORD* v7; // rax
	unsigned __int64 i; // rdx
	__int64 v9; // r8
	__int64 v10; // rcx
	_QWORD* j; // rcx
	__int64 k; // rcx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]
	__int64 v16; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v16))
		{
			v5 = 0;
			goto LABEL_9;
		}
		v15 = 3;
		v3 = &v14;
		v14 = v16;
	}
	v5 = (int)*(double*)v3;
LABEL_9:
	v6 = *(_QWORD**)(v2 + 1384);
	v7 = (_QWORD*)v6[2];
	if (v7 != v6)
	{
		do
		{
			for (i = 0i64; i < v7[107]; ++i)
			{
				v9 = *(_QWORD*)(v7[106] + 8 * i);
				if (*(_DWORD*)(v9 + 4) == v5)
					*(_DWORD*)(v9 + 216) = 0;
			}
			v10 = v7[3];
			if (v10)
			{
				v7 = (_QWORD*)v7[3];
				for (j = *(_QWORD**)(v10 + 16); j; j = (_QWORD*)j[2])
					v7 = j;
			}
			else
			{
				for (k = v7[1]; v7 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v7 = (_QWORD*)k;
				if (v7[3] != k)
					v7 = (_QWORD*)k;
			}
		} while (v7 != *(_QWORD**)(v2 + 1384));
	}
	*(_DWORD*)(v2 + 1568) = 1;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


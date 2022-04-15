#include "../winhttp.h"

//----- (0000000140535770) ----------------------------------------------------
__int64 __fastcall sub_140535770(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // r10d
	_QWORD* v6; // rax
	_QWORD* v7; // rcx
	_QWORD* v8; // rdx
	_QWORD* v9; // rax
	unsigned __int64 i; // r8
	__int64 v11; // r9
	__int64 v12; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+28h] [rbp-10h]
	__int64 v18; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v18))
	{
		v17 = 3;
		v3 = &v16;
		v16 = v18;
	LABEL_8:
		v5 = (int)*(double*)v3;
		goto LABEL_9;
	}
	v5 = 0;
LABEL_9:
	v6 = *(_QWORD**)(v2 + 1384);
	v7 = (_QWORD*)v6[2];
	if (v7 != v6)
	{
		do
		{
			v8 = (_QWORD*)v7[13];
			v9 = (_QWORD*)*v8;
			if ((_QWORD*)*v8 != v8)
			{
				do
				{
					for (i = 0i64; i < v9[4]; ++i)
					{
						v11 = *(_QWORD*)(v9[3] + 8 * i);
						if (*(_DWORD*)(v11 + 12) == v5)
							*(_DWORD*)(v11 + 376) = 0;
					}
					v9 = (_QWORD*)*v9;
				} while (v9 != (_QWORD*)v7[13]);
			}
			v12 = v7[3];
			if (v12)
			{
				v7 = (_QWORD*)v7[3];
				for (j = *(_QWORD**)(v12 + 16); j; j = (_QWORD*)j[2])
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
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


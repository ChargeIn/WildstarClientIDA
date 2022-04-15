#include "../winhttp.h"

//----- (00000001407427B0) ----------------------------------------------------
__int64 __fastcall sub_1407427B0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	_QWORD* v6; // rdi
	char* v7; // rdx
	_DWORD* v8; // rax
	_QWORD* v9; // rbx
	char* v10; // rdx
	_DWORD* v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rdi
	void* v14; // rax
	_WORD* v16; // [rsp+20h] [rbp-68h] BYREF
	__int64 v17; // [rsp+28h] [rbp-60h]
	__int64 v18; // [rsp+40h] [rbp-48h] BYREF
	__int64 v19; // [rsp+48h] [rbp-40h]
	__int64 v20; // [rsp+60h] [rbp-28h] BYREF
	_WORD* v21; // [rsp+68h] [rbp-20h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = *(_QWORD**)(v1 + 400);
	v7 = (char*)sub_14018F0E0(&v16, 0i64)[1];
	v8 = (_DWORD*)v6[3];
	if ((unsigned __int64)v8 < v6[2] && v8 != dword_140A12138 && (int)v8[2] > 0)
		v7 = (char*)sub_140056BB0(v6, 1u, 0i64);
	sub_14018F2D0(&v20, v7);
	if (v17)
		sub_14018B900(v17, 0);
	v9 = *(_QWORD**)(v1 + 400);
	v10 = (char*)sub_14018F0E0(&v18, 0i64)[1];
	v11 = (_DWORD*)(v9[3] + 16i64);
	if ((unsigned __int64)v11 < v9[2] && v11 != dword_140A12138 && *(int*)(v9[3] + 24i64) > 0)
		v10 = (char*)sub_140056BB0(v9, 2u, 0i64);
	sub_14018F2D0(&v16, v10);
	if (v19)
		sub_14018B900(v19, 0);
	v12 = (__int64)v21;
	v13 = v17;
	if (v21 && *v21)
	{
		v16 = 0i64;
		v17 = 0i64;
		v14 = &unk_1409F3C7C;
		if (v13)
			v14 = (void*)v13;
		v17 = (__int64)v14;
		v16 = v21;
		sub_1403F4900(qword_140C65898, 0x422u, (__int64)&v16);
	}
	if (v13)
		sub_14018B900(v13, 0);
	if (v12)
		sub_14018B900(v12, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (00000001406A48D0) ----------------------------------------------------
__int64 __fastcall sub_1406A48D0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // r14
	char* v5; // rax
	char* v6; // rax
	int* v7; // r15
	_WORD* v8; // rbx
	int v9; // eax
	__int64 v10; // rcx
	int* v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v15; // [rsp+30h] [rbp-38h] BYREF
	int* v16; // [rsp+38h] [rbp-30h]
	void* lpv; // [rsp+78h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v15, v5);
	v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
	v7 = (int*)v6;
	if (v6)
	{
		sub_14018D320((int**)&lpv, v6);
		v8 = lpv;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_1403E1170(v8, 0x1Bu);
	v11 = v16;
	if (v9)
	{
		v13 = *(_QWORD*)(v4 + 104);
		if (*(_DWORD*)(v13 + 44))
			v3 = sub_140631240(v10, *(_QWORD*)(v13 + 24), *(_DWORD*)(v13 + 40), v7, v16);
		v12 = a1[2];
		*(double*)v12 = (double)v3;
	}
	else
	{
		v12 = a1[2];
		*(_QWORD*)v12 = 0i64;
	}
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	if (v8)
		(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 8);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return 1i64;
}
// 1406A4990: variable 'v10' is possibly undefined


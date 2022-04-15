#include "../winhttp.h"

//----- (00000001406A47D0) ----------------------------------------------------
__int64 __fastcall sub_1406A47D0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // rbp
	char* v5; // rax
	int* v6; // r14
	_WORD* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	void* lpv; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v6 = (int*)v5;
	if (v5)
	{
		sub_14018D320((int**)&lpv, v5);
		v7 = lpv;
	}
	else
	{
		v7 = 0i64;
	}
	if ((unsigned int)sub_1403E1170(v7, 0x1Bu))
	{
		v10 = *(_QWORD*)(v4 + 104);
		if (*(_DWORD*)(v10 + 44))
			v3 = sub_140631240(v8, *(_QWORD*)(v10 + 24), *(_DWORD*)(v10 + 40), v6, 0i64);
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		*(double*)v11 = (double)v3;
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
	}
	a1[2] += 16i64;
	if (v7)
		(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 8);
	return 1i64;
}
// 1406A4873: variable 'v8' is possibly undefined


#include "../winhttp.h"

//----- (00000001406999C0) ----------------------------------------------------
__int64 __fastcall sub_1406999C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64* v6; // rdi
	int v7; // ebx
	int v8; // eax
	int v9; // ebp
	int v10; // ebp
	char* v11; // rax
	__int64 v12; // rbx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 8);
	if (!v4)
		return 0i64;
	v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
	v6 = (__int64*)v5;
	if (!v5)
		return 0i64;
	v7 = *(_DWORD*)(v5 + 16);
	v8 = sub_140056D60(a1, 2u);
	v9 = 200;
	if (v7 == 1)
		v9 = 100;
	v10 = v8 - 1 + v9;
	if (v10 != 300)
	{
		v11 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v14, v11);
		v12 = v15;
		sub_14057F920(v6, v10, v15);
		if (v12)
			sub_14018B900(v12, 0);
	}
	return 0i64;
}
// 1406999F8: variable 'v3' is possibly undefined


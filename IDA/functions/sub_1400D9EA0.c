#include "../winhttp.h"

//----- (00000001400D9EA0) ----------------------------------------------------
__int64 __fastcall sub_1400D9EA0(_QWORD* a1)
{
	__int64 v2; // r12
	__int64 v3; // rax
	int* v4; // rsi
	unsigned __int64 v5; // rbx
	int* v6; // rdi
	int* v7; // rbp
	__int64 v8; // rcx
	bool v9; // zf
	__int64 v10; // r15
	unsigned __int64 v11; // r14
	__int64 v12; // rcx
	_BYTE* v13; // rax
	__int64 v14; // rax
	int* v15; // rdi
	unsigned __int64 v16; // r14
	_BYTE* v17; // rax

	v2 = sub_1400D66A0(a1, 1u);
	v3 = sub_140056BB0(a1, 2u, 0i64);
	v4 = 0i64;
	v5 = -1i64;
	v6 = (int*)v3;
	v7 = 0i64;
	v8 = -1i64;
	do
		v9 = *(_BYTE*)(v3 + v8++ + 1) == 0;
	while (!v9);
	v10 = v8 + v3;
	v11 = v8;
	v12 = v8 + 1;
	if (v12 != -1)
		v7 = sub_14018B280(v12, 0);
	sub_1407DB590(v7, v6, v11);
	v13 = (char*)v7 + v10 - (_QWORD)v6;
	if (v13)
		*v13 = 0;
	v14 = sub_140056BB0(a1, 3u, 0i64);
	v15 = (int*)v14;
	do
		v9 = *(_BYTE*)(v14 + v5++ + 1) == 0;
	while (!v9);
	v16 = v5 + v14;
	if (v5 != -2i64)
		v4 = sub_14018B280(v5 + 1, 0);
	sub_1407DB590(v4, v15, v5);
	v17 = (char*)v4 + v16 - (_QWORD)v15;
	if (v17)
		*v17 = 0;
	if (v2)
		sub_1400D3410(v2, v7, v4);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}


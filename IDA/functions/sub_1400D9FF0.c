#include "../winhttp.h"

//----- (00000001400D9FF0) ----------------------------------------------------
__int64 __fastcall sub_1400D9FF0(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64 v3; // rax
	int* v4; // rdi
	__int64 v5; // rcx
	int* v6; // rbx
	__int64 v8; // r14
	unsigned __int64 v9; // rsi
	__int64 v10; // rcx
	_BYTE* v11; // rax

	v2 = sub_1400D66A0(a1, 1u);
	v3 = sub_140056BB0(a1, 2u, 0i64);
	v4 = 0i64;
	v5 = -1i64;
	v6 = (int*)v3;
	while (*(_BYTE*)(v3 + v5++ + 1) != 0)
		;
	v8 = v5 + v3;
	v9 = v5;
	v10 = v5 + 1;
	if (v10 != -1)
		v4 = sub_14018B280(v10, 0);
	sub_1407DB590(v4, v6, v9);
	v11 = (char*)v4 + v8 - (_QWORD)v6;
	if (v11)
		*v11 = 0;
	if (v2)
		sub_1400D36F0(v2, v4);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}


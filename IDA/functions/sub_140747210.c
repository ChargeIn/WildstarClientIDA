#include "../winhttp.h"

//----- (0000000140747210) ----------------------------------------------------
__int64 __fastcall sub_140747210(__int64 a1)
{
	int* v1; // rdi
	__int64 v3; // r15
	int* v4; // rsi
	int* v5; // rbp
	__int64 v6; // rcx
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	int* v10; // rax
	__int64 v11; // r8
	int v12; // edx
	int v13; // ebx
	__int64 v14; // rax
	__int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C65898 + 29520);
	v16[1] = 0i64;
	v16[0] = 0i64;
	v4 = sub_14018B280(2i64, 0);
	sub_1407DB590(v4, dword_1409F9474, 0i64);
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = 0i64;
	v6 = 0i64;
	while (aNew_0[++v6] != 0)
		;
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v5, (int*)L"new", v9);
	if ((int*)((char*)v5 + v9))
		*(_WORD*)((char*)v5 + v9) = 0;
	v10 = sub_14018B280(120i64, 0);
	if (v10)
	{
		v12 = *(_DWORD*)(v3 + 72);
		*(_DWORD*)(v3 + 72) = v12 + 1;
		v1 = (int*)sub_140776E80((__int64)v10, v12, v11, v5, v4, v16);
	}
	sub_1407781B0(v3, v1);
	v13 = *v1;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140747302: variable 'v11' is possibly undefined
// 1409F9474: using guessed type int dword_1409F9474[18];
// 140B49D70: using guessed type wchar_t aNew_0[4];
// 140C65898: using guessed type __int64 qword_140C65898;


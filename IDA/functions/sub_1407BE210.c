#include "../winhttp.h"

//----- (00000001407BE210) ----------------------------------------------------
void __fastcall sub_1407BE210(unsigned int* a1)
{
	__int64 v1; // r9
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rdi
	__int64 v5; // rax
	int* v6; // r15
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // r14
	int* v10; // rsi
	int* v11; // r8
	_QWORD* v12; // rcx
	int v13; // edx
	unsigned __int64 v14; // rax
	unsigned __int64 v15[2]; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int64 v16; // [rsp+40h] [rbp-38h] BYREF
	unsigned __int64 v17; // [rsp+48h] [rbp-30h]
	_QWORD* v18; // [rsp+50h] [rbp-28h]

	v1 = *((_QWORD*)a1 + 1);
	v15[1] = *a1;
	v15[0] = 0i64;
	sub_1401D3110(&v16, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1407BE6B0, v15, v1, 26);
	v3 = v17;
	v4 = (unsigned int)v17;
	v5 = 4i64 * (unsigned int)v17;
	if (!is_mul_ok((unsigned int)v17, 4ui64))
		v5 = -1i64;
	v6 = sub_14018B280(v5, 0);
	v7 = 4 * v4;
	if (!is_mul_ok(v4, 4ui64))
		v7 = -1i64;
	v8 = sub_14018B280(v7, 0);
	v9 = (__int64)v18;
	v10 = v8;
	if ((_DWORD)v3)
	{
		v11 = v8;
		v12 = v18;
		do
		{
			++v11;
			v13 = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * *v12++);
			*(int*)((char*)v11 + (char*)v6 - (char*)v8 - 4) = v13;
			*(v11 - 1) = *(_DWORD*)(*((_QWORD*)a1 + 2) + 4i64 * *(v12 - 1));
			--v4;
		} while (v4);
	}
	sub_14018B900(*((_QWORD*)a1 + 1), 0);
	sub_14018B900(*((_QWORD*)a1 + 2), 0);
	v14 = v16;
	*a1 = v3;
	*((_QWORD*)a1 + 1) = v6;
	*((_QWORD*)a1 + 2) = v10;
	if (v14 < v3)
		sub_14018B900(v9 + 8 * v14, 0);
}


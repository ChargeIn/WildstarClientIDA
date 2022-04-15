#include "../winhttp.h"

//----- (00000001403FBCF0) ----------------------------------------------------
void __fastcall sub_1403FBCF0(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // rcx
	__int64 v7; // rcx
	bool v8; // zf
	__int64 v9; // rcx
	__int64 v10; // r15
	int* v11; // rax
	__int64 v12; // rdi
	int* v13; // r12
	int* i; // rbx
	__int64 v15; // r14
	_QWORD* v16; // rdi
	__int64 v17; // rbx
	__int64 v18; // rbp
	__int64 j; // rbx
	__int64 v20; // rcx
	_QWORD v21[17]; // [rsp+30h] [rbp-88h] BYREF

	v4 = (_QWORD*)a1[2];
	if (v4 == (_QWORD*)a1[3])
	{
		v7 = (__int64)v4 - a1[1];
		v8 = v7 / 112 == 0;
		v9 = 2 * (v7 / 112);
		if (v8)
			v9 = 1i64;
		v10 = 28 * (sub_14018A3E0(112 * v9) / 0x70ui64);
		v11 = sub_14018B280(v10 * 4, 0);
		v12 = a1[1];
		v13 = v11;
		for (i = v11; v12 != a2; i += 28)
		{
			if (i)
				sub_1403F6CE0(i, v12);
			v12 += 112i64;
		}
		if (i)
			sub_1403F6CE0(i, a3);
		v15 = a1[2];
		v16 = i + 28;
		if (a2 != v15)
		{
			v17 = a2;
			do
			{
				if (v16)
					sub_1403F6CE0(v16, v17);
				v17 += 112i64;
				v16 += 14;
			} while (v17 != v15);
		}
		v18 = a1[2];
		for (j = a1[1]; j != v18; j += 112i64)
			sub_1403F6EE0(j);
		v20 = a1[1];
		if (v20)
			sub_14018B900(v20, 0);
		a1[1] = v13;
		a1[2] = v16;
		a1[3] = &v13[v10];
	}
	else
	{
		if (v4)
			sub_1403F6CE0(v4, (__int64)(v4 - 14));
		a1[2] += 112i64;
		sub_1403F6CE0(v21, a3);
		sub_1403FF940(a2, a1[2] - 224i64, a1[2] - 112i64);
		sub_1403F6E00(a2, (__int64)v21);
		sub_1403F6EE0((__int64)v21);
	}
}
// 1403FBCF0: using guessed type _QWORD var_88[17];


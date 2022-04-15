#include "../winhttp.h"

//----- (000000014016BCC0) ----------------------------------------------------
__int64 __fastcall sub_14016BCC0(_QWORD* a1)
{
	int v1; // ebx
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r13
	__int64 v9; // rax
	__int64 v10; // r15
	int v11; // eax
	__int64 v12; // rdi
	__int64 v13; // rbp
	unsigned int v14; // esi
	_DWORD* v15; // rax
	_QWORD* v16; // r10
	double v17; // xmm0_8
	int v18; // xmm0_4
	float* v19; // rdi
	int v22[10]; // [rsp+20h] [rbp-58h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = sub_1400D66A0(a1, 1u);
	v10 = v9;
	if (v9 && (*(_BYTE*)(v9 + 432) & 8) != 0)
	{
		v11 = sub_1400F26A0(v8, 2);
		v12 = 0i64;
		v13 = v11;
		if (v11 > 0)
		{
			v14 = 3;
			do
			{
				if (v12 >= 10)
					break;
				v15 = sub_1400580E0(*(_QWORD*)(v8 + 16), v14);
				if (v15 == dword_140A12138 || (int)v15[2] <= 0)
					v17 = 0.0;
				else
					v17 = sub_140056C40(v16, v14);
				*(float*)&v18 = v17;
				++v12;
				++v14;
				v22[v12 - 1] = v18;
			} while (v12 < v13);
		}
		sub_140052360((__int64*)(v10 + 1408), 0i64);
		if ((int)v13 > 10)
			LODWORD(v13) = 10;
		if ((int)v13 > 0)
		{
			v19 = (float*)v22;
			do
			{
				if (v1 > 0 && *(v19 - 1) > *v19)
					break;
				sub_140003460((__int64*)(v10 + 1408), &v22[v1++]);
				++v19;
			} while (v1 < (int)v13);
		}
	}
	return 0i64;
}
// 14016BDB9: variable 'v16' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 14016BCC0: using guessed type int var_58[10];


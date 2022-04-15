#include "../winhttp.h"

//----- (0000000140174270) ----------------------------------------------------
__int64 __fastcall sub_140174270(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rdx
	int v4; // edi
	_DWORD* v5; // rcx
	__int64 v6; // r14
	__int64 v7; // rsi
	__int64 v8; // rbp
	unsigned __int64 v9; // r8
	__int64* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // ecx
	__int64* v14; // rax
	double v15; // xmm0_8
	__int64 v16; // rax
	int v17; // xmm7_4
	__int64 v18; // rax
	int v19; // ecx
	__int64* v20; // rax
	double v21; // xmm6_8
	int* v22; // rax
	int* v23; // rax
	int* v24; // rdx
	float* v25; // rcx
	__int64 v26; // r14
	__int64 v28; // [rsp+20h] [rbp-78h] BYREF
	int v29; // [rsp+28h] [rbp-70h]
	__int64 v30; // [rsp+30h] [rbp-68h] BYREF
	int v31; // [rsp+38h] [rbp-60h]
	__int64 v32; // [rsp+A8h] [rbp+10h] BYREF
	__int64 v33; // [rsp+B0h] [rbp+18h] BYREF

	v2 = sub_140174120(a1);
	v3 = a1[2];
	v4 = 0;
	v5 = (_DWORD*)(a1[3] + 16i64);
	v6 = v2;
	v7 = 0i64;
	v8 = 0i64;
	if ((unsigned __int64)v5 >= v3 || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
		goto LABEL_25;
	*(_DWORD*)(v3 + 8) = 0;
	for (a1[2] += 16i64; ; a1[2] -= 16i64)
	{
		v9 = a1[2];
		v10 = (__int64*)dword_140A12138;
		if (a1[3] + 16i64 < v9)
			v10 = (__int64*)(a1[3] + 16i64);
		if (!(unsigned int)sub_14005BA70((__int64)a1, *v10, v9 - 16))
			break;
		a1[2] += 16i64;
		v11 = a1[2];
		if ((_DWORD*)(v11 - 16) != dword_140A12138 && *(_DWORD*)(v11 - 16 + 8) == 5)
		{
			*(_QWORD*)v11 = 0x3FF0000000000000i64;
			*(_DWORD*)(v11 + 8) = 3;
			a1[2] += 16i64;
			sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v12 = a1[2];
			v13 = *(_DWORD*)(v12 - 8);
			v14 = (__int64*)(v12 - 16);
			if (v13 == 3)
				goto LABEL_14;
			if (v13 == 4 && sub_14005AC80((char*)(*v14 + 32), (unsigned __int64*)&v32))
			{
				v29 = 3;
				v14 = &v28;
				v28 = v32;
			LABEL_14:
				v15 = *(double*)v14;
			}
			else
			{
				v15 = 0.0;
			}
			a1[2] -= 16i64;
			v16 = a1[2];
			*(_QWORD*)v16 = 0x4000000000000000i64;
			*(_DWORD*)(v16 + 8) = 3;
			a1[2] += 16i64;
			sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v18 = a1[2];
			v19 = *(_DWORD*)(v18 - 8);
			v20 = (__int64*)(v18 - 16);
			if (v19 == 3)
			{
			LABEL_19:
				v21 = *(double*)v20;
			}
			else
			{
				if (v19 == 4 && sub_14005AC80((char*)(*v20 + 32), (unsigned __int64*)&v33))
				{
					v31 = 3;
					v20 = &v30;
					v30 = v33;
					goto LABEL_19;
				}
				v21 = 0.0;
			}
			a1[2] -= 16i64;
			v22 = sub_14018C320(v8, 8 * v7++ + 8, 0);
			v8 = (__int64)v22;
			*(float*)&v22[2 * v7 - 1] = v21;
			*(float*)&v17 = v15;
			v22[2 * v7 - 2] = v17;
			continue;
		}
	}
	a1[2] -= 16i64;
LABEL_25:
	v23 = sub_14018C320(v8, 8 * v7 + 8, 0);
	v23[2 * v7 + 1] = -1082130432;
	v23[2 * v7] = -1082130432;
	v24 = (int*)(v6 + 1136);
	v25 = (float*)(v23 + 1);
	v26 = v6 - (_QWORD)v23;
	do
	{
		*(_QWORD*)((char*)v25 + v26 + 1068) = *(_QWORD*)(v25 - 1);
		*v24 = v4;
		if (*v25 < 0.0)
			break;
		++v4;
		v25 += 2;
	} while (v4 < 8);
	sub_14018B900((__int64)v23, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


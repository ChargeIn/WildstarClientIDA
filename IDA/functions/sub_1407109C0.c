#include "../winhttp.h"

//----- (00000001407109C0) ----------------------------------------------------
__int64 __fastcall sub_1407109C0(_QWORD* a1)
{
	unsigned int v1; // edx
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rbx
	__int64 v9; // r10
	__int64 v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64 i; // rax
	__int64 j; // rax
	char v29[8]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v30; // [rsp+28h] [rbp-30h]
	__int64 v31; // [rsp+60h] [rbp+8h] BYREF
	__int64 v32; // [rsp+68h] [rbp+10h] BYREF
	__int64 v33; // [rsp+70h] [rbp+18h] BYREF
	__int64 v34; // [rsp+78h] [rbp+20h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v1;
		} while (v1 < v3);
	}
	sub_14048B2A0((__int64)v29, qword_140C65948 + 40);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v5 = a1[2];
	v6 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	v7 = v30;
	a1[2] += 16i64;
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		v9 = qword_140C65948;
		do
		{
			v10 = *(_QWORD*)(v9 + 16);
			v11 = *(_DWORD*)(v8 + 32);
			v12 = *(_QWORD*)(v10 + 8);
			v13 = v10;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v11)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v10 || v11 < *(_DWORD*)(v13 + 32))
			{
				v32 = *(_QWORD*)(v9 + 16);
				v14 = &v32;
			}
			else
			{
				v31 = v13;
				v14 = &v31;
			}
			v15 = *v14;
			if (v15 == v10)
				v16 = 0i64;
			else
				v16 = *(_QWORD*)(v15 + 40);
			v17 = *(_QWORD*)(v8 + 40);
			if (v16 && v17 && (*(_DWORD*)(v17 + 44) || *(_DWORD*)(v17 + 48)))
			{
				v18 = a1[2];
				*(_DWORD*)(v18 + 8) = 3;
				*(double*)v18 = (double)(int)v11;
				a1[2] += 16i64;
				v19 = *(_QWORD*)(v9 + 16);
				v20 = *(_QWORD*)(v19 + 8);
				v21 = v19;
				while (v20)
				{
					if (*(_DWORD*)(v20 + 32) < v11)
					{
						v20 = *(_QWORD*)(v20 + 24);
					}
					else
					{
						v21 = v20;
						v20 = *(_QWORD*)(v20 + 16);
					}
				}
				if (v21 == v19 || v11 < *(_DWORD*)(v21 + 32))
				{
					v34 = *(_QWORD*)(v9 + 16);
					v22 = &v34;
				}
				else
				{
					v33 = v21;
					v22 = &v33;
				}
				v23 = *v22;
				if (v23 == v19)
					v24 = 0i64;
				else
					v24 = *(_QWORD*)(v23 + 40);
				sub_1404330E0(a1, v24);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				v7 = v30;
				v9 = qword_140C65948;
			}
			v25 = *(_QWORD*)(v8 + 24);
			if (v25)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (i = *(_QWORD*)(v25 + 16); i; i = *(_QWORD*)(i + 16))
					v8 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = j;
				if (*(_QWORD*)(v8 + 24) != j)
					v8 = j;
			}
		} while (v8 != v7);
	}
	sub_140008410((__int64)v29);
	sub_14018B900(v30, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65948: using guessed type __int64 qword_140C65948;
// 1407109C0: using guessed type char var_38[8];


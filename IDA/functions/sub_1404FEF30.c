#include "../winhttp.h"

//----- (00000001404FEF30) ----------------------------------------------------
__int64 __fastcall sub_1404FEF30(__int64 a1)
{
	__int64 v2; // r10
	__int64 v3; // rax
	__int64 v4; // r9
	__int64 v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rcx
	unsigned int v8; // r8d
	__int64* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	unsigned int v14; // ebx
	__int64 v15; // rcx
	int* v16; // r11
	_QWORD* v17; // rdx
	_QWORD* v18; // rcx
	int* k; // r8
	int* v20; // r9
	_DWORD* v21; // r10
	_DWORD* v22; // rsi
	_DWORD* v23; // rax
	int v24; // xmm1_4
	int v25; // ecx
	__int64 v27; // [rsp+30h] [rbp+8h] BYREF
	__int64 v28; // [rsp+38h] [rbp+10h] BYREF

	if (*(_DWORD*)(a1 + 7192) != *(_DWORD*)(a1 + 7308) || *(_DWORD*)(a1 + 7188) != *(_DWORD*)(a1 + 7304))
		return 1i64;
	v2 = *(_QWORD*)(a1 + 7064);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 != v2)
	{
		v4 = *(_QWORD*)(a1 + 7248);
		v5 = *(_QWORD*)(v4 + 8);
		do
		{
			v6 = v4;
			v7 = v5;
			if (!v5)
				goto LABEL_14;
			v8 = *(_DWORD*)(v3 + 32);
			do
			{
				if (*(_DWORD*)(v7 + 32) < v8)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			} while (v7);
			if (v6 == v4 || v8 < *(_DWORD*)(v6 + 32))
			{
			LABEL_14:
				v28 = v4;
				v9 = &v28;
			}
			else
			{
				v27 = v6;
				v9 = &v27;
			}
			v10 = *v9;
			if (v10 == v4 || *(_DWORD*)(v10 + 36) != *(_DWORD*)(v3 + 36))
				return 1i64;
			v11 = *(_QWORD*)(v3 + 24);
			if (v11)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v11 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
		} while (v3 != v2);
	}
	v14 = 0;
	v15 = (__int64)(*(_QWORD*)(a1 + 7168) - *(_QWORD*)(a1 + 7160)) >> 3;
	if (v15)
		v16 = sub_14018B280(8 * v15, 0);
	else
		v16 = 0i64;
	v17 = *(_QWORD**)(a1 + 7168);
	v18 = *(_QWORD**)(a1 + 7160);
	for (k = v16; v18 != v17; k += 2)
	{
		if (k)
			*(_QWORD*)k = *v18;
		++v18;
	}
	v20 = v16;
	if (v16 != k)
	{
		v21 = *(_DWORD**)(a1 + 7224);
		v22 = *(_DWORD**)(a1 + 7216);
		while (1)
		{
			v23 = v22;
			if (v22 != v21)
			{
				while (*v23 != *v20)
				{
					v23 += 2;
					if (v23 == v21)
						goto LABEL_42;
				}
				v24 = v23[1];
				LODWORD(v27) = v20[1];
				LODWORD(v28) = v24;
				v25 = v24;
				if ((int)(v24 ^ v27) < 0)
					v25 = 0x80000000 - v24;
				if ((int)abs32(v25 - v27) > 84)
					break;
			}
		LABEL_42:
			v20 += 2;
			if (v20 == k)
				goto LABEL_45;
		}
		v14 = 1;
	}
LABEL_45:
	if (v16)
		sub_14018B900((__int64)v16, 0);
	return v14;
}


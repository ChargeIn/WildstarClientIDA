#include "../winhttp.h"

//----- (00000001407BDD70) ----------------------------------------------------
void __fastcall sub_1407BDD70(unsigned int* a1)
{
	unsigned int v1; // edi
	unsigned int v3; // r8d
	int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // r9
	__int64 i; // r10
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	int* v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // rdx
	unsigned int v14; // r9d
	__int64 v15; // rdx
	__int64 v16; // rcx
	int* v17; // rax
	__int64 v18; // rcx
	unsigned __int64 v19; // rdx

	v1 = 1;
	v3 = 1;
	if (*a1 > 1)
	{
		while (*(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * (v3 - 1)) < *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * v3))
		{
			if (++v3 >= *a1)
				goto LABEL_6;
		}
		sub_1407BE210(a1);
	}
LABEL_6:
	v4 = (int*)*((_QWORD*)a1 + 1);
	if (*v4 < 0)
	{
		v5 = *a1;
		v6 = 0i64;
		if (*a1)
		{
			do
			{
				if (v4[v6] >= 0)
					break;
				v6 = (unsigned int)(v6 + 1);
			} while ((unsigned int)v6 < v5);
			if ((_DWORD)v6)
			{
				if ((_DWORD)v6 == v5 || v4[v6])
				{
					v6 = (unsigned int)(v6 - 1);
					v4[(unsigned int)v6] = 0;
				}
				if ((_DWORD)v6)
				{
					for (i = 0i64; (unsigned int)v6 < *a1; i = (unsigned int)(i + 1))
					{
						*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * i) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v6);
						v8 = *((_QWORD*)a1 + 2);
						v9 = *(_DWORD*)(v8 + 4 * v6);
						v6 = (unsigned int)(v6 + 1);
						*(_DWORD*)(v8 + 4 * i) = v9;
					}
					v10 = *((_QWORD*)a1 + 1);
					*a1 = i;
					v11 = sub_14018C320(v10, 4i64 * (unsigned int)i, 0);
					v12 = *((_QWORD*)a1 + 2);
					v13 = 4i64 * *a1;
					*((_QWORD*)a1 + 1) = v11;
					*((_QWORD*)a1 + 2) = sub_14018C320(v12, v13, 0);
				}
			}
		}
	}
	if (*a1 > 1)
	{
		v14 = 1;
		do
		{
			if (*(_DWORD*)(*((_QWORD*)a1 + 2) + 4i64 * (v1 - 1)) != *(_DWORD*)(*((_QWORD*)a1 + 2) + 4i64 * v14))
			{
				v15 = v1++;
				*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v15) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * v14);
				*(_DWORD*)(*((_QWORD*)a1 + 2) + 4 * v15) = *(_DWORD*)(*((_QWORD*)a1 + 2) + 4i64 * v14);
			}
			++v14;
		} while (v14 < *a1);
		v16 = *((_QWORD*)a1 + 1);
		*a1 = v1;
		v17 = sub_14018C320(v16, 4i64 * v1, 0);
		v18 = *((_QWORD*)a1 + 2);
		v19 = 4i64 * *a1;
		*((_QWORD*)a1 + 1) = v17;
		*((_QWORD*)a1 + 2) = sub_14018C320(v18, v19, 0);
	}
}


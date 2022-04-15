#include "../winhttp.h"

//----- (00000001403FD570) ----------------------------------------------------
int** __fastcall sub_1403FD570(__int64 a1, int** a2, __int64* a3, _QWORD* a4)
{
	__int64 v4; // r8
	__int64 v6; // rdx
	unsigned int v9; // ecx
	int** result; // rax
	int* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rsi
	unsigned int v14; // eax
	int* v15; // rcx
	unsigned int v16; // eax
	int* v17; // rax
	int* v18; // rdi
	__int64 v19; // rax
	int* v20; // rax
	__int64 v21; // rax
	__int64 v22; // r9
	__int64 i; // rax
	__int64 v24; // rax
	unsigned int v25; // eax
	unsigned int v26; // ecx
	unsigned int v27; // eax
	char v28[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (*(_QWORD*)(a1 + 16))
		{
			v9 = *(_DWORD*)(v4 + 32);
			if (*(_DWORD*)a4 < v9 || *(_DWORD*)a4 <= v9 && a4[1] < *(_QWORD*)(v4 + 40))
			{
				sub_1403FEAA0(a1, a2, v4, v4, a4);
				return a2;
			}
		}
		goto LABEL_7;
	}
	if (v4 == v6)
	{
		v12 = *(unsigned int*)a4;
		v13 = *(_QWORD*)(v6 + 24);
		v14 = *(_DWORD*)(v13 + 32);
		if (v14 < (unsigned int)v12 || v14 <= (unsigned int)v12 && *(_QWORD*)(v13 + 40) < a4[1])
		{
			if (v13 == v6
				|| (v16 = *(_DWORD*)(v13 + 32), (unsigned int)v12 < v16)
				|| (unsigned int)v12 <= v16 && a4[1] < *(_QWORD*)(v13 + 40))
			{
				v20 = sub_14018B280(80i64, 0);
				v18 = v20;
				if (v20 != (int*)-32i64)
				{
					*((_QWORD*)v20 + 4) = *a4;
					*((_QWORD*)v20 + 5) = a4[1];
					sub_1403D2AA0((__int64)(v20 + 12), (__int64)(a4 + 2));
				}
				*(_QWORD*)(v13 + 16) = v18;
				v21 = *(_QWORD*)(a1 + 8);
				if (v13 == v21)
				{
					*(_QWORD*)(v21 + 8) = v18;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v18;
				}
				else if (v13 == *(_QWORD*)(v21 + 16))
				{
					*(_QWORD*)(v21 + 16) = v18;
				}
			}
			else
			{
				v17 = sub_1403FF530(v12, a4);
				*(_QWORD*)(v13 + 24) = v17;
				v18 = v17;
				v19 = *(_QWORD*)(a1 + 8);
				if (v13 == *(_QWORD*)(v19 + 24))
					*(_QWORD*)(v19 + 24) = v18;
			}
			*((_QWORD*)v18 + 1) = v13;
			*((_QWORD*)v18 + 2) = 0i64;
			*((_QWORD*)v18 + 3) = 0i64;
			sub_1400081C0((__int64)v18, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v18;
			return a2;
		}
		else
		{
			v15 = *(int**)sub_1403FEBB0(a1, (__int64)v28, a4);
			result = a2;
			*a2 = v15;
		}
	}
	else
	{
		if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
		{
			v22 = *(_QWORD*)(v4 + 16);
			if (v22)
			{
				for (i = *(_QWORD*)(v22 + 24); i; i = *(_QWORD*)(i + 24))
					v22 = i;
			}
			else
			{
				v22 = *(_QWORD*)(v4 + 8);
				if (v4 == *(_QWORD*)(v22 + 16))
				{
					do
					{
						v24 = v22;
						v22 = *(_QWORD*)(v22 + 8);
					} while (v24 == *(_QWORD*)(v22 + 16));
				}
			}
		}
		else
		{
			v22 = *(_QWORD*)(v4 + 24);
		}
		v25 = *(_DWORD*)(v22 + 32);
		v26 = *(_DWORD*)a4;
		if (v25 >= *(_DWORD*)a4 && (v25 > v26 || *(_QWORD*)(v22 + 40) >= a4[1])
			|| (v27 = *(_DWORD*)(v4 + 32), v26 >= v27) && (v26 > v27 || a4[1] >= *(_QWORD*)(v4 + 40)))
		{
		LABEL_7:
			v11 = *(int**)sub_1403FEBB0(a1, (__int64)v28, a4);
			result = a2;
			*a2 = v11;
			return result;
		}
		if (*(_QWORD*)(v22 + 24))
			sub_1403FEAA0(a1, a2, v4, v4, a4);
		else
			sub_1403FEAA0(a1, a2, 0i64, v22, a4);
		return a2;
	}
	return result;
}


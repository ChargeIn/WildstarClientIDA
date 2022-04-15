#include "../winhttp.h"

//----- (00000001403AE630) ----------------------------------------------------
int** __fastcall sub_1403AE630(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // rax
	__int64 v5; // r8
	int** result; // rax
	int* v10; // r8
	int* v11; // rcx
	__int64 v12; // rbp
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // rax
	int* v17; // rcx
	__int64 v18; // r9
	__int64 i; // rax
	__int64 v20; // rax
	int* v21; // [rsp+20h] [rbp-28h]
	char v22[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && (unsigned int)*a4 < *(_DWORD*)(v5 + 32))
		{
			v21 = a4;
		LABEL_5:
			sub_1403AF720(a1, a2, v5, v5, v21);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == v4)
	{
		v12 = *(_QWORD*)(v4 + 24);
		if (*(_DWORD*)(v12 + 32) >= (unsigned int)*a4)
		{
			v17 = *(int**)sub_1403AF840(a1, (__int64)v22, a4);
			result = a2;
			*a2 = v17;
		}
		else
		{
			if (v12 == v4 || (unsigned int)*a4 < *(_DWORD*)(v12 + 32))
			{
				v15 = sub_14018B280(48i64, 0);
				v13 = v15;
				if (v15 != (int*)-32i64)
				{
					v15[8] = *a4;
					v15[9] = a4[1];
					v15[10] = a4[2];
					v15[11] = a4[3];
				}
				*(_QWORD*)(v12 + 16) = v15;
				v16 = *(_QWORD*)(a1 + 8);
				if (v12 == v16)
				{
					*(_QWORD*)(v16 + 8) = v13;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
				}
				else if (v12 == *(_QWORD*)(v16 + 16))
				{
					*(_QWORD*)(v16 + 16) = v13;
				}
			}
			else
			{
				v13 = sub_14018B280(48i64, 0);
				if (v13 != (int*)-32i64)
				{
					v13[8] = *a4;
					v13[9] = a4[1];
					v13[10] = a4[2];
					v13[11] = a4[3];
				}
				*(_QWORD*)(v12 + 24) = v13;
				v14 = *(_QWORD*)(a1 + 8);
				if (v12 == *(_QWORD*)(v14 + 24))
					*(_QWORD*)(v14 + 24) = v13;
			}
			*((_QWORD*)v13 + 1) = v12;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v13;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v18 = *(_QWORD*)(v5 + 16);
			if (v18)
			{
				for (i = *(_QWORD*)(v18 + 24); i; i = *(_QWORD*)(i + 24))
					v18 = i;
			}
			else
			{
				v18 = *(_QWORD*)(v5 + 8);
				if (v5 == *(_QWORD*)(v18 + 16))
				{
					do
					{
						v20 = v18;
						v18 = *(_QWORD*)(v18 + 8);
					} while (v20 == *(_QWORD*)(v18 + 16));
				}
			}
		}
		else
		{
			v18 = *(_QWORD*)(v5 + 24);
		}
		if (*(_DWORD*)(v18 + 32) >= (unsigned int)*a4 || (unsigned int)*a4 >= *(_DWORD*)(v5 + 32))
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_1403AF840(a1, (__int64)v22, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v21 = a4;
		if (*(_QWORD*)(v18 + 24))
			goto LABEL_5;
		sub_1403AF720(a1, a2, 0i64, v18, a4);
		return a2;
	}
	return result;
}


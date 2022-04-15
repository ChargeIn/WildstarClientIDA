#include "../winhttp.h"

//----- (00000001407784C0) ----------------------------------------------------
int** __fastcall sub_1407784C0(__int64 a1, int a2)
{
	int** v2; // r9
	int* v4; // rax
	int** v5; // r8
	int** result; // rax
	int* v7; // r14
	unsigned int v8; // ebp
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rdi
	int* v12; // rax
	int* v13; // rsi
	int** v14; // [rsp+50h] [rbp+8h]

	v2 = *(int***)(a1 + 32);
	v4 = v2[1];
	v5 = v2;
	while (v4)
	{
		if (v4[8] < a2)
		{
			v4 = (int*)*((_QWORD*)v4 + 3);
		}
		else
		{
			v5 = (int**)v4;
			v4 = (int*)*((_QWORD*)v4 + 2);
		}
	}
	if (v5 == v2 || (v14 = v5, a2 < *((_DWORD*)v5 + 8)))
		v14 = *(int***)(a1 + 32);
	result = v14;
	if (v14 != v2)
	{
		v7 = v14[5];
		if (v7)
		{
			v8 = 0;
			if (*((_QWORD*)v7 + 14))
			{
				v9 = 0i64;
				do
				{
					v10 = *(_QWORD*)(a1 + 64);
					v11 = *((_QWORD*)v7 + 13) + 32 * v9;
					v12 = sub_14018B280(48i64, 0);
					v13 = v12;
					if (v12 != (int*)-16i64)
					{
						*((_QWORD*)v12 + 3) = 0i64;
						*((_QWORD*)v12 + 4) = 0i64;
						*((_QWORD*)v12 + 5) = 0i64;
						sub_14001C1B0((_QWORD*)v12 + 2, *(int**)(v11 + 8), *(_QWORD*)(v11 + 16));
					}
					*(_QWORD*)v13 = v10;
					++v8;
					*((_QWORD*)v13 + 1) = *(_QWORD*)(v10 + 8);
					result = *(int***)(v10 + 8);
					v9 = v8;
					*result = v13;
					*(_QWORD*)(v10 + 8) = v13;
				} while ((unsigned __int64)v8 < *((_QWORD*)v7 + 14));
			}
		}
	}
	return result;
}


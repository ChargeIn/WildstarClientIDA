#include "../winhttp.h"

//----- (000000014015D3A0) ----------------------------------------------------
void __fastcall sub_14015D3A0(__int64* a1, int a2, __int64 a3)
{
	__int64 v3; // r15
	int* v6; // rax
	__int64 v7; // rbp
	__int64 v8; // rdi
	__int64 v9; // r14
	int* v10; // rax
	int* v11; // rsi
	int* v12; // rdx
	__int64 v13; // rcx
	int* v14; // rbx
	__int64 v15; // rdx

	if (a2 >= 0)
	{
		v3 = a2;
		if (a2 >= *((_DWORD*)a1 + 6))
		{
			do
			{
				v6 = sub_14018B280(200i64, 0);
				if (v6)
					v7 = sub_14015CCD0((__int64)v6, *a1, &unk_1409DC34C, stru_1409DC35C);
				else
					v7 = 0i64;
				v8 = a1[3];
				v9 = v8 + 1;
				v10 = sub_14018DB00(a1[2], v8 + 1, 8i64);
				v11 = v10;
				*(_QWORD*)&v10[2 * v8] = v7;
				v12 = (int*)a1[2];
				if (v12 != v10)
				{
					sub_1407DB590(v10, v12, 8 * a1[3]);
					v13 = a1[2];
					if (v13)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
					a1[2] = (__int64)v11;
				}
				a1[3] = v9;
			} while ((int)v3 >= (int)v9);
		}
		sub_14015CFA0(*(_QWORD**)(8 * v3 + a1[2]), a3);
		*(_QWORD*)(*(_QWORD*)(8 * v3 + a1[2]) + 168i64) = 0i64;
		v14 = *(int**)(8 * v3 + a1[2]);
		sub_1400579E0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v14 + 32i64) + 400i64), v15, v14[44]);
		v14[44] = -2;
	}
}
// 14015D4C7: variable 'v15' is possibly undefined
// 1409DC35C: using guessed type __m128i stru_1409DC35C[2];


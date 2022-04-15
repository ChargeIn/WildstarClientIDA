#include "../winhttp.h"

//----- (00000001402D4D70) ----------------------------------------------------
void __fastcall sub_1402D4D70(__int64 a1, int* a2, unsigned __int64 a3, int* a4)
{
	__int64 v4; // r12
	unsigned __int64 v6; // rsi
	int* v7; // rbx
	int v9; // r14d
	int* v10; // r15
	unsigned __int64 v11; // r12
	__int64 v12; // rsi
	int* v13; // rdi
	int* j; // rax
	int* v15; // rdi
	unsigned __int64 i; // rcx
	__int64* v17; // rax
	unsigned __int64 v18; // r12
	__int64 v19; // r13
	int* v20; // rax
	int* v21; // rdx
	int* v22; // r12
	unsigned __int64 v23; // rdi
	int* v24; // r14
	unsigned __int64 v25; // rdi
	__int64 v26; // rcx
	int* v27; // rdi
	unsigned __int64 v28; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v29; // [rsp+70h] [rbp+18h] BYREF

	if (a3)
	{
		v29 = a3;
		v4 = *(_QWORD*)(a1 + 16);
		v6 = a3;
		v7 = a2;
		if ((*(_QWORD*)(a1 + 24) - v4) >> 2 < a3)
		{
			v17 = (__int64*)&v29;
			v18 = (v4 - *(_QWORD*)(a1 + 8)) >> 2;
			v28 = v18;
			if (v18 >= a3)
				v17 = (__int64*)&v28;
			v19 = (unsigned __int64)sub_14018A3E0(4 * (v18 + *v17)) >> 2;
			v20 = sub_14018B280(v19 * 4, 0);
			v21 = *(int**)(a1 + 8);
			v22 = v20;
			v23 = v7 - v21;
			sub_1407DB590(v20, v21, v23 * 4);
			v24 = &v22[v23];
			do
			{
				*v24++ = *a4;
				--v6;
			} while (v6);
			v25 = (__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v7) >> 2;
			sub_1407DB590(v24, v7, v25 * 4);
			v26 = *(_QWORD*)(a1 + 8);
			v27 = &v24[v25];
			if (v26)
				sub_14018B900(v26, 0);
			*(_QWORD*)(a1 + 8) = v22;
			*(_QWORD*)(a1 + 24) = &v22[v19];
			*(_QWORD*)(a1 + 16) = v27;
		}
		else
		{
			v9 = *a4;
			v10 = *(int**)(a1 + 16);
			v11 = (v4 - (__int64)a2) >> 2;
			if (v11 <= a3)
			{
				if (a3 != v11)
				{
					v15 = *(int**)(a1 + 16);
					for (i = a3 - v11; i; --i)
						*v15++ = v9;
				}
				*(_QWORD*)(a1 + 16) += 4 * (a3 - v11);
				sub_1407DB590(*(int**)(a1 + 16), a2, ((char*)v10 - (char*)a2) & 0xFFFFFFFFFFFFFFFCui64);
				for (*(_QWORD*)(a1 + 16) += 4 * v11; v7 != v10; ++v7)
					*v7 = v9;
			}
			else
			{
				v12 = a3;
				v13 = &v10[-a3];
				sub_1407DB590(*(int**)(a1 + 16), v13, 4 * a3);
				*(_QWORD*)(a1 + 16) += v12 * 4;
				sub_1407DB590(&v10[-(v13 - v7)], v7, 4 * (v13 - v7));
				for (j = &v7[v12]; v7 != j; ++v7)
					*v7 = v9;
			}
		}
	}
}
// 1402D4F04: conditional instruction was optimized away because rsi.8!=0


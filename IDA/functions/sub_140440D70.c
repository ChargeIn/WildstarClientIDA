#include "../winhttp.h"

//----- (0000000140440D70) ----------------------------------------------------
void __fastcall sub_140440D70(__int64* a1, __int64* a2, __int64* a3)
{
	__int64* v5; // rdi
	char* v6; // rsi
	char* v7; // rbx
	__int64 v8; // r8
	unsigned __int64 v9; // r14
	int* v10; // rbp
	__int64* v11; // rsi
	__int64* j; // rbx
	__int64 v13; // rcx
	unsigned __int64 v14; // rdx
	__int64 v15; // rax
	__int64* v16; // rsi
	__int64* i; // rbx

	if (a1 != a2)
	{
		v5 = a1 + 1;
		do
		{
			if (a3 != v5 - 1)
			{
				v6 = (char*)a3[2];
				v7 = (char*)a3[1];
				v8 = *v5;
				v9 = (v6 - v7) / 80;
				if (v9 <= (v5[2] - *v5) / 80)
				{
					v13 = a3[1];
					v14 = (v5[1] - v8) / 80;
					if (v14 < v9)
					{
						sub_140441E90(v13, (__int64)&v7[80 * v14], v8);
						sub_140441B60((_QWORD***)(a3[1] + 80 * ((v5[1] - *v5) / 80)), (_QWORD***)a3[2], v5[1]);
					}
					else
					{
						v15 = sub_140441E90(v13, a3[2], v8);
						v16 = (__int64*)v5[1];
						for (i = (__int64*)v15; i != v16; i += 10)
							sub_1404400D0(i);
					}
				}
				else
				{
					v10 = sub_14018B280(80 * v9, 0);
					sub_140441B60((_QWORD***)v7, (_QWORD***)v6, (__int64)v10);
					v11 = (__int64*)v5[1];
					for (j = (__int64*)*v5; j != v11; j += 10)
						sub_1404400D0(j);
					if (*v5)
						sub_14018B900(*v5, 0);
					*v5 = (__int64)v10;
					v5[2] = (__int64)&v10[20 * v9];
				}
				v5[1] = *v5 + 80 * v9;
			}
			v5 += 4;
		} while (v5 - 1 != a2);
	}
}


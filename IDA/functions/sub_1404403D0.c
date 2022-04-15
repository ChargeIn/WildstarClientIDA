#include "../winhttp.h"

//----- (00000001404403D0) ----------------------------------------------------
void __fastcall sub_1404403D0(__int64 a1, __int64* a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v5; // rdx
	unsigned __int64 v7; // rsi
	__int64* v9; // rdi
	__int64* v10; // r15
	char* v11; // r12
	unsigned __int64 v12; // r13
	__int64* v13; // rbx
	__int64 v14; // rsi
	__int64* v15; // rdx
	__int64* v16; // rcx
	unsigned __int64 v17; // rsi
	unsigned __int64 v18; // r14
	__int64 v19; // rdx
	__int64 v20; // rdi
	int* v21; // rax
	__int64* v22; // rbx
	__int64* v23; // rax
	unsigned __int64 v24; // rdx
	__int64 v25; // r12
	__int64* v26; // r15
	__int64* v27; // rbx
	__int64* v28; // rbx
	__int64 v29; // rcx
	__int64* v30; // [rsp+30h] [rbp-68h] BYREF
	__int64 v31[5]; // [rsp+38h] [rbp-60h] BYREF
	unsigned __int64 v33; // [rsp+B0h] [rbp+18h] BYREF

	if (a3)
	{
		v33 = a3;
		v5 = *(_QWORD*)(a1 + 16);
		v7 = a3;
		if ((*(_QWORD*)(a1 + 24) - v5) >> 5 < a3)
		{
			v23 = (__int64*)&v33;
			v24 = (v5 - *(_QWORD*)(a1 + 8)) >> 5;
			v30 = (__int64*)v24;
			if (v24 >= a3)
				v23 = (__int64*)&v30;
			v25 = sub_14018A3E0(32 * (v24 + *v23)) & 0xFFFFFFFFFFFFFFE0ui64;
			v26 = (__int64*)sub_14018B280(v25, 0);
			v27 = sub_140440D10(*(__int64**)(a1 + 8), a2, v26);
			do
			{
				if (v27)
					sub_140440BA0(v27, a4);
				v27 += 4;
				--v7;
			} while (v7);
			v28 = sub_140440D10(a2, *(__int64**)(a1 + 16), v27);
			sub_1404409D0(*(__int64**)(a1 + 8), *(__int64**)(a1 + 16));
			v29 = *(_QWORD*)(a1 + 8);
			if (v29)
				sub_14018B900(v29, 0);
			*(_QWORD*)(a1 + 8) = v26;
			*(_QWORD*)(a1 + 16) = v28;
			*(_QWORD*)(a1 + 24) = (char*)v26 + v25;
		}
		else
		{
			sub_140440BA0(v31, a4);
			v9 = *(__int64**)(a1 + 16);
			v10 = (__int64*)v31[2];
			v11 = (char*)v31[1];
			v12 = ((char*)v9 - (char*)a2) >> 5;
			v30 = v9;
			v13 = v9;
			v33 = v12;
			if (v12 <= v7)
			{
				v17 = v7 - v12;
				v18 = v17;
				if (v17)
				{
					do
					{
						if (v13)
						{
							v19 = ((char*)v10 - v11) / 80;
							if (v19)
							{
								v20 = 20 * v19;
								v21 = sub_14018B280(80 * v19, 0);
								v13[1] = (__int64)v21;
								v13[2] = (__int64)v21;
								v13[3] = (__int64)&v21[v20];
							}
							else
							{
								v13[1] = 0i64;
								v13[2] = 0i64;
								v13[3] = 0i64;
							}
							v13[2] = sub_140441B60((_QWORD***)v11, (_QWORD***)v10, v13[1]);
						}
						v13 += 4;
						--v18;
					} while (v18);
					v12 = v33;
					v9 = v30;
				}
				*(_QWORD*)(a1 + 16) += 32 * v17;
				sub_140440D10(a2, v9, *(__int64**)(a1 + 16));
				v16 = a2;
				*(_QWORD*)(a1 + 16) += 32 * v12;
				v15 = v9;
			}
			else
			{
				v14 = 32 * v7;
				sub_140440D10(&v9[v14 / 0xFFFFFFFFFFFFFFF8ui64], v9, v9);
				*(_QWORD*)(a1 + 16) += v14;
				sub_1404418D0((__int64)a2, (__int64)&v9[v14 / 0xFFFFFFFFFFFFFFF8ui64], v9);
				v15 = &a2[(unsigned __int64)v14 / 8];
				v16 = a2;
			}
			sub_140440D70(v16, v15, v31);
			v22 = (__int64*)v11;
			if (v11 != (char*)v10)
			{
				do
				{
					sub_1404400D0(v22);
					v22 += 10;
				} while (v22 != v10);
			}
			if (v11)
				sub_14018B900((__int64)v11, 0);
		}
	}
}
// 1404405F2: conditional instruction was optimized away because rsi.8!=0


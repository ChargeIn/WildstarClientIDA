#include "../winhttp.h"

//----- (0000000140440670) ----------------------------------------------------
void __fastcall sub_140440670(_QWORD* a1, char* a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v6; // rcx
	_DWORD* v9; // r9
	_QWORD* v10; // r8
	char* v11; // r15
	char* v12; // rdi
	unsigned __int64 v13; // r12
	char* v14; // rdi
	char* k; // rsi
	unsigned __int64 v16; // r14
	unsigned __int64 j; // rsi
	int* v18; // rax
	_QWORD* v19; // r8
	__int64 v20; // rcx
	unsigned __int64 v21; // rdx
	__int64* v22; // rax
	__int64 v23; // r15
	int* v24; // rsi
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	__int64* v28; // rdi
	__int64* v29; // rbx
	__int64 i; // r14
	__int64 v31; // rcx
	unsigned __int64 v32; // [rsp+30h] [rbp-88h] BYREF
	__int64 v33; // [rsp+40h] [rbp-78h] BYREF
	int* v34; // [rsp+48h] [rbp-70h]
	char v35[32]; // [rsp+50h] [rbp-68h] BYREF
	char v36[32]; // [rsp+70h] [rbp-48h] BYREF
	_QWORD* v37; // [rsp+D0h] [rbp+18h] BYREF

	if (a3)
	{
		v37 = (_QWORD*)a3;
		v6 = a1[2];
		if ((a1[3] - v6) / 80 < a3)
		{
			v21 = (v6 - a1[1]) / 80;
			v22 = (__int64*)&v37;
			v32 = v21;
			if (v21 >= a3)
				v22 = (__int64*)&v32;
			v23 = 20 * (sub_14018A3E0(80 * (v21 + *v22)) / 0x50ui64);
			v24 = sub_14018B280(v23 * 4, 0);
			v25 = sub_140441B60((_QWORD***)a1[1], (_QWORD***)a2, (__int64)v24);
			v26 = sub_140441C00(v25, a3, a4);
			v27 = sub_140441B60((_QWORD***)a2, (_QWORD***)a1[2], v26);
			v28 = (__int64*)a1[2];
			v29 = (__int64*)a1[1];
			for (i = v27; v29 != v28; v29 += 10)
				sub_1404400D0(v29);
			v31 = a1[1];
			if (v31)
				sub_14018B900(v31, 0);
			a1[1] = v24;
			a1[2] = i;
			a1[3] = &v24[v23];
		}
		else
		{
			v34 = sub_14018B280(32i64, 0);
			*(_QWORD*)v34 = v34;
			*((_QWORD*)v34 + 1) = v34;
			v9 = *(_DWORD**)(a4 + 8);
			v10 = *(_QWORD**)v9;
			v37 = *(_QWORD**)v34;
			sub_140441830((__int64)v37, (__int64*)&v37, v10, v9);
			sub_140440C40((__int64)v35, a4 + 16);
			sub_1403D2AA0((__int64)v36, a4 + 48);
			v11 = (char*)a1[2];
			v12 = v11;
			v13 = (v11 - a2) / 80;
			if (v13 <= a3)
			{
				v16 = a3 - v13;
				for (j = v16; j; --j)
				{
					if (v12)
					{
						v18 = sub_14018B280(32i64, 0);
						*((_QWORD*)v12 + 1) = v18;
						*(_QWORD*)v18 = v18;
						*(_QWORD*)(*((_QWORD*)v12 + 1) + 8i64) = *((_QWORD*)v12 + 1);
						v19 = *(_QWORD**)v34;
						v37 = (_QWORD*)**((_QWORD**)v12 + 1);
						sub_140441830(v20, (__int64*)&v37, v19, v34);
						sub_140440C40((__int64)(v12 + 16), (__int64)v35);
						sub_1403D2AA0((__int64)(v12 + 48), (__int64)v36);
					}
					v12 += 80;
				}
				a1[2] += 80 * v16;
				sub_140441B60((_QWORD***)a2, (_QWORD***)v11, a1[2]);
				for (a1[2] += 80 * v13; a2 != v11; a2 += 80)
				{
					sub_140441760((__int64)a2, (__int64)&v33);
					sub_1404413B0((__int64)(a2 + 16), (__int64)v35);
					sub_140441680((__int64)(a2 + 48), (__int64)v36);
				}
			}
			else
			{
				v14 = &v11[-80 * a3];
				sub_140441B60((_QWORD***)v14, (_QWORD***)a1[2], a1[2]);
				a1[2] += 80 * a3;
				sub_140441AC0((__int64)a2, (__int64)v14, (__int64)v11);
				for (k = &a2[80 * a3]; a2 != k; a2 += 80)
				{
					sub_140441760((__int64)a2, (__int64)&v33);
					sub_1404413B0((__int64)(a2 + 16), (__int64)v35);
					sub_140441680((__int64)(a2 + 48), (__int64)v36);
				}
			}
			sub_1404400D0(&v33);
		}
	}
}
// 140440820: variable 'v20' is possibly undefined


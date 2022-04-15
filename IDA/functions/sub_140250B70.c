#include "../winhttp.h"

//----- (0000000140250B70) ----------------------------------------------------
void __fastcall sub_140250B70(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	int* v8; // rax
	unsigned __int64 v9; // rdx
	int* v10; // r15
	int** v11; // rdi
	unsigned __int64 v12; // rsi
	int* v13; // rax
	unsigned __int64 v14; // rsi
	__int64* v15; // rdi
	__int64 v16; // r14
	_QWORD* v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx

	v2 = a1[1];
	if (v2 <= a2)
	{
		v8 = sub_14018DB00(*a1, a2, 32i64);
		v9 = a1[1];
		v10 = v8;
		if (v9 < a2)
		{
			v11 = (int**)&v8[8 * v9 + 4];
			v12 = a2 - v9;
			do
			{
				if (v11 != (int**)16)
				{
					*(v11 - 1) = 0i64;
					*v11 = 0i64;
					v11[1] = 0i64;
					v13 = sub_14018B280(16i64, 0);
					*(v11 - 1) = v13;
					*v11 = v13;
					v11[1] = v13 + 4;
					if (v13)
						*(_WORD*)v13 = 0;
				}
				v11 += 4;
				--v12;
			} while (v12);
		}
		if ((int*)*a1 != v10)
		{
			v14 = 0i64;
			if (a1[1])
			{
				v15 = (__int64*)(v10 + 4);
				v16 = -16i64 - (_QWORD)v10;
				do
				{
					if (v15 != (__int64*)16)
					{
						v17 = (__int64*)((char*)v15 + v16 + *a1);
						*(v15 - 1) = 0i64;
						*v15 = 0i64;
						v15[1] = 0i64;
						*(v15 - 1) = v17[1];
						v17[1] = 0i64;
						v18 = *v15;
						*v15 = v17[2];
						v17[2] = v18;
						v19 = v15[1];
						v15[1] = v17[3];
						v17[3] = v19;
					}
					v20 = *(__int64*)((char*)v15 + v16 + *a1 + 8);
					if (v20)
						sub_14018B900(v20, 0);
					++v14;
					v15 += 4;
				} while (v14 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v10;
		}
		a1[1] = a2;
	}
	else
	{
		v5 = a2;
		if (a2 >= v2)
		{
			a1[1] = a2;
		}
		else
		{
			v6 = 32 * a2;
			do
			{
				v7 = *(_QWORD*)(v6 + *a1 + 8);
				if (v7)
					sub_14018B900(v7, 0);
				++v5;
				v6 += 32i64;
			} while (v5 < a1[1]);
			a1[1] = a2;
		}
	}
}


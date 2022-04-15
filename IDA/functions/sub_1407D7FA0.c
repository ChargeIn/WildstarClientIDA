#include "../winhttp.h"

//----- (00000001407D7FA0) ----------------------------------------------------
void __fastcall sub_1407D7FA0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rdx
	unsigned __int64 v6; // r8
	int* v7; // rsi
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 64i64);
		v6 = 0i64;
		v7 = v4;
		v8 = a1[1];
		if (v8 < a2)
		{
			v5 = &v7[16 * v8];
			v9 = a2 - v8;
			do
			{
				if (v5)
				{
					v5[12] = 0;
					*(_QWORD*)v5 = 0i64;
					*((_QWORD*)v5 + 1) = 0i64;
					*((_QWORD*)v5 + 2) = 0i64;
					*((_QWORD*)v5 + 3) = 0i64;
					*((_QWORD*)v5 + 4) = 0i64;
					*((_QWORD*)v5 + 5) = 0i64;
				}
				v5 += 16;
				--v9;
			} while (v9);
		}
		if ((int*)*a1 != v7)
		{
			if (a1[1])
			{
				v5 = v7 + 4;
				do
				{
					if (v5 != (int*)16)
					{
						v10 = (__int64)v5 + *a1 - (_QWORD)v7 - 16;
						*(v5 - 4) = *(_DWORD*)v10;
						*(v5 - 3) = *(_DWORD*)(v10 + 4);
						*(_OWORD*)v5 = *(_OWORD*)(v10 + 16);
						*((_OWORD*)v5 + 1) = *(_OWORD*)(v10 + 32);
						v5[8] = *(_DWORD*)(v10 + 48);
					}
					++v6;
					v5 += 16;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*, unsigned __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5, v6);
			*a1 = (__int64)v7;
		}
		a1[1] = a2;
	}
}
// 1407D8081: variable 'v5' is possibly undefined


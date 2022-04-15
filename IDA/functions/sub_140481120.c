#include "../winhttp.h"

//----- (0000000140481120) ----------------------------------------------------
void __fastcall sub_140481120(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rdx
	int* v5; // rsi
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // r8
	int* v9; // r9
	__int64 v10; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v5 = sub_14018DB00(*a1, a2, 64i64);
		v6 = a1[1];
		if (v6 < a2)
		{
			v4 = &v5[16 * v6];
			v7 = a2 - v6;
			do
			{
				if (v4)
				{
					*(_QWORD*)v4 = 0i64;
					*((_QWORD*)v4 + 1) = 0i64;
					v4[4] = 0;
				}
				v4 += 16;
				--v7;
			} while (v7);
		}
		if ((int*)*a1 != v5)
		{
			v8 = 0i64;
			if (a1[1])
			{
				v4 = v5 + 12;
				do
				{
					v9 = v4 - 12;
					if (v4 != (int*)48)
					{
						v10 = (__int64)v4 + *a1 - (_QWORD)v5 - 48;
						*v9 = *(_DWORD*)v10;
						v9[1] = *(_DWORD*)(v10 + 4);
						v9[2] = *(_DWORD*)(v10 + 8);
						v9[3] = *(_DWORD*)(v10 + 12);
						v9[4] = *(_DWORD*)(v10 + 16);
						*((_OWORD*)v4 - 1) = *(_OWORD*)(v10 + 32);
						*v4 = *(_DWORD*)(v10 + 48);
						v4[1] = *(_DWORD*)(v10 + 52);
						v4[2] = *(_DWORD*)(v10 + 56);
					}
					++v8;
					v4 += 16;
				} while (v8 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v4);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}
// 140481217: variable 'v4' is possibly undefined


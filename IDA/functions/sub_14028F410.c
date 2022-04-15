#include "../winhttp.h"

//----- (000000014028F410) ----------------------------------------------------
void __fastcall sub_14028F410(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rdx
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // r8
	int* v8; // rsi
	int* v9; // rcx
	__int64 v10; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 24i64);
		v6 = a1[1];
		v7 = 0i64;
		v8 = v4;
		if (v6 < a2)
		{
			v9 = &v4[6 * v6];
			v5 = (int*)(a2 - v6);
			do
			{
				if (v9)
				{
					*v9 = 0;
					*((_QWORD*)v9 + 1) = 0i64;
					*((_QWORD*)v9 + 2) = 0i64;
				}
				v9 += 6;
				v5 = (int*)((char*)v5 - 1);
			} while (v5);
		}
		if ((int*)*a1 != v4)
		{
			if (a1[1])
			{
				v5 = v4;
				do
				{
					if (v5)
					{
						v10 = *a1 + (char*)v5 - (char*)v4;
						*v5 = *(_DWORD*)v10;
						*((_QWORD*)v5 + 1) = *(_QWORD*)(v10 + 8);
						*((_QWORD*)v5 + 2) = *(_QWORD*)(v10 + 16);
					}
					++v7;
					v5 += 6;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*, unsigned __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5, v7);
			*a1 = (__int64)v8;
		}
		a1[1] = a2;
	}
}
// 14028F4CD: variable 'v5' is possibly undefined


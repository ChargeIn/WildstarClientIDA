#include "../winhttp.h"

//----- (00000001407D7DC0) ----------------------------------------------------
void __fastcall sub_1407D7DC0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rdx
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // r8
	int* v8; // rsi
	int* v9; // rcx
	int* v10; // rcx
	__int64 v11; // rax

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 32i64);
		v6 = a1[1];
		v7 = 0i64;
		v8 = v4;
		if (v6 < a2)
		{
			v9 = &v4[8 * v6];
			v5 = a2 - v6;
			do
			{
				if (v9)
				{
					v9[4] = 0;
					*(_QWORD*)v9 = 0i64;
					*((_QWORD*)v9 + 1) = 0i64;
				}
				v9 += 8;
				--v5;
			} while (v5);
		}
		if ((int*)*a1 != v4)
		{
			if (a1[1])
			{
				v10 = v4;
				v5 = -(__int64)v4;
				do
				{
					if (v10)
					{
						v11 = *a1 + (char*)v10 - (char*)v8;
						*(_OWORD*)v10 = *(_OWORD*)v11;
						v10[4] = *(_DWORD*)(v11 + 16);
					}
					++v7;
					v10 += 8;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, __int64, unsigned __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5, v7);
			*a1 = (__int64)v8;
		}
		a1[1] = a2;
	}
}
// 1407D7E75: variable 'v5' is possibly undefined


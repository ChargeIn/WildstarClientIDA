#include "../winhttp.h"

//----- (00000001407BE530) ----------------------------------------------------
void __fastcall sub_1407BE530(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rdx
	int* v6; // rsi
	unsigned __int64 v7; // r8
	__int64 v8; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 16i64);
		v6 = v4;
		if ((int*)*a1 != v4)
		{
			v7 = 0i64;
			if (a1[1])
			{
				v5 = v4;
				do
				{
					if (v5)
					{
						v8 = *a1 + (char*)v5 - (char*)v4;
						*(_QWORD*)v5 = *(_QWORD*)v8;
						v5[2] = *(_DWORD*)(v8 + 8);
					}
					++v7;
					v5 += 4;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5);
			*a1 = (__int64)v6;
		}
		a1[1] = a2;
	}
}
// 1407BE5A8: variable 'v5' is possibly undefined


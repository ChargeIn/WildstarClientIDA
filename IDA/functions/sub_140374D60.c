#include "../winhttp.h"

//----- (0000000140374D60) ----------------------------------------------------
void __fastcall sub_140374D60(__int64* a1, unsigned __int64 a2)
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
		v4 = sub_14018DB00(*a1, a2, 76i64);
		v6 = v4;
		if ((int*)*a1 != v4)
		{
			v7 = 0i64;
			if (a1[1])
			{
				v5 = v4 + 5;
				do
				{
					if (v5 != (int*)20)
					{
						v8 = (__int64)v5 + *a1 - (_QWORD)v4 - 20;
						*(v5 - 5) = *(_DWORD*)v8;
						*(v5 - 4) = *(_DWORD*)(v8 + 4);
						*(v5 - 3) = *(_DWORD*)(v8 + 8);
						*(v5 - 2) = *(_DWORD*)(v8 + 12);
						*(v5 - 1) = *(_DWORD*)(v8 + 16);
						*v5 = *(_DWORD*)(v8 + 20);
						v5[1] = *(_DWORD*)(v8 + 24);
						v5[2] = *(_DWORD*)(v8 + 28);
						v5[3] = *(_DWORD*)(v8 + 32);
						v5[4] = *(_DWORD*)(v8 + 36);
						v5[5] = *(_DWORD*)(v8 + 40);
						v5[6] = *(_DWORD*)(v8 + 44);
						v5[7] = *(_DWORD*)(v8 + 48);
						v5[8] = *(_DWORD*)(v8 + 52);
						v5[9] = *(_DWORD*)(v8 + 56);
						v5[10] = *(_DWORD*)(v8 + 60);
						v5[11] = *(_DWORD*)(v8 + 64);
						v5[12] = *(_DWORD*)(v8 + 68);
						*((_BYTE*)v5 + 52) = *(_BYTE*)(v8 + 72);
					}
					++v7;
					v5 += 19;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5);
			*a1 = (__int64)v6;
		}
		a1[1] = a2;
	}
}
// 140374E66: variable 'v5' is possibly undefined


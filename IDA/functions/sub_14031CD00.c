#include "../winhttp.h"

//----- (000000014031CD00) ----------------------------------------------------
void __fastcall sub_14031CD00(__int64* a1, unsigned __int64 a2)
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
		v4 = sub_14018DB00(*a1, a2, 112i64);
		v6 = v4;
		if ((int*)*a1 != v4)
		{
			v7 = 0i64;
			if (a1[1])
			{
				v5 = v4 + 8;
				do
				{
					if (v5 != (int*)32)
					{
						v8 = (__int64)v5 + *a1 - (_QWORD)v4 - 32;
						*((_OWORD*)v5 - 2) = *(_OWORD*)v8;
						*((_OWORD*)v5 - 1) = *(_OWORD*)(v8 + 16);
						*(_OWORD*)v5 = *(_OWORD*)(v8 + 32);
						*((_OWORD*)v5 + 1) = *(_OWORD*)(v8 + 48);
						*((_OWORD*)v5 + 2) = *(_OWORD*)(v8 + 64);
						*((_QWORD*)v5 + 6) = *(_QWORD*)(v8 + 80);
						v5[14] = *(_DWORD*)(v8 + 88);
						v5[15] = *(_DWORD*)(v8 + 92);
						v5[16] = *(_DWORD*)(v8 + 96);
						v5[17] = *(_DWORD*)(v8 + 100);
						v5[18] = *(_DWORD*)(v8 + 104);
						*((_BYTE*)v5 + 76) = *(_BYTE*)(v8 + 108);
						*((_WORD*)v5 + 39) = *(_WORD*)(v8 + 110);
					}
					++v7;
					v5 += 28;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5);
			*a1 = (__int64)v6;
		}
		a1[1] = a2;
	}
}
// 14031CDDB: variable 'v5' is possibly undefined


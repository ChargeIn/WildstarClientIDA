#include "../winhttp.h"

//----- (0000000140326E40) ----------------------------------------------------
void __fastcall sub_140326E40(__int64* a1, unsigned __int64 a2)
{
	__int64 v4; // rax
	int* v5; // r15
	unsigned __int64 v6; // rsi
	__int64 v7; // r14
	__int64 v8; // rdi

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = (__int64)sub_14018DB00(*a1, a2, 112i64);
		v5 = (int*)v4;
		if (*a1 != v4)
		{
			v6 = 0i64;
			if (a1[1])
			{
				v7 = -v4;
				v8 = v4;
				do
				{
					if (v8)
						sub_140326FB0(v8, *a1 + v7 + v8);
					++v6;
					v8 += 112i64;
				} while (v6 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}


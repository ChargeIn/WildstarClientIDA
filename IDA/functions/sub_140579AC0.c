#include "../winhttp.h"

//----- (0000000140579AC0) ----------------------------------------------------
__int64 __fastcall sub_140579AC0(__int64* a1, int* a2)
{
	__int64 v2; // r14
	int* v5; // rsi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	_DWORD* v8; // rdx
	_DWORD* v9; // rcx

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 36i64);
	v6 = &v5[9 * v2];
	if (v6)
	{
		*v6 = *a2;
		v6[1] = a2[1];
		v6[2] = a2[2];
		v6[3] = a2[3];
		v6[4] = a2[4];
		v6[5] = a2[5];
		v6[6] = a2[6];
		v6[7] = a2[7];
		v6[8] = a2[8];
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5 + 8;
			do
			{
				if (v8 != (_DWORD*)32)
				{
					v9 = (_DWORD*)((char*)v8 + *a1 - (_QWORD)v5 - 32);
					*(v8 - 8) = *v9;
					*(v8 - 7) = v9[1];
					*(v8 - 6) = v9[2];
					*(v8 - 5) = v9[3];
					*(v8 - 4) = v9[4];
					*(v8 - 3) = v9[5];
					*(v8 - 2) = v9[6];
					*(v8 - 1) = v9[7];
					*v8 = v9[8];
				}
				++v7;
				v8 += 9;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}


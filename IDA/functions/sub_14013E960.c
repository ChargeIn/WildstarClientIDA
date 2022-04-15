#include "../winhttp.h"

//----- (000000014013E960) ----------------------------------------------------
void __fastcall sub_14013E960(_QWORD* a1)
{
	__int64 v2; // rbx
	int* v3; // rax
	int* v4; // rsi
	int* v5; // rdx
	__int64 v6; // rcx

	if ((__int64)a1[6] < 0)
	{
		a1[6] = -1i64;
	}
	else
	{
		++a1[5];
		v2 = a1[9];
		v3 = sub_14018DB00(a1[8], v2 + 1, 8i64);
		v4 = v3;
		*(_QWORD*)&v3[2 * v2] = 0i64;
		v5 = (int*)a1[8];
		if (v5 != v3)
		{
			sub_1407DB590(v3, v5, 8i64 * a1[9]);
			v6 = a1[8];
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
			a1[8] = v4;
		}
		a1[9] = v2 + 1;
		a1[6] = -1i64;
	}
}


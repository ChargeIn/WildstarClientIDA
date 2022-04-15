#include "../winhttp.h"

//----- (0000000140901564) ----------------------------------------------------
__int64 __fastcall sub_140901564(int* a1, __int64* a2)
{
	int v2; // edi
	__int64 result; // rax
	__int64 v6; // r9
	int v7; // r8d
	int v8; // r10d
	__int64 v9; // r9
	int* v10; // r8
	int v11; // r11d
	int v12; // r9d
	int v13; // edx
	int* i; // rcx
	int v15; // edx
	__int64 v16; // rdx
	int v17; // r9d

	v2 = 0;
	if (!a1 || (sub_1407E4830(a1, 255i64, 0x24ui64), !a2))
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	v6 = *a2;
	if (*a2 < -43200 || v6 > 0x7934126CFi64)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		return 22i64;
	}
	v7 = (int)v6 / 31536000 + 70;
	v8 = (int)v6 / 31536000 + 69;
	v9 = 86400 * (-365i64 * ((int)v6 / 31536000) - (v8 / 4 - 17 + ((int)v6 / 31536000 + 369) / 400 - v8 / 100)) + v6;
	if (v9 >= 0)
	{
		if (!(v7 % 4) && v7 != 100 * (v7 / 100) || v7 + 1900 == 400 * ((v7 + 1900) / 400))
			goto LABEL_16;
	}
	else
	{
		LODWORD(v9) = v9 + 31536000;
		v7 = v8;
		if (!(v8 % 4) && v8 != 100 * (v8 / 100) || v8 + 1900 == 400 * ((v8 + 1900) / 400))
		{
			LODWORD(v9) = v9 + 86400;
		LABEL_16:
			v2 = 1;
		}
	}
	a1[5] = v7;
	v10 = &dword_140C1B1A8;
	a1[7] = (int)v9 / 86400;
	v11 = a1[7];
	v12 = (int)v9 % 86400;
	v13 = 1;
	if (!v2)
		v10 = &dword_140C1B170;
	for (i = v10 + 1; *i < v11; ++i)
		++v13;
	v15 = v13 - 1;
	a1[4] = v15;
	a1[3] = v11 - v10[v15];
	v16 = (unsigned __int128)(*a2 * (__int128)0x1845C8A0CE512957i64) >> 64;
	a1[8] = 0;
	a1[6] = (int)(((unsigned __int64)v16 >> 63) + (v16 >> 13) + 4) % 7;
	a1[2] = v12 / 3600;
	v17 = v12 % 3600;
	a1[1] = v17 / 60;
	result = 0i64;
	*a1 = v17 % 60;
	return result;
}
// 140C1B170: using guessed type int dword_140C1B170;
// 140C1B1A8: using guessed type int dword_140C1B1A8;


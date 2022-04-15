#include "../winhttp.h"

//----- (0000000140795B60) ----------------------------------------------------
__int64 __fastcall sub_140795B60(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	signed __int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rax
	__int64 result; // rax
	int v11[10]; // [rsp+20h] [rbp-38h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3 || v1 == dword_140A12138 || (int)v1[2] <= 0)
	{
		v7 = sub_1408FCC50(0i64);
	}
	else
	{
		if ((unsigned __int64)v1 >= v3)
			goto LABEL_11;
		if (v1 == dword_140A12138 || v1[2] != 5)
		{
			if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
			{
				v4 = (int)v1[2];
				if ((_DWORD)v4 != -1)
				{
					v5 = off_140A123B0[v4];
					goto LABEL_12;
				}
			}
		LABEL_11:
			v5 = aNoValue;
		LABEL_12:
			v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v5);
			sub_140056570(a1, 1u, v6);
		}
		for (; a1[2] < (unsigned __int64)(a1[3] + 16i64); a1[2] += 16i64)
			*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] = a1[3] + 16i64;
		v11[0] = sub_140795450(a1, (unsigned __int64*)aSec, 0);
		v11[1] = sub_140795450(a1, (unsigned __int64*)aMin_8, 0);
		v11[2] = sub_140795450(a1, (unsigned __int64*)aHour_1, 12);
		v11[3] = sub_140795450(a1, (unsigned __int64*)aDay_1, -1);
		v11[4] = sub_140795450(a1, (unsigned __int64*)aMonth_1, -1) - 1;
		v11[5] = sub_140795450(a1, (unsigned __int64*)aYear_1, -1) - 1900;
		v11[8] = sub_140795390((__int64)a1);
		v7 = sub_140901510(v11);
	}
	v8 = v7;
	if (v7 == -1)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	else
	{
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
	}
	result = 1i64;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];


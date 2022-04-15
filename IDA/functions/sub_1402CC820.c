#include "../winhttp.h"

//----- (00000001402CC820) ----------------------------------------------------
__int64 __fastcall sub_1402CC820(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // r8
	__int64 v7; // r10
	unsigned __int64 v8; // rax
	unsigned int v9; // edx
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v11[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v11, 2i64);
	v5 = a1[49];
	v6 = 0i64;
	if (!v5)
		return -1i64;
	while (1)
	{
		v8 = v6 + ((v5 - v6) >> 1);
		v7 = a1[52];
		v9 = *(_DWORD*)(a1[48] + 4i64 * *(_QWORD*)(v7 + 8 * v8));
		if (a2 >= v9)
			break;
		v5 = v6 + ((v5 - v6) >> 1);
	LABEL_6:
		if (v6 >= v5)
			return -1i64;
	}
	if (a2 > v9)
	{
		v6 = v8 + 1;
		goto LABEL_6;
	}
	return *(_QWORD*)(v7 + 8 * v8);
}
// 1402CC820: using guessed type int var_18[6];


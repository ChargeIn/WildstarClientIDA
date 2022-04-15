#include "../winhttp.h"

//----- (0000000140712EF0) ----------------------------------------------------
__int64 __fastcall sub_140712EF0(__int64 a1, int* a2)
{
	int* v3; // rax
	int v4; // r8d
	int v5; // r10d
	int v6; // r9d
	int v7; // ecx
	int v8; // edx
	int v9; // eax

	v3 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	v4 = *a2;
	v5 = *v3;
	v6 = v3[1];
	v7 = v3[2];
	v8 = v3[3];
	if (*a2 < *v3)
		return -1i64;
	if (v4 >= v7)
		return -1i64;
	v9 = a2[1];
	if (v9 < v6 || v9 >= v8)
		return -1i64;
	else
		return v4 + (v7 - v5) * (v9 - v6) - v5;
}


#include "../winhttp.h"

//----- (00000001406E4E90) ----------------------------------------------------
__int64 __fastcall sub_1406E4E90(_DWORD* a1, unsigned __int8* a2, int a3)
{
	__int64* v3; // r11
	int v4; // r10d
	__int64 v5; // rax
	int v7; // r9d
	int v8; // r8d
	unsigned __int8 v9; // dl
	int v10; // r8d
	__int64 result; // rax

	v3 = *(__int64**)a2;
	v4 = a2[68];
	v5 = **(_QWORD**)a2;
	v7 = v4 + a3;
	v8 = *(unsigned __int8*)(*(_QWORD*)a2 + 64i64);
	if (*(_DWORD*)(v5 + 20) < v7)
		v7 = *(_DWORD*)(v5 + 20);
	v9 = v7;
	if (v7 < v8)
		v9 = v8;
	a2[68] = v9;
	v10 = v9 - v4;
	a1[676] += v10 * *(_DWORD*)(*v3 + 24);
	a1[677] += v10 * *(_DWORD*)(**(_QWORD**)a2 + 32i64);
	a1[678] += v10 * *(_DWORD*)(**(_QWORD**)a2 + 28i64);
	result = (unsigned int)(v10 * *(_DWORD*)(**(_QWORD**)a2 + 36i64));
	a1[679] += result;
	return result;
}


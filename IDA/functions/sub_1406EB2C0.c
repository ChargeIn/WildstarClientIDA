#include "../winhttp.h"

//----- (00000001406EB2C0) ----------------------------------------------------
__int64 __fastcall sub_1406EB2C0(_QWORD* a1)
{
	int v1; // ebx
	int v3; // edi
	__int64 v4; // rax
	int v5; // ebp
	unsigned __int64 v6; // r9
	__int64 v7; // r10
	__int64 v8; // r11
	__int64* v9; // r8
	unsigned __int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = sub_1406E8880(a1, 1u);
	v5 = 0;
	v6 = 0i64;
	v7 = *(_QWORD*)(v4 + 2464);
	v8 = v4;
	if (v7 >= 2)
	{
		v9 = *(__int64**)(v4 + 2456);
		v10 = ((unsigned __int64)(v7 - 2) >> 1) + 1;
		v6 = 2 * v10;
		do
		{
			v11 = *v9;
			v9 += 2;
			v1 += *(_DWORD*)(**(_QWORD**)v11 + 20i64);
			v3 += *(_DWORD*)(**(_QWORD**)*(v9 - 1) + 20i64);
			--v10;
		} while (v10);
	}
	if (v6 < v7)
		v5 = *(_DWORD*)(***(_QWORD***)(*(_QWORD*)(v8 + 2456) + 8 * v6) + 20i64);
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	result = 1i64;
	*(double*)v12 = (double)(v5 + v3 + v1);
	a1[2] += 16i64;
	return result;
}


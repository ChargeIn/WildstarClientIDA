#include "../winhttp.h"

//----- (000000014030B0C0) ----------------------------------------------------
__int64 __fastcall sub_14030B0C0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // r9
	__int64 v4; // r10
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // r11
	__int64 v9; // r10
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 result; // rax

	v3 = *((_QWORD*)a3 + 1);
	v4 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1 || a2 + v3 + 76 * (unsigned __int64)*a3 > a1[1])
		return 2147500037i64;
	v5 = 0i64;
	v6 = 0i64;
	if (*a3)
		v6 = v4;
	*((_QWORD*)a3 + 1) = v6;
	v7 = *((_QWORD*)a3 + 3);
	v8 = v7 + a2;
	if ((unsigned __int64)(v7 + a2) < *a1)
		return 2147500037i64;
	v9 = a3[4];
	if ((unsigned __int64)(a2 + v7 + 4 * v9) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	if ((_DWORD)v9)
		v10 = v8;
	*((_QWORD*)a3 + 3) = v10;
	v11 = *((_QWORD*)a3 + 5);
	if ((unsigned __int64)(v11 + a2) < *a1 || a2 + v11 + 112 * (unsigned __int64)a3[8] > a1[1])
		return 2147500037i64;
	if (a3[8])
		v5 = v11 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 5) = v5;
	return result;
}


#include "../winhttp.h"

//----- (000000014030EB90) ----------------------------------------------------
__int64 __fastcall sub_14030EB90(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v5; // r11
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // r10
	__int64 v9; // rax
	__int64 v10; // rax

	v3 = *((_QWORD*)a3 + 1);
	v5 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0i64;
	v9 = 0i64;
	if ((_DWORD)v7)
		v9 = v5;
	*((_QWORD*)a3 + 1) = v9;
	v10 = *((_QWORD*)a3 + 2);
	if ((unsigned __int64)(v10 + a2) < *a1 || (unsigned __int64)(a2 + v7 + v10) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v7)
		v8 = v10 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 2) = v8;
	return result;
}


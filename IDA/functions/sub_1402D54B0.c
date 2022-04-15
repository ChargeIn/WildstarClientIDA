#include "../winhttp.h"

//----- (00000001402D54B0) ----------------------------------------------------
__int64 __fastcall sub_1402D54B0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v5; // rcx
	__int64 v6; // r11
	__int64 v7; // r10
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r11
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // r11
	__int64 result; // rax

	v3 = *(_QWORD*)(a3 + 16);
	v5 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v6 = *(unsigned int*)(a3 + 8);
	if ((unsigned __int64)(a2 + v3 + 2 * v6) > a1[1])
		return 2147500037i64;
	v7 = 0i64;
	v8 = 0i64;
	if ((_DWORD)v6)
		v8 = v5;
	*(_QWORD*)(a3 + 16) = v8;
	v9 = *(_QWORD*)(a3 + 104);
	v10 = v9 + a2;
	if ((unsigned __int64)(v9 + a2) < *a1)
		return 2147500037i64;
	v11 = *(unsigned int*)(a3 + 96);
	if ((unsigned __int64)(a2 + v9 + 4 * v11) > a1[1])
		return 2147500037i64;
	v12 = 0i64;
	if ((_DWORD)v11)
		v12 = v10;
	*(_QWORD*)(a3 + 104) = v12;
	v13 = *(_QWORD*)(a3 + 120);
	if ((unsigned __int64)(v13 + a2) < *a1)
		return 2147500037i64;
	v14 = *(unsigned int*)(a3 + 112);
	if ((unsigned __int64)(a2 + v13 + 12 * v14) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v14)
		v7 = v13 + a2;
	result = 0i64;
	*(_QWORD*)(a3 + 120) = v7;
	return result;
}


#include "../winhttp.h"

//----- (000000014034B850) ----------------------------------------------------
__int64 __fastcall sub_14034B850(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // r10
	__int64 v6; // r11
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r11
	__int64 v11; // r10
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // r11
	__int64 v15; // r10
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // r11
	__int64 v19; // r10
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // r10

	if (*(_DWORD*)a3 != 1280591192)
		return 2684616704i64;
	if (*(_DWORD*)(a3 + 4) != 4)
		return 2684616705i64;
	v4 = *(_QWORD*)(a3 + 24);
	v5 = v4 + a2;
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v6 = *(unsigned int*)(a3 + 16);
	if ((unsigned __int64)(a2 + v4 + 2 * v6) > a1[1])
		return 2147500037i64;
	v7 = 0i64;
	v8 = 0i64;
	if ((_DWORD)v6)
		v8 = v5;
	*(_QWORD*)(a3 + 24) = v8;
	v9 = *(_QWORD*)(a3 + 40);
	v10 = v9 + a2;
	if ((unsigned __int64)(v9 + a2) < *a1)
		return 2147500037i64;
	v11 = *(unsigned int*)(a3 + 32);
	if ((unsigned __int64)(a2 + v9 + 2 * v11) > a1[1])
		return 2147500037i64;
	v12 = 0i64;
	if ((_DWORD)v11)
		v12 = v10;
	*(_QWORD*)(a3 + 40) = v12;
	v13 = *(_QWORD*)(a3 + 56);
	v14 = v13 + a2;
	if ((unsigned __int64)(v13 + a2) < *a1)
		return 2147500037i64;
	v15 = *(unsigned int*)(a3 + 48);
	if ((unsigned __int64)(a2 + v13 + 2 * v15) > a1[1])
		return 2147500037i64;
	v16 = 0i64;
	if ((_DWORD)v15)
		v16 = v14;
	*(_QWORD*)(a3 + 56) = v16;
	v17 = *(_QWORD*)(a3 + 72);
	v18 = v17 + a2;
	if ((unsigned __int64)(v17 + a2) < *a1)
		return 2147500037i64;
	v19 = *(unsigned int*)(a3 + 64);
	if ((unsigned __int64)(a2 + v17 + 8 * v19) > a1[1])
		return 2147500037i64;
	v20 = 0i64;
	if ((_DWORD)v19)
		v20 = v18;
	*(_QWORD*)(a3 + 72) = v20;
	v21 = *(_QWORD*)(a3 + 88);
	if ((unsigned __int64)(v21 + a2) < *a1)
		return 2147500037i64;
	v22 = *(unsigned int*)(a3 + 80);
	if ((unsigned __int64)(a2 + v21 + 2 * v22) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v22)
		v7 = v21 + a2;
	result = 0i64;
	*(_QWORD*)(a3 + 88) = v7;
	return result;
}


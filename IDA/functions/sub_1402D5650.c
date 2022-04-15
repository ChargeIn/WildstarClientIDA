#include "../winhttp.h"

//----- (00000001402D5650) ----------------------------------------------------
__int64 __fastcall sub_1402D5650(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // r10
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // r10
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r10
	__int64 v16; // rcx
	unsigned int* v17; // r8
	int v18; // eax

	if (*(_DWORD*)a3 != 1145980750)
		return 2685403137i64;
	if (*(_DWORD*)(a3 + 4) != 6)
		return 2685403138i64;
	v5 = *(_QWORD*)(a3 + 16);
	v6 = v5 + a2;
	if ((unsigned __int64)(v5 + a2) < *a1)
		return 2147500037i64;
	v7 = *(unsigned int*)(a3 + 8);
	if ((unsigned __int64)(a2 + v5 + 2 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0;
	v9 = 0i64;
	if ((_DWORD)v7)
		v9 = v6;
	*(_QWORD*)(a3 + 16) = v9;
	v10 = *(_QWORD*)(a3 + 32);
	v11 = v10 + a2;
	if ((unsigned __int64)(v10 + a2) < *a1)
		return 2147500037i64;
	v12 = *(unsigned int*)(a3 + 24);
	if ((unsigned __int64)(a2 + v10 + 2 * v12) > a1[1])
		return 2147500037i64;
	v13 = 0i64;
	if ((_DWORD)v12)
		v13 = v11;
	*(_QWORD*)(a3 + 32) = v13;
	v14 = *(_QWORD*)(a3 + 48);
	if ((unsigned __int64)(v14 + a2) < *a1)
		return 2147500037i64;
	v15 = *(unsigned int*)(a3 + 40);
	if ((unsigned __int64)(a2 + v14 + 2 * v15) > a1[1])
		return 2147500037i64;
	v16 = 0i64;
	if ((_DWORD)v15)
		v16 = v14 + a2;
	v17 = (unsigned int*)(a3 + 56);
	*((_QWORD*)v17 - 1) = v16;
	v18 = sub_1402CA6C0(a1, a2, v17);
	if (v18 < 0)
		return (unsigned int)v18;
	return v8;
}


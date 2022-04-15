#include "../winhttp.h"

//----- (00000001402CD6D0) ----------------------------------------------------
__int64 __fastcall sub_1402CD6D0(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
	__int64 v3; // rax
	__int64 v7; // rbp
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rbp
	__int64 v11; // rax
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // rbx
	__int64 v14; // rax
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v16[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v3 + 64))(a1, v16, 3i64);
	if (!a1[4])
		goto LABEL_11;
	v7 = a1[3];
	v16[0] = -1;
	if (*(_DWORD*)(v7 + 24) != 3)
		sub_1402C9AE0(v7, (__int64)v16, 3);
	v8 = *(_QWORD*)(v7 + 64);
	v9 = a1[8];
	if (v9 < *(unsigned int*)(v8 + 112)
		&& (v10 = *(unsigned int*)(*(_QWORD*)(v8 + 120) + 40 * v9 + 24), a2 >= v10)
		&& (v11 = sub_1402D5890(a1[4]), v12 = a2 - v10, v12 < *(unsigned int*)(v11 + 8))
		&& (v13 = *(_QWORD*)(v11 + 16) + (v12 << 7), v14 = *(unsigned int*)(v13 + 112), (_DWORD)v14))
	{
		if (a3)
			*a3 = v14;
		return *(_QWORD*)(v13 + 120);
	}
	else
	{
	LABEL_11:
		if (a3)
			*a3 = 0i64;
		return 0i64;
	}
}


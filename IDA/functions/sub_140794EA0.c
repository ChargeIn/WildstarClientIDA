#include "../winhttp.h"

//----- (0000000140794EA0) ----------------------------------------------------
__int64 __fastcall sub_140794EA0(_QWORD* a1, unsigned __int64* a2, __int64 a3, __int64 a4)
{
	__int64 v8; // rax
	__int64 v9; // r8
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // r8
	_QWORD* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rsi
	unsigned __int64 v19; // r8
	__int64 v20; // rax
	unsigned int* v21; // r9
	__int64 result; // rax
	__int64 v23; // [rsp+20h] [rbp-18h] BYREF
	int v24; // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[5];
	if (v8 == a1[10])
		v9 = a1[15];
	else
		v9 = *(_QWORD*)(**(_QWORD**)(v8 + 8) + 24i64);
	v10 = sub_140060AB0((__int64)a1, 0, v9);
	v10[4] = a4;
	v11 = a1[2];
	*(_QWORD*)v11 = v10;
	*(_DWORD*)(v11 + 8) = 6;
	v12 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
		sub_14005E2C0((__int64)a1);
	v13 = a1[5];
	if (v13 == a1[10])
		v14 = a1[15];
	else
		v14 = *(_QWORD*)(**(_QWORD**)(v13 + 8) + 24i64);
	v15 = sub_140060AB0((__int64)a1, 1, v14);
	v15[4] = a3;
	a1[2] -= 16i64;
	v16 = a1[2];
	v15[5] = *(_QWORD*)v16;
	*((_DWORD*)v15 + 12) = *(_DWORD*)(v16 + 8);
	v17 = a1[2];
	*(_QWORD*)v17 = v15;
	*(_DWORD*)(v17 + 8) = 6;
	a1[2] += 16i64;
	v18 = a1[2];
	v19 = -1i64;
	do
		++v19;
	while (*((_BYTE*)a2 + v19));
	v20 = sub_140062650((__int64)a1, a2, v19);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v23 = v20;
	v24 = 4;
	result = sub_14005EA50((__int64)a1, (__int64*)(v18 - 32), (int*)&v23, v21);
	a1[2] -= 16i64;
	return result;
}


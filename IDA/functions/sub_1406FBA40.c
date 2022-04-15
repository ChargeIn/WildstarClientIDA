#include "../winhttp.h"

//----- (00000001406FBA40) ----------------------------------------------------
__int64 __fastcall sub_1406FBA40(_QWORD* a1)
{
	__int64* v1; // rax
	__int64* v3; // rcx
	int v4; // eax
	int v5; // eax
	int v6; // ebp
	int v7; // esi
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+40h] [rbp+8h] BYREF

	v1 = (__int64*)a1[3];
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v1 < a1[2])
		v3 = v1;
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v17))
	{
		v16 = 3;
		v3 = &v15;
		v15 = v17;
	LABEL_7:
		v5 = (int)*(double*)v3;
		goto LABEL_8;
	}
	LOWORD(v5) = 0;
LABEL_8:
	v6 = (unsigned __int8)v5;
	v7 = BYTE1(v5);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"eType", 5ui64);
	v10 = a1[2];
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)v7;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"nBagIndex", 9ui64);
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v6;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


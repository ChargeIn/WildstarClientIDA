#include "../winhttp.h"

//----- (000000014011C3F0) ----------------------------------------------------
__int64 __fastcall sub_14011C3F0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	float v7; // xmm6_4
	__int64 v8; // rax
	__int64 v9; // rsi
	int v10; // ebp
	int v11; // r14d
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0i64;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v4 = (unsigned int)(v4 + 1);
			v6 = (unsigned int)v4;
			if ((unsigned int)v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * (unsigned int)v4);
	}
LABEL_7:
	v7 = 1.0;
	v8 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670, v4);
	v9 = v8;
	if (v1)
	{
		v7 = *(float*)(v1 + 88);
		v10 = *(_DWORD*)(v1 + 80);
		v11 = *(_DWORD*)(v1 + 84);
	}
	else
	{
		v10 = *(_DWORD*)(v8 + 8);
		v11 = *(_DWORD*)(v8 + 12);
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058710(a1, (unsigned __int64*)"nWidth", 6ui64);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"nHeight", 7ui64);
	v16 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = (double)v11;
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v12) = *(_DWORD*)(v9 + 8);
	sub_140058710(a1, (unsigned __int64*)"nRawWidth", 9ui64);
	v18 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = (double)(int)v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v12) = *(_DWORD*)(v9 + 12);
	sub_140058710(a1, (unsigned __int64*)"nRawHeight", 0xAui64);
	v20 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = (double)(int)v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"fScale", 6ui64);
	v22 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v22 + 8) = 3;
	*(double*)v22 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v23, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65670: using guessed type __int64 qword_140C65670;


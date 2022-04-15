#include "../winhttp.h"

//----- (0000000140114AE0) ----------------------------------------------------
__int64 __fastcall sub_140114AE0(_QWORD* a1)
{
	_DWORD* v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64* v6; // rax
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 v9; // rax
	__int64* v10; // rax
	__int64 v11; // rax
	__int64* v12; // rax

	v2 = (_DWORD*)sub_140114A30(a1);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	LODWORD(v3) = v2[260];
	sub_140058710((__int64)a1, (unsigned __int64*)"cpBegin", 7ui64);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)(int)v3;
	a1[2] += 16i64;
	v6 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v6, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	LODWORD(v3) = v2[262];
	sub_140058710((__int64)a1, (unsigned __int64*)"cpEnd", 5ui64);
	v7 = a1[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)(int)v3;
	a1[2] += 16i64;
	v8 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v8, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	LODWORD(v3) = v2[256];
	sub_140058710((__int64)a1, (unsigned __int64*)"cpCaret", 7ui64);
	v9 = a1[2];
	*(_DWORD*)(v9 + 8) = 3;
	*(double*)v9 = (double)(int)v3;
	a1[2] += 16i64;
	v10 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v10, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	LODWORD(v3) = v2[258];
	sub_140058710((__int64)a1, (unsigned __int64*)"cpAnchor", 8ui64);
	v11 = a1[2];
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = (double)(int)v3;
	a1[2] += 16i64;
	v12 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v12, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}


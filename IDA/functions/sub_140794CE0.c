#include "../winhttp.h"

//----- (0000000140794CE0) ----------------------------------------------------
__int64 __fastcall sub_140794CE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	_DWORD* v4; // rdi
	unsigned __int64 v5; // rdx
	_DWORD* v6; // rcx
	_QWORD* v7; // rsi
	_DWORD* v8; // rax
	unsigned __int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	__int64 v12; // rdx

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = sub_1400597C0((__int64)a1);
	v3 = a1[2];
	v4 = dword_140A12138;
	*(_QWORD*)v3 = v2;
	*(_DWORD*)(v3 + 8) = 8;
	a1[2] += 16i64;
	v5 = a1[2];
	v6 = (_DWORD*)a1[3];
	v7 = (_QWORD*)v2;
	if ((unsigned __int64)v6 >= v5 || v6 == dword_140A12138 || v6[2] != 6)
		goto LABEL_10;
	v8 = dword_140A12138;
	if ((unsigned __int64)v6 < v5)
		v8 = (_DWORD*)a1[3];
	if (v8[2] == 6 && *(_BYTE*)(*(_QWORD*)v8 + 10i64))
		LABEL_10:
	sub_140056570(a1, 1u, aLuaFunctionExp);
	v9 = a1[2];
	if (a1[3] < v9)
		v4 = (_DWORD*)a1[3];
	*(_QWORD*)v9 = *(_QWORD*)v4;
	*(_DWORD*)(v9 + 8) = v4[2];
	a1[2] += 16i64;
	result = 1i64;
	if (a1 != v7)
	{
		v11 = a1[2] - 16i64;
		a1[2] = v11;
		v12 = v7[2];
		v7[2] = v12 + 16;
		*(_QWORD*)v12 = *(_QWORD*)v11;
		*(_DWORD*)(v12 + 8) = *(_DWORD*)(v11 + 8);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


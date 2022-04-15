#include "../winhttp.h"

//----- (0000000140796850) ----------------------------------------------------
__int64 __fastcall sub_140796850(__int64 a1)
{
	unsigned __int64 v2; // rbx
	unsigned __int64* v3; // rsi
	unsigned __int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // r9
	_DWORD* v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rax
	__int64 v11; // r9
	_DWORD* v12; // rcx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

	v2 = -1i64;
	v3 = (unsigned __int64*)sub_140056BB0((_QWORD*)a1, 1u, 0i64);
	v4 = -1i64;
	v5 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 24i64);
	*(_DWORD*)(a1 + 144) = 5;
	*(_QWORD*)(a1 + 136) = v5;
	do
		++v4;
	while (aPreload_0[v4]);
	v6 = sub_140062650(a1, (unsigned __int64*)aPreload_0, v4);
	v7 = *(_QWORD*)(a1 + 16);
	v14 = v6;
	v15 = 4;
	sub_14005E8E0(a1, a1 + 136, (int*)&v14, v7);
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v8 == dword_140A12138 || v8[2] != 5)
		sub_140056830((_QWORD*)a1, (unsigned __int64*)aPackagePreload);
	v9 = *(_QWORD*)(a1 + 16);
	do
		++v2;
	while (*((_BYTE*)v3 + v2));
	v10 = sub_140062650(a1, v3, v2);
	v11 = *(_QWORD*)(a1 + 16);
	v14 = v10;
	v15 = 4;
	sub_14005E8E0(a1, v9 - 16, (int*)&v14, v11);
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v12 != dword_140A12138 && !v12[2])
		sub_140058780(a1, (unsigned __int64*)"\n\tno field package.preload['%s']", (const char*)v3);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


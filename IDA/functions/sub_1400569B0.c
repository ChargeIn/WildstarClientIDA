#include "../winhttp.h"

//----- (00000001400569B0) ----------------------------------------------------
__int64 __fastcall sub_1400569B0(__int64 a1, unsigned __int64* a2)
{
	__int64 v2; // rbx
	unsigned __int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r9
	_DWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 32);
	v4 = -1i64;
	do
		++v4;
	while (*((_BYTE*)a2 + v4));
	v5 = sub_140062650(a1, a2, v4);
	v6 = *(_QWORD*)(a1 + 16);
	v13 = v5;
	v14 = 4;
	sub_14005E8E0(a1, v2 + 160, (int*)&v13, v6);
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v7 == dword_140A12138 || v7[2])
		return 0i64;
	v8 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) = v7;
	if (*(_QWORD*)(v8 + 120) >= *(_QWORD*)(v8 + 112))
		sub_14005E2C0(a1);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v11 = *(_QWORD*)(v11 - 16);
	*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 8);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058A40(a1, -10000);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


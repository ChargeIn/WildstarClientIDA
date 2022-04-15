#include "../winhttp.h"

//----- (000000014087A510) ----------------------------------------------------
__int64 __fastcall sub_14087A510(__int64 a1)
{
	__int64 v1; // rax
	_DWORD* v3; // rsi
	unsigned int v4; // r12d
	_DWORD* v6; // r15
	_DWORD* v7; // r14
	_DWORD* v8; // r13
	unsigned int v9; // edi
	__int64 v10; // rbp
	__int64 v11; // rcx
	unsigned int v12; // ecx
	int v13; // r8d
	int v14; // eax
	bool v15; // zf
	__int64 v16; // rax
	int v17; // [rsp+50h] [rbp-48h] BYREF
	__int64 v18; // [rsp+58h] [rbp-40h]
	char v19[8]; // [rsp+60h] [rbp-38h] BYREF
	__int64 v20; // [rsp+68h] [rbp-30h]
	__int64 v21; // [rsp+A0h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 24);
	v3 = *(_DWORD**)(v1 + 416);
	v4 = *(_DWORD*)(v1 + 424);
	if (!v3)
		return 2i64;
	v17 = 0;
	v18 = 0i64;
	v6 = (_DWORD*)(a1 + 52);
	v7 = (_DWORD*)(a1 + 60);
	v8 = (_DWORD*)(a1 + 56);
	v9 = sub_14087FC20(
		v3,
		v4,
		(__int64)v19,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v17,
		0i64);
	if (v9 != 1)
		return 7i64;
	v10 = v20;
	if (*(_WORD*)v20 != 2)
		return 7i64;
	LODWORD(v21) = *(_DWORD*)(v20 + 4);
	HIDWORD(v21) = *(_DWORD*)(v20 + 20) & 0x3FFFF | (*(unsigned __int16*)(v20 + 2) << 25) & 0x1F000000 | 0x400000;
	v11 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(v11 + 192) = v21;
	sub_14085EF10(v11);
	if (v17)
		*(_QWORD*)(a1 + 16) = v18;
	v12 = *(unsigned __int16*)(v10 + 12);
	v13 = *(_DWORD*)(a1 + 48);
	*(_WORD*)(a1 + 96) = v12;
	v14 = (v13 << 6) / v12;
	v15 = *v7 == 0;
	*(_DWORD*)(a1 + 40) = v14;
	if (v15 || *(_WORD*)(a1 + 84) == 1)
		*v7 = v14 - 1;
	if (*v7 < *v8 || *v7 >= *(_DWORD*)(a1 + 40) || v4 != v13 + *v6)
		v9 = 2;
	v16 = (unsigned int)*v6;
	*(_DWORD*)(a1 + 44) = 0;
	*(_QWORD*)(a1 + 88) = (char*)v3 + v16;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 383i64) & 2) != 0)
		return sub_14087A490(a1);
	else
		return v9;
}
// 14087A510: using guessed type char var_38[8];


//----- (0000000140878B30) ----------------------------------------------------
__int64 __fastcall sub_140878B30(__int64 a1)
{
	__int64 v1; // rax
	_DWORD* v3; // rsi
	unsigned int v4; // ebp
	unsigned int* v6; // r12
	unsigned int* v7; // r13
	_DWORD* v8; // r14
	_DWORD* v9; // r15
	__int64 v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // r9
	unsigned int v13; // r8d
	bool v14; // zf
	__int64 v15; // rax
	int v16; // [rsp+50h] [rbp-48h] BYREF
	__int64 v17; // [rsp+58h] [rbp-40h]
	char v18[8]; // [rsp+60h] [rbp-38h] BYREF
	__int64 v19; // [rsp+68h] [rbp-30h]
	__int64 v20; // [rsp+A0h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 24);
	v3 = *(_DWORD**)(v1 + 416);
	v4 = *(_DWORD*)(v1 + 424);
	if (!v3)
		return 2i64;
	v6 = (unsigned int*)(a1 + 52);
	v7 = (unsigned int*)(a1 + 48);
	v16 = 0;
	v17 = 0i64;
	v8 = (_DWORD*)(a1 + 60);
	v9 = (_DWORD*)(a1 + 56);
	if ((unsigned int)sub_14087FC20(
		v3,
		v4,
		(__int64)v18,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v16,
		0i64) != 1)
		return 7i64;
	v10 = v19;
	if (*(_WORD*)v19 != 0xFFFE)
		return 7i64;
	LODWORD(v20) = *(_DWORD*)(v19 + 4);
	HIDWORD(v20) = *(_DWORD*)(v19 + 20) & 0x3FFFF | ((*(_WORD*)(v19 + 14) & 0x3F | ((*(_WORD*)(v19 + 12) & 0x1F) << 6)) << 18);
	v11 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(v11 + 192) = v20;
	sub_14085EF10(v11);
	if (v16)
		*(_QWORD*)(a1 + 16) = v17;
	v12 = *v6;
	v13 = *v7;
	*(_QWORD*)(a1 + 88) = (char*)v3 + v12;
	v14 = *v8 == 0;
	*(_DWORD*)(a1 + 40) = v13 / *(unsigned __int16*)(v10 + 12);
	if (v14 || *(_WORD*)(a1 + 84) == 1)
		*v8 = v13 / *(unsigned __int16*)(v10 + 12) - 1;
	if (*v8 < *v9 || *v8 >= *(_DWORD*)(a1 + 40) || v4 != v13 + (_DWORD)v12)
		return 2i64;
	v15 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 44) = 0;
	if ((*(_BYTE*)(v15 + 383) & 2) != 0)
		return sub_140878AF0(a1);
	else
		return 1i64;
}
// 140878B30: using guessed type char var_38[8];


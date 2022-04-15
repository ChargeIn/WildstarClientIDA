//----- (000000014089AE40) ----------------------------------------------------
_QWORD* __fastcall sub_14089AE40(
	_QWORD* a1,
	int a2,
	__int64 a3,
	__int64 a4,
	_DWORD* a5,
	__int64 a6,
	int a7,
	__int64 a8,
	char a9,
	_QWORD* a10)
{
	__int64 v15; // rax
	__int64 v16; // rbx
	char v17; // r8
	unsigned int v18; // ecx
	unsigned int v19; // r15d
	int v20; // eax
	__int64 v21; // rcx
	int v22; // eax
	int v23; // r8d
	int v24; // r15d
	__int64 v25; // r12
	signed int v26; // eax
	bool v27; // cl
	int v28; // eax
	__int64 v29; // rcx
	__int64 v30; // r8
	_QWORD* result; // rax
	int v32[14]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v33; // [rsp+60h] [rbp+8h]
	int v34; // [rsp+88h] [rbp+30h]

	v15 = sub_1408906B0(a6, 0i64);
	v16 = a1[21];
	v17 = *(_BYTE*)(v16 + 72);
	v33 = v15;
	v18 = a8 - a2;
	if ((v17 & 4) == 0 || (v17 & 2) != 0)
	{
		*(_BYTE*)(v16 + 72) = v17 & 0xFD;
	}
	else
	{
		v19 = a2 - *(_DWORD*)(v16 + 56);
		if (v19 < v18)
			v18 = v19;
		v20 = sub_140899F80(v18);
		v21 = *(_QWORD*)(v16 + 8);
		v32[0] = v20;
		v22 = *(_DWORD*)(v16 + 68);
		v32[2] = 0;
		v32[1] = v22;
		sub_14088B940(v21, v32);
		v15 = v33;
	}
	*(_BYTE*)(v16 + 72) &= ~4u;
	*(_BYTE*)(v16 + 24) = 0;
	v23 = *(_DWORD*)a4;
	v24 = 0;
	v25 = a8;
	v34 = *(_DWORD*)a4;
	if (*(int*)a4 > 0 && v15)
	{
		v26 = v23 * (dword_140C110B4 / 0x3E8u) - *(_DWORD*)(a4 + 8);
		v24 = v23 * (dword_140C110B4 / 0x3E8u) - v26;
		v25 = a8 - v26;
	}
	else if ((*(_BYTE*)(a4 + 16) & 0x20) != 0)
	{
		if (sub_140890730(a6, a8))
			v25 = a8 + (unsigned int)sub_1408922F0(v33);
		v23 = v34;
	}
	v27 = !a9 && v24 <= 0;
	v28 = *(_DWORD*)(a4 + 4);
	*(_BYTE*)(v16 + 72) |= 6u;
	*(_DWORD*)(v16 + 64) = v23;
	*(_DWORD*)(v16 + 68) = v28;
	*(_QWORD*)(v16 + 56) = v25;
	if (v27)
	{
		if (*(_BYTE*)(v16 + 24))
		{
			if (a8 >= *(_QWORD*)(v16 + 16))
				goto LABEL_23;
		}
		else
		{
			*(_BYTE*)(v16 + 24) = 1;
		}
		*(_QWORD*)(v16 + 16) = a8;
	}
LABEL_23:
	sub_14088CC70(*(_QWORD*)(a6 + 264), (*(_DWORD*)(a4 + 16) & 0x20) != 0);
	*(_QWORD*)(*(_QWORD*)(a3 + 8) + 112i64) = a8;
	*(_QWORD*)(a3 + 32) = a8 - a7;
	v29 = *(_QWORD*)(a3 + 8);
	*(_DWORD*)(a3 + 40) = *a5;
	*(_DWORD*)(a3 + 44) = a5[1];
	*(_DWORD*)(a3 + 48) = a5[2];
	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 120i64))(v29))
		*(_DWORD*)(a3 + 40) = 0;
	if ((int)*a5 > 0)
		*(_DWORD*)(a3 + 48) += a7;
	*(_BYTE*)(a3 + 72) |= 1u;
	sub_140890430(a6, a10, a8);
	while (!*(_BYTE*)(a6 + 296))
	{
		LOBYTE(v30) = 1;
		(*(void(__fastcall**)(_QWORD*, __int64, __int64))(*a1 + 96i64))(a1, a6, v30);
		sub_140890430(a6, a10, a8);
	}
	*(_QWORD*)a3 = 0i64;
	result = (_QWORD*)a1[21];
	if (result)
		*result = a3;
	else
		a1[20] = a3;
	a1[21] = a3;
	return result;
}
// 14089B03C: variable 'v30' is possibly undefined
// 140C110B4: using guessed type int dword_140C110B4;


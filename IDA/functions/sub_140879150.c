//----- (0000000140879150) ----------------------------------------------------
__int64 __fastcall sub_140879150(__int64 a1, _DWORD* a2)
{
	unsigned int v4; // edx
	int* v5; // r14
	_DWORD* v6; // r15
	unsigned int* v7; // rsi
	unsigned int* v8; // rbp
	__int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rcx
	int v12; // r10d
	unsigned int v13; // r11d
	unsigned int v14; // r9d
	int v15; // ecx
	int v16; // r8d
	unsigned int v17; // ecx
	unsigned int v18; // r8d
	bool v19; // zf
	int v20[3]; // [rsp+50h] [rbp-48h] BYREF
	char v21; // [rsp+5Dh] [rbp-3Bh]
	unsigned int v22; // [rsp+60h] [rbp-38h] BYREF
	__int64 v23; // [rsp+68h] [rbp-30h]
	__int64 v24; // [rsp+70h] [rbp-28h] BYREF
	__int64 v25; // [rsp+78h] [rbp-20h]
	__int64 v26; // [rsp+A0h] [rbp+8h]

	v4 = *(_DWORD*)(a1 + 104);
	v22 = 0;
	v23 = 0i64;
	v5 = (int*)(a1 + 52);
	v6 = (_DWORD*)(a1 + 48);
	v7 = (unsigned int*)(a1 + 60);
	v8 = (unsigned int*)(a1 + 56);
	result = sub_14087FC20(
		a2,
		v4,
		(__int64)&v24,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v22,
		0i64);
	if ((_DWORD)result == 1)
	{
		v10 = v25;
		if (*(_WORD*)v25 != 0xFFFE)
			return 7i64;
		LODWORD(v26) = *(_DWORD*)(v25 + 4);
		HIDWORD(v26) = *(_DWORD*)(v25 + 20) & 0x3FFFF | ((*(_WORD*)(v25 + 14) & 0x3F | ((*(_WORD*)(v25 + 12) & 0x1F) << 6)) << 18);
		v11 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(v11 + 192) = v26;
		sub_14085EF10(v11);
		if (v22)
			sub_140880FB0(a1, &v22);
		v12 = *v5;
		v13 = *v7;
		v14 = *v5 + *v6;
		*(_DWORD*)(a1 + 40) = *v6 / (unsigned int)*(unsigned __int16*)(v10 + 12);
		if (!v13 || *(_WORD*)(a1 + 84) == 1)
		{
			*(_DWORD*)(a1 + 120) = v14;
			*(_DWORD*)(a1 + 116) = v12;
			*v7 = (v14 - v12) / *(unsigned __int16*)(v10 + 12) - 1;
		}
		else
		{
			v15 = *(unsigned __int16*)(v10 + 12);
			v16 = v15 * *v8;
			v17 = v12 + (v13 + 1) * v15;
			v18 = v12 + v16;
			*(_DWORD*)(a1 + 120) = v17;
			*(_DWORD*)(a1 + 116) = v18;
			if (v13 < *v8 || v18 > v14 || v17 > v14)
				return 7i64;
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v20);
		v19 = *(_WORD*)(a1 + 84) == 1;
		*(float*)v20 = (float)(*(_DWORD*)(v10 + 4) * *(unsigned __int16*)(v10 + 12)) * 0.001;
		if (!v19)
		{
			v20[1] = *(_DWORD*)(a1 + 116);
			v20[2] = *(_DWORD*)(a1 + 120);
		}
		v21 = (int)*(float*)(*(_QWORD*)(a1 + 24) + 388i64);
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 40i64))(*(_QWORD*)(a1 + 88), v20);
		return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 88) + 48i64))(
			*(_QWORD*)(a1 + 88),
			*(unsigned __int16*)(v10 + 12));
	}
	return result;
}


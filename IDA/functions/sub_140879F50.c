//----- (0000000140879F50) ----------------------------------------------------
__int64 __fastcall sub_140879F50(__int64 a1, _DWORD* a2)
{
	unsigned int v4; // edx
	int* v5; // r15
	unsigned int* v6; // rbp
	unsigned int* v7; // rsi
	unsigned int* v8; // r14
	__int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rcx
	unsigned int v12; // r10d
	unsigned int v13; // r9d
	int v14; // r8d
	unsigned int v15; // r11d
	unsigned int v16; // edx
	int v17; // r9d
	unsigned int v18; // r10d
	unsigned int v19; // r9d
	unsigned int v20; // eax
	bool v21; // zf
	int v22[3]; // [rsp+50h] [rbp-48h] BYREF
	char v23; // [rsp+5Dh] [rbp-3Bh]
	unsigned int v24; // [rsp+60h] [rbp-38h] BYREF
	__int64 v25; // [rsp+68h] [rbp-30h]
	__int64 v26; // [rsp+70h] [rbp-28h] BYREF
	__int64 v27; // [rsp+78h] [rbp-20h]
	__int64 v28; // [rsp+A0h] [rbp+8h]

	v4 = *(_DWORD*)(a1 + 104);
	v24 = 0;
	v25 = 0i64;
	v5 = (int*)(a1 + 52);
	v6 = (unsigned int*)(a1 + 48);
	v7 = (unsigned int*)(a1 + 60);
	v8 = (unsigned int*)(a1 + 56);
	result = sub_14087FC20(
		a2,
		v4,
		(__int64)&v26,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v24,
		0i64);
	if ((_DWORD)result == 1)
	{
		v10 = v27;
		if (*(_WORD*)v27 != 2)
			return 7i64;
		LODWORD(v28) = *(_DWORD*)(v27 + 4);
		HIDWORD(v28) = *(_DWORD*)(v27 + 20) & 0x3FFFF | (*(unsigned __int16*)(v27 + 2) << 25) & 0x1F000000 | 0x400000;
		v11 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(v11 + 192) = v28;
		sub_14085EF10(v11);
		if (v24)
			sub_140880FB0(a1, &v24);
		v12 = *(unsigned __int16*)(v10 + 12);
		v13 = *v6;
		v14 = *v5;
		v15 = *v7;
		*(_DWORD*)(a1 + 128) = v12;
		v16 = v14 + v13;
		*(_DWORD*)(a1 + 40) = (v13 << 6) / *(unsigned __int16*)(v10 + 12);
		if (!v15 || *(_WORD*)(a1 + 84) == 1)
		{
			*(_DWORD*)(a1 + 120) = v16;
			*(_DWORD*)(a1 + 116) = v14;
			*v7 = ((v13 / v12) << 6) - 1;
		}
		else
		{
			v17 = v12 * (*v8 >> 6);
			v18 = v14 + ((v15 + 1) >> 6) * v12;
			v19 = v14 + v17;
			*(_DWORD*)(a1 + 120) = v18;
			*(_DWORD*)(a1 + 116) = v19;
			if (v15 < *v8 || v19 > v16 || v18 > v16)
				return 7i64;
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v22);
		if (*v7 <= *v8)
			return 2i64;
		v20 = *(_DWORD*)(a1 + 40);
		if (*v8 > v20 || *v7 >= v20)
		{
			return 2i64;
		}
		else
		{
			v21 = *(_WORD*)(a1 + 84) == 1;
			*(float*)v22 = (float)((float)*(unsigned __int16*)(v10 + 12) * (float)*(int*)(v10 + 4)) * 0.000015625001;
			if (!v21)
			{
				v22[1] = *(_DWORD*)(a1 + 116);
				v22[2] = *(_DWORD*)(a1 + 120);
			}
			v23 = (int)*(float*)(*(_QWORD*)(a1 + 24) + 388i64);
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 40i64))(*(_QWORD*)(a1 + 88), v22);
			return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 88) + 48i64))(
				*(_QWORD*)(a1 + 88),
				36 * (unsigned int)*(unsigned __int16*)(v10 + 2));
		}
	}
	return result;
}


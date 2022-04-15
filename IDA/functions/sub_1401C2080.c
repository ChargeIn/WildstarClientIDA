//----- (00000001401C2080) ----------------------------------------------------
__int64 __fastcall sub_1401C2080(__int64 a1, unsigned __int64* a2)
{
	__int64 result; // rax
	unsigned int v5; // esi
	unsigned int v6; // edi
	__int64 v7; // r13
	__int64 v8; // r14
	__int64 v9; // rbx
	__int64 v10; // r15
	int v11; // eax
	int v12; // eax
	int v13; // edx
	unsigned int v14; // edx
	unsigned int v15; // r12d
	__int64 v16; // r13
	unsigned int v17; // esi
	unsigned int v18; // edi
	_QWORD* v19; // r14
	__int64 v20; // rcx
	unsigned __int64* v21; // r9
	__int64 v22; // rbx
	int v23; // eax
	_QWORD* v24; // r8
	int v25; // eax
	unsigned int v26; // ecx
	__int64 v27; // [rsp+30h] [rbp-48h]
	int v28; // [rsp+80h] [rbp+8h] BYREF
	unsigned int v29; // [rsp+90h] [rbp+18h] BYREF
	unsigned int v30; // [rsp+98h] [rbp+20h]

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	v5 = *(_DWORD*)(a1 + 80);
	v6 = 0;
	if (!v5)
		return 1i64;
	v7 = *(_QWORD*)(a1 + 72);
	v8 = *(_QWORD*)(a1 + 56);
	while (1)
	{
		v9 = v6 + ((v5 - v6) >> 1);
		v10 = *(unsigned int*)(v7 + 4 * v9);
		v11 = sub_1407E6AF0(a2, 32 * v10 + v8 + 4, 0x14ui64);
		if (v11 >= 0)
			break;
		v5 = v6 + ((v5 - v6) >> 1);
	LABEL_9:
		if (v6 >= v5)
			return 1i64;
	}
	if (v11 > 0)
	{
		v6 = v9 + 1;
		goto LABEL_9;
	}
	v30 = *(_DWORD*)(v8 + 32 * v10);
	sub_1401C2F20(a1 + 72, (unsigned int)v9);
	v12 = *(_DWORD*)(a1 + 48);
	v13 = *(_DWORD*)(a1 + 44) - 1;
	v29 = v13;
	v28 = v12;
	if (*(_DWORD*)(a1 + 44) != v13)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, unsigned int*, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			8i64,
			&v29,
			4i64);
		if ((int)result < 0)
			return result;
		v13 = v29;
		*(_DWORD*)(a1 + 44) = v29;
	}
	v14 = ((((unsigned int)(v13 - 1) >> 16) | (v13 - 1)) >> 8) | ((unsigned int)(v13 - 1) >> 16) | (v13 - 1);
	result = (*(__int64(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 8) + 48i64))(
		*(_QWORD*)(a1 + 8),
		&v28,
		32i64
		* (((((v14 >> 4) | v14) >> 2) | (v14 >> 4) | v14 | (((((v14 >> 4) | v14) >> 2) | (v14 >> 4) | v14) >> 1)) + 1));
	if ((int)result >= 0)
	{
		if (*(_DWORD*)(a1 + 48) != v28)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, int*, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				12i64,
				&v28,
				4i64);
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 48) = v28;
		}
		v15 = v29;
		if ((unsigned int)v10 >= v29)
			goto LABEL_30;
		v16 = *(_QWORD*)(a1 + 56);
		v17 = *(_DWORD*)(a1 + 80);
		v18 = 0;
		v19 = (_QWORD*)(v16 + 32i64 * v29);
		if (!v17)
			goto LABEL_30;
		v20 = *(_QWORD*)(a1 + 72);
		v21 = (_QWORD*)((char*)v19 + 4);
		v27 = v20;
		while (1)
		{
			v22 = v18 + ((v17 - v18) >> 1);
			v23 = sub_1407E6AF0(v21, 32i64 * *(unsigned int*)(v20 + 4 * v22) + v16 + 4, 0x14ui64);
			if (v23 >= 0)
			{
				if (v23 <= 0)
				{
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
						*(_QWORD*)(a1 + 8),
						*(unsigned int*)(a1 + 48),
						32 * v10,
						v16 + 32i64 * v15,
						32i64);
					if ((int)result >= 0)
					{
						v24 = (_QWORD*)(32 * v10 + *(_QWORD*)(a1 + 56));
						*v24 = *v19;
						v24[1] = v19[1];
						v24[2] = v19[2];
						v24[3] = v19[3];
						*(_DWORD*)(*(_QWORD*)(a1 + 72) + 4 * v22) = v10;
						v15 = v29;
					LABEL_30:
						sub_1401C2DF0((__int64*)(a1 + 56), v15);
						v25 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 56i64))(*(_QWORD*)(a1 + 8), v30);
						v26 = 0;
						if (v25 < 0)
							return (unsigned int)v25;
						return v26;
					}
					return result;
				}
				v18 = v22 + 1;
			}
			else
			{
				v17 = v18 + ((v17 - v18) >> 1);
			}
			v20 = v27;
			v21 = (_QWORD*)((char*)v19 + 4);
			if (v18 >= v17)
				goto LABEL_30;
		}
	}
	return result;
}


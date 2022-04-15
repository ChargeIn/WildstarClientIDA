//----- (00000001402E6100) ----------------------------------------------------
__int64 __fastcall sub_1402E6100(__int64* a1, int** a2)
{
	__int64 v5; // rax
	__int64* v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // r15
	unsigned __int64 v9; // rbx
	unsigned __int64 v10; // rdx
	__int64 v11; // r10
	int v12; // r9d
	unsigned __int16* v13; // rcx
	int v14; // r8d
	int* v15; // rdi
	__int64 v16; // rax
	int* v17; // rax
	__int64 v18; // r8
	unsigned __int64 v19; // rbp
	__int64* v20; // rsi
	unsigned int* v21; // rcx
	int v22; // edx
	int v23; // edx
	unsigned int v24; // ebx
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // r9
	unsigned __int64 v29; // rdx
	unsigned int v30; // r8d
	int v31[4]; // [rsp+20h] [rbp-58h] BYREF
	int v32[4]; // [rsp+30h] [rbp-48h] BYREF
	int v33[4]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v34; // [rsp+88h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *a1;
	v31[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 48))(a1, v31);
	v6 = (__int64*)a1[2];
	v7 = *v6;
	v32[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(v6, v32);
	v8 = v6[680];
	v9 = 0i64;
	v10 = 0i64;
	if (v8)
	{
		v11 = a1[2];
		v12 = *((_DWORD*)a1 + 8);
		do
		{
			if (v10 < *(_QWORD*)(v11 + 5440))
				v13 = *(unsigned __int16**)(*(_QWORD*)(v11 + 5432) + 8 * v10);
			else
				v13 = 0i64;
			if (v12 >= v13[3] && v12 < v13[5])
			{
				v14 = *((_DWORD*)a1 + 9);
				if (v14 >= v13[4] && v14 < v13[6])
					++v9;
			}
			++v10;
		} while (v10 < v8);
	}
	v15 = sub_14018B280(32i64, 1u);
	if (!v15)
		return 2147942414i64;
	*(_QWORD*)v15 = off_140B787C0;
	v15[6] = 1;
	*((_QWORD*)v15 + 1) = 0i64;
	*((_QWORD*)v15 + 2) = 0i64;
	*((_QWORD*)v15 + 1) = v9;
	if (v9)
	{
		v16 = 8 * v9;
		if (!is_mul_ok(v9, 8ui64))
			v16 = -1i64;
		v17 = sub_14018B280(v16, 1u);
	}
	else
	{
		v17 = 0i64;
	}
	v18 = *((_QWORD*)v15 + 1);
	*((_QWORD*)v15 + 2) = v17;
	if (v18 && !v17)
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v15 + 32i64))(v15, 1i64);
		return 2147942414i64;
	}
	sub_1407E4830(v17, 0i64, 8 * v18);
	v19 = 0i64;
	for (*((_QWORD*)v15 + 1) = 0i64; v19 < v8; ++v19)
	{
		v20 = (__int64*)a1[2];
		if (v19 < v20[680])
			v21 = *(unsigned int**)(v20[679] + 8 * v19);
		else
			v21 = 0i64;
		v22 = *((_DWORD*)a1 + 8);
		if (v22 >= *((unsigned __int16*)v21 + 3) && v22 < *((unsigned __int16*)v21 + 5))
		{
			v23 = *((_DWORD*)a1 + 9);
			if (v23 >= *((unsigned __int16*)v21 + 4) && v23 < *((unsigned __int16*)v21 + 6))
			{
				v24 = *v21;
				v25 = *v20;
				v26 = a1[2];
				v33[0] = -1;
				(*(void(__fastcall**)(__int64, int*))(v25 + 32))(v26, v33);
				v27 = v20[680];
				v28 = 0i64;
				while (v28 < v27)
				{
					v29 = (v27 + v28) >> 1;
					v30 = **(_DWORD**)(v20[679] + 8 * v29);
					if (v30 >= v24)
					{
						if (v30 <= v24)
						{
							if ((int)sub_1402E0360(v20, v29, &v34) >= 0)
								*(_QWORD*)(*((_QWORD*)v15 + 2) + 8i64 * (*((_QWORD*)v15 + 1))++) = v34;
							break;
						}
						v27 = (v27 + v28) >> 1;
					}
					else
					{
						v28 = v29 + 1;
					}
				}
			}
		}
	}
	*a2 = v15;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 1402E6100: using guessed type int var_58[4];
// 1402E6100: using guessed type int var_48[4];
// 1402E6100: using guessed type int var_38[4];


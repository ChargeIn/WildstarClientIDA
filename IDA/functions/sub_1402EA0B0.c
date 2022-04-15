//----- (00000001402EA0B0) ----------------------------------------------------
void __fastcall sub_1402EA0B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	unsigned int* v4; // r13
	__int64 v5; // r15
	unsigned int v6; // r9d
	int v7; // edx
	unsigned __int16* v8; // rcx
	__int64 v9; // r8
	int v10; // eax
	unsigned int i; // r9d
	__int16 v12; // ax
	__int64 v13; // r8
	int v14; // edi
	__int64 v15; // rax
	int* v16; // rax
	unsigned __int64 v17; // r8
	__int64 v18; // rsi
	unsigned int j; // r14d
	__int64 v20; // rbx
	__int64 v21; // rcx
	int* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // rdi
	unsigned __int64 v25; // r12
	__int64 v26; // r13
	__int64 v27; // rdx
	unsigned int v28; // ebx
	__int64 v29; // rsi
	int* v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	int* v33; // rax
	__int64 v34; // rcx
	int* v35; // rax
	__int64 v36; // rcx
	unsigned int v37; // r9d
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // r8
	__int64 v41; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	__int64 v44; // rdi
	__int64 v45; // rbx
	__int64 v46; // [rsp+20h] [rbp-39h] BYREF
	int* v47; // [rsp+28h] [rbp-31h]
	int* v48; // [rsp+30h] [rbp-29h] BYREF
	int* v49; // [rsp+38h] [rbp-21h] BYREF
	int* v50; // [rsp+40h] [rbp-19h] BYREF
	char v51[8]; // [rsp+48h] [rbp-11h] BYREF
	int* v52; // [rsp+50h] [rbp-9h]
	__int64 v53; // [rsp+58h] [rbp-1h]
	__int64 v55; // [rsp+C8h] [rbp+6Fh] BYREF
	unsigned int* v56; // [rsp+D0h] [rbp+77h]
	int v57; // [rsp+D8h] [rbp+7Fh]

	v56 = (unsigned int*)a3;
	v4 = (unsigned int*)a3;
	v5 = a1;
	*(_QWORD*)(a1 + 56) = a2;
	*(_DWORD*)(a1 + 24) = a4;
	if (!a4)
	{
		v6 = *(_DWORD*)a3;
		v7 = 0;
		if (*(_DWORD*)a3)
		{
			v8 = *(unsigned __int16**)(a3 + 8);
			v9 = v6;
			do
			{
				v10 = *v8;
				v8 += 56;
				v7 += v10;
				--v9;
			} while (v9);
		}
		*(_DWORD*)(v5 + 24) = v6 + (v7 << 13);
	}
	sub_1401CFD00((__int64*)(v5 + 8), *v4);
	for (i = 0; i < *v4; *(_WORD*)(*(_QWORD*)(v5 + 8) + 2 * v13) = v12)
	{
		v12 = *(_WORD*)(112i64 * i + *((_QWORD*)v4 + 1));
		v13 = i++;
	}
	if (*v4 == 1)
	{
		*(_WORD*)(v5 + 28) = 0;
		*(_DWORD*)(v5 + 32) = 0;
		*(_QWORD*)(v5 + 40) = 0i64;
		*(_QWORD*)(v5 + 48) = 0i64;
	}
	else
	{
		v53 = 0i64;
		v52 = sub_14018B280(40i64, 0);
		*(_BYTE*)v52 = 0;
		*((_QWORD*)v52 + 1) = 0i64;
		*((_QWORD*)v52 + 2) = v52;
		v14 = 0xFFFF;
		*((_QWORD*)v52 + 3) = v52;
		v15 = *(_QWORD*)(v5 + 56);
		*(_WORD*)(v5 + 28) = 255;
		v16 = sub_14018B280(*(unsigned int*)(v15 + 2240), 8u);
		v17 = *(unsigned int*)(*(_QWORD*)(v5 + 56) + 2240i64);
		v18 = (__int64)v16;
		v47 = v16;
		sub_1407E4830(v16, 255i64, v17);
		for (j = 0; j < *v4; ++j)
		{
			v20 = *(unsigned __int16*)(112i64 * j + *((_QWORD*)v4 + 1));
			if ((_DWORD)v20 != v14 && (unsigned int)v20 < *(_DWORD*)(*(_QWORD*)(v5 + 56) + 2240i64))
			{
				v14 = *(unsigned __int16*)(112i64 * j + *((_QWORD*)v4 + 1));
				v57 = v14;
				if ((_DWORD)v20 == 150)
				{
					if (*(_WORD*)(v5 + 28) == 255)
						*(_WORD*)(v5 + 28) = j;
				}
				else
				{
					*(_BYTE*)(v20 + v18) = 0;
					v21 = *((_QWORD*)v52 + 1);
					v22 = v52;
					while (v21)
					{
						if (*(_DWORD*)(v21 + 32) < (unsigned int)v20)
						{
							v21 = *(_QWORD*)(v21 + 24);
						}
						else
						{
							v22 = (int*)v21;
							v21 = *(_QWORD*)(v21 + 16);
						}
					}
					if (v22 == v52 || (unsigned int)v20 < v22[8])
					{
						LODWORD(v55) = v20;
						WORD2(v55) = 0;
						v48 = v22;
						sub_140032B30((__int64)v51, &v49, (__int64*)&v48, &v55);
						v22 = v49;
					}
					*((_WORD*)v22 + 18) = j;
					v23 = *(_QWORD*)(*(_QWORD*)(v5 + 56) + 2280i64);
					v24 = *(unsigned __int16**)(v23 + 8 * v20);
					v25 = *(_QWORD*)(v23 + 8i64 * (unsigned int)(v20 + 1));
					if ((unsigned __int64)v24 >= v25)
					{
						v14 = v20;
					}
					else
					{
						v26 = (__int64)v47;
						do
						{
							v27 = *v24;
							v28 = v24[1];
							v29 = v27;
							if (*(unsigned __int8*)(v27 + v26) > v28)
							{
								v30 = v52;
								v31 = *((_QWORD*)v52 + 1);
								while (v31)
								{
									if (*(_DWORD*)(v31 + 32) < (unsigned int)v27)
									{
										v31 = *(_QWORD*)(v31 + 24);
									}
									else
									{
										v30 = (int*)v31;
										v31 = *(_QWORD*)(v31 + 16);
									}
								}
								if (v30 == v52 || (unsigned int)v27 < v30[8])
								{
									LODWORD(v46) = v27;
									WORD2(v46) = 0;
									v48 = v30;
									sub_140032B30((__int64)v51, &v50, (__int64*)&v48, &v46);
									v30 = v50;
								}
								*((_WORD*)v30 + 18) = j;
								*(_BYTE*)(v29 + v26) = v28;
							}
							v24 += 2;
						} while ((unsigned __int64)v24 < v25);
						v5 = a1;
						v4 = v56;
						v18 = (__int64)v47;
						v14 = v57;
					}
				}
			}
		}
		sub_14018B900(v18, 0);
		if (*(_WORD*)(v5 + 28) == 255)
			*(_WORD*)(v5 + 28) = 0;
		v32 = (unsigned int)v53;
		*(_DWORD*)(v5 + 32) = v53;
		v33 = sub_14018B280(2 * v32, 0);
		v34 = 2i64 * *(unsigned int*)(v5 + 32);
		*(_QWORD*)(v5 + 40) = v33;
		v35 = sub_14018B280(v34, 0);
		v36 = (__int64)v52;
		v37 = 0;
		*(_QWORD*)(v5 + 48) = v35;
		v38 = *(_QWORD*)(v36 + 16);
		if (v38 != v36)
		{
			do
			{
				v39 = v37++;
				v40 = 2 * v39;
				*(_WORD*)(v40 + *(_QWORD*)(v5 + 40)) = *(_WORD*)(v38 + 32);
				*(_WORD*)(v40 + *(_QWORD*)(v5 + 48)) = *(_WORD*)(v38 + 36);
				v41 = *(_QWORD*)(v38 + 24);
				if (v41)
				{
					v38 = *(_QWORD*)(v38 + 24);
					for (k = *(_QWORD*)(v41 + 16); k; k = *(_QWORD*)(k + 16))
						v38 = k;
				}
				else
				{
					for (m = *(_QWORD*)(v38 + 8); v38 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						v38 = m;
					if (*(_QWORD*)(v38 + 24) != m)
						v38 = m;
				}
				v36 = (__int64)v52;
			} while ((int*)v38 != v52);
		}
		if (v53)
		{
			v44 = *(_QWORD*)(v36 + 8);
			if (v44)
			{
				do
				{
					sub_1400083B0((__int64)v51, *(_QWORD*)(v44 + 24));
					v45 = *(_QWORD*)(v44 + 16);
					sub_14018B900(v44, 0);
					v44 = v45;
				} while (v45);
				v36 = (__int64)v52;
			}
			*(_QWORD*)(v36 + 16) = v36;
			*((_QWORD*)v52 + 1) = 0i64;
			*((_QWORD*)v52 + 3) = v52;
			v36 = (__int64)v52;
			v53 = 0i64;
		}
		sub_14018B900(v36, 0);
	}
}
// 1402EA0B0: using guessed type char var_68[8];


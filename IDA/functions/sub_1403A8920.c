//----- (00000001403A8920) ----------------------------------------------------
__int64 __fastcall sub_1403A8920(__int64 a1, __int64 a2)
{
	_BYTE* v4; // r8
	unsigned int v5; // r12d
	unsigned int i; // r15d
	unsigned int v7; // edx
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	int* v13; // r14
	int v14; // ebx
	unsigned __int64 j; // rdi
	__int64 v16; // rdx
	int* v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rcx
	int* v21; // rax
	__int64 v22; // rax
	int* v23; // rcx
	__int64 v24; // r9
	__int64 v25; // rdx
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rax
	int* v30; // rax
	unsigned int k; // esi
	__int64 v32; // rbx
	int* v33; // rax
	int* v34; // rdi
	_WORD* v35; // rcx
	__int64 v36; // rdx
	_WORD* v37; // r8
	__int16 v38; // ax
	int* v40; // [rsp+20h] [rbp-59h] BYREF
	int v41; // [rsp+28h] [rbp-51h] BYREF
	__int64 v42; // [rsp+30h] [rbp-49h]
	__int64 v43; // [rsp+38h] [rbp-41h]
	int* v44[2]; // [rsp+40h] [rbp-39h] BYREF
	int* v45; // [rsp+50h] [rbp-29h] BYREF
	__int64 v46; // [rsp+58h] [rbp-21h] BYREF
	__int64 v47; // [rsp+60h] [rbp-19h] BYREF
	int* v48; // [rsp+68h] [rbp-11h] BYREF
	int* v49; // [rsp+70h] [rbp-9h] BYREF
	__int64 v50[11]; // [rsp+78h] [rbp-1h] BYREF
	_BYTE* v51; // [rsp+E0h] [rbp+67h]
	__int64 v53; // [rsp+F0h] [rbp+77h] BYREF
	__int64 v54; // [rsp+F8h] [rbp+7Fh] BYREF

	sub_140008410(a1 + 32424);
	v4 = (_BYTE*)a2;
	v5 = 0;
	v51 = (_BYTE*)a2;
	do
	{
		for (i = 0; i < 8; ++i)
		{
			if (((unsigned __int8)(1 << (7 - i)) & *v4) != 0)
			{
				v7 = v5 + i;
				v8 = *(_QWORD*)(qword_140C65A18 + 16);
				v9 = v8;
				v10 = *(_QWORD*)(v8 + 8);
				while (v10)
				{
					if (*(_DWORD*)(v10 + 32) < v7)
					{
						v10 = *(_QWORD*)(v10 + 24);
					}
					else
					{
						v9 = v10;
						v10 = *(_QWORD*)(v10 + 16);
					}
				}
				if (v9 == v8 || v7 < *(_DWORD*)(v9 + 32))
				{
					v47 = *(_QWORD*)(qword_140C65A18 + 16);
					v11 = &v47;
				}
				else
				{
					v54 = v9;
					v11 = &v54;
				}
				v12 = *v11;
				if (v12 != *(_QWORD*)(qword_140C65A18 + 16))
				{
					v13 = *(int**)(v12 + 40);
					if (v13)
					{
						v14 = v13[3];
						for (j = 0i64; ; ++j)
						{
							v16 = *(_QWORD*)(a1 + 32368);
							v17 = (int*)v16;
							v18 = *(_QWORD*)(v16 + 8);
							while (v18)
							{
								if (*(_DWORD*)(v18 + 32) < v14)
								{
									v18 = *(_QWORD*)(v18 + 24);
								}
								else
								{
									v17 = (int*)v18;
									v18 = *(_QWORD*)(v18 + 16);
								}
							}
							if (v17 == (int*)v16 || v14 < v17[8])
							{
								v43 = 0i64;
								v42 = 0i64;
								v41 = v14;
								v40 = v17;
								sub_1403AE300(a1 + 32360, &v49, (__int64*)&v40, &v41);
								v17 = v49;
							}
							v19 = *(_QWORD*)(a1 + 32368);
							if (j >= *((_QWORD*)v17 + 6))
								break;
							v20 = *(_QWORD*)(v19 + 8);
							v21 = *(int**)(a1 + 32368);
							while (v20)
							{
								if (*(_DWORD*)(v20 + 32) < v14)
								{
									v20 = *(_QWORD*)(v20 + 24);
								}
								else
								{
									v21 = (int*)v20;
									v20 = *(_QWORD*)(v20 + 16);
								}
							}
							if (v21 == (int*)v19 || v14 < v21[8])
							{
								v43 = 0i64;
								v42 = 0i64;
								v41 = v14;
								v40 = v21;
								sub_1403AE300(a1 + 32360, &v48, (__int64*)&v40, &v41);
								v21 = v48;
							}
							if (*(_DWORD*)(*((_QWORD*)v21 + 5) + 4 * j) == *v13)
								goto LABEL_44;
						}
						v22 = *(_QWORD*)(v19 + 8);
						v23 = *(int**)(a1 + 32368);
						while (v22)
						{
							if (*(_DWORD*)(v22 + 32) < v14)
							{
								v22 = *(_QWORD*)(v22 + 24);
							}
							else
							{
								v23 = (int*)v22;
								v22 = *(_QWORD*)(v22 + 16);
							}
						}
						if (v23 == (int*)v19 || v14 < v23[8])
						{
							v43 = 0i64;
							v42 = 0i64;
							v40 = v23;
							v41 = v14;
							sub_1403AE300(a1 + 32360, &v45, (__int64*)&v40, &v41);
							v23 = v45;
						}
						sub_140003460((__int64*)v23 + 5, v13);
					LABEL_44:
						v24 = *(_QWORD*)(a1 + 32432);
						v25 = v24;
						v26 = *(_QWORD*)(v24 + 8);
						v27 = v26;
						while (v27)
						{
							if (*(_DWORD*)(v27 + 32) < (unsigned int)*v13)
							{
								v27 = *(_QWORD*)(v27 + 24);
							}
							else
							{
								v25 = v27;
								v27 = *(_QWORD*)(v27 + 16);
							}
						}
						if (v25 == v24 || (unsigned int)*v13 < *(_DWORD*)(v25 + 32))
						{
							v50[0] = *(_QWORD*)(a1 + 32432);
							v28 = v50;
						}
						else
						{
							v46 = v25;
							v28 = &v46;
						}
						v29 = *v28;
						if (v29 == v24)
						{
							v30 = (int*)v24;
							while (v26)
							{
								if (*(_DWORD*)(v26 + 32) < (unsigned int)*v13)
								{
									v26 = *(_QWORD*)(v26 + 24);
								}
								else
								{
									v30 = (int*)v26;
									v26 = *(_QWORD*)(v26 + 16);
								}
							}
							if (v30 == (int*)v24 || *v13 < (unsigned int)v30[8])
							{
								v53 = (unsigned int)*v13;
								v40 = v30;
								sub_140032B30(a1 + 32424, v44, (__int64*)&v40, &v53);
								v30 = v44[0];
							}
							v30[9] = 1;
						}
						else
						{
							++* (_DWORD*)(v29 + 36);
						}
					}
				}
				v4 = v51;
			}
		}
		++v4;
		v5 += 8;
		v51 = v4;
	} while (v5 < 0x200);
	sub_1403A8770(a1);
	for (k = 0; k < *(_DWORD*)(a2 + 64); ++k)
	{
		v32 = *(_QWORD*)(a2 + 72) + 32i64 * k;
		v33 = sub_14018B280(80i64, 0);
		v34 = v33;
		if (v33)
			sub_1407E4830(v33, 0i64, 0x50ui64);
		else
			v34 = 0i64;
		v35 = v34 + 2;
		v36 = 32i64;
		*v34 = *(_DWORD*)v32;
		v34[1] = *(_DWORD*)(v32 + 4);
		v37 = *(_WORD**)(v32 + 8);
		while (v36 != -2147483614 && *v37)
		{
			*v35++ = *v37++;
			if (!--v36)
			{
				--v35;
				break;
			}
		}
		*v35 = 0;
		*((_WORD*)v34 + 36) = *(_WORD*)(v32 + 16);
		*((_WORD*)v34 + 37) = *(_WORD*)(v32 + 20);
		*((_WORD*)v34 + 38) = *(_WORD*)(v32 + 24);
		v38 = *(_WORD*)(v32 + 28);
		v44[1] = v34;
		*((_WORD*)v34 + 39) = v38;
		v44[0] = *(int**)v32;
		sub_1403AE510(a1 + 32392, (__int64)v50, (int*)v44);
	}
	return 0i64;
}
// 1403A8CDA: conditional instruction was optimized away because rdx.8!=0
// 140C65A18: using guessed type __int64 qword_140C65A18;


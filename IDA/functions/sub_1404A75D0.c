//----- (00000001404A75D0) ----------------------------------------------------
__int64 __fastcall sub_1404A75D0(unsigned __int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v4; // r12
	__int64 v5; // rdi
	__int64 v6; // r13
	__int64 v7; // r8
	_QWORD* v8; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx
	_QWORD* v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rcx
	_QWORD* k; // rcx
	__int64 m; // rcx
	_QWORD* v18; // rcx
	_QWORD* v19; // rax
	__int64 v20; // rcx
	_QWORD* n; // rcx
	__int64 ii; // rcx
	unsigned int jj; // ebp
	__int64 v24; // r14
	unsigned int v25; // ebx
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64* v32; // rax
	__int64 v33; // rax
	__int64 v34; // rsi
	unsigned int v35; // r10d
	__int64 v36; // rcx
	unsigned int v37; // edx
	unsigned int v38; // esi
	__int64 v39; // rbp
	__int64 v40; // r9
	__int64 v41; // rdx
	__int64 v42; // r14
	__int64 v43; // rax
	unsigned int v44; // r8d
	unsigned int v45; // ecx
	__int64 v46; // rbx
	bool v47; // al
	__int64 v48; // rcx
	__int64 kk; // rax
	__int64 v50; // rax
	int* v51; // rcx
	__int64 v52; // rax
	__int64 v53; // rax
	__int64 v54; // rax
	__int64** v55; // rcx
	__int64 v57; // [rsp+20h] [rbp-78h] BYREF
	char v58[16]; // [rsp+28h] [rbp-70h] BYREF
	char v59[32]; // [rsp+38h] [rbp-60h] BYREF
	unsigned __int64 v60; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v61; // [rsp+A8h] [rbp+10h]
	unsigned __int64 v62; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v63; // [rsp+B8h] [rbp+20h] BYREF

	v60 = a1;
	v2 = qword_140C659B0;
	v4 = qword_140C659B0 + 1008;
	v61 = qword_140C659B0;
	sub_140008410(qword_140C659B0 + 1008);
	v5 = v2 + 1072;
	sub_140008410(v2 + 1072);
	v6 = v2 + 1040;
	sub_140008410(v2 + 1040);
	v7 = qword_140C65A20;
	v8 = *(_QWORD**)(qword_140C65A20 + 56);
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			*(_DWORD*)(v9[5] + 24i64) = 0;
			v10 = v9[3];
			if (v10)
			{
				v9 = (_QWORD*)v9[3];
				for (i = *(_QWORD**)(v10 + 16); i; i = (_QWORD*)i[2])
					v9 = i;
			}
			else
			{
				for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = (_QWORD*)j;
				if (v9[3] != j)
					v9 = (_QWORD*)j;
			}
		} while (v9 != *(_QWORD**)(v7 + 56));
	}
	v13 = *(_QWORD**)(v7 + 56);
	v14 = (_QWORD*)v13[2];
	if (v14 != v13)
	{
		do
		{
			*(_DWORD*)(v14[5] + 28i64) = 0;
			v15 = v14[3];
			if (v15)
			{
				v14 = (_QWORD*)v14[3];
				for (k = *(_QWORD**)(v15 + 16); k; k = (_QWORD*)k[2])
					v14 = k;
			}
			else
			{
				for (m = v14[1]; v14 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v14 = (_QWORD*)m;
				if (v14[3] != m)
					v14 = (_QWORD*)m;
			}
		} while (v14 != *(_QWORD**)(v7 + 56));
	}
	v18 = *(_QWORD**)(v7 + 56);
	v19 = (_QWORD*)v18[2];
	if (v19 != v18)
	{
		do
		{
			*(_DWORD*)(v19[5] + 32i64) = 0;
			v20 = v19[3];
			if (v20)
			{
				v19 = (_QWORD*)v19[3];
				for (n = *(_QWORD**)(v20 + 16); n; n = (_QWORD*)n[2])
					v19 = n;
			}
			else
			{
				for (ii = v19[1]; v19 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v19 = (_QWORD*)ii;
				if (v19[3] != ii)
					v19 = (_QWORD*)ii;
			}
		} while (v19 != *(_QWORD**)(v7 + 56));
	}
	for (jj = 0; jj < *(_DWORD*)a2; ++jj)
	{
		v24 = 8i64 * jj;
		v25 = *(_DWORD*)(v24 + *(_QWORD*)(a2 + 8));
		v26 = *(_QWORD*)(qword_140C65898 + 7152);
		LODWORD(v60) = v25;
		if (v26)
			v27 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v26 + 24i64))(v26, 0i64);
		else
			v27 = 0;
		if (v25 && v27)
		{
			if (v27 == 166)
			{
				v28 = v2 + 72;
				goto LABEL_41;
			}
			if (v27 == 167)
			{
				v28 = v2 + 40;
			LABEL_41:
				if (v28)
				{
					v29 = *(_QWORD*)(v28 + 8);
					v30 = v29;
					v31 = *(_QWORD*)(v29 + 8);
					while (v31)
					{
						if (*(_DWORD*)(v31 + 32) < v25)
						{
							v31 = *(_QWORD*)(v31 + 24);
						}
						else
						{
							v30 = v31;
							v31 = *(_QWORD*)(v31 + 16);
						}
					}
					if (v30 == v29 || v25 < *(_DWORD*)(v30 + 32))
					{
						v57 = v29;
						v32 = &v57;
					}
					else
					{
						v63 = v30;
						v32 = &v63;
					}
					v33 = *v32;
					if (v33 != v29)
					{
						v34 = *(_QWORD*)(v33 + 40);
						if (v34)
						{
							if (*(_DWORD*)(*(_QWORD*)v34 + 4i64) == 1
								&& (v35 = *(_DWORD*)(v24 + *(_QWORD*)(a2 + 8) + 4),
									((v35
										- ((v35 >> 1) & 0x5B6DB6DB)
										- ((v35 >> 2) & 0x9249249)
										+ ((v35 - ((v35 >> 1) & 0x5B6DB6DB) - ((v35 >> 2) & 0x9249249)) >> 3)) & 0xC71C71C7)
									% 0x3F < *(_DWORD*)(*(_QWORD*)v34 + 44i64)))
							{
								v62 = __PAIR64__(v35, v25);
								sub_140032F50(v6, (__int64)v58, &v62);
							}
							else
							{
								sub_1400293C0(v4, (__int64)v59, (int*)&v60);
								v37 = 5;
								if (*(_DWORD*)(*(_QWORD*)v34 + 4i64) != 1)
									v37 = 4;
								sub_1404CF010(v36, v37, *(_DWORD*)(*(_QWORD*)v34 + 40i64), 0);
							}
						}
						v2 = v61;
					}
				}
			}
		}
	}
	v38 = 0;
	if (*(_DWORD*)(a2 + 16))
	{
		v39 = v61;
		do
		{
			v40 = *(_QWORD*)(v5 + 8);
			v41 = *(_QWORD*)(v40 + 8);
			v42 = 8i64 * v38;
			v43 = *(_QWORD*)(a2 + 24);
			v44 = *(_DWORD*)(v42 + v43);
			v45 = *(_DWORD*)(v42 + v43 + 4);
			v46 = v40;
			v47 = 1;
			v60 = __PAIR64__(v45, v44);
			while (v41)
			{
				v46 = v41;
				v47 = v44 < *(_DWORD*)(v41 + 32);
				if (v44 >= *(_DWORD*)(v41 + 32))
					v41 = *(_QWORD*)(v41 + 24);
				else
					v41 = *(_QWORD*)(v41 + 16);
			}
			v48 = v46;
			if (v47)
			{
				if (v46 == *(_QWORD*)(v40 + 16))
					goto LABEL_80;
				if (*(_BYTE*)v46 || *(_QWORD*)(*(_QWORD*)(v46 + 8) + 8i64) != v46)
				{
					v48 = *(_QWORD*)(v46 + 16);
					if (v48)
					{
						for (kk = *(_QWORD*)(v48 + 24); kk; kk = *(_QWORD*)(kk + 24))
							v48 = kk;
					}
					else
					{
						v48 = *(_QWORD*)(v46 + 8);
						if (v46 == *(_QWORD*)(v48 + 16))
						{
							do
							{
								v50 = v48;
								v48 = *(_QWORD*)(v48 + 8);
							} while (v50 == *(_QWORD*)(v48 + 16));
						}
					}
				}
				else
				{
					v48 = *(_QWORD*)(v46 + 24);
				}
			}
			if (*(_DWORD*)(v48 + 32) < v44)
			{
			LABEL_80:
				if (v46 == v40 || v44 < *(_DWORD*)(v46 + 32))
				{
					v51 = sub_14018B280(40i64, 0);
					if (v51 != (int*)-32i64)
						*((_QWORD*)v51 + 4) = v60;
					*(_QWORD*)(v46 + 16) = v51;
					v53 = *(_QWORD*)(v5 + 8);
					if (v46 == v53)
					{
						*(_QWORD*)(v53 + 8) = v51;
						*(_QWORD*)(*(_QWORD*)(v5 + 8) + 24i64) = v51;
					}
					else if (v46 == *(_QWORD*)(v53 + 16))
					{
						*(_QWORD*)(v53 + 16) = v51;
					}
				}
				else
				{
					v51 = sub_14018B280(40i64, 0);
					if (v51 != (int*)-32i64)
						*((_QWORD*)v51 + 4) = v60;
					*(_QWORD*)(v46 + 24) = v51;
					v52 = *(_QWORD*)(v5 + 8);
					if (v46 == *(_QWORD*)(v52 + 24))
						*(_QWORD*)(v52 + 24) = v51;
				}
				*((_QWORD*)v51 + 1) = v46;
				*((_QWORD*)v51 + 2) = 0i64;
				*((_QWORD*)v51 + 3) = 0i64;
				sub_1400081C0((__int64)v51, (_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64));
				++* (_QWORD*)(v5 + 16);
			}
			if ((unsigned int)sub_1404A80B0(v39, *(_DWORD*)(v42 + *(_QWORD*)(a2 + 24))))
			{
				v54 = sub_1404A88A0(v39, *(_DWORD*)(v42 + *(_QWORD*)(a2 + 24)));
				if (v54)
				{
					v55 = *(__int64***)(v54 + 8);
					if (v55 != *(__int64***)(v54 + 16))
						sub_1404CF010(**v55, 6u, *(_DWORD*)(**v55 + 40), 0);
				}
			}
			++v38;
		} while (v38 < *(_DWORD*)(a2 + 16));
	}
	return 0i64;
}
// 1404A7A1F: conditional instruction was optimized away because rdx.8==0
// 1404A7919: variable 'v36' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 140C65A20: using guessed type __int64 qword_140C65A20;
// 1404A75D0: using guessed type char var_70[16];
// 1404A75D0: using guessed type char var_60[32];


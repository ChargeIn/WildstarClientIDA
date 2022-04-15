#include "../winhttp.h"

//----- (0000000140489AA0) ----------------------------------------------------
void __fastcall sub_140489AA0(__int64 a1, int a2)
{
	__int64 v2; // r15
	__int64 v3; // rax
	__int64 v4; // rbx
	unsigned int v5; // r8d
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v13; // r13
	_QWORD* v14; // rax
	_QWORD* v15; // rdi
	_QWORD* v16; // r14
	__int64 v17; // rcx
	__int64 v18; // rbx
	char v19; // di
	__int64 v20; // r8
	unsigned int v21; // r12d
	bool v22; // al
	__int64 v23; // rdx
	__int64 v24; // rsi
	__int64 v25; // rcx
	__int64 k; // rax
	__int64 v27; // rax
	int* v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // r15
	unsigned __int64 v32; // r14
	_QWORD* v33; // rsi
	__int64* v34; // rsi
	__int64 v35; // rsi
	int* v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rdx
	bool v39; // zf
	__int64 v40; // rax
	__int64 m; // rax
	__int64 n; // rax
	__int64 v43; // rsi
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 ii; // rax
	__int64 jj; // rax
	int* v48; // rax
	__int64 v49; // rdi
	__int64 v50; // rbx
	__int64 v51; // [rsp+38h] [rbp-49h]
	__int64 v52; // [rsp+40h] [rbp-41h] BYREF
	char v53[8]; // [rsp+50h] [rbp-31h] BYREF
	int* v54; // [rsp+58h] [rbp-29h]
	__int64 v55; // [rsp+60h] [rbp-21h]
	char v56[8]; // [rsp+70h] [rbp-11h] BYREF
	_QWORD* v57; // [rsp+78h] [rbp-9h]
	__int64 v58; // [rsp+80h] [rbp-1h]
	__int64 v59; // [rsp+E8h] [rbp+67h] BYREF
	int v60; // [rsp+F0h] [rbp+6Fh]
	_QWORD* v61; // [rsp+F8h] [rbp+77h] BYREF
	_QWORD* v62; // [rsp+100h] [rbp+7Fh]

	v60 = a2;
	v59 = a1;
	v2 = qword_140C65930;
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	v51 = v2;
	v54 = sub_14018B280(40i64, 0);
	v55 = 0i64;
	*(_BYTE*)v54 = 0;
	*((_QWORD*)v54 + 1) = 0i64;
	*((_QWORD*)v54 + 2) = v54;
	*((_QWORD*)v54 + 3) = v54;
	v3 = *(_QWORD*)(v2 + 264);
	v4 = *(_QWORD*)(v3 + 16);
	if (v4 != v3)
	{
		do
		{
			v5 = *(_DWORD*)(v4 + 32);
			v6 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 80i64);
			v7 = v6;
			v8 = *(_QWORD*)(v6 + 8);
			while (v8)
			{
				if (*(_DWORD*)(v8 + 32) < v5)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v7 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			}
			if (v7 == v6 || v5 < *(_DWORD*)(v7 + 32))
			{
				v61 = *(_QWORD**)(*(_QWORD*)(v4 + 40) + 80i64);
				v9 = (__int64*)&v61;
			}
			else
			{
				v59 = v7;
				v9 = &v59;
			}
			if (*v9 != v6)
				sub_1400293C0((__int64)v53, (__int64)&v52, (int*)(v4 + 32));
			v10 = *(_QWORD*)(v4 + 24);
			if (v10)
			{
				v4 = *(_QWORD*)(v4 + 24);
				for (i = *(_QWORD*)(v10 + 16); i; i = *(_QWORD*)(i + 16))
					v4 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = j;
				if (*(_QWORD*)(v4 + 24) != j)
					v4 = j;
			}
		} while (v4 != *(_QWORD*)(v2 + 264));
	}
	v13 = v2 + 256;
	sub_140008410(v2 + 256);
	sub_1404895E0(v2);
	v14 = *(_QWORD**)(v2 + 16);
	v15 = (_QWORD*)v14[2];
	v62 = v15;
	if (v15 == v14)
		goto LABEL_109;
	do
	{
		v61 = (_QWORD*)v15[5];
		v16 = v61;
		sub_1403D2AA0((__int64)v56, (__int64)(v61 + 1));
		v17 = (__int64)v57;
		v18 = v57[2];
		if ((_QWORD*)v18 == v57)
			goto LABEL_94;
		v19 = v60;
		do
		{
			v20 = *(_QWORD*)(v13 + 8);
			v21 = *(_DWORD*)(v18 + 32);
			v22 = 1;
			v23 = *(_QWORD*)(v20 + 8);
			LODWORD(v52) = v21;
			v24 = v20;
			while (v23)
			{
				v24 = v23;
				v22 = v21 < *(_DWORD*)(v23 + 32);
				if (v21 >= *(_DWORD*)(v23 + 32))
					v23 = *(_QWORD*)(v23 + 24);
				else
					v23 = *(_QWORD*)(v23 + 16);
			}
			v25 = v24;
			if (v22)
			{
				if (v24 == *(_QWORD*)(v20 + 16))
					goto LABEL_42;
				if (*(_BYTE*)v24 || *(_QWORD*)(*(_QWORD*)(v24 + 8) + 8i64) != v24)
				{
					v25 = *(_QWORD*)(v24 + 16);
					if (v25)
					{
						for (k = *(_QWORD*)(v25 + 24); k; k = *(_QWORD*)(k + 24))
							v25 = k;
					}
					else
					{
						v25 = *(_QWORD*)(v24 + 8);
						if (v24 == *(_QWORD*)(v25 + 16))
						{
							do
							{
								v27 = v25;
								v25 = *(_QWORD*)(v25 + 8);
							} while (v27 == *(_QWORD*)(v25 + 16));
						}
					}
				}
				else
				{
					v25 = *(_QWORD*)(v24 + 24);
				}
			}
			if (*(_DWORD*)(v25 + 32) < v21)
			{
			LABEL_42:
				if (v24 == v20 || v21 < *(_DWORD*)(v24 + 32))
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v52;
						*((_QWORD*)v28 + 5) = v16;
					}
					*(_QWORD*)(v24 + 16) = v28;
					v30 = *(_QWORD*)(v13 + 8);
					if (v24 == v30)
					{
						*(_QWORD*)(v30 + 8) = v28;
						*(_QWORD*)(*(_QWORD*)(v13 + 8) + 24i64) = v28;
					}
					else if (v24 == *(_QWORD*)(v30 + 16))
					{
						*(_QWORD*)(v30 + 16) = v28;
					}
				}
				else
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v52;
						*((_QWORD*)v28 + 5) = v16;
					}
					*(_QWORD*)(v24 + 24) = v28;
					v29 = *(_QWORD*)(v13 + 8);
					if (v24 == *(_QWORD*)(v29 + 24))
						*(_QWORD*)(v29 + 24) = v28;
				}
				*((_QWORD*)v28 + 1) = v24;
				*((_QWORD*)v28 + 2) = 0i64;
				*((_QWORD*)v28 + 3) = 0i64;
				sub_1400081C0((__int64)v28, (_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64));
				++* (_QWORD*)(v13 + 16);
			}
			v31 = qword_140C65B80;
			LODWORD(v59) = v21;
			v32 = (*(__int64(__fastcall**)(__int64*))(qword_140C65B80 + 32))(&v59);
			v33 = *(_QWORD**)(*(_QWORD*)(v31 + 24) + 8 * (v32 % *(_QWORD*)(v31 + 16)));
			if (!v33)
				goto LABEL_76;
			while (v32 != *v33 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v31 + 40))(&v59, v33 + 2))
			{
				v33 = (_QWORD*)v33[1];
				if (!v33)
					goto LABEL_76;
			}
			v34 = v33 + 3;
			if (!v34)
				goto LABEL_76;
			v35 = *v34;
			if (!v35)
				goto LABEL_76;
			v36 = v54;
			v37 = *((_QWORD*)v54 + 1);
			if (!v37)
				goto LABEL_86;
			do
			{
				if (*(_DWORD*)(v37 + 32) < v21)
				{
					v37 = *(_QWORD*)(v37 + 24);
				}
				else
				{
					v36 = (int*)v37;
					v37 = *(_QWORD*)(v37 + 16);
				}
			} while (v37);
			if (v36 == v54 || v21 < v36[8])
			{
			LABEL_86:
				if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v35 + 8)) != 1
					&& (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v35 + 8)) != 2)
				{
					goto LABEL_76;
				}
				v16 = v61;
				sub_140488640(v61, v21);
			}
			else
			{
				v38 = *(_QWORD*)(v35 + 8);
				if (*(_DWORD*)(v38 + 436) == 1)
				{
					if ((v19 & 1) != 0)
						goto LABEL_76;
				}
				else
				{
					switch (*(_DWORD*)(v38 + 436))
					{
					case 2:
						v39 = (v19 & 2) == 0;
						break;
					case 3:
						v39 = (v19 & 4) == 0;
						break;
					case 4:
						v39 = (v19 & 8) == 0;
						break;
					default:
						v59 = 0x141E030E0i64;
						sub_1401A3130(26, 0, &v59);
						v16 = v61;
						sub_1404886F0(v61, v21);
						goto LABEL_77;
					}
					if (!v39)
					{
					LABEL_76:
						v16 = v61;
						goto LABEL_77;
					}
				}
				v16 = v61;
				sub_1404886F0(v61, v21);
			}
		LABEL_77:
			v40 = *(_QWORD*)(v18 + 24);
			if (v40)
			{
				v18 = *(_QWORD*)(v18 + 24);
				for (m = *(_QWORD*)(v40 + 16); m; m = *(_QWORD*)(m + 16))
					v18 = m;
			}
			else
			{
				for (n = *(_QWORD*)(v18 + 8); v18 == *(_QWORD*)(n + 24); n = *(_QWORD*)(n + 8))
					v18 = n;
				if (*(_QWORD*)(v18 + 24) != n)
					v18 = n;
			}
			v17 = (__int64)v57;
		} while ((_QWORD*)v18 != v57);
		v15 = v62;
		v2 = v51;
	LABEL_94:
		if (v58)
		{
			v43 = *(_QWORD*)(v17 + 8);
			if (v43)
			{
				do
				{
					sub_1400083B0((__int64)v56, *(_QWORD*)(v43 + 24));
					v44 = *(_QWORD*)(v43 + 16);
					sub_14018B900(v43, 0);
					v43 = v44;
				} while (v44);
				v17 = (__int64)v57;
			}
			*(_QWORD*)(v17 + 16) = v17;
			v57[1] = 0i64;
			v57[3] = v57;
			v17 = (__int64)v57;
			v58 = 0i64;
		}
		sub_14018B900(v17, 0);
		v45 = v15[3];
		if (v45)
		{
			v15 = (_QWORD*)v15[3];
			v62 = (_QWORD*)v45;
			for (ii = *(_QWORD*)(v45 + 16); ii; ii = *(_QWORD*)(ii + 16))
			{
				v15 = (_QWORD*)ii;
				v62 = (_QWORD*)ii;
			}
		}
		else
		{
			for (jj = v15[1]; v15 == *(_QWORD**)(jj + 24); jj = *(_QWORD*)(jj + 8))
				v15 = (_QWORD*)jj;
			if (v15[3] != jj)
				v15 = (_QWORD*)jj;
			v62 = v15;
		}
	} while (v15 != *(_QWORD**)(v2 + 16));
LABEL_109:
	if (v55)
	{
		v48 = v54;
		v49 = *((_QWORD*)v54 + 1);
		if (v49)
		{
			do
			{
				sub_1400083B0((__int64)v53, *(_QWORD*)(v49 + 24));
				v50 = *(_QWORD*)(v49 + 16);
				sub_14018B900(v49, 0);
				v49 = v50;
			} while (v50);
			v48 = v54;
		}
		*((_QWORD*)v48 + 2) = v48;
		*((_QWORD*)v54 + 1) = 0i64;
		*((_QWORD*)v54 + 3) = v54;
		v55 = 0i64;
	}
	sub_14018B900((__int64)v54, 0);
}
// 140489D0F: conditional instruction was optimized away because rdx.8==0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140489AA0: using guessed type char var_88[8];
// 140489AA0: using guessed type char var_68[8];


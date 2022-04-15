#include "../winhttp.h"

//----- (000000014001D450) ----------------------------------------------------
__int64 __fastcall sub_14001D450(__int64 a1)
{
	_QWORD* v1; // r15
	unsigned int v2; // r14d
	__int64(__fastcall * v3)(wchar_t**, __int64); // rax
	unsigned int v4; // r13d
	unsigned int v5; // eax
	__int64 v6; // rax
	_DWORD* v7; // r13
	int v8; // eax
	unsigned __int64 v9; // r9
	__int64* v10; // rcx
	int* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rax
	__int64 v14; // rdx
	unsigned int v15; // ecx
	__int64 v16; // rax
	__int64 v17; // rbx
	int* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64(__fastcall * v21)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v22; // r12d
	unsigned __int64 v23; // rdi
	unsigned int* v24; // rbx
	unsigned int v25; // esi
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64 v29; // rcx
	__int64* v30; // rcx
	int* v31; // rbx
	int* v32; // rax
	__int64 v33; // rsi
	__int64 v34; // rbx
	int v35; // eax
	unsigned int v36; // r15d
	_DWORD* v37; // r12
	int* v38; // rax
	int* v39; // rax
	__int64 v40; // rdi
	int* v41; // rax
	int v42; // eax
	int* v43; // rax
	int* v44; // rax
	__int64 v45; // rdi
	int* v46; // rax
	__int64 v47; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v50; // eax
	__int64 v51; // rax
	__int64 v52; // rdi
	__int64 v53; // rbx
	int* v54; // rax
	int* v55; // rdx
	int* v56; // rsi
	__int64 v57; // rcx
	__int64 v58; // rcx
	__int64 v59; // rbx
	unsigned int v61; // [rsp+20h] [rbp-39h] BYREF
	int v62[2]; // [rsp+24h] [rbp-35h] BYREF
	int v63[3]; // [rsp+2Ch] [rbp-2Dh] BYREF
	__int64 v64; // [rsp+38h] [rbp-21h]
	__int64 v65; // [rsp+40h] [rbp-19h] BYREF
	__int64 v66; // [rsp+48h] [rbp-11h] BYREF
	_QWORD* v67; // [rsp+50h] [rbp-9h]
	__int64 v68; // [rsp+58h] [rbp-1h]
	__int64 v69; // [rsp+C0h] [rbp+67h] BYREF
	unsigned int v70; // [rsp+C8h] [rbp+6Fh]
	unsigned int v71; // [rsp+D0h] [rbp+77h]
	int v72; // [rsp+D8h] [rbp+7Fh] BYREF

	v69 = a1;
	v1 = (_QWORD*)qword_140C63600;
	v2 = 0;
	v67 = (_QWORD*)qword_140C63600;
	v64 = 0i64;
	if (*(_QWORD*)(qword_140C63600 + 16))
	{
		sub_14001DB00(qword_140C63600, *(_QWORD**)(*(_QWORD*)(qword_140C63600 + 8) + 8i64));
		*(_QWORD*)(v1[1] + 16i64) = v1[1];
		*(_QWORD*)(v1[1] + 8i64) = 0i64;
		*(_QWORD*)(v1[1] + 24i64) = v1[1];
		v1[2] = 0i64;
	}
	LODWORD(v69) = 0;
	sub_14001DBA0((__int64)v1, (int*)&v69);
	v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	v4 = 0;
	v70 = 0;
	if (qword_140C63838)
	{
		v5 = qword_140C63838(off_140A69720, qword_140C63858);
	}
	else
	{
		if (dword_140C6548C)
			goto LABEL_94;
		if ((int)sub_1401F0500() < 0)
			goto LABEL_93;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A08 + 40i64))(qword_140C64A08);
	}
	v71 = v5;
	if (!v5)
		goto LABEL_93;
	do
	{
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A69720, v4, qword_140C63858);
		}
		else
		{
			if (dword_140C6548C)
			{
				v7 = 0i64;
				goto LABEL_17;
			}
			if ((int)sub_1401F0500() < 0)
			{
				v7 = 0i64;
				goto LABEL_17;
			}
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A08 + 32i64))(qword_140C64A08, v4);
		}
		v7 = (_DWORD*)v6;
	LABEL_17:
		v8 = v7[5];
		if ((v8 & 1) != 0 || (v8 & 2) == 0)
			goto LABEL_92;
		if ((v8 & 4) != 0)
		{
			v9 = v1[5];
			v10 = v1 + 4;
			v11 = v7 + 6;
			v12 = 0i64;
			if (v9)
			{
				v13 = (_DWORD*)*v10;
				while (*v13 != *v11)
				{
					++v12;
					++v13;
					if (v12 >= v9)
						goto LABEL_24;
				}
			}
			else
			{
			LABEL_24:
				sub_140003460(v10, v11);
			}
			goto LABEL_92;
		}
		sub_14020BD20(v7[4]);
		v14 = v1[7];
		v15 = v7[4];
		v16 = *(_QWORD*)(v14 + 8);
		LODWORD(v68) = v15;
		v17 = v14;
		while (v16)
		{
			v17 = v16;
			if (v15 >= *(_DWORD*)(v16 + 32))
				v16 = *(_QWORD*)(v16 + 24);
			else
				v16 = *(_QWORD*)(v16 + 16);
		}
		if (v17 == v14 || v15 < *(_DWORD*)(v17 + 32))
		{
			v18 = sub_14018B280(48i64, 0);
			if (v18 != (int*)-32i64)
			{
				*((_QWORD*)v18 + 4) = v68;
				*((_QWORD*)v18 + 5) = v7;
			}
			*(_QWORD*)(v17 + 16) = v18;
			v20 = v1[7];
			if (v17 == v20)
			{
				*(_QWORD*)(v20 + 8) = v18;
				*(_QWORD*)(v1[7] + 24i64) = v18;
			}
			else if (v17 == *(_QWORD*)(v20 + 16))
			{
				*(_QWORD*)(v20 + 16) = v18;
			}
		}
		else
		{
			v18 = sub_14018B280(48i64, 0);
			if (v18 != (int*)-32i64)
			{
				*((_QWORD*)v18 + 4) = v68;
				*((_QWORD*)v18 + 5) = v7;
			}
			*(_QWORD*)(v17 + 24) = v18;
			v19 = v1[7];
			if (v17 == *(_QWORD*)(v19 + 24))
				*(_QWORD*)(v19 + 24) = v18;
		}
		*((_QWORD*)v18 + 1) = v17;
		*((_QWORD*)v18 + 2) = 0i64;
		*((_QWORD*)v18 + 3) = 0i64;
		sub_1400081C0((__int64)v18, (_QWORD*)(v1[7] + 8i64));
		++v1[8];
		v21 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v22 = 0;
		LODWORD(v69) = 0;
		v23 = 0i64;
		v24 = v7 + 6;
		while (1)
		{
			v25 = *v24;
			if (v21)
				break;
			if (!dword_140C65200)
			{
				if ((int)sub_1401F0940() >= 0)
				{
					v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FD8 + 24i64))(qword_140C63FD8, v25);
					goto LABEL_48;
				}
			LABEL_50:
				v21 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
			++v23;
			++v24;
			if (v23 >= 2)
				goto LABEL_54;
		}
		v26 = v21(off_140A69758, v25, qword_140C63858);
	LABEL_48:
		if (!v26 || !*(_DWORD*)(v26 + 8))
			goto LABEL_50;
		v22 = *(_DWORD*)(v26 + 8);
		LODWORD(v69) = v22;
	LABEL_54:
		v27 = v1[1];
		v28 = v27;
		v29 = *(_QWORD*)(v27 + 8);
		while (v29)
		{
			if (*(_DWORD*)(v29 + 32) < v22)
			{
				v29 = *(_QWORD*)(v29 + 24);
			}
			else
			{
				v28 = v29;
				v29 = *(_QWORD*)(v29 + 16);
			}
		}
		if (v28 == v27 || v22 < *(_DWORD*)(v28 + 32))
		{
			v66 = v1[1];
			v30 = &v66;
		}
		else
		{
			v65 = v28;
			v30 = &v65;
		}
		if (*v30 == v27)
		{
			v72 = 0;
			if (v22)
			{
				v31 = sub_14001DBA0((__int64)v1, &v72);
				v32 = sub_14001DBA0((__int64)v1, (int*)&v69);
				sub_14001E540((__int64)v32, (__int64)v31);
			}
			else
			{
				sub_14001DBA0((__int64)v1, &v72);
			}
		}
		v33 = v1[1];
		v34 = *(_QWORD*)(v33 + 16);
		if (v34 != v33)
		{
			do
			{
				if (!v22 || *(_DWORD*)(v34 + 32) == v22)
				{
					v35 = 0;
					v36 = 0;
					v37 = v7 + 8;
					do
					{
						if (*(v37 - 2) && *v37)
						{
							v62[0] = v7[1];
							v62[1] = v7[2];
							v38 = sub_14001DCF0(v34 + 40, v62);
							v39 = sub_14001DE70((__int64)v38, &v7[v36 + 6]);
							v40 = **((_QWORD**)sub_14001DFC0((__int64)v39, &v7[v36 + 8]) + 1);
							v41 = sub_14018B280(24i64, 0);
							if (v41 != (int*)-16i64)
								*((_QWORD*)v41 + 2) = v7;
							*(_QWORD*)v41 = v40;
							*((_QWORD*)v41 + 1) = *(_QWORD*)(v40 + 8);
							**(_QWORD**)(v40 + 8) = v41;
							*(_QWORD*)(v40 + 8) = v41;
							v35 = 1;
						}
						++v36;
						++v37;
					} while (v36 < 2);
					v2 = 0;
					if (!v35)
					{
						v63[0] = v7[1];
						v42 = v7[2];
						v61 = 0;
						v63[1] = v42;
						v72 = 0;
						v43 = sub_14001DCF0(v34 + 40, v63);
						v44 = sub_14001DE70((__int64)v43, &v72);
						v45 = **((_QWORD**)sub_14001DFC0((__int64)v44, &v61) + 1);
						v46 = sub_14018B280(24i64, 0);
						if (v46 != (int*)-16i64)
							*((_QWORD*)v46 + 2) = v7;
						*(_QWORD*)v46 = v45;
						*((_QWORD*)v46 + 1) = *(_QWORD*)(v45 + 8);
						**(_QWORD**)(v45 + 8) = v46;
						*(_QWORD*)(v45 + 8) = v46;
					}
					v22 = v69;
				}
				v47 = *(_QWORD*)(v34 + 24);
				if (v47)
				{
					v34 = *(_QWORD*)(v34 + 24);
					for (i = *(_QWORD*)(v47 + 16); i; i = *(_QWORD*)(i + 16))
						v34 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v34 + 8); v34 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v34 = j;
					if (*(_QWORD*)(v34 + 24) != j)
						v34 = j;
				}
			} while (v34 != v33);
			v1 = v67;
		}
	LABEL_92:
		v4 = v70 + 1;
		v70 = v4;
	} while (v4 < v71);
LABEL_93:
	v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	while (1)
	{
	LABEL_94:
		if (v3)
		{
			v50 = v3(off_140A69790, qword_140C63858);
			goto LABEL_99;
		}
		if (dword_140C6492C || (int)sub_1401F0D80() < 0)
			break;
		v50 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C645B0 + 40i64))(qword_140C645B0);
	LABEL_99:
		if (v2 >= v50)
			break;
		if (qword_140C63848)
		{
			v51 = qword_140C63848(off_140A69790, v2, qword_140C63858);
		}
		else
		{
			if (dword_140C6492C || (int)sub_1401F0D80() < 0)
				goto LABEL_111;
			v51 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645B0 + 32i64))(qword_140C645B0, v2);
		}
		v52 = v51;
		if (v51)
		{
			v53 = v1[11];
			v54 = sub_14018DB00(v1[10], v53 + 1, 16i64);
			v55 = (int*)v1[10];
			v56 = v54;
			if (v55 != v54)
			{
				sub_1407DB590(v54, v55, 16i64 * v1[11]);
				v57 = v1[10];
				if (v57)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v57 - 16) + 8i64))(v57 - 16);
				v1[10] = v56;
			}
			v58 = v1[10];
			v1[11] = v53 + 1;
			v2 = v64;
			v59 = 2 * v53;
			*(_DWORD*)(v58 + 8 * v59) = *(_DWORD*)(v52 + 4);
			*(_DWORD*)(v1[10] + 8 * v59 + 4) = *(_DWORD*)(v52 + 8);
			*(_QWORD*)(v1[10] + 8 * v59 + 8) = *(_QWORD*)(v52 + 16);
		}
	LABEL_111:
		v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		v64 = ++v2;
	}
	sub_14001F0B0(v1 + 10);
	return 0i64;
}
// 14001D620: conditional instruction was optimized away because rax.8==0
// 140A69720: using guessed type wchar_t *off_140A69720[2];
// 140A69758: using guessed type wchar_t *off_140A69758[2];
// 140A69790: using guessed type wchar_t *off_140A69790[2];
// 140C63600: using guessed type __int64 qword_140C63600;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD8: using guessed type __int64 qword_140C63FD8;
// 140C645B0: using guessed type __int64 qword_140C645B0;
// 140C6492C: using guessed type int dword_140C6492C;
// 140C64A08: using guessed type __int64 qword_140C64A08;
// 140C65200: using guessed type int dword_140C65200;
// 140C6548C: using guessed type int dword_140C6548C;


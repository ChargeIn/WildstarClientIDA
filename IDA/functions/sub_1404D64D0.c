#include "../winhttp.h"

//----- (00000001404D64D0) ----------------------------------------------------
__int64 __fastcall sub_1404D64D0(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r13
	unsigned int v3; // r12d
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // r14
	int* v7; // rax
	int* v8; // rsi
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // r14
	int* v12; // rdx
	__int64 v13; // rcx
	int* v14; // rax
	int* v15; // rsi
	__int64 v16; // rbx
	int* v17; // rax
	int* v18; // r15
	unsigned __int64 v19; // rbp
	int** v20; // r15
	int* v21; // rax
	int* v22; // rcx
	unsigned __int64 v23; // r14
	_QWORD* v24; // rbx
	unsigned __int64 v25; // r14
	int** v26; // rbx
	int* v27; // rax
	int* v28; // rcx
	unsigned __int64 v30; // rax
	unsigned __int64 v31; // rbx
	_QWORD* v32; // rax
	_DWORD* v33; // r12
	__int64* v34; // rsi
	int v35; // eax
	unsigned __int64 v36; // rbp
	_QWORD* v37; // rbx
	__int64* v38; // rbx
	__int64 v39; // rbp
	__int64 v40; // rbx
	int* v41; // rax
	int* v42; // r14
	int* v43; // rdx
	__int64 v44; // rcx
	__int64 v45; // rax
	unsigned __int64 v46; // rdx
	__int64 v47; // rbx
	__int64 v48; // rcx
	__int64 v49; // rbx
	_DWORD* v50; // rbp
	__int64 v51; // r14
	__int64 v52; // r12
	int v53; // edx
	unsigned __int64 v54; // rsi
	_QWORD* v55; // rbx
	__int64 v56; // [rsp+60h] [rbp+8h] BYREF
	__int64 v57; // [rsp+68h] [rbp+10h]
	unsigned __int64 v58; // [rsp+70h] [rbp+18h]

	v56 = a1;
	v1 = qword_140C65A50;
	v2 = 0i64;
	v3 = 0;
	while (1)
	{
		if (qword_140C63838)
		{
			v4 = qword_140C63838(off_140A6C388, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C65280 || (int)sub_140226420() < 0)
			break;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64AD8 + 40i64))(qword_140C64AD8);
	LABEL_7:
		if (v3 >= v4)
			break;
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6C388, v3, qword_140C63858);
		LABEL_15:
			v6 = v5;
			goto LABEL_16;
		}
		if (dword_140C65280)
		{
			v6 = 0i64;
		}
		else
		{
			if ((int)sub_140226420() >= 0)
			{
				v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AD8 + 32i64))(qword_140C64AD8, v3);
				goto LABEL_15;
			}
			v6 = 0i64;
		}
	LABEL_16:
		if (*(_DWORD*)(v6 + 12) == 1)
		{
			v7 = sub_14018B280(24i64, 0);
			v8 = v7;
			if (v7)
			{
				*(_QWORD*)v7 = v6;
				*((_QWORD*)v7 + 2) = 0i64;
				*((_QWORD*)v7 + 1) = 0i64;
			}
			else
			{
				v8 = 0i64;
			}
			v9 = *(_QWORD*)(v1 + 104);
			v10 = sub_14018DB00(*(_QWORD*)(v1 + 96), v9 + 1, 8i64);
			v11 = v10;
			*(_QWORD*)&v10[2 * v9] = v8;
			v12 = *(int**)(v1 + 96);
			if (v12 != v10)
			{
				sub_1407DB590(v10, v12, 8i64 * *(_QWORD*)(v1 + 104));
				v13 = *(_QWORD*)(v1 + 96);
				if (v13)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
				*(_QWORD*)(v1 + 96) = v11;
			}
			*(_QWORD*)(v1 + 104) = v9 + 1;
			++v3;
		}
		else
		{
			v14 = sub_14018B280(72i64, 0);
			v15 = v14;
			if (v14)
			{
				*(_QWORD*)v14 = v6;
				*((_QWORD*)v14 + 7) = 0i64;
				*((_BYTE*)v14 + 64) = 0;
				*((_QWORD*)v14 + 1) = 0i64;
				*((_QWORD*)v14 + 2) = 0i64;
				*((_QWORD*)v14 + 3) = 0i64;
				*((_QWORD*)v14 + 4) = 0i64;
				*((_QWORD*)v14 + 5) = 0i64;
				*((_QWORD*)v14 + 6) = 0i64;
			}
			else
			{
				v15 = 0i64;
			}
			v16 = *(_QWORD*)(v1 + 8);
			v17 = sub_14018DB00(*(_QWORD*)v1, v16 + 1, 8i64);
			v18 = v17;
			*(_QWORD*)&v17[2 * v16] = v15;
			if (*(int**)v1 != v17)
			{
				sub_1407DB590(v17, *(int**)v1, 8i64 * *(_QWORD*)(v1 + 8));
				if (*(_QWORD*)v1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)v1 - 16i64) + 8i64))(*(_QWORD*)v1 - 16i64);
				*(_QWORD*)v1 = v18;
			}
			*(_QWORD*)(v1 + 8) = v16 + 1;
			if (*(_QWORD*)(v1 + 16) == *(_QWORD*)(v1 + 24))
				sub_1400290D0(v1 + 16);
			v19 = (*(__int64(__fastcall**)(__int64))(v1 + 40))(v6);
			v20 = (int**)(*(_QWORD*)(v1 + 32) + 8 * (v19 % *(_QWORD*)(v1 + 24)));
			v21 = sub_14018B280(32i64, 0);
			if (v21)
			{
				v22 = *v20;
				*(_QWORD*)v21 = v19;
				*((_QWORD*)v21 + 1) = v22;
				LODWORD(v22) = *(_DWORD*)v6;
				*((_QWORD*)v21 + 3) = v15;
				v21[4] = (int)v22;
			}
			else
			{
				v21 = 0i64;
			}
			*v20 = v21;
			++* (_QWORD*)(v1 + 16);
			v56 = *(_QWORD*)(v6 + 4);
			v23 = (*(__int64(__fastcall**)(__int64*))(v1 + 80))(&v56);
			v24 = *(_QWORD**)(*(_QWORD*)(v1 + 72) + 8 * (v23 % *(_QWORD*)(v1 + 64)));
			if (v24)
			{
				while (v23 != *v24 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 88))(&v56, v24 + 2))
				{
					v24 = (_QWORD*)v24[1];
					if (!v24)
						goto LABEL_43;
				}
				if (v24 != (_QWORD*)-24i64)
					return 2147500037i64;
			}
		LABEL_43:
			if (*(_QWORD*)(v1 + 56) == *(_QWORD*)(v1 + 64))
				sub_1400290D0(v1 + 56);
			v25 = (*(__int64(__fastcall**)(__int64*))(v1 + 80))(&v56);
			v26 = (int**)(*(_QWORD*)(v1 + 72) + 8 * (v25 % *(_QWORD*)(v1 + 64)));
			v27 = sub_14018B280(32i64, 0);
			if (v27)
			{
				v28 = *v26;
				*(_QWORD*)v27 = v25;
				*((_QWORD*)v27 + 1) = v28;
				*((_QWORD*)v27 + 2) = v56;
				*((_QWORD*)v27 + 3) = v15;
				*v26 = v27;
			}
			else
			{
				*v26 = 0i64;
			}
			++* (_QWORD*)(v1 + 56);
			++v3;
		}
	}
	v30 = *(_QWORD*)(v1 + 104);
	v31 = 0i64;
	v57 = 0i64;
	v58 = v30;
	if (v30)
	{
		v32 = (_QWORD*)(v1 + 96);
		do
		{
			v33 = &unk_140C49E40;
			v2 = 6i64;
			v34 = *(__int64**)(*v32 + 8 * v31);
			do
			{
				v35 = *v33 + *(_DWORD*)(*v34 + 4);
				HIDWORD(v56) = v33[1] + *(_DWORD*)(*v34 + 8);
				LODWORD(v56) = v35;
				v36 = (*(__int64(__fastcall**)(__int64*))(v1 + 80))(&v56);
				v37 = *(_QWORD**)(*(_QWORD*)(v1 + 72) + 8 * (v36 % *(_QWORD*)(v1 + 64)));
				if (v37)
				{
					while (v36 != *v37 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 88))(&v56, v37 + 2))
					{
						v37 = (_QWORD*)v37[1];
						if (!v37)
							goto LABEL_64;
					}
					v38 = v37 + 3;
					if (v38)
					{
						v39 = *v38;
						v40 = v34[2];
						v41 = sub_14018DB00(v34[1], v40 + 1, 8i64);
						v42 = v41;
						*(_QWORD*)&v41[2 * v40] = v39;
						v43 = (int*)v34[1];
						if (v43 != v41)
						{
							sub_1407DB590(v41, v43, 8 * v34[2]);
							v44 = v34[1];
							if (v44)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
							v34[1] = (__int64)v42;
						}
						v34[2] = v40 + 1;
						*(_QWORD*)(v39 + 56) = v34;
					}
				}
			LABEL_64:
				v33 += 2;
				--v2;
			} while (v2);
			v45 = v34[2];
			if (v45 == 6)
			{
				v49 = v57;
			}
			else
			{
				v46 = 0i64;
				if (v45)
				{
					do
					{
						++v46;
						*(_QWORD*)(*(_QWORD*)(v34[1] + 8 * v46 - 8) + 56i64) = 0i64;
					} while (v46 < v34[2]);
				}
				v47 = v57;
				sub_140007270(v1 + 96, v57);
				v48 = v34[1];
				if (v48)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v48 - 16) + 8i64))(v48 - 16);
				sub_14018B900((__int64)v34, 0);
				v49 = v47 - 1;
			}
			v31 = v49 + 1;
			v32 = (_QWORD*)(v1 + 96);
			v57 = v31;
		} while (v31 < v58);
	}
	if (*(_QWORD*)(v1 + 8))
	{
		do
		{
			v50 = &unk_140C49E44;
			v51 = 6i64;
			v52 = *(_QWORD*)(*(_QWORD*)v1 + 8 * v2);
			do
			{
				v53 = *v50 + *(_DWORD*)(*(_QWORD*)v52 + 8i64);
				LODWORD(v56) = *(_DWORD*)(*(_QWORD*)v52 + 4i64) + *(v50 - 1);
				HIDWORD(v56) = v53;
				v54 = (*(__int64(__fastcall**)(__int64*))(v1 + 80))(&v56);
				v55 = *(_QWORD**)(*(_QWORD*)(v1 + 72) + 8 * (v54 % *(_QWORD*)(v1 + 64)));
				if (v55)
				{
					while (v54 != *v55 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 88))(&v56, v55 + 2))
					{
						v55 = (_QWORD*)v55[1];
						if (!v55)
							goto LABEL_82;
					}
					if (v55 != (_QWORD*)-24i64)
						*(_QWORD*)((char*)v50 + v52 - (_QWORD)&unk_140C49E44 + 8) = v55[3];
				}
			LABEL_82:
				v50 += 2;
				--v51;
			} while (v51);
			++v2;
		} while (v2 < *(_QWORD*)(v1 + 8));
	}
	return 0i64;
}
// 140A6C388: using guessed type wchar_t *off_140A6C388[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64AD8: using guessed type __int64 qword_140C64AD8;
// 140C65280: using guessed type int dword_140C65280;
// 140C65A50: using guessed type __int64 qword_140C65A50;


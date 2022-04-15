#include "../winhttp.h"

//----- (000000014012B670) ----------------------------------------------------
__int64 __fastcall sub_14012B670(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rsi
	__int64 v4; // rax
	_QWORD* v5; // rdi
	unsigned int v6; // ecx
	unsigned __int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // r14
	_DWORD* v11; // rax
	_QWORD* v12; // rdi
	char* v13; // rdx
	_DWORD* v14; // rax
	__int64 v15; // rdi
	unsigned int* v16; // rax
	_QWORD* v17; // rdi
	char* v18; // rdx
	_DWORD* v19; // rax
	_QWORD* v20; // rdi
	char* v21; // rdx
	_DWORD* v22; // rax
	int* v23; // r13
	__int64 v24; // rdi
	__int64 v25; // rax
	int* v26; // r12
	_QWORD* v27; // r14
	__int64 v28; // rax
	int* v29; // r15
	__int64 v30; // rax
	unsigned __int64 v31; // rcx
	_DWORD* v32; // rax
	unsigned __int64 v33; // r8
	__int64* v34; // rdx
	__int64 v35; // rax
	char* v36; // rdx
	__int64 v37; // rax
	char* v38; // rdx
	int* v39; // rsi
	__int64 v40; // rax
	int* v41; // rdi
	int* v42; // rbx
	_QWORD* v43; // rax
	__int64 v45; // [rsp+20h] [rbp-79h] BYREF
	int* v46; // [rsp+28h] [rbp-71h]
	__int128 v47; // [rsp+40h] [rbp-59h] BYREF
	__int64 v48; // [rsp+50h] [rbp-49h]
	__int64 v49; // [rsp+60h] [rbp-39h] BYREF
	int* v50; // [rsp+68h] [rbp-31h]
	__int64 v51; // [rsp+70h] [rbp-29h]
	__int64 v52; // [rsp+80h] [rbp-19h] BYREF
	int* v53; // [rsp+88h] [rbp-11h]
	__int64 v54; // [rsp+A0h] [rbp+7h] BYREF
	int* v55; // [rsp+A8h] [rbp+Fh]
	_QWORD* v56; // [rsp+108h] [rbp+6Fh] BYREF
	_QWORD* v57; // [rsp+110h] [rbp+77h]

	v2 = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)v2;
	if (v2)
	{
		LODWORD(v47) = -1;
		sub_14012A290(v2);
		if (!v3[82])
		{
			v4 = (*(__int64(__fastcall**)(_QWORD*))(v3[18] + 16i64))(v3 + 18);
			v5 = (_QWORD*)v4;
			if (v4)
			{
				*(_QWORD*)(v4 + 8) = v3 + 2;
				*(_QWORD*)(v4 + 16) = 0i64;
				*(_DWORD*)(v4 + 24) = 0;
				*(_QWORD*)(v4 + 32) = 0i64;
				*(_QWORD*)(v4 + 40) = 0i64;
				*(_QWORD*)(v4 + 48) = 0i64;
				*(_QWORD*)(v4 + 56) = 0i64;
				*(_QWORD*)(v4 + 64) = 0i64;
				*(_QWORD*)(v4 + 72) = 0i64;
				*(_QWORD*)(v4 + 80) = 0i64;
				*(_DWORD*)(v4 + 88) = 0;
				*(_QWORD*)v4 = off_140B5EBA0;
				*(_QWORD*)(v4 + 96) = 0i64;
			}
			else
			{
				v5 = 0i64;
			}
			v5[10] = v3 + 18;
			sub_1401A4C50((__int64)(v5 + 3), (int*)L"Root");
			v3[82] = v5;
			sub_1401A5A70(v3 + 2, v5);
		}
		v57 = (_QWORD*)sub_14012B2B0((__int64)v3, a1);
		if (v57)
		{
			v6 = 0;
			v7 = *(_QWORD*)(qword_140C63650 + 768);
			if (v7)
			{
				v8 = *(_QWORD*)(qword_140C63650 + 760);
				v9 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a1)
				{
					v9 = ++v6;
					if (v6 >= v7)
						goto LABEL_12;
				}
				v10 = *(_QWORD*)(v8 + 8i64 * v6);
			}
			else
			{
			LABEL_12:
				v10 = 0i64;
			}
			v11 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			{
				v12 = *(_QWORD**)(v10 + 400);
				v13 = (char*)sub_14018F0E0(&v45, word_1409D83CC)[1];
				v14 = (_DWORD*)(v12[3] + 16i64);
				if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && *(int*)(v12[3] + 24i64) > 0)
					v13 = (char*)sub_140056BB0(v12, 2u, 0i64);
				sub_14018F2D0(&v54, v13);
				if (v46)
					sub_14018B900((__int64)v46, 0);
				v15 = qword_140C63678;
				v47 = xmmword_140C777D0;
				v16 = sub_140143880((unsigned int*)&v56, a1, 3u, (__m128*) & v47);
				sub_140142E30(v15, &v47, v16);
				sub_1401429A0(qword_140C63678, (unsigned int)v56);
				v17 = *(_QWORD**)(v10 + 400);
				v18 = (char*)sub_14018F0E0(&v45, word_1409D83FC)[1];
				v19 = (_DWORD*)(v17[3] + 48i64);
				if ((unsigned __int64)v19 < v17[2] && v19 != dword_140A12138 && *(int*)(v17[3] + 56i64) > 0)
					v18 = (char*)sub_140056BB0(v17, 4u, 0i64);
				sub_14018F2D0(&v49, v18);
				if (v46)
					sub_14018B900((__int64)v46, 0);
				v20 = *(_QWORD**)(v10 + 400);
				v21 = (char*)sub_14018F0E0(&v52, L"Text")[1];
				v22 = (_DWORD*)(v20[3] + 80i64);
				if ((unsigned __int64)v22 < v20[2] && v22 != dword_140A12138 && *(int*)(v20[3] + 88i64) > 0)
					v21 = (char*)sub_140056BB0(v20, 6u, 0i64);
				sub_14018F2D0(&v45, v21);
				if (v53)
					sub_14018B900((__int64)v53, 0);
				v23 = v46;
				v24 = (__int64)(v3 + 2);
				v56 = v3 + 2;
				v25 = sub_1401A7740((__int64)(v3 + 2), v46);
				v26 = (int*)*((_QWORD*)&v47 + 1);
				v27 = (_QWORD*)v25;
				if (((v48 - *((_QWORD*)&v47 + 1)) & 0xFFFFFFFFFFFFFFFEui64) != 0)
				{
					v28 = sub_1401A6C70(v25, (int*)&word_140A31AB8);
					sub_1401A4C50(v28 + 32, v26);
				}
				v29 = v50;
				if (((v51 - (_QWORD)v50) & 0xFFFFFFFFFFFFFFFEui64) != 0)
				{
					v30 = sub_1401A6C70((__int64)v27, (int*)L"Font");
					sub_1401A4C50(v30 + 32, v29);
				}
				v31 = a1[2];
				v32 = (_DWORD*)(a1[3] + 64i64);
				if ((unsigned __int64)v32 < v31 && v32 != dword_140A12138 && *(_DWORD*)(a1[3] + 72i64) == 5)
				{
					*(_DWORD*)(v31 + 8) = 0;
					for (a1[2] += 16i64; ; a1[2] -= 16i64)
					{
						v33 = a1[2];
						v34 = (__int64*)dword_140A12138;
						if (a1[3] + 64i64 < v33)
							v34 = (__int64*)(a1[3] + 64i64);
						if (!(unsigned int)sub_14005BA70((__int64)a1, *v34, v33 - 16))
						{
							a1[2] -= 16i64;
							v23 = v46;
							v24 = (__int64)v56;
							break;
						}
						a1[2] += 16i64;
						v35 = a1[2] - 16i64;
						if (*(_DWORD*)(v35 + 8) != 4)
						{
							if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
							{
								v36 = 0i64;
								goto LABEL_53;
							}
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v35 = a1[2] - 16i64;
						}
						v36 = (char*)(*(_QWORD*)v35 + 32i64);
					LABEL_53:
						sub_14018F2D0(&v49, v36);
						v37 = a1[2] - 32i64;
						if (*(_DWORD*)(v37 + 8) != 4)
						{
							if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 32i64))
							{
								v38 = 0i64;
								goto LABEL_60;
							}
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v37 = a1[2] - 32i64;
						}
						v38 = (char*)(*(_QWORD*)v37 + 32i64);
					LABEL_60:
						sub_14018F2D0(&v52, v38);
						v39 = v53;
						v40 = sub_1401A6C70((__int64)v27, v53);
						v41 = v50;
						sub_1401A4C50(v40 + 32, v50);
						if (v39)
							sub_14018B900((__int64)v39, 0);
						if (v41)
							sub_14018B900((__int64)v41, 0);
					}
				}
				v42 = v55;
				v43 = (_QWORD*)sub_1401A7880(v24, v55);
				sub_1401A5A70(v27, v43);
				sub_1401A5A70(v57, v27);
				if (v23)
					sub_14018B900((__int64)v23, 0);
				if (v29)
					sub_14018B900((__int64)v29, 0);
				if (v26)
					sub_14018B900((__int64)v26, 0);
				if (v42)
					sub_14018B900((__int64)v42, 0);
			}
		}
	}
	return 0i64;
}
// 1409D83CC: using guessed type unsigned __int16 word_1409D83CC[24];
// 1409D83FC: using guessed type unsigned __int16 word_1409D83FC[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20790: using guessed type wchar_t aRoot_1[5];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D20: using guessed type wchar_t aText_3[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;


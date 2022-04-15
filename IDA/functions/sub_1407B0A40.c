//----- (00000001407B0A40) ----------------------------------------------------
__int64 __fastcall sub_1407B0A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	__int64 v5; // rdi
	__int64 v7; // rax
	char v8; // r9
	unsigned __int64 v9; // r15
	unsigned __int64 v10; // rbx
	unsigned __int64 v11; // r12
	__int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64* v14; // rax
	char* v15; // rdi
	int* v16; // rsi
	char* v17; // r14
	unsigned __int64 v18; // rbx
	__int64 v19; // rbx
	int* v20; // r8
	signed __int64 v21; // rdi
	_QWORD* v22; // rax
	_QWORD* v23; // rcx
	__int64 v24; // r12
	unsigned __int64* v25; // rax
	__int64 v26; // rdx
	int* v27; // rsi
	__int64 v28; // rcx
	char* v29; // rdi
	char* v30; // r14
	unsigned __int64 v31; // rbx
	__int64 v32; // rbx
	int* v33; // rax
	int* v34; // r8
	signed __int64 v35; // rdi
	_QWORD* v36; // rax
	_QWORD* v37; // rcx
	__int64 v38; // rdi
	__int64 v39; // rsi
	__int64 v40; // rcx
	unsigned __int64 v41; // r14
	__int64 v42; // rax
	_WORD* v43; // rax
	__int64 v44; // r10
	unsigned __int64 v45; // r9
	_WORD* v46; // r8
	_WORD* v47; // r15
	_WORD* v48; // rdx
	_WORD* v49; // rax
	_WORD* v50; // rax
	unsigned __int64 v51; // rax
	unsigned __int64 v52; // rax
	_WORD* v53; // rbx
	__int64 v54; // rax
	unsigned __int64 v55; // rbx
	char v56; // cl
	_WORD* i; // rax
	unsigned __int64 v58; // rbx
	_WORD* v59; // rbx
	__int64 v60; // rax
	_WORD* v61; // rax
	__int64 v62; // rcx
	BOOL v63; // ecx
	_WORD* v64; // r8
	unsigned __int64 v65; // rbx
	_WORD* v66; // r15
	_WORD* v67; // rdx
	_WORD* v68; // rax
	_WORD* v69; // rax
	__int64 v70; // rcx
	unsigned __int64 v72; // [rsp+20h] [rbp-49h] BYREF
	__int64 v73; // [rsp+28h] [rbp-41h] BYREF
	__int128 v74; // [rsp+30h] [rbp-39h]
	__int128 v75; // [rsp+40h] [rbp-29h] BYREF
	char v76[8]; // [rsp+50h] [rbp-19h] BYREF
	int* v77; // [rsp+58h] [rbp-11h]
	int* v78; // [rsp+60h] [rbp-9h]
	__int64 v79; // [rsp+68h] [rbp-1h]
	unsigned __int64 v80; // [rsp+C0h] [rbp+57h] BYREF
	__int64 v81; // [rsp+C8h] [rbp+5Fh]
	__int64 v82; // [rsp+D0h] [rbp+67h]
	__int64 v83; // [rsp+D8h] [rbp+6Fh]

	v83 = a4;
	v82 = a3;
	v81 = a2;
	v5 = a2;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v7 = sub_14018FF60(a2, a3, 0i64);
	v8 = 0;
	v9 = v7;
	v10 = 0i64;
	v11 = v7;
	if (v7 != -1)
	{
		v73 = 1i64;
		while (1)
		{
			if (v10)
			{
				v12 = *(_QWORD*)(v5 + 8);
				v13 = *(_QWORD*)(v5 + 16);
				v72 = v10;
				v14 = &v80;
				v15 = (char*)(v12 + 2 * v11);
				v16 = 0i64;
				v77 = 0i64;
				v79 = 0i64;
				v80 = ((v13 - v12) >> 1) - v11;
				if (v80 >= v10)
					v14 = &v72;
				v17 = (char*)(v12 + 2 * (v11 + *v14));
				v18 = ((v17 - v15) >> 1) + 1;
				if (v18 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v19 = 2 * v18;
					v16 = sub_14018B280(v19, 0);
					v77 = v16;
					v79 = (__int64)v16 + v19;
				}
				v20 = v16;
				if (v15 != v17)
				{
					v21 = v15 - (char*)v16;
					do
					{
						if (v20)
							*(_WORD*)v20 = *(_WORD*)((char*)v20 + v21);
						v20 = (int*)((char*)v20 + 2);
					} while ((char*)v20 + v21 != v17);
				}
				v78 = v20;
				if (v20)
					*(_WORD*)v20 = 0;
				v22 = *(_QWORD**)(a1 + 16);
				if (v22 == *(_QWORD**)(a1 + 24))
				{
					sub_1400F8CF0((__int64*)a1, *(char**)(a1 + 16), (__int64)v76);
				}
				else
				{
					if (v22)
					{
						v23 = *(_QWORD**)(a1 + 16);
						v22[1] = 0i64;
						v22[2] = 0i64;
						v22[3] = 0i64;
						sub_14001C1B0(v23, v16, (__int64)v20);
					}
					*(_QWORD*)(a1 + 16) += 32i64;
				}
				if (v16)
					sub_14018B900((__int64)v16, 0);
				v8 = 0;
			}
			v24 = v81;
			v25 = &v80;
			v26 = *(_QWORD*)(v81 + 8);
			v27 = 0i64;
			v28 = *(_QWORD*)(v81 + 16) - v26;
			v29 = (char*)(v26 + 2 * v9);
			v77 = 0i64;
			v79 = 0i64;
			v80 = (v28 >> 1) - v9;
			if (v80)
				v25 = (unsigned __int64*)&v73;
			v30 = (char*)(v26 + 2 * (v9 + *v25));
			v31 = ((v30 - v29) >> 1) + 1;
			if (v31 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v32 = 2 * v31;
				v33 = sub_14018B280(v32, 0);
				v8 = 0;
				v27 = v33;
				v77 = v33;
				v79 = (__int64)v33 + v32;
			}
			v34 = v27;
			if (v29 != v30)
			{
				v35 = v29 - (char*)v27;
				do
				{
					if (v34)
						*(_WORD*)v34 = *(_WORD*)((char*)v34 + v35);
					v34 = (int*)((char*)v34 + 2);
				} while ((char*)v34 + v35 != v30);
			}
			v78 = v34;
			if (v34)
				*(_WORD*)v34 = 0;
			v36 = *(_QWORD**)(a1 + 16);
			if (v36 == *(_QWORD**)(a1 + 24))
			{
				sub_1400F8CF0((__int64*)a1, *(char**)(a1 + 16), (__int64)v76);
			}
			else
			{
				if (v36)
				{
					v37 = *(_QWORD**)(a1 + 16);
					v36[1] = 0i64;
					v36[2] = 0i64;
					v36[3] = 0i64;
					sub_14001C1B0(v37, v27, (__int64)v34);
				}
				*(_QWORD*)(a1 + 16) += 32i64;
			}
			if (v27)
				sub_14018B900((__int64)v27, 0);
			v38 = *(_QWORD*)(v24 + 16);
			v39 = *(_QWORD*)(v24 + 8);
			v40 = *(_QWORD*)(v83 + 8);
			v41 = (v38 - v39) >> 1;
			if (v9 + 1 > v41
				|| (v42 = *(_QWORD*)(v83 + 16),
					*(_QWORD*)&v74 = *(_QWORD*)(v83 + 8),
					*((_QWORD*)&v74 + 1) = v40 + 2 * ((v42 - v40) >> 1),
					v75 = v74,
					v43 = sub_1400F9810((_WORD*)(v39 + 2 * (v9 + 1)), v38, (_WORD**)&v75, v8),
					v43 == (_WORD*)v38))
			{
				v11 = -1i64;
			}
			else
			{
				v11 = ((__int64)v43 - v39) >> 1;
			}
			v44 = v82;
			v46 = *(_WORD**)(v82 + 8);
			v80 = *(_QWORD*)(v82 + 16);
			v45 = v80;
			if (v11 >= v41)
				goto LABEL_55;
			v47 = (_WORD*)(v39 + 2 * v11);
			if (v47 == (_WORD*)v38)
			{
			LABEL_52:
				v47 = (_WORD*)v38;
			}
			else
			{
				v48 = &v46[(__int64)(v80 - (_QWORD)v46) >> 1];
				while (1)
				{
					v49 = v46;
					if (v46 != v48)
						break;
				LABEL_51:
					if (++v47 == (_WORD*)v38)
						goto LABEL_52;
				}
				while (*v47 != *v49)
				{
					if (++v49 == v48)
						goto LABEL_51;
				}
			}
			if (v47 == (_WORD*)v38)
				LABEL_55:
			v9 = -1i64;
			else
				v9 = ((__int64)v47 - v39) >> 1;
			v10 = v9 - v11;
			if (v11 >= v41
				|| (HIWORD(a5) = 34,
					v50 = sub_14002C8A0((_WORD*)(v39 + 2 * v11), v38, a5),
					v45 = v80,
					v44 = v82,
					v50 == (_WORD*)v38))
			{
				v51 = -1i64;
			}
			else
			{
				v51 = ((__int64)v50 - v39) >> 1;
			}
			if (v51 < v9)
				break;
		LABEL_158:
			v5 = v81;
			v8 = 0;
			if (v9 == -1i64)
				return a1;
		}
		while (1)
		{
			if (v51 == -1i64)
				goto LABEL_158;
			v52 = v51 + 1;
			if (v52 >= v41)
				goto LABEL_80;
			v53 = (_WORD*)(v39 + 2 * v52);
			v54 = (v38 - (__int64)v53) >> 3;
			if (v54 <= 0)
				break;
			while (*v53 != 34)
			{
				if (*++v53 == 34)
					break;
				if (*++v53 == 34)
					break;
				if (*++v53 == 34)
					break;
				--v54;
				++v53;
				if (v54 <= 0)
					goto LABEL_69;
			}
		LABEL_78:
			if (v53 != (_WORD*)v38)
			{
				v55 = ((__int64)v53 - v39) >> 1;
				goto LABEL_81;
			}
		LABEL_80:
			v55 = -1i64;
		LABEL_81:
			if (v55)
			{
				while (1)
				{
					if (v55 == -1i64)
						goto LABEL_106;
					v56 = 0;
					for (i = (_WORD*)(v39 - 2 + 2 * v55); *i == 92; ++v56)
						--i;
					if ((v56 & 1) == 0)
						goto LABEL_106;
					v58 = v55 + 1;
					if (v58 >= v41)
					{
					LABEL_104:
						v55 = -1i64;
						goto LABEL_105;
					}
					v59 = (_WORD*)(v39 + 2 * v58);
					v60 = (v38 - (__int64)v59) >> 3;
					if (v60 <= 0)
						break;
					while (*v59 != 34)
					{
						if (*++v59 == 34)
							break;
						if (*++v59 == 34)
							break;
						if (*++v59 == 34)
							break;
						--v60;
						++v59;
						if (v60 <= 0)
							goto LABEL_93;
					}
				LABEL_102:
					if (v59 == (_WORD*)v38)
						goto LABEL_104;
					v55 = ((__int64)v59 - v39) >> 1;
				LABEL_105:
					if (!v55)
						goto LABEL_106;
				}
			LABEL_93:
				switch ((v38 - (__int64)v59) >> 1)
				{
				case 1i64:
					goto LABEL_100;
				case 2i64:
					goto LABEL_98;
				case 3i64:
					if (*v59 == 34)
						goto LABEL_102;
					++v59;
				LABEL_98:
					if (*v59 == 34)
						goto LABEL_102;
					++v59;
				LABEL_100:
					if (*v59 == 34)
						goto LABEL_102;
					break;
				}
				v59 = (_WORD*)v38;
				goto LABEL_102;
			}
		LABEL_106:
			if (v55 >= v9)
			{
				v64 = *(_WORD**)(v44 + 8);
				v65 = v55 + 1;
				if (v65 >= v41)
					goto LABEL_136;
				v66 = (_WORD*)(v39 + 2 * v65);
				if (v66 == (_WORD*)v38)
				{
				LABEL_133:
					v66 = (_WORD*)v38;
				}
				else
				{
					v67 = &v64[(__int64)(v45 - (_QWORD)v64) >> 1];
					while (1)
					{
						v68 = *(_WORD**)(v44 + 8);
						if (v64 != v67)
							break;
					LABEL_132:
						if (++v66 == (_WORD*)v38)
							goto LABEL_133;
					}
					while (*v66 != *v68)
					{
						if (++v68 == v67)
							goto LABEL_132;
					}
				}
				if (v66 == (_WORD*)v38)
					LABEL_136:
				v9 = -1i64;
				else
					v9 = ((__int64)v66 - v39) >> 1;
				if (v65 >= v41)
					goto LABEL_155;
				v69 = (_WORD*)(v39 + 2 * v65);
				v70 = (v38 - (__int64)v69) >> 3;
				if (v70 > 0)
				{
					while (*v69 != 34)
					{
						if (*++v69 == 34)
							break;
						if (*++v69 == 34)
							break;
						if (*++v69 == 34)
							break;
						--v70;
						++v69;
						if (v70 <= 0)
							goto LABEL_144;
					}
				LABEL_153:
					if (v69 != (_WORD*)v38)
					{
						v51 = ((__int64)v69 - v39) >> 1;
					LABEL_156:
						v63 = v51 < v9;
						v10 = v9 - v11;
						goto LABEL_157;
					}
				LABEL_155:
					v51 = -1i64;
					goto LABEL_156;
				}
			LABEL_144:
				switch ((v38 - (__int64)v69) >> 1)
				{
				case 1i64:
					goto LABEL_151;
				case 2i64:
					goto LABEL_149;
				case 3i64:
					if (*v69 == 34)
						goto LABEL_153;
					++v69;
				LABEL_149:
					if (*v69 == 34)
						goto LABEL_153;
					++v69;
				LABEL_151:
					if (*v69 == 34)
						goto LABEL_153;
					break;
				}
				v69 = (_WORD*)v38;
				goto LABEL_153;
			}
			if (v55 + 1 >= v41)
			{
			LABEL_125:
				v51 = -1i64;
				v63 = 0;
				v10 = v55 - v11 + 1;
				goto LABEL_157;
			}
			v61 = (_WORD*)(v39 + 2 * (v55 + 1));
			v62 = (v38 - (__int64)v61) >> 3;
			if (v62 <= 0)
			{
			LABEL_114:
				switch ((v38 - (__int64)v61) >> 1)
				{
				case 1i64:
					goto LABEL_121;
				case 2i64:
					goto LABEL_119;
				case 3i64:
					if (*v61 == 34)
						goto LABEL_123;
					++v61;
				LABEL_119:
					if (*v61 == 34)
						goto LABEL_123;
					++v61;
				LABEL_121:
					if (*v61 == 34)
						goto LABEL_123;
					break;
				}
				v61 = (_WORD*)v38;
				goto LABEL_123;
			}
			while (*v61 != 34)
			{
				if (*++v61 == 34)
					break;
				if (*++v61 == 34)
					break;
				if (*++v61 == 34)
					break;
				--v62;
				++v61;
				if (v62 <= 0)
					goto LABEL_114;
			}
		LABEL_123:
			if (v61 == (_WORD*)v38)
				goto LABEL_125;
			v51 = ((__int64)v61 - v39) >> 1;
			v63 = v51 < v9;
			v10 = v55 - v11 + 1;
		LABEL_157:
			if (!v63)
				goto LABEL_158;
		}
	LABEL_69:
		if ((v38 - (__int64)v53) >> 1 != 1)
		{
			if ((v38 - (__int64)v53) >> 1 != 2)
			{
				if ((v38 - (__int64)v53) >> 1 != 3)
				{
				LABEL_77:
					v53 = (_WORD*)v38;
					goto LABEL_78;
				}
				if (*v53 == 34)
					goto LABEL_78;
				++v53;
			}
			if (*v53 == 34)
				goto LABEL_78;
			++v53;
		}
		if (*v53 == 34)
			goto LABEL_78;
		goto LABEL_77;
	}
	return a1;
}
// 1407B0D04: variable 'v8' is possibly undefined
// 1407B0A40: using guessed type char var_60[8];


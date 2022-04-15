#include "../winhttp.h"

//----- (000000014018F570) ----------------------------------------------------
__int64 __fastcall sub_14018F570(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
	__int64 v7; // r10
	_WORD* v8; // r12
	__int64 v9; // rdi
	__int64 v10; // rax
	_WORD* v12; // rax
	unsigned __int64 v13; // r13
	unsigned __int64 v14; // rbx
	unsigned __int64 v15; // r8
	_WORD* v16; // rax
	unsigned __int64 v17; // rsi
	_WORD* v18; // rax
	char v19; // r9
	__int64* v21; // rax
	__int64 v22; // rax
	char* v23; // r13
	char* v24; // r15
	int* v25; // r12
	unsigned __int64 v26; // rdi
	__int64 v27; // rdi
	int* v28; // r8
	signed __int64 v29; // r15
	__int64 v30; // r13
	_QWORD* v31; // rax
	unsigned __int64 v32; // rsi
	__int64 v33; // rdi
	__int64 v34; // r15
	unsigned __int64 v35; // r12
	_WORD* v36; // rax
	unsigned __int64 v37; // rbx
	_WORD* v38; // rbx
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rax
	unsigned __int64 v42; // rax
	char* v43; // rsi
	char* v44; // r12
	int* v45; // r15
	unsigned __int64 v46; // rdi
	__int64 v47; // rdi
	int* v48; // r8
	signed __int64 v49; // rsi
	_QWORD* v50; // rax
	__int64 v51; // r15
	_WORD* v52; // rdi
	__int64 v53; // rax
	_WORD* v54; // rax
	__int64 v55; // rax
	__int64 v56; // rax
	_WORD* v57; // rbx
	_WORD* v58; // rdx
	_WORD* v59; // rax
	_WORD* v60; // rax
	unsigned __int64 v61; // rsi
	_WORD* v62; // rsi
	__int64 v63; // rax
	unsigned __int64 v64; // [rsp+20h] [rbp-61h] BYREF
	unsigned __int64 v65; // [rsp+28h] [rbp-59h] BYREF
	int v66; // [rsp+30h] [rbp-51h]
	__int128 v67; // [rsp+40h] [rbp-41h] BYREF
	char v68[8]; // [rsp+50h] [rbp-31h] BYREF
	int* v69; // [rsp+58h] [rbp-29h]
	int* v70; // [rsp+60h] [rbp-21h]
	__int64 v71; // [rsp+68h] [rbp-19h]
	__int128 v72; // [rsp+70h] [rbp-11h] BYREF
	__int128 v73; // [rsp+80h] [rbp-1h] BYREF
	int v77; // [rsp+F8h] [rbp+77h]

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v7 = *(_QWORD*)(a3 + 8);
	v8 = *(_WORD**)(a2 + 8);
	v9 = *(_QWORD*)(a2 + 16);
	v10 = *(_QWORD*)(a3 + 16) - v7;
	*(_QWORD*)&v67 = v7;
	*((_QWORD*)&v67 + 1) = v7 + 2 * (v10 >> 1);
	v72 = v67;
	v12 = sub_1400F9810(v8, v9, (_WORD**)&v72, a4);
	if (v12 == (_WORD*)v9)
		v13 = -1i64;
	else
		v13 = v12 - v8;
	v65 = v13;
	v14 = sub_14018FF60(a2, a3, v13);
	v15 = (v9 - (__int64)v8) >> 1;
	v64 = v15;
	if (v13 >= v15 || (HIWORD(v77) = a4, v16 = sub_14002C8A0(&v8[v13], v9, v77), v15 = v64, v16 == (_WORD*)v9))
		v17 = -1i64;
	else
		v17 = v16 - v8;
	while (v17)
	{
		if (v17 == -1i64 || v8[v17 - 1] != a5)
			break;
		if (v17 >= v15 || (HIWORD(v77) = a4, v18 = sub_14002C8A0(&v8[v17], v9, v77), v15 = v64, v18 == (_WORD*)v9))
			v17 = -1i64;
		else
			v17 = v18 - v8;
	}
	while (1)
	{
	LABEL_16:
		v19 = -2;
		if (v17 < v14)
			v14 = v17;
		if (v14 == -1i64)
			break;
		if (v14 != v13)
			goto LABEL_22;
		v30 = a1;
	LABEL_41:
		if (v17 == v14 && v14 != -1i64)
		{
			v32 = v17 + 1;
			v33 = *(_QWORD*)(a2 + 16);
			v34 = *(_QWORD*)(a2 + 8);
			v35 = (v33 - v34) >> 1;
			if (v32 >= v35
				|| (HIWORD(v77) = a4, v36 = sub_14002C8A0((_WORD*)(v34 + 2 * v32), v33, v77), v36 == (_WORD*)v33))
			{
				v14 = -1i64;
			}
			else
			{
				v14 = ((__int64)v36 - v34) >> 1;
			}
			if (v14)
			{
				while (1)
				{
					if (v14 == -1i64 || *(_WORD*)(v34 + 2 * v14 - 2) != a5)
					{
					LABEL_70:
						v30 = a1;
						goto LABEL_71;
					}
					v37 = v14 + 1;
					if (v37 >= v35)
					{
					LABEL_68:
						v14 = -1i64;
						goto LABEL_69;
					}
					v38 = (_WORD*)(v34 + 2 * v37);
					v39 = (v33 - (__int64)v38) >> 3;
					if (v39 <= 0)
						break;
					while (*v38 != a4)
					{
						if (*++v38 == a4)
							break;
						if (*++v38 == a4)
							break;
						if (*++v38 == a4)
							break;
						--v39;
						++v38;
						if (v39 <= 0)
							goto LABEL_57;
					}
				LABEL_66:
					if (v38 == (_WORD*)v33)
						goto LABEL_68;
					v14 = ((__int64)v38 - v34) >> 1;
				LABEL_69:
					if (!v14)
						goto LABEL_70;
				}
			LABEL_57:
				if ((v33 - (__int64)v38) >> 1 != 1)
				{
					if ((v33 - (__int64)v38) >> 1 != 2)
					{
						if ((v33 - (__int64)v38) >> 1 != 3)
						{
						LABEL_65:
							v38 = (_WORD*)v33;
							goto LABEL_66;
						}
						if (*v38 == a4)
							goto LABEL_66;
						++v38;
					}
					if (*v38 == a4)
						goto LABEL_66;
					++v38;
				}
				if (*v38 == a4)
					goto LABEL_66;
				goto LABEL_65;
			}
		LABEL_71:
			v40 = (__int64*)&v67;
			*(_QWORD*)&v67 = v35 - v32;
			v65 = v14 - v32;
			if (v35 - v32 >= v14 - v32)
				v40 = (__int64*)&v65;
			v41 = *v40;
			v69 = 0i64;
			v71 = 0i64;
			v42 = v32 + v41;
			v43 = (char*)(v34 + 2 * v32);
			v44 = (char*)(v34 + 2 * v42);
			v45 = 0i64;
			v46 = ((v44 - v43) >> 1) + 1;
			if (v46 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v47 = 2 * v46;
				v45 = sub_14018B280(v47, 0);
				v69 = v45;
				v71 = (__int64)v45 + v47;
			}
			v48 = v45;
			if (v43 != v44)
			{
				v49 = v43 - (char*)v45;
				do
				{
					if (v48)
						*(_WORD*)v48 = *(_WORD*)((char*)v48 + v49);
					v48 = (int*)((char*)v48 + 2);
				} while ((char*)v48 + v49 != v44);
			}
			v70 = v48;
			if (v48)
				*(_WORD*)v48 = 0;
			v50 = *(_QWORD**)(v30 + 16);
			if (v50 == *(_QWORD**)(v30 + 24))
			{
				sub_1400F8CF0((__int64*)v30, *(char**)(v30 + 16), (__int64)v68);
			}
			else
			{
				if (v50)
				{
					v50[1] = 0i64;
					v50[2] = 0i64;
					v50[3] = 0i64;
					sub_14001C1B0(v50, v45, (__int64)v48);
				}
				*(_QWORD*)(v30 + 16) += 32i64;
			}
			if (v45)
				sub_14018B900((__int64)v45, 0);
			if (v14 != -1i64)
				++v14;
		}
		v51 = *(_QWORD*)(a2 + 16);
		v8 = *(_WORD**)(a2 + 8);
		v52 = *(_WORD**)(a3 + 8);
		v15 = (v51 - (__int64)v8) >> 1;
		v64 = v15;
		if (v14 > v15
			|| (v53 = *(_QWORD*)(a3 + 16),
				*(_QWORD*)&v72 = v52,
				*((_QWORD*)&v72 + 1) = &v52[(v53 - (__int64)v52) >> 1],
				v73 = v72,
				v54 = sub_1400F9810(&v8[v14], v51, (_WORD**)&v73, v19),
				v15 = v64,
				v54 == (_WORD*)v51))
		{
			v13 = -1i64;
		}
		else
		{
			v13 = v54 - v8;
		}
		v55 = *(_QWORD*)(a3 + 16);
		v65 = v13;
		v56 = (v55 - (__int64)v52) >> 1;
		if (v13 >= v15)
			goto LABEL_105;
		v57 = &v8[v13];
		if (v57 == (_WORD*)v51)
		{
		LABEL_102:
			v57 = (_WORD*)v51;
		}
		else
		{
			v58 = &v52[v56];
			while (1)
			{
				v59 = v52;
				if (v52 != v58)
					break;
			LABEL_101:
				if (++v57 == (_WORD*)v51)
					goto LABEL_102;
			}
			while (*v57 != *v59)
			{
				if (++v59 == v58)
					goto LABEL_101;
			}
		}
		if (v57 == (_WORD*)v51)
			LABEL_105:
		v14 = -1i64;
		else
			v14 = v57 - v8;
		if (v13 >= v15 || (HIWORD(v66) = a4, v60 = sub_14002C8A0(&v8[v13], v51, v66), v15 = v64, v60 == (_WORD*)v51))
			v17 = -1i64;
		else
			v17 = v60 - v8;
		if (v17)
		{
			while (1)
			{
				if (v17 == -1i64 || v8[v17 - 1] != a5)
				{
				LABEL_133:
					v13 = v65;
					goto LABEL_16;
				}
				v61 = v17 + 1;
				if (v61 >= v15)
				{
				LABEL_131:
					v17 = -1i64;
					goto LABEL_132;
				}
				v62 = &v8[v61];
				v63 = (v51 - (__int64)v62) >> 3;
				if (v63 <= 0)
					break;
				while (*v62 != a4)
				{
					if (*++v62 == a4)
						break;
					if (*++v62 == a4)
						break;
					if (*++v62 == a4)
						break;
					--v63;
					++v62;
					if (v63 <= 0)
						goto LABEL_120;
				}
			LABEL_129:
				if (v62 == (_WORD*)v51)
					goto LABEL_131;
				v17 = v62 - v8;
			LABEL_132:
				if (!v17)
					goto LABEL_133;
			}
		LABEL_120:
			switch ((v51 - (__int64)v62) >> 1)
			{
			case 1i64:
				goto LABEL_127;
			case 2i64:
				goto LABEL_125;
			case 3i64:
				if (*v62 == a4)
					goto LABEL_129;
				++v62;
			LABEL_125:
				if (*v62 == a4)
					goto LABEL_129;
				++v62;
			LABEL_127:
				if (*v62 == a4)
					goto LABEL_129;
				break;
			}
			v62 = (_WORD*)v51;
			goto LABEL_129;
		}
	}
	if (v13 != -1i64)
	{
	LABEL_22:
		v21 = (__int64*)&v64;
		v64 = v15 - v13;
		*(_QWORD*)&v67 = v14 - v13;
		if (v15 - v13 >= v14 - v13)
			v21 = (__int64*)&v67;
		v22 = *v21;
		v69 = 0i64;
		v71 = 0i64;
		v23 = (char*)&v8[v13 + v22];
		v24 = (char*)&v8[v65];
		v25 = 0i64;
		v26 = ((v23 - v24) >> 1) + 1;
		if (v26 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v27 = 2 * v26;
			v25 = sub_14018B280(v27, 0);
			v69 = v25;
			v71 = (__int64)v25 + v27;
		}
		v28 = v25;
		if (v24 != v23)
		{
			v29 = v24 - (char*)v25;
			do
			{
				if (v28)
					*(_WORD*)v28 = *(_WORD*)((char*)v28 + v29);
				v28 = (int*)((char*)v28 + 2);
			} while ((char*)v28 + v29 != v23);
		}
		v70 = v28;
		if (v28)
			*(_WORD*)v28 = 0;
		v30 = a1;
		v31 = *(_QWORD**)(a1 + 16);
		if (v31 == *(_QWORD**)(a1 + 24))
		{
			sub_1400F8CF0((__int64*)a1, *(char**)(a1 + 16), (__int64)v68);
		}
		else
		{
			if (v31)
			{
				v31[1] = 0i64;
				v31[2] = 0i64;
				v31[3] = 0i64;
				sub_14001C1B0(v31, v25, (__int64)v28);
			}
			*(_QWORD*)(a1 + 16) += 32i64;
		}
		if (v25)
			sub_14018B900((__int64)v25, 0);
		goto LABEL_41;
	}
	return a1;
}
// 14018FA4E: variable 'v19' is possibly undefined
// 14018F570: using guessed type char var_80[8];


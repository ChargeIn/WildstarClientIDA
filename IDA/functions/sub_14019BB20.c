#include "../winhttp.h"

//----- (000000014019BB20) ----------------------------------------------------
__int64 __fastcall sub_14019BB20(__int64 a1, int a2, __int64 a3)
{
	_WORD* v3; // r13
	unsigned __int64 v4; // r15
	_WORD* v7; // r13
	int* v8; // rax
	unsigned int v9; // r12d
	__int64 v10; // rdi
	__int64 v11; // rbx
	int* v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rcx
	_WORD* v15; // rdi
	int v16; // r14d
	__int64* v17; // rax
	unsigned __int64 v18; // rdx
	__int64 v19; // rcx
	__int64* v20; // rax
	__int64 v21; // r15
	int* v22; // rax
	__int64 v23; // r14
	int* v24; // rbx
	__int64 v25; // rdx
	_WORD* v26; // rax
	__int64* v27; // rax
	unsigned __int64 v28; // rdx
	__int64 v29; // rcx
	__int64* v30; // rax
	__int64 v31; // r15
	int* v32; // rax
	__int64 v33; // r14
	int* v34; // rbx
	__int64 v35; // rdx
	__int64* v36; // rax
	unsigned __int64 v37; // rdx
	__int64 v38; // rcx
	__int64* v39; // rax
	__int64 v40; // r15
	int* v41; // rax
	__int64 v42; // r14
	int* v43; // rbx
	__int64 v44; // rdx
	__int64* v45; // rax
	unsigned __int64 v46; // rdx
	__int64 v47; // rcx
	__int64* v48; // rax
	__int64 v49; // r12
	int* v50; // rax
	__int64 v51; // r15
	int* v52; // rbx
	__int64 v53; // rdx
	__int64* v54; // rax
	unsigned __int64 v55; // rdx
	__int64 v56; // rcx
	__int64* v57; // rax
	int* v58; // rax
	__int64 v59; // rdx
	unsigned __int64 v60; // [rsp+20h] [rbp-58h] BYREF
	char v61[8]; // [rsp+28h] [rbp-50h] BYREF
	__int64 v62; // [rsp+30h] [rbp-48h]
	_WORD* v63; // [rsp+38h] [rbp-40h]
	__int64 v64; // [rsp+40h] [rbp-38h]
	unsigned __int64 v67; // [rsp+B0h] [rbp+38h]
	__int64 v68; // [rsp+B8h] [rbp+40h] BYREF

	v3 = *(_WORD**)(a3 + 8);
	v4 = *(_QWORD*)(a3 + 16);
	v67 = v4;
	if (*v3 != 34)
		return sub_14001A9B0(a1, a2, a3);
	v7 = v3 + 1;
	v8 = sub_14018B280(16i64, 0);
	v9 = 0;
	v10 = (__int64)v8;
	if (v8)
		*(_WORD*)v8 = 0;
	v11 = 2 * ((__int64)(*(_QWORD*)(a3 + 16) - *(_QWORD*)(a3 + 8)) >> 1) + 2;
	v12 = sub_14018B280(v11, 0);
	v13 = (__int64)v12;
	if (v12)
		*(_WORD*)v12 = 0;
	if (v10)
		sub_14018B900(v10, 0);
	v14 = v11 + v13;
	v62 = v13;
	v15 = (_WORD*)v13;
	v63 = (_WORD*)v13;
	v64 = v11 + v13;
	if ((unsigned __int64)v7 < v4)
	{
		while (1)
		{
			LOWORD(v16) = *v7;
			if (*v7 == 34)
			{
				v9 = sub_14001A9B0(a1, a2, (__int64)v61);
				goto LABEL_105;
			}
			if ((_WORD)v16 != 92)
				break;
			if ((unsigned __int64)++v7 >= v4)
				goto LABEL_105;
			v16 = (unsigned __int16)*v7;
			switch (v16)
			{
			case '"':
			case '\\':
				if (v15 + 1 == (_WORD*)v14)
				{
					v68 = 1i64;
					v45 = &v68;
					v46 = ((__int64)v15 - v13) >> 1;
					v60 = v46;
					if (v46)
						v45 = (__int64*)&v60;
					v47 = *v45;
					v68 = ((__int64)v15 - v13) >> 1;
					v48 = &v68;
					v60 = v46 + v47;
					if (v46 + v47 >= v46)
						v48 = (__int64*)&v60;
					v49 = 2 * (*v48 + 1);
					v50 = sub_14018B280(v49, 0);
					v51 = (__int64)v50;
					v52 = v50;
					if ((_WORD*)v13 != v15)
					{
						v53 = v13 - (_QWORD)v50;
						do
						{
							if (v52)
								*(_WORD*)v52 = *(_WORD*)((char*)v52 + v53);
							v52 = (int*)((char*)v52 + 2);
						} while ((_WORD*)((char*)v52 + v53) != v15);
					}
					goto LABEL_93;
				}
				goto LABEL_98;
			case 'n':
				if (v15 + 1 == (_WORD*)v14)
				{
					v68 = 1i64;
					v36 = &v68;
					v37 = ((__int64)v15 - v13) >> 1;
					v60 = v37;
					if (v37)
						v36 = (__int64*)&v60;
					v38 = *v36;
					v68 = ((__int64)v15 - v13) >> 1;
					v39 = &v68;
					v60 = v37 + v38;
					if (v37 + v38 >= v37)
						v39 = (__int64*)&v60;
					v40 = 2 * (*v39 + 1);
					v41 = sub_14018B280(v40, 0);
					v42 = (__int64)v41;
					v43 = v41;
					if ((_WORD*)v13 != v15)
					{
						v44 = v13 - (_QWORD)v41;
						do
						{
							if (v43)
								*(_WORD*)v43 = *(_WORD*)((char*)v43 + v44);
							v43 = (int*)((char*)v43 + 2);
						} while ((_WORD*)((char*)v43 + v44) != v15);
					}
					if (v43)
						*(_WORD*)v43 = 0;
					if (v13)
						sub_14018B900(v13, 0);
					v14 = v40 + v42;
					v4 = v67;
					v13 = v42;
					v62 = v42;
					v15 = v43;
					v64 = v14;
				}
				v26 = v15 + 1;
				if (v15 != (_WORD*)-2i64)
					*v26 = 0;
				*v15 = 10;
				goto LABEL_101;
			case 'r':
				if (v15 + 1 == (_WORD*)v14)
				{
					v68 = 1i64;
					v27 = &v68;
					v28 = ((__int64)v15 - v13) >> 1;
					v60 = v28;
					if (v28)
						v27 = (__int64*)&v60;
					v29 = *v27;
					v68 = ((__int64)v15 - v13) >> 1;
					v30 = &v68;
					v60 = v28 + v29;
					if (v28 + v29 >= v28)
						v30 = (__int64*)&v60;
					v31 = 2 * (*v30 + 1);
					v32 = sub_14018B280(v31, 0);
					v33 = (__int64)v32;
					v34 = v32;
					if ((_WORD*)v13 != v15)
					{
						v35 = v13 - (_QWORD)v32;
						do
						{
							if (v34)
								*(_WORD*)v34 = *(_WORD*)((char*)v34 + v35);
							v34 = (int*)((char*)v34 + 2);
						} while ((_WORD*)((char*)v34 + v35) != v15);
					}
					if (v34)
						*(_WORD*)v34 = 0;
					if (v13)
						sub_14018B900(v13, 0);
					v14 = v31 + v33;
					v4 = v67;
					v13 = v33;
					v62 = v33;
					v15 = v34;
					v64 = v14;
				}
				v26 = v15 + 1;
				if (v15 != (_WORD*)-2i64)
					*v26 = 0;
				*v15 = 13;
				goto LABEL_101;
			case 't':
				if (v15 + 1 == (_WORD*)v14)
				{
					v68 = 1i64;
					v17 = &v68;
					v18 = ((__int64)v15 - v13) >> 1;
					v60 = v18;
					if (v18)
						v17 = (__int64*)&v60;
					v19 = *v17;
					v68 = ((__int64)v15 - v13) >> 1;
					v20 = &v68;
					v60 = v18 + v19;
					if (v18 + v19 >= v18)
						v20 = (__int64*)&v60;
					v21 = 2 * (*v20 + 1);
					v22 = sub_14018B280(v21, 0);
					v23 = (__int64)v22;
					v24 = v22;
					if ((_WORD*)v13 != v15)
					{
						v25 = v13 - (_QWORD)v22;
						do
						{
							if (v24)
								*(_WORD*)v24 = *(_WORD*)((char*)v24 + v25);
							v24 = (int*)((char*)v24 + 2);
						} while ((_WORD*)((char*)v24 + v25) != v15);
					}
					if (v24)
						*(_WORD*)v24 = 0;
					if (v13)
						sub_14018B900(v13, 0);
					v14 = v21 + v23;
					v4 = v67;
					v13 = v23;
					v62 = v23;
					v15 = v24;
					v64 = v14;
				}
				v26 = v15 + 1;
				if (v15 != (_WORD*)-2i64)
					*v26 = 0;
				*v15 = 9;
				goto LABEL_101;
			}
		LABEL_102:
			if ((unsigned __int64)++v7 >= v4)
				goto LABEL_105;
		}
		if (v15 + 1 == (_WORD*)v14)
		{
			v68 = 1i64;
			v54 = &v68;
			v55 = ((__int64)v15 - v13) >> 1;
			v60 = v55;
			if (v55)
				v54 = (__int64*)&v60;
			v56 = *v54;
			v68 = ((__int64)v15 - v13) >> 1;
			v57 = &v68;
			v60 = v55 + v56;
			if (v55 + v56 >= v55)
				v57 = (__int64*)&v60;
			v49 = 2 * (*v57 + 1);
			v58 = sub_14018B280(v49, 0);
			v51 = (__int64)v58;
			v52 = v58;
			if ((_WORD*)v13 != v15)
			{
				v59 = v13 - (_QWORD)v58;
				do
				{
					if (v52)
						*(_WORD*)v52 = *(_WORD*)((char*)v52 + v59);
					v52 = (int*)((char*)v52 + 2);
				} while ((_WORD*)((char*)v52 + v59) != v15);
			}
		LABEL_93:
			if (v52)
				*(_WORD*)v52 = 0;
			if (v13)
				sub_14018B900(v13, 0);
			v14 = v51 + v49;
			v13 = v51;
			v62 = v51;
			v4 = v67;
			v15 = v52;
			v64 = v14;
			v9 = 0;
		}
	LABEL_98:
		v26 = v15 + 1;
		if (v15 != (_WORD*)-2i64)
			*v26 = 0;
		*v15 = v16;
	LABEL_101:
		v15 = v26;
		v63 = v26;
		goto LABEL_102;
	}
LABEL_105:
	if (v13)
		sub_14018B900(v13, 0);
	return v9;
}
// 14019BB20: using guessed type char var_50[8];


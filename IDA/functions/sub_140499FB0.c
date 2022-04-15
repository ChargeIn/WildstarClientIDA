#include "../winhttp.h"

//----- (0000000140499FB0) ----------------------------------------------------
__int64 __fastcall sub_140499FB0(_QWORD* a1)
{
	unsigned int v2; // eax
	_QWORD* v3; // rdx
	unsigned int v4; // esi
	unsigned int v5; // r13d
	_QWORD* v6; // rbx
	__int64 v7; // r14
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int v10; // ecx
	__int64 v11; // rax
	__int64 v12; // rdi
	int* v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rax
	unsigned __int64 v16; // rcx
	int* v17; // rsi
	__int64 v18; // rax
	int* v19; // r15
	__int64 v21; // rdi
	unsigned __int64 v22; // rdi
	_WORD* v23; // r8
	int* v24; // rdi
	__int64 v25; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v28; // eax
	unsigned int v29; // edi
	__int64 v30; // rax
	_DWORD* v31; // r13
	__int64 v32; // r9
	unsigned int v33; // r8d
	__int64 v34; // rcx
	__int64 v35; // rdx
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64 v39; // r15
	unsigned int v40; // edx
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	unsigned __int64 v44; // rdi
	__int64 v45; // r8
	int v46; // r14d
	_QWORD* v47; // rcx
	_QWORD* v48; // rbx
	bool v49; // al
	BOOL v50; // r14d
	_QWORD* v51; // rdx
	_QWORD* k; // rax
	_QWORD* v53; // rax
	int* v54; // rcx
	__int64 v55; // rax
	_QWORD* v56; // rax
	unsigned int v57; // eax
	unsigned int v58; // r14d
	__int64 v59; // rax
	__int64 v60; // rdi
	__int64 v61; // rdx
	unsigned int v62; // ecx
	__int64 v63; // rax
	__int64 v64; // rbx
	int* v65; // rcx
	__int64 v66; // rax
	__int64 v67; // rax
	__int64 v69[2]; // [rsp+30h] [rbp-89h] BYREF
	__int64 v70; // [rsp+40h] [rbp-79h] BYREF
	unsigned __int64 v71; // [rsp+48h] [rbp-71h]
	__int64 v72; // [rsp+50h] [rbp-69h] BYREF
	__int64 v73; // [rsp+58h] [rbp-61h] BYREF
	__int64 v74; // [rsp+60h] [rbp-59h] BYREF
	__int64 v75; // [rsp+68h] [rbp-51h] BYREF
	__int64 v76; // [rsp+70h] [rbp-49h]
	__int64 v77; // [rsp+78h] [rbp-41h]
	__int64 v78; // [rsp+80h] [rbp-39h]
	__int64 v79; // [rsp+88h] [rbp-31h]
	__int64 v80; // [rsp+90h] [rbp-29h] BYREF
	int* v81; // [rsp+98h] [rbp-21h]
	__int64 v82; // [rsp+A0h] [rbp-19h]
	__int64 v83; // [rsp+A8h] [rbp-11h]
	int* v84; // [rsp+B8h] [rbp-1h] BYREF
	char v85[24]; // [rsp+C0h] [rbp+7h] BYREF
	unsigned int v86; // [rsp+120h] [rbp+67h]
	unsigned int v87; // [rsp+128h] [rbp+6Fh]
	unsigned int v88; // [rsp+130h] [rbp+77h]
	__int64 v89; // [rsp+138h] [rbp+7Fh] BYREF

	v2 = sub_14049B440(a1);
	v3 = (_QWORD*)a1[2];
	v4 = 0;
	v5 = v2;
	v6 = (_QWORD*)v3[2];
	v87 = v2;
	if (v6 == v3)
		goto LABEL_51;
	do
	{
		v7 = v6[5];
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 40i64))(v7) + 128))
		{
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 40i64))(v7);
			v9 = a1[22];
			v10 = *(_DWORD*)(v8 + 128);
			v11 = *(_QWORD*)(v9 + 8);
			v12 = v9;
			LODWORD(v69[0]) = v10;
			while (v11)
			{
				v12 = v11;
				if (v10 >= *(_DWORD*)(v11 + 32))
					v11 = *(_QWORD*)(v11 + 24);
				else
					v11 = *(_QWORD*)(v11 + 16);
			}
			if (v12 == v9 || v10 < *(_DWORD*)(v12 + 32))
			{
				v13 = sub_14018B280(48i64, 0);
				if (v13 != (int*)-32i64)
				{
					*((_QWORD*)v13 + 4) = v69[0];
					*((_QWORD*)v13 + 5) = v7;
				}
				*(_QWORD*)(v12 + 16) = v13;
				v15 = a1[22];
				if (v12 == v15)
				{
					*(_QWORD*)(v15 + 8) = v13;
					*(_QWORD*)(a1[22] + 24i64) = v13;
				}
				else if (v12 == *(_QWORD*)(v15 + 16))
				{
					*(_QWORD*)(v15 + 16) = v13;
				}
			}
			else
			{
				v13 = sub_14018B280(48i64, 0);
				if (v13 != (int*)-32i64)
				{
					*((_QWORD*)v13 + 4) = v69[0];
					*((_QWORD*)v13 + 5) = v7;
				}
				*(_QWORD*)(v12 + 24) = v13;
				v14 = a1[22];
				if (v12 == *(_QWORD*)(v14 + 24))
					*(_QWORD*)(v14 + 24) = v13;
			}
			*((_QWORD*)v13 + 1) = v12;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			sub_1400081C0((__int64)v13, (_QWORD*)(a1[22] + 8i64));
			++a1[23];
		}
		v16 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 40i64))(v7) + 136);
		if (!v16 || v16 > qword_140C3FE70)
			goto LABEL_40;
		v17 = (int*)(v16 + qword_140C3FE68);
		if (!(v16 + qword_140C3FE68) || !*(_WORD*)v17)
		{
			v4 = 0;
		LABEL_40:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 48i64))(v7);
			goto LABEL_41;
		}
		v18 = 0i64;
		v19 = 0i64;
		while (*((_WORD*)v17 + ++v18) != 0)
			;
		v21 = (2 * v18) >> 1;
		if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v19 = sub_14018B280(2 * (v21 + 1), 0);
		v22 = 2 * v21;
		sub_1407DB590(v19, v17, v22);
		v23 = (_WORD*)((char*)v19 + v22);
		v4 = 0;
		if ((int*)((char*)v19 + v22))
			*v23 = 0;
		v81 = 0i64;
		v82 = 0i64;
		v83 = 0i64;
		sub_14001C1B0(&v80, v19, (__int64)v23);
		v24 = v81;
		v76 = 0i64;
		v77 = 0i64;
		v78 = 0i64;
		sub_14001C1B0(&v75, v81, v82);
		v79 = v7;
		sub_1400EF4C0((__int64)(a1 + 25), (__int64)&v70, (__int64)&v75);
		if (v76)
			sub_14018B900(v76, 0);
		if (v24)
			sub_14018B900((__int64)v24, 0);
		if (v19)
			sub_14018B900((__int64)v19, 0);
		if (!(_BYTE)v71)
			goto LABEL_40;
	LABEL_41:
		v25 = v6[3];
		if (v25)
		{
			v6 = (_QWORD*)v6[3];
			for (i = *(_QWORD**)(v25 + 16); i; i = (_QWORD*)i[2])
				v6 = i;
		}
		else
		{
			for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = (_QWORD*)j;
			if (v6[3] != j)
				v6 = (_QWORD*)j;
		}
	} while (v6 != (_QWORD*)a1[2]);
	v5 = v87;
LABEL_51:
	if (qword_140C63838)
	{
		v28 = qword_140C63838(off_140A693D8, qword_140C63858);
	}
	else if (dword_140C650C8)
	{
		v28 = 0;
	}
	else if ((int)sub_1401EC540() >= 0)
	{
		v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63CE0 + 40i64))(qword_140C63CE0);
	}
	else
	{
		v28 = 0;
	}
	v86 = v28;
	v29 = 0;
	v88 = 0;
	if (v28)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v30 = qword_140C63848(off_140A693D8, v29, qword_140C63858);
				goto LABEL_66;
			}
			if (dword_140C650C8)
			{
				v31 = 0i64;
			}
			else if ((int)sub_1401EC540() >= 0)
			{
				v30 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63CE0 + 32i64))(qword_140C63CE0, v29);
			LABEL_66:
				v31 = (_DWORD*)v30;
			}
			else
			{
				v31 = 0i64;
			}
			v32 = a1[2];
			v33 = v31[1];
			v34 = *(_QWORD*)(v32 + 8);
			v35 = v32;
			v36 = v34;
			while (v36)
			{
				if (*(_DWORD*)(v36 + 32) < v33)
				{
					v36 = *(_QWORD*)(v36 + 24);
				}
				else
				{
					v35 = v36;
					v36 = *(_QWORD*)(v36 + 16);
				}
			}
			if (v35 == v32 || v33 < *(_DWORD*)(v35 + 32))
			{
				v74 = a1[2];
				v37 = &v74;
			}
			else
			{
				v89 = v35;
				v37 = &v89;
			}
			v38 = *v37;
			v39 = 0i64;
			if (v38 != v32)
				v39 = *(_QWORD*)(v38 + 40);
			v40 = v31[2];
			v41 = v32;
			while (v34)
			{
				if (*(_DWORD*)(v34 + 32) < v40)
				{
					v34 = *(_QWORD*)(v34 + 24);
				}
				else
				{
					v41 = v34;
					v34 = *(_QWORD*)(v34 + 16);
				}
			}
			if (v41 == v32 || v40 < *(_DWORD*)(v41 + 32))
			{
				v73 = v32;
				v42 = &v73;
			}
			else
			{
				v72 = v41;
				v42 = &v72;
			}
			v43 = *v42;
			v44 = 0i64;
			if (v43 != v32)
				v44 = *(_QWORD*)(v43 + 40);
			if (v39 && v44)
			{
				v45 = *(_QWORD*)(v39 + 88);
				v46 = v31[3];
				LODWORD(v70) = 1;
				v47 = *(_QWORD**)(v45 + 8);
				v71 = v44;
				v48 = (_QWORD*)v45;
				v49 = 1;
				v50 = (v46 & 2) == 0;
				HIDWORD(v70) = v50;
				while (v47)
				{
					v48 = v47;
					v49 = v44 < v47[5];
					if (v44 >= v47[5])
						v47 = (_QWORD*)v47[3];
					else
						v47 = (_QWORD*)v47[2];
				}
				v51 = v48;
				if (v49)
				{
					if (v48 == *(_QWORD**)(v45 + 16))
					{
						sub_14049BCC0(v39 + 80, &v84, (__int64)v47, v48, &v70);
						goto LABEL_122;
					}
					if (*(_BYTE*)v48 || *(_QWORD**)(v48[1] + 8i64) != v48)
					{
						v51 = (_QWORD*)v48[2];
						if (v51)
						{
							for (k = (_QWORD*)v51[3]; k; k = (_QWORD*)k[3])
								v51 = k;
						}
						else
						{
							v51 = (_QWORD*)v48[1];
							if (v48 == (_QWORD*)v51[2])
							{
								do
								{
									v53 = v51;
									v51 = (_QWORD*)v51[1];
								} while (v53 == (_QWORD*)v51[2]);
							}
						}
					}
					else
					{
						v51 = (_QWORD*)v48[3];
					}
				}
				if (v51[5] < v44)
				{
					if (v48 == (_QWORD*)v45 || v44 < v48[5])
					{
						v54 = sub_14018B280(48i64, 0);
						if (v54 != (int*)-32i64)
						{
							*((_QWORD*)v54 + 4) = v70;
							*((_QWORD*)v54 + 5) = v44;
						}
						v48[2] = v54;
						v56 = *(_QWORD**)(v39 + 88);
						if (v48 == v56)
						{
							v56[1] = v54;
							*(_QWORD*)(*(_QWORD*)(v39 + 88) + 24i64) = v54;
						}
						else if (v48 == (_QWORD*)v56[2])
						{
							v56[2] = v54;
						}
					}
					else
					{
						v54 = sub_14018B280(48i64, 0);
						if (v54 != (int*)-32i64)
						{
							*((_QWORD*)v54 + 4) = v70;
							*((_QWORD*)v54 + 5) = v44;
						}
						v48[3] = v54;
						v55 = *(_QWORD*)(v39 + 88);
						if (v48 == *(_QWORD**)(v55 + 24))
							*(_QWORD*)(v55 + 24) = v54;
					}
					*((_QWORD*)v54 + 1) = v48;
					*((_QWORD*)v54 + 2) = 0i64;
					*((_QWORD*)v54 + 3) = 0i64;
					sub_1400081C0((__int64)v54, (_QWORD*)(*(_QWORD*)(v39 + 88) + 8i64));
					++* (_QWORD*)(v39 + 96);
				}
			LABEL_122:
				v4 = 0;
				if ((v31[3] & 1) == 0)
				{
					LODWORD(v69[0]) = 0;
					HIDWORD(v69[0]) = v50;
					v69[1] = v39;
					sub_14049AE40(v44 + 80, (__int64)v85, v69);
				}
			}
			v29 = v88 + 1;
			v88 = v29;
			if (v29 >= v86)
			{
				v5 = v87;
				break;
			}
			continue;
		}
	}
	if (qword_140C63838)
	{
		v57 = qword_140C63838(off_140A693A0, qword_140C63858);
		goto LABEL_133;
	}
	if (dword_140C64380)
	{
		v58 = 0;
	}
	else if ((int)sub_1401EC100() >= 0)
	{
		v57 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64EB0 + 40i64))(qword_140C64EB0);
	LABEL_133:
		v58 = v57;
	}
	else
	{
		v58 = 0;
	}
	if (v58)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v59 = qword_140C63848(off_140A693A0, v4, qword_140C63858);
			LABEL_140:
				v60 = v59;
				if (v59)
				{
					v61 = a1[30];
					v62 = *(_DWORD*)(v59 + 4);
					v63 = *(_QWORD*)(v61 + 8);
					LODWORD(v69[0]) = v62;
					v64 = v61;
					while (v63)
					{
						v64 = v63;
						if (v62 >= *(_DWORD*)(v63 + 32))
							v63 = *(_QWORD*)(v63 + 24);
						else
							v63 = *(_QWORD*)(v63 + 16);
					}
					if (v64 == v61 || v62 < *(_DWORD*)(v64 + 32))
					{
						v65 = sub_14018B280(48i64, 0);
						if (v65 != (int*)-32i64)
						{
							*((_QWORD*)v65 + 4) = v69[0];
							*((_QWORD*)v65 + 5) = v60;
						}
						*(_QWORD*)(v64 + 16) = v65;
						v67 = a1[30];
						if (v64 == v67)
						{
							*(_QWORD*)(v67 + 8) = v65;
							*(_QWORD*)(a1[30] + 24i64) = v65;
						}
						else if (v64 == *(_QWORD*)(v67 + 16))
						{
							*(_QWORD*)(v67 + 16) = v65;
						}
					}
					else
					{
						v65 = sub_14018B280(48i64, 0);
						if (v65 != (int*)-32i64)
						{
							*((_QWORD*)v65 + 4) = v69[0];
							*((_QWORD*)v65 + 5) = v60;
						}
						*(_QWORD*)(v64 + 24) = v65;
						v66 = a1[30];
						if (v64 == *(_QWORD*)(v66 + 24))
							*(_QWORD*)(v66 + 24) = v65;
					}
					*((_QWORD*)v65 + 1) = v64;
					*((_QWORD*)v65 + 2) = 0i64;
					*((_QWORD*)v65 + 3) = 0i64;
					sub_1400081C0((__int64)v65, (_QWORD*)(a1[30] + 8i64));
					++a1[31];
				}
			}
			else if (!dword_140C64380 && (int)sub_1401EC100() >= 0)
			{
				v59 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64EB0 + 32i64))(qword_140C64EB0, v4);
				goto LABEL_140;
			}
			if (++v4 >= v58)
				return v87;
			continue;
		}
	}
	return v5;
}
// 14049A060: conditional instruction was optimized away because rax.8==0
// 14049A4DF: conditional instruction was optimized away because rcx.8==0
// 14049A6AF: conditional instruction was optimized away because rax.8==0
// 140A693A0: using guessed type wchar_t *off_140A693A0[2];
// 140A693D8: using guessed type wchar_t *off_140A693D8[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CE0: using guessed type __int64 qword_140C63CE0;
// 140C64380: using guessed type int dword_140C64380;
// 140C64EB0: using guessed type __int64 qword_140C64EB0;
// 140C650C8: using guessed type int dword_140C650C8;
// 140499FB0: using guessed type char var_50[24];


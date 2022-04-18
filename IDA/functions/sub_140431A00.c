#include "../winhttp.h"

//----- (0000000140431A00) ----------------------------------------------------
void __fastcall sub_140431A00(__int64 a1, __int64 a2, __int64 a3, const __m128i* a4)
{
	__int64 i; // rax
	int* v6; // rdi
	int* v7; // r12
	__int64 v8; // rax
	bool v9; // zf
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	int* v13; // r15
	__int64 v14; // rbx
	signed __int64 v15; // rbx
	char* v16; // r14
	__int64 v17; // rdi
	char v18; // r9
	__int64 v19; // rbx
	char* v20; // rax
	__int64 v21; // rdx
	unsigned __int64* v22; // rax
	unsigned __int16* v23; // r14
	__int64 v24; // rcx
	unsigned __int64 v25; // rax
	unsigned __int64 v26; // rax
	unsigned __int64 v27; // rdx
	char* v28; // rbx
	unsigned __int64 v29; // rax
	int* v30; // rax
	__int64 v31; // rdi
	char* v32; // rcx
	int* v33; // rax
	__int64 v34; // r12
	_QWORD* v35; // r15
	_QWORD* v36; // rsi
	_QWORD* v37; // rbx
	int v38; // eax
	__int64 v39; // rbx
	unsigned int v40; // eax
	__int64 v41; // rcx
	__int64 j; // rax
	int* v43; // r14
	int* v44; // r15
	__int64 v45; // rax
	__int64 v46; // rbx
	unsigned __int64 v47; // rbx
	__int64 v48; // rax
	int* v49; // rdi
	__int64 v50; // rbx
	signed __int64 v51; // rbx
	char* v52; // r12
	__int64 v53; // r14
	char v54; // r9
	__int64 v55; // rbx
	char* v56; // rax
	__int64 v57; // rdx
	unsigned __int64* v58; // rax
	unsigned __int64 v59; // rcx
	WCHAR* v60; // rbx
	__int64 v61; // r8
	unsigned __int64 v62; // rax
	char* v63; // r12
	unsigned __int64 v64; // rax
	char* v65; // r14
	unsigned __int64 v66; // rcx
	int* v67; // rax
	WCHAR* v68; // rdx
	signed __int64 v69; // r8
	int* v70; // rax
	unsigned int v71; // eax
	unsigned int* v72; // rax
	__int64 k; // rax
	int* v74; // r14
	int* v75; // r15
	__int64 v76; // rax
	__int64 v77; // rbx
	unsigned __int64 v78; // rbx
	__int64 v79; // rax
	int* v80; // rdi
	__int64 v81; // rbx
	signed __int64 v82; // rbx
	char* v83; // r12
	__int64 v84; // r14
	char v85; // r9
	__int64 v86; // rbx
	char* v87; // rax
	__int64 v88; // rdx
	unsigned __int64* v89; // rax
	unsigned __int64 v90; // rcx
	__int64 v91; // r8
	unsigned __int64 v92; // rax
	char* v93; // r12
	unsigned __int64 v94; // rax
	char* v95; // r14
	unsigned __int64 v96; // rcx
	int* v97; // rax
	WCHAR* v98; // rdx
	signed __int64 v99; // r8
	int* v100; // rax
	unsigned int v101; // eax
	int v102; // [rsp+20h] [rbp-19h]
	int* v103; // [rsp+30h] [rbp-9h] BYREF
	unsigned __int64 v104; // [rsp+38h] [rbp-1h] BYREF
	__int128 v105; // [rsp+40h] [rbp+7h] BYREF
	__int128 v106; // [rsp+50h] [rbp+17h]
	__int128 v107; // [rsp+60h] [rbp+27h] BYREF

	if (!(unsigned int)sub_14018E2C0(a3, L"Link"))
	{
		if (sub_1407DF6E0(a4, (const __m128i*)L"Archive:") == a4)
		{
			for (i = 0i64; aArchive[i]; ++i)
				;
			v6 = (__int32*)((char*)a4->m128i_i32 + 2 * i);
			v7 = 0i64;
			v8 = 0i64;
			do
				v9 = asc_140B01688[++v8] == 0;
			while (!v9);
			v10 = (2 * v8) >> 1;
			if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v7 = sub_14018B280(2 * (v10 + 1), 0);
			v11 = 2 * v10;
			sub_1407DB590(v7, (int*)L" \r\n", v11);
			v103 = (int*)((char*)v7 + v11);
			if ((int*)((char*)v7 + v11))
				*(_WORD*)((char*)v7 + v11) = 0;
			v12 = 0i64;
			v13 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v12;
				while (*((_WORD*)v6 + v12));
			}
			v14 = (2 * v12) >> 1;
			if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v13 = sub_14018B280(2 * (v14 + 1), 0);
			v15 = 2 * v14;
			sub_1407DB590(v13, v6, v15);
			v16 = (char*)v13 + v15;
			if ((int*)((char*)v13 + v15))
				*(_WORD*)v16 = 0;
			v104 = -1i64;
			v17 = v15 >> 1;
			if (!(v15 >> 1)
				|| (*(_QWORD*)&v106 = v7,
					*((_QWORD*)&v106 + 1) = (char*)v7 + 2 * (((char*)v103 - (char*)v7) >> 1),
					v107 = v106,
					*(_QWORD*)&v105 = v13,
					v104 = (unsigned __int64)v13 + 2 * v17,
					sub_1400F94D0(&v103, (__int64*)&v104, (__int64*)&v105, (_WORD**)&v107, v102),
					v103 == v13)
				|| (v19 = ((char*)v103 - (char*)v13 - 2) >> 1, v19 == -1))
			{
				v33 = sub_14018B280(16i64, 0);
				v23 = (unsigned __int16*)v33;
				v31 = (__int64)v33;
				if (v33)
					*(_WORD*)v33 = 0;
			}
			else
			{
				*(_QWORD*)&v105 = v7;
				*((_QWORD*)&v105 + 1) = *((_QWORD*)&v106 + 1);
				v107 = v105;
				v20 = (char*)sub_1400F9810(v13, (__int64)v16, (_WORD**)&v107, v18);
				if (v20 == v16)
					v21 = -1i64;
				else
					v21 = (v20 - (char*)v13) >> 1;
				v22 = (unsigned __int64*)&v105;
				if (v21 == -1)
					v21 = 0i64;
				v23 = 0i64;
				*(_QWORD*)&v105 = v17 - v21;
				v104 = v19 - v21 + 1;
				v24 = 2 * v21;
				if (v17 - v21 >= v104)
					v22 = &v104;
				v25 = *v22;
				*(_QWORD*)&v105 = 2 * v21;
				v26 = v21 + v25;
				v27 = (unsigned __int64)v13 + v24;
				v28 = (char*)v13 + 2 * v26;
				v104 = (unsigned __int64)v13 + v24;
				v29 = ((__int64)(2 * v26 - v24) >> 1) + 1;
				if (v29 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v30 = sub_14018B280(2 * v29, 0);
					v24 = v105;
					v27 = v104;
					v23 = (unsigned __int16*)v30;
				}
				v31 = (__int64)v23;
				if ((char*)v27 != v28)
				{
					v32 = (char*)v13 + v24 - (_QWORD)v23;
					do
					{
						if (v31)
							*(_WORD*)v31 = *(_WORD*)&v32[v31];
						v31 += 2i64;
					} while (&v32[v31] != v28);
				}
				if (v31)
					*(_WORD*)v31 = 0;
			}
			if (v13)
				sub_14018B900((__int64)v13, 0);
			if (v7)
				sub_14018B900((__int64)v7, 0);
			v34 = qword_140C65990;
			v35 = *(_QWORD**)(qword_140C65998 + 208);
			v36 = v35;
			v37 = (_QWORD*)v35[1];
			while (v37)
			{
				if ((int)sub_1400454D0(v37[5], v37[6], v23, v31) < 0)
				{
					v37 = (_QWORD*)v37[3];
				}
				else
				{
					v36 = v37;
					v37 = (_QWORD*)v37[2];
				}
			}
			if (v36 == v35
				|| (v38 = sub_1400454D0((__int64)v23, v31, (unsigned __int16*)v36[5], v36[6]), *(_QWORD*)&v105 = v36, v38 < 0))
			{
				*(_QWORD*)&v105 = v35;
			}
			v39 = v105;
			if ((_QWORD*)v105 != v35)
			{
				v40 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v105 + 64) + 48i64))(*(_QWORD*)(v105 + 64));
				sub_14049AA10(v34, v40);
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GalacticArchiveLinkClick", L"G", *(_QWORD*)(v39 + 64));
			}
			if (v23)
			{
				v41 = (__int64)v23;
			LABEL_139:
				sub_14018B900(v41, 0);
			}
		}
		else
		{
			if (sub_1407DF6E0(a4, (const __m128i*)L"Location:") == a4)
			{
				for (j = 0i64; aLocation[j]; ++j)
					;
				v43 = (__int32*)((char*)a4->m128i_i32 + 2 * j);
				v44 = 0i64;
				v45 = 0i64;
				do
					v9 = asc_140B01788[++v45] == 0;
				while (!v9);
				v46 = (2 * v45) >> 1;
				if ((unsigned __int64)(v46 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v44 = sub_14018B280(2 * (v46 + 1), 0);
				v47 = 2 * v46;
				sub_1407DB590(v44, (int*)L" \r\n", v47);
				*(_QWORD*)&v105 = (char*)v44 + v47;
				if ((int*)((char*)v44 + v47))
					*(_WORD*)((char*)v44 + v47) = 0;
				v48 = 0i64;
				v49 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v48;
					while (*((_WORD*)v43 + v48));
				}
				v50 = (2 * v48) >> 1;
				if ((unsigned __int64)(v50 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v49 = sub_14018B280(2 * (v50 + 1), 0);
				v51 = 2 * v50;
				sub_1407DB590(v49, v43, v51);
				v52 = (char*)v49 + v51;
				if ((int*)((char*)v49 + v51))
					*(_WORD*)v52 = 0;
				v104 = -1i64;
				v53 = v51 >> 1;
				if (!(v51 >> 1))
					goto LABEL_88;
				v103 = (int*)(v53 - 1);
				*(_QWORD*)&v106 = v44;
				*((_QWORD*)&v106 + 1) = (char*)v44 + 2 * ((__int64)(v105 - (_QWORD)v44) >> 1);
				*(_QWORD*)&v105 = v49;
				v107 = v106;
				v104 = (unsigned __int64)v49 + 2 * v53;
				sub_1400F94D0(&v103, (__int64*)&v104, (__int64*)&v105, (_WORD**)&v107, v102);
				if (v103 == v49 || (v55 = ((char*)v103 - (char*)v49 - 2) >> 1, v55 == -1))
				{
				LABEL_88:
					v70 = sub_14018B280(16i64, 0);
					v60 = (WCHAR*)v70;
					if (v70)
						*(_WORD*)v70 = 0;
				}
				else
				{
					*(_QWORD*)&v105 = v44;
					*((_QWORD*)&v105 + 1) = *((_QWORD*)&v106 + 1);
					v107 = v105;
					v56 = (char*)sub_1400F9810(v49, (__int64)v52, (_WORD**)&v107, v54);
					if (v56 == v52)
						v57 = -1i64;
					else
						v57 = (v56 - (char*)v49) >> 1;
					v58 = (unsigned __int64*)&v105;
					if (v57 == -1)
						v57 = 0i64;
					v59 = v55 - v57 + 1;
					*(_QWORD*)&v105 = v53 - v57;
					v60 = 0i64;
					v104 = v59;
					if (v53 - v57 >= v59)
						v58 = &v104;
					v61 = 2 * v57;
					v62 = *v58;
					v63 = (char*)v49 + 2 * v57;
					*(_QWORD*)&v105 = 2 * v57;
					v64 = v57 + v62;
					v65 = (char*)v49 + 2 * v64;
					v66 = ((__int64)(2 * v64 - 2 * v57) >> 1) + 1;
					if (v66 <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v67 = sub_14018B280(2 * v66, 0);
						v61 = v105;
						v60 = (WCHAR*)v67;
					}
					v68 = v60;
					if (v63 != v65)
					{
						v69 = (char*)v49 - (char*)v60 + v61;
						do
						{
							if (v68)
								*v68 = *(WCHAR*)((char*)v68 + v69);
							++v68;
						} while ((char*)v68 + v69 != v65);
					}
					if (v68)
						*v68 = 0;
				}
				if (v49)
					sub_14018B900((__int64)v49, 0);
				if (v44)
					sub_14018B900((__int64)v44, 0);
				v71 = sub_1407DF510(v60);
				v72 = (unsigned int*)sub_14024B980(v71);
				if (v72)
					sub_140426630(a1, v72);
			}
			else
			{
				if (sub_1407DF6E0(a4, (const __m128i*)L"Schematic:") != a4)
					return;
				for (k = 0i64; aSchematic_0[k]; ++k)
					;
				v74 = (__int32*)((char*)a4->m128i_i32 + 2 * k);
				v75 = 0i64;
				v76 = 0i64;
				do
					v9 = asc_140B01780[++v76] == 0;
				while (!v9);
				v77 = (2 * v76) >> 1;
				if ((unsigned __int64)(v77 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v75 = sub_14018B280(2 * (v77 + 1), 0);
				v78 = 2 * v77;
				sub_1407DB590(v75, (int*)L" \r\n", v78);
				*(_QWORD*)&v105 = (char*)v75 + v78;
				if ((int*)((char*)v75 + v78))
					*(_WORD*)((char*)v75 + v78) = 0;
				v79 = 0i64;
				v80 = 0i64;
				if (*(_WORD*)v74)
				{
					do
						++v79;
					while (*((_WORD*)v74 + v79));
				}
				v81 = (2 * v79) >> 1;
				if ((unsigned __int64)(v81 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v80 = sub_14018B280(2 * (v81 + 1), 0);
				v82 = 2 * v81;
				sub_1407DB590(v80, v74, v82);
				v83 = (char*)v80 + v82;
				if ((int*)((char*)v80 + v82))
					*(_WORD*)v83 = 0;
				v104 = -1i64;
				v84 = v82 >> 1;
				if (!(v82 >> 1))
					goto LABEL_130;
				v103 = (int*)(v84 - 1);
				*(_QWORD*)&v106 = v75;
				*((_QWORD*)&v106 + 1) = (char*)v75 + 2 * ((__int64)(v105 - (_QWORD)v75) >> 1);
				*(_QWORD*)&v105 = v80;
				v107 = v106;
				v104 = (unsigned __int64)v80 + 2 * v84;
				sub_1400F94D0(&v103, (__int64*)&v104, (__int64*)&v105, (_WORD**)&v107, v102);
				if (v103 == v80 || (v86 = ((char*)v103 - (char*)v80 - 2) >> 1, v86 == -1))
				{
				LABEL_130:
					v100 = sub_14018B280(16i64, 0);
					v60 = (WCHAR*)v100;
					if (v100)
						*(_WORD*)v100 = 0;
				}
				else
				{
					*(_QWORD*)&v105 = v75;
					*((_QWORD*)&v105 + 1) = *((_QWORD*)&v106 + 1);
					v107 = v105;
					v87 = (char*)sub_1400F9810(v80, (__int64)v83, (_WORD**)&v107, v85);
					if (v87 == v83)
						v88 = -1i64;
					else
						v88 = (v87 - (char*)v80) >> 1;
					v89 = (unsigned __int64*)&v105;
					if (v88 == -1)
						v88 = 0i64;
					v90 = v86 - v88 + 1;
					*(_QWORD*)&v105 = v84 - v88;
					v60 = 0i64;
					v104 = v90;
					if (v84 - v88 >= v90)
						v89 = &v104;
					v91 = 2 * v88;
					v92 = *v89;
					v93 = (char*)v80 + 2 * v88;
					*(_QWORD*)&v105 = 2 * v88;
					v94 = v88 + v92;
					v95 = (char*)v80 + 2 * v94;
					v96 = ((__int64)(2 * v94 - 2 * v88) >> 1) + 1;
					if (v96 <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v97 = sub_14018B280(2 * v96, 0);
						v91 = v105;
						v60 = (WCHAR*)v97;
					}
					v98 = v60;
					if (v93 != v95)
					{
						v99 = (char*)v80 - (char*)v60 + v91;
						do
						{
							if (v98)
								*v98 = *(WCHAR*)((char*)v98 + v99);
							++v98;
						} while ((char*)v98 + v99 != v95);
					}
					if (v98)
						*v98 = 0;
				}
				if (v80)
					sub_14018B900((__int64)v80, 0);
				if (v75)
					sub_14018B900((__int64)v75, 0);
				v101 = sub_1407DF510(v60);
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "WorkOrderLocate", byte_1409E901C, v101);
			}
			if (v60)
			{
				v41 = (__int64)v60;
				goto LABEL_139;
			}
		}
	}
}
// 140431BBD: variable 'v102' is possibly undefined
// 140431C02: variable 'v18' is possibly undefined
// 140431F64: variable 'v54' is possibly undefined
// 140432224: variable 'v85' is possibly undefined
// 1409E901C: using guessed type _BYTE byte_1409E901C[16];
// 1409EE0CC: using guessed type wchar_t aG_0[2];
// 140A31D30: using guessed type wchar_t aLink_0[5];
// 140B01688: using guessed type wchar_t asc_140B01688[4];
// 140B01690: using guessed type wchar_t aSchematic_0[11];
// 140B016A8: using guessed type wchar_t aLocation[10];
// 140B016C0: using guessed type wchar_t aArchive[9];
// 140B01780: using guessed type wchar_t asc_140B01780[4];
// 140B01788: using guessed type wchar_t asc_140B01788[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;


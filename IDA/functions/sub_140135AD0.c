#include "../winhttp.h"

//----- (0000000140135AD0) ----------------------------------------------------
void __fastcall sub_140135AD0(__int64 a1, int a2)
{
	__int64 v3; // rsi
	int* v4; // rax
	__int64 v5; // r13
	int* v6; // rdi
	int* v7; // rax
	__int64 i; // rax
	__int64 v9; // rax
	int* v10; // rdx
	int* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	int* v14; // r14
	__int64 v15; // rax
	const __m128i* v16; // rbx
	_QWORD* v17; // r12
	int* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23; // eax
	int v24; // edi
	__int64 v25; // rbx
	int v26; // r14d
	__int64 v27; // rax
	__int64 v28; // rsi
	__int64 v29; // rdi
	int v30; // ecx
	const wchar_t* v31; // rbx
	wchar_t* v32; // rax
	wchar_t v33; // cx
	int v34; // edx
	bool v35; // zf
	_WORD* v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	int* v39; // rdx
	__int64 v40; // rax
	__int64 v41; // rsi
	__int64 v42; // rax
	__int64 v43; // rax
	int* v44; // rdx
	__int64 v45; // rax
	__m128i* v46; // r14
	__int64 v47; // rax
	_WORD* v48; // rax
	__int64 v49; // r15
	__int64 v50; // r12
	int* v51; // rax
	__int64 v52; // rcx
	int* v53; // rdi
	__int64 v54; // rsi
	__int16* v55; // rax
	int* v56; // rbx
	int* v57; // rax
	__int64 v58; // rcx
	__int64 v59; // r15
	__int64 v60; // r13
	__int64 v61; // rdi
	const wchar_t* v62; // rbx
	wchar_t* v63; // rax
	wchar_t v64; // cx
	int v65; // edx
	bool v66; // zf
	int* v67; // rax
	int* v68; // rdi
	__m128i* v69; // rsi
	__int64 v70; // rcx
	__int64 v71; // r14
	__int16* v72; // r8
	_QWORD* v73; // rax
	__int64 v74; // r13
	__int64 j; // r12
	__int64 v76; // rdi
	const wchar_t* v77; // rbx
	wchar_t* v78; // rax
	wchar_t v79; // cx
	int v80; // edx
	bool v81; // zf
	int* v82; // rax
	int* v83; // rdi
	__int64 v84; // rcx
	int* v85; // rsi
	__int64 v86; // r14
	_WORD* v87; // r8
	_QWORD* v88; // rax
	_QWORD* v89; // rcx
	__m128i* v90; // rax
	__m128i* v91; // r15
	__m128i* v92; // r14
	int* v93; // rax
	signed __int64 v94; // rsi
	__int16* v95; // rax
	__int64 v96; // rax
	__m128i* v97; // rbx
	__int64 v98; // r15
	__int64 v99; // r12
	__int64 v100; // r13
	_QWORD* v101; // r12
	__int64 v102; // rdi
	const wchar_t* v103; // rbx
	wchar_t* v104; // rax
	wchar_t v105; // cx
	int v106; // edx
	bool v107; // zf
	int* v108; // rdi
	int* v109; // rsi
	__int64 v110; // rax
	__int64 v111; // r14
	_WORD* v112; // r8
	_QWORD* v113; // rax
	_QWORD* v114; // rcx
	__int64 v115; // r15
	__int64 v116; // r13
	__int64 v117; // rdi
	const wchar_t* v118; // rbx
	wchar_t* v119; // rax
	wchar_t v120; // dx
	int v121; // ecx
	bool v122; // zf
	int* v123; // rax
	int* v124; // rdi
	__int64 v125; // rcx
	int* v126; // rsi
	__int64 v127; // r14
	_WORD* v128; // r8
	_QWORD* v129; // rax
	_QWORD* v130; // rcx
	__int64 v131; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v132; // [rsp+48h] [rbp-B8h]
	__int64 v133; // [rsp+50h] [rbp-B0h] BYREF
	int* v134; // [rsp+58h] [rbp-A8h]
	int* v135; // [rsp+60h] [rbp-A0h]
	int* v136; // [rsp+68h] [rbp-98h]
	__int64 v137; // [rsp+70h] [rbp-90h] BYREF
	__m128i* v138; // [rsp+78h] [rbp-88h]
	__int16* v139; // [rsp+80h] [rbp-80h]
	__m128i* v140; // [rsp+88h] [rbp-78h]
	char v141[8]; // [rsp+90h] [rbp-70h] BYREF
	int* v142; // [rsp+98h] [rbp-68h]
	_WORD* v143; // [rsp+A0h] [rbp-60h]
	__int64 v144; // [rsp+A8h] [rbp-58h]
	_QWORD* v145; // [rsp+B0h] [rbp-50h]
	__int64 v146; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v147; // [rsp+C0h] [rbp-40h] BYREF
	__m128i* v148; // [rsp+C8h] [rbp-38h]
	int* v149; // [rsp+D0h] [rbp-30h]
	int* v150; // [rsp+D8h] [rbp-28h]
	char v151[92]; // [rsp+E0h] [rbp-20h] BYREF
	int v152; // [rsp+13Ch] [rbp+3Ch]
	__int64 v153; // [rsp+148h] [rbp+48h]
	__int64 v154; // [rsp+150h] [rbp+50h]
	int v155[132]; // [rsp+360h] [rbp+260h] BYREF

	v3 = a1;
	v132 = a1;
	v4 = sub_14018B280(16i64, 0);
	v5 = 0i64;
	v6 = v4;
	v134 = v4;
	v135 = v4;
	v136 = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v7 = sub_14018B280(16i64, 0);
	v148 = (__m128i*)v7;
	v149 = v7;
	v150 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	if (!*(_BYTE*)(v3 + 264))
	{
		if ((int)sub_14001B370(
			v155,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			L"Addons") >= 0
			&& LOWORD(v155[0]))
		{
			v11 = v155;
			do
			{
				v35 = *((_WORD*)v11 + 1) == 0;
				v11 = (int*)((char*)v11 + 2);
			} while (!v35);
		}
		v12 = 0i64;
		if (LOWORD(v155[0]))
		{
			do
				++v12;
			while (*((_WORD*)v155 + v12));
		}
		if ((2 * v12) >> 1)
			sub_14001C310(&v133, v155, (int*)((char*)v155 + 2 * v12));
		else
			sub_1407DB590(v6, v155, 0i64);
		v9 = 0i64;
		v10 = (int*)word_1409D8DCC;
		do
			v35 = word_1409D8DCC[++v9] == 0;
		while (!v35);
		goto LABEL_26;
	}
	for (i = 0i64; aUi_1[i]; ++i)
		;
	if ((2 * i) >> 1)
		sub_14001C310(&v133, (int*)L"ui\\", (int*)&aUi_1[i]);
	else
		sub_1407DB590(v6, (int*)L"ui\\", 0i64);
	if (*(_QWORD*)(v3 + 96) != *(_QWORD*)(v3 + 104))
	{
		sub_14001C310(&v133, *(int**)(v3 + 96), *(int**)(v3 + 104));
		v9 = 0i64;
		v10 = (int*)word_1409D8DAC;
		do
			v35 = word_1409D8DAC[++v9] == 0;
		while (!v35);
	LABEL_26:
		sub_14001C310(&v133, v10, (int*)((char*)v10 + 2 * v9));
	}
	sub_14001C310(&v133, *(int**)(v3 + 128), *(int**)(v3 + 136));
	if (&v133 != (__int64*)(v3 + 152))
		sub_14001C480(v3 + 152, v134, v135);
	v13 = 0i64;
	do
		v35 = *((_WORD*)&unk_1409D8F5C + ++v13) == 0;
	while (!v35);
	sub_14001C310(&v133, (int*)&unk_1409D8F5C, (int*)((char*)&unk_1409D8F5C + 2 * v13));
	v14 = v134;
	sub_14001C480((__int64)&v147, v134, v135);
	v15 = 0i64;
	do
		v35 = aTocXml[++v15] == 0;
	while (!v35);
	sub_14001C310(&v147, (int*)L"toc.xml", (int*)&aTocXml[v15]);
	v16 = v148;
	v17 = (_QWORD*)(v3 + 256);
	v18 = (int*)v148;
	v145 = (_QWORD*)(v3 + 256);
	*(_QWORD*)(v3 + 256) = 0i64;
	sub_14013CC70(dword_1409D8FAC, v18, (_QWORD*)(v3 + 256));
	sub_1401A72E0((__int64)v151);
	if (!(unsigned int)sub_1401B58D0(v19, v16, v20))
		goto LABEL_234;
	sub_1401A59A0((__int64)v151);
	v21 = v153;
	v152 = 0;
	v153 = 0i64;
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	sub_14018B900(v154, 0);
	v154 = 0i64;
	v131 = 0i64;
	v23 = sub_1401B6D00(v22, v16, &v131);
	if (v23 >= 0)
	{
		v25 = v131;
		v24 = sub_1401A7C70((__int64)v151, v131);
		if (v25)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	}
	else
	{
		v24 = sub_1401A81B0((__int64)v151, v23, (__int64)v16);
		if (v131)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v131 + 8i64))(v131);
	}
	if (v24 < 0)
	{
	LABEL_234:
		*(_BYTE*)(v3 + 312) = 0;
		*(_DWORD*)(v3 + 268) = 0;
		goto LABEL_235;
	}
	v26 = 0;
	v27 = sub_1401A5AE0((__int64)v151, L"Addon");
	if (!v27)
	{
	LABEL_233:
		v14 = v134;
		*(_BYTE*)(v3 + 312) = 0;
		*(_DWORD*)(v3 + 268) = 0;
	LABEL_235:
		*(_DWORD*)(v3 + 536) = 1;
		goto LABEL_236;
	}
	v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	if (!v28)
	{
		v3 = v132;
		goto LABEL_233;
	}
	do
	{
		v29 = *(_QWORD*)(v28 + 96);
		v30 = 0;
		LODWORD(v131) = 0;
		if (v29)
		{
			while (1)
			{
				v31 = L"APIVersion";
				v32 = (wchar_t*)sub_1401A4F40(v29 + 8);
				if (v32 == L"APIVersion")
					break;
				v33 = *v32;
				v34 = 0;
				if (!*v32)
					goto LABEL_54;
				do
				{
					if (!*v31 || v33 != *v31)
						break;
					v35 = v34 == 0x7FFFFFFF;
					if (v34 == 0x7FFFFFFF)
						goto LABEL_52;
					v33 = v32[1];
					++v32;
					++v31;
					++v34;
				} while (v33);
				v35 = v34 == 0x7FFFFFFF;
			LABEL_52:
				if (v35)
					break;
				if (!*v32)
				{
				LABEL_54:
					if (!*v31)
						break;
				}
				v29 = *(_QWORD*)(v29 + 56);
				if (!v29)
					goto LABEL_58;
			}
			v36 = (_WORD*)sub_1401A4F40(v29 + 32);
			sub_1407DF428(v36, (__int64)L"%d", &v131);
		LABEL_58:
			v30 = v131;
		}
		if (!v5 || v30 == a2 || v30 > v26 && v26 != a2)
		{
			v26 = v30;
			v5 = v28;
		}
		v28 = sub_1401A5BC0(v28, L"Addon");
	} while (v28);
	v131 = v5;
	v37 = sub_1401A6B80(v5, L"Name");
	if (v37)
		v38 = sub_1401A4F40(v37 + 32);
	else
		v38 = 0i64;
	v39 = (int*)&unk_1409D8FCC;
	if (v38)
		v39 = (int*)v38;
	v40 = 0i64;
	if (*(_WORD*)v39)
	{
		do
			++v40;
		while (*((_WORD*)v39 + v40));
	}
	v41 = v132;
	sub_14001C480(v132 + 16, v39, (int*)((char*)v39 + 2 * v40));
	v42 = sub_1401A6B80(v5, L"Author");
	if (v42)
		v43 = sub_1401A4F40(v42 + 32);
	else
		v43 = 0i64;
	v44 = (int*)L"[Unknown]";
	if (v43)
		v44 = (int*)v43;
	v45 = 0i64;
	if (*(_WORD*)v44)
	{
		do
			++v45;
		while (*((_WORD*)v44 + v45));
	}
	sub_14001C480(v41 + 184, v44, (int*)((char*)v44 + 2 * v45));
	*(_DWORD*)(v41 + 248) = v26;
	v46 = 0i64;
	*(_DWORD*)(v41 + 80) = 0;
	v47 = sub_1401A6B80(v5, L"Version");
	if (v47)
	{
		v48 = (_WORD*)sub_1401A4F40(v47 + 32);
		sub_1407DF428(v48, (__int64)L"%d", v41 + 80);
	}
	v49 = *(_QWORD*)(v5 + 96);
	if (v49)
	{
		v50 = v41 + 464;
		do
		{
			v51 = (int*)sub_1401A4F40(v49 + 8);
			v138 = 0i64;
			v52 = 0i64;
			v140 = 0i64;
			v53 = v51;
			if (*(_WORD*)v51)
			{
				do
					++v52;
				while (*((_WORD*)v51 + v52));
			}
			v54 = (2 * v52) >> 1;
			if ((unsigned __int64)(v54 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v46 = (__m128i*)sub_14018B280(2 * (v54 + 1), 0);
				v138 = v46;
				v140 = (__m128i*) & v46->m128i_i8[2 * v54 + 2];
			}
			sub_1407DB590(v46->m128i_i32, v53, 2 * v54);
			v55 = &v46->m128i_i16[v54];
			v139 = v55;
			if (v55)
				*v55 = 0;
			v56 = (int*)sub_1401A4F40(v49 + 32);
			v57 = sub_14013CE20(v50, (__int64)&v137);
			v58 = 0i64;
			if (*(_WORD*)v56)
			{
				do
					++v58;
				while (*((_WORD*)v56 + v58));
			}
			sub_14001C480((__int64)v57, v56, (int*)((char*)v56 + 2 * v58));
			if (v46)
				sub_14018B900((__int64)v46, 0);
			v49 = *(_QWORD*)(v49 + 56);
			v46 = 0i64;
		} while (v49);
		v5 = v131;
		v17 = v145;
		v41 = v132;
	}
	v59 = v41 + 320;
	sub_14013CF80(v41 + 320, *(_QWORD*)(v41 + 328), *(_QWORD*)(v41 + 336));
	v60 = sub_1401A5AE0(v5, L"Script");
	if (v60)
	{
		do
		{
			v61 = *(_QWORD*)(v60 + 96);
			if (v61)
			{
				while (1)
				{
					v62 = L"Name";
					v63 = (wchar_t*)sub_1401A4F40(v61 + 8);
					if (v63 == L"Name")
						break;
					v64 = *v63;
					v65 = 0;
					if (!*v63)
						goto LABEL_106;
					do
					{
						if (!*v62 || v64 != *v62)
							break;
						v66 = v65 == 0x7FFFFFFF;
						if (v65 == 0x7FFFFFFF)
							goto LABEL_104;
						v64 = v63[1];
						++v63;
						++v62;
						++v65;
					} while (v64);
					v66 = v65 == 0x7FFFFFFF;
				LABEL_104:
					if (v66)
						break;
					if (!*v63)
					{
					LABEL_106:
						if (!*v62)
							break;
					}
					v61 = *(_QWORD*)(v61 + 56);
					if (!v61)
						goto LABEL_123;
				}
				v67 = (int*)sub_1401A4F40(v61 + 32);
				v68 = v67;
				if (v67)
				{
					sub_14013CC70(v134, v67, v17);
					v35 = *(_WORD*)v68 == 0;
					v69 = 0i64;
					v138 = 0i64;
					v140 = 0i64;
					v70 = 0i64;
					if (!v35)
					{
						do
							++v70;
						while (*((_WORD*)v68 + v70));
					}
					v71 = (2 * v70) >> 1;
					if ((unsigned __int64)(v71 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v69 = (__m128i*)sub_14018B280(2 * (v71 + 1), 0);
						v138 = v69;
						v140 = (__m128i*) & v69->m128i_i8[2 * v71 + 2];
					}
					sub_1407DB590(v69->m128i_i32, v68, 2 * v71);
					v72 = &v69->m128i_i16[v71];
					v139 = v72;
					if (v72)
						*v72 = 0;
					v73 = *(_QWORD**)(v59 + 16);
					if (v73 == *(_QWORD**)(v59 + 24))
					{
						sub_1400F8CF0((__int64*)v59, *(char**)(v59 + 16), (__int64)&v137);
					}
					else
					{
						if (v73)
						{
							v73[1] = 0i64;
							v73[2] = 0i64;
							v73[3] = 0i64;
							sub_14001C1B0(v73, v69->m128i_i32, (__int64)v72);
						}
						*(_QWORD*)(v59 + 16) += 32i64;
					}
					if (v69)
						sub_14018B900((__int64)v69, 0);
				}
			}
		LABEL_123:
			v60 = sub_1401A5BC0(v60, L"Script");
		} while (v60);
		v41 = v132;
	}
	v74 = v41 + 384;
	sub_14013CF80(v41 + 384, *(_QWORD*)(v41 + 392), *(_QWORD*)(v41 + 400));
	for (j = sub_1401A5AE0(v131, L"FormXMLFile"); j; j = sub_1401A5BC0(j, L"FormXMLFile"))
	{
		v76 = *(_QWORD*)(j + 96);
		if (v76)
		{
			while (1)
			{
				v77 = L"Name";
				v78 = (wchar_t*)sub_1401A4F40(v76 + 8);
				if (v78 == L"Name")
					break;
				v79 = *v78;
				v80 = 0;
				if (!*v78)
					goto LABEL_136;
				do
				{
					if (!*v77 || v79 != *v77)
						break;
					v81 = v80 == 0x7FFFFFFF;
					if (v80 == 0x7FFFFFFF)
						goto LABEL_134;
					v79 = v78[1];
					++v78;
					++v77;
					++v80;
				} while (v79);
				v81 = v80 == 0x7FFFFFFF;
			LABEL_134:
				if (v81)
					break;
				if (!*v78)
				{
				LABEL_136:
					if (!*v77)
						break;
				}
				v76 = *(_QWORD*)(v76 + 56);
				if (!v76)
					goto LABEL_168;
			}
			v82 = (int*)sub_1401A4F40(v76 + 32);
			v83 = v82;
			if (v82)
			{
				sub_14013CC70(v134, v82, v145);
				v84 = 0i64;
				v85 = 0i64;
				v142 = 0i64;
				v144 = 0i64;
				if (*(_WORD*)v83)
				{
					do
						++v84;
					while (*((_WORD*)v83 + v84));
				}
				v86 = (2 * v84) >> 1;
				if ((unsigned __int64)(v86 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v85 = sub_14018B280(2 * (v86 + 1), 0);
					v142 = v85;
					v144 = (__int64)v85 + 2 * v86 + 2;
				}
				sub_1407DB590(v85, v83, 2 * v86);
				v87 = (_WORD*)v85 + v86;
				v143 = v87;
				if (v87)
					*v87 = 0;
				v88 = *(_QWORD**)(v74 + 16);
				if (v88 == *(_QWORD**)(v74 + 24))
				{
					sub_1400F8CF0((__int64*)v74, *(char**)(v74 + 16), (__int64)v141);
				}
				else
				{
					if (v88)
					{
						v89 = *(_QWORD**)(v74 + 16);
						v88[1] = 0i64;
						v88[2] = 0i64;
						v88[3] = 0i64;
						sub_14001C1B0(v89, v85, (__int64)v87);
					}
					*(_QWORD*)(v74 + 16) += 32i64;
				}
				if (v85)
					sub_14018B900((__int64)v85, 0);
				v90 = (__m128i*)sub_14018B280(16i64, 0);
				v91 = v90;
				if (v90)
				{
					v90 = 0i64;
					v91->m128i_i16[0] = 0;
				}
				v92 = v90;
				v138 = v90;
				v140 = v90;
				v93 = v134;
				v94 = ((char*)v135 - (char*)v134) >> 1;
				if ((unsigned __int64)(v94 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v92 = (__m128i*)sub_14018B280(2 * (v94 + 1), 0);
					v138 = v92;
					v93 = v134;
					v140 = (__m128i*) & v92->m128i_i8[2 * v94 + 2];
				}
				sub_1407DB590(v92->m128i_i32, v93, 2 * v94);
				v95 = &v92->m128i_i16[v94];
				v139 = v95;
				if (v95)
					*v95 = 0;
				v96 = 0i64;
				if (*(_WORD*)v83)
				{
					do
						++v96;
					while (*((_WORD*)v83 + v96));
				}
				sub_14001C310(&v137, v83, (int*)((char*)v83 + 2 * v96));
				v41 = v132;
				v97 = v138;
				if (*(_QWORD*)(v132 + 8))
				{
					v146 = 0i64;
					sub_1400E27B0(qword_140C63650, v138, &v146);
					if (v146)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v146 + 8i64))(v146);
				}
				if (v97)
					sub_14018B900((__int64)v97, 0);
				if (v91)
					sub_14018B900((__int64)v91, 0);
			}
		}
	LABEL_168:
		;
	}
	v98 = v41 + 352;
	sub_14013CF80(v41 + 352, *(_QWORD*)(v41 + 360), *(_QWORD*)(v41 + 368));
	v99 = v131;
	v100 = sub_1401A5AE0(v131, L"SpriteXMLFile");
	if (v100)
	{
		v101 = v145;
		do
		{
			v102 = *(_QWORD*)(v100 + 96);
			if (v102)
			{
				while (1)
				{
					v103 = L"Name";
					v104 = (wchar_t*)sub_1401A4F40(v102 + 8);
					if (v104 == L"Name")
						break;
					v105 = *v104;
					v106 = 0;
					if (!*v104)
						goto LABEL_181;
					do
					{
						if (!*v103 || v105 != *v103)
							break;
						v107 = v106 == 0x7FFFFFFF;
						if (v106 == 0x7FFFFFFF)
							goto LABEL_179;
						v105 = v104[1];
						++v104;
						++v103;
						++v106;
					} while (v105);
					v107 = v106 == 0x7FFFFFFF;
				LABEL_179:
					if (v107)
						break;
					if (!*v104)
					{
					LABEL_181:
						if (!*v103)
							break;
					}
					v102 = *(_QWORD*)(v102 + 56);
					if (!v102)
						goto LABEL_183;
				}
				v108 = (int*)sub_1401A4F40(v102 + 32);
			}
			else
			{
			LABEL_183:
				v108 = 0i64;
			}
			sub_14013CC70(v134, v108, v101);
			if (v108)
			{
				v35 = *(_WORD*)v108 == 0;
				v109 = 0i64;
				v142 = 0i64;
				v144 = 0i64;
				v110 = 0i64;
				if (!v35)
				{
					do
						++v110;
					while (*((_WORD*)v108 + v110));
				}
				v111 = (2 * v110) >> 1;
				if ((unsigned __int64)(v111 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v109 = sub_14018B280(2 * (v111 + 1), 0);
					v142 = v109;
					v144 = (__int64)v109 + 2 * v111 + 2;
				}
				sub_1407DB590(v109, v108, 2 * v111);
				v112 = (_WORD*)v109 + v111;
				v143 = v112;
				if (v112)
					*v112 = 0;
				v113 = *(_QWORD**)(v98 + 16);
				if (v113 == *(_QWORD**)(v98 + 24))
				{
					sub_1400F8CF0((__int64*)v98, *(char**)(v98 + 16), (__int64)v141);
				}
				else
				{
					if (v113)
					{
						v114 = *(_QWORD**)(v98 + 16);
						v113[1] = 0i64;
						v113[2] = 0i64;
						v113[3] = 0i64;
						sub_14001C1B0(v114, v109, (__int64)v112);
					}
					*(_QWORD*)(v98 + 16) += 32i64;
				}
				if (v109)
					sub_14018B900((__int64)v109, 0);
			}
			v100 = sub_1401A5BC0(v100, L"SpriteXMLFile");
		} while (v100);
		v99 = v131;
		v41 = v132;
	}
	v115 = v41 + 416;
	sub_14013CF80(v41 + 416, *(_QWORD*)(v41 + 424), *(_QWORD*)(v41 + 432));
	v116 = sub_1401A5AE0(v99, L"ReplaceAddon");
	if (v116)
	{
		do
		{
			v117 = *(_QWORD*)(v116 + 96);
			if (v117)
			{
				while (1)
				{
					v118 = L"Name";
					v119 = (wchar_t*)sub_1401A4F40(v117 + 8);
					if (v119 == L"Name")
						break;
					v120 = *v119;
					v121 = 0;
					if (!*v119)
						goto LABEL_212;
					do
					{
						if (!*v118 || v120 != *v118)
							break;
						v122 = v121 == 0x7FFFFFFF;
						if (v121 == 0x7FFFFFFF)
							goto LABEL_210;
						v120 = v119[1];
						++v119;
						++v118;
						++v121;
					} while (v120);
					v122 = v121 == 0x7FFFFFFF;
				LABEL_210:
					if (v122)
						break;
					if (!*v119)
					{
					LABEL_212:
						if (!*v118)
							break;
					}
					v117 = *(_QWORD*)(v117 + 56);
					if (!v117)
						goto LABEL_229;
				}
				v123 = (int*)sub_1401A4F40(v117 + 32);
				v124 = v123;
				if (v123)
				{
					v125 = 0i64;
					v126 = 0i64;
					v142 = 0i64;
					v144 = 0i64;
					if (*(_WORD*)v123)
					{
						do
							++v125;
						while (*((_WORD*)v123 + v125));
					}
					v127 = (2 * v125) >> 1;
					if ((unsigned __int64)(v127 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v126 = sub_14018B280(2 * (v127 + 1), 0);
						v142 = v126;
						v144 = (__int64)v126 + 2 * v127 + 2;
					}
					sub_1407DB590(v126, v124, 2 * v127);
					v128 = (_WORD*)v126 + v127;
					v143 = v128;
					if (v128)
						*v128 = 0;
					v129 = *(_QWORD**)(v115 + 16);
					if (v129 == *(_QWORD**)(v115 + 24))
					{
						sub_1400F8CF0((__int64*)v115, *(char**)(v115 + 16), (__int64)v141);
					}
					else
					{
						if (v129)
						{
							v130 = *(_QWORD**)(v115 + 16);
							v129[1] = 0i64;
							v129[2] = 0i64;
							v129[3] = 0i64;
							sub_14001C1B0(v130, v126, (__int64)v128);
						}
						*(_QWORD*)(v115 + 16) += 32i64;
					}
					if (v126)
						sub_14018B900((__int64)v126, 0);
				}
			}
		LABEL_229:
			v116 = sub_1401A5BC0(v116, L"ReplaceAddon");
		} while (v116);
		v41 = v132;
	}
	v14 = v134;
	*(_BYTE*)(v41 + 312) = 1;
	*(_DWORD*)(v41 + 536) = 2;
LABEL_236:
	sub_1401A76A0((__int64)v151);
	if (v148)
		sub_14018B900((__int64)v148, 0);
	if (v14)
		sub_14018B900((__int64)v14, 0);
}
// 140135F76: conditional instruction was optimized away because rdi.8!=0
// 1401362A0: conditional instruction was optimized away because rdi.8!=0
// 140136480: conditional instruction was optimized away because rdi.8!=0
// 14013682C: conditional instruction was optimized away because rdi.8!=0
// 140136950: conditional instruction was optimized away because rdi.8!=0
// 140135FDF: conditional instruction was optimized away because r13.8!=0
// 140135E0A: variable 'v19' is possibly undefined
// 140135E0A: variable 'v20' is possibly undefined
// 140135E58: variable 'v22' is possibly undefined
// 1409D8DAC: using guessed type _WORD word_1409D8DAC[16];
// 1409D8DCC: using guessed type _WORD word_1409D8DCC[72];
// 1409D8FAC: using guessed type int dword_1409D8FAC[8];
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A22738: using guessed type wchar_t aApiversion[11];
// 140A227F8: using guessed type wchar_t aAddons_1[7];
// 140A22A08: using guessed type wchar_t aUi_1[4];
// 140A22AF0: using guessed type wchar_t aUnknown_1[10];
// 140A22B08: using guessed type wchar_t aTocXml[8];
// 140A31780: using guessed type wchar_t aAuthor[7];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A32D28: using guessed type wchar_t aAddon[6];
// 140A32E00: using guessed type wchar_t aScript[7];
// 140A32E10: using guessed type wchar_t aVersion[8];
// 140A32E40: using guessed type wchar_t aReplaceaddon[13];
// 140A32E88: using guessed type wchar_t aSpritexmlfile[14];
// 140A32EA8: using guessed type wchar_t aFormxmlfile[12];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140135AD0: using guessed type char var_510[8];


#include "../winhttp.h"

//----- (00000001403D02A0) ----------------------------------------------------
__int64 __fastcall sub_1403D02A0(__int64 a1)
{
	__int64 v3; // rbx
	int v4; // r13d
	__int64 v5; // r12
	int* v6; // rax
	__int64 v7; // rax
	int* v8; // rdx
	unsigned __int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rsi
	int* v12; // r14
	int* v13; // rbx
	int* v14; // rsi
	unsigned int v15; // edi
	int v16; // eax
	__int64 v17; // rax
	_DWORD* v18; // rbx
	int* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	int v22; // r14d
	__int64 v23; // rax
	int v24; // xmm0_4
	int v25; // r12d
	__int64 v26; // rsi
	__int64 v27; // rax
	unsigned int v28; // ebx
	int* v29; // rax
	int* v30; // rdi
	int v31; // r10d
	unsigned int v32; // r8d
	unsigned int v33; // edx
	unsigned __int16* v34; // rcx
	unsigned int v35; // ebx
	unsigned int v36; // edx
	__int64 v37; // rax
	int* v38; // rcx
	int** v39; // rax
	int* v40; // rax
	unsigned int v41; // ecx
	int* v42; // rax
	char* v43; // rdx
	int* v44; // rdx
	unsigned int v45; // ebx
	__int64 v46; // rcx
	int* v47; // rax
	__int64 v48; // rcx
	unsigned int v49; // esi
	unsigned int v50; // r14d
	int* v51; // rax
	__int64 v52; // rdx
	_DWORD* v53; // rbx
	_DWORD* v54; // rdx
	float v55; // xmm6_4
	int* v56; // rax
	int* v57; // rax
	int* v58; // rax
	int* v59; // rdx
	int* v60; // rcx
	__int64 v61; // rdi
	__int64 v62; // rax
	unsigned int v63; // r9d
	int* v64; // r8
	int** v65; // rax
	int* v66; // rax
	_DWORD* v67; // rbx
	unsigned int* v68; // rsi
	int* v69; // rdx
	unsigned int* v70; // r14
	__int64 v71; // rcx
	int* v72; // rax
	__int64 v73; // rcx
	int* v74; // rax
	__int64 v75; // rbx
	__int64 v76; // rax
	float v77; // xmm6_4
	int* v78; // rax
	int* v79; // rax
	__int64 v80; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v83; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v86; // rdi
	__int64 v87; // rax
	unsigned int v88; // r9d
	int* v89; // r8
	int** v90; // rax
	int* v91; // rax
	_DWORD* v92; // rsi
	int* v93; // rax
	__int64 v94; // rcx
	__int64 v95; // rbx
	__int64 v96; // r14
	int* v97; // rcx
	__int64 v98; // rdx
	unsigned int v99; // eax
	__int64 v100; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v103; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	__int64 v106; // rdi
	__int64 v107; // rax
	unsigned int v108; // r9d
	int* v109; // r8
	__int64* v110; // rax
	__int64 v111; // rax
	_DWORD* v112; // rbx
	_DWORD* v113; // rsi
	_DWORD* v114; // r14
	float v115; // xmm6_4
	float v116; // xmm6_4
	__int64 v117; // rbx
	__int64 v118; // rax
	float v119; // xmm6_4
	int* v120; // rax
	int* v121; // rax
	__int64 v122; // rax
	__int64 i3; // rax
	__int64 i4; // rax
	__int64 v125; // rax
	__int64 i1; // rax
	__int64 i2; // rax
	__int64 v128; // rbx
	__int64 v129; // rax
	unsigned int v130; // r9d
	__int64 v131; // r8
	__int64* v132; // rax
	__int64 v133; // rax
	_DWORD* v134; // r8
	float v135; // xmm6_4
	__int64 v136; // rax
	__int64 mm; // rax
	__int64 nn; // rax
	int* v139; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v140; // [rsp+28h] [rbp-D8h] BYREF
	char v141[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v142; // [rsp+38h] [rbp-C8h]
	__int64 v143; // [rsp+40h] [rbp-C0h]
	int* v144; // [rsp+50h] [rbp-B0h] BYREF
	int* v145; // [rsp+58h] [rbp-A8h] BYREF
	char v146[8]; // [rsp+60h] [rbp-A0h] BYREF
	int* v147; // [rsp+68h] [rbp-98h]
	__int64 v148; // [rsp+70h] [rbp-90h]
	int* v149[2]; // [rsp+80h] [rbp-80h] BYREF
	char v150[8]; // [rsp+90h] [rbp-70h] BYREF
	int* v151; // [rsp+98h] [rbp-68h]
	__int64 v152; // [rsp+A0h] [rbp-60h]
	__int64 v153; // [rsp+B0h] [rbp-50h]
	char v154[8]; // [rsp+B8h] [rbp-48h] BYREF
	int* v155; // [rsp+C0h] [rbp-40h]
	__int64 v156; // [rsp+C8h] [rbp-38h]
	char v157[8]; // [rsp+D8h] [rbp-28h] BYREF
	int* v158; // [rsp+E0h] [rbp-20h]
	__int64 v159; // [rsp+E8h] [rbp-18h]
	__int64 v160; // [rsp+F8h] [rbp-8h] BYREF
	char v161[8]; // [rsp+100h] [rbp+0h] BYREF
	int* v162; // [rsp+108h] [rbp+8h]
	__int64 v163; // [rsp+110h] [rbp+10h]
	char v164[8]; // [rsp+120h] [rbp+20h] BYREF
	int* v165; // [rsp+128h] [rbp+28h]
	__int64 v166; // [rsp+130h] [rbp+30h]
	char v167; // [rsp+140h] [rbp+40h] BYREF
	char v168[16]; // [rsp+150h] [rbp+50h] BYREF
	char v169[16]; // [rsp+160h] [rbp+60h] BYREF
	char v170; // [rsp+170h] [rbp+70h] BYREF
	__int64 v171; // [rsp+1E0h] [rbp+E0h] BYREF
	unsigned __int64 v172; // [rsp+1E8h] [rbp+E8h] BYREF
	unsigned __int64 v173; // [rsp+1F0h] [rbp+F0h] BYREF
	int* v174; // [rsp+1F8h] [rbp+F8h]

	if (!*(_QWORD*)(a1 + 28344))
		return 1i64;
	if (*(int*)(a1 + 28256) <= 0)
		return 31i64;
	v3 = 2 * (*(unsigned int*)(a1 + 28140) + 1767i64);
	v4 = 0;
	v5 = *(_QWORD*)(a1 + 16 * (*(unsigned int*)(a1 + 28140) + 1767i64) + 8);
	v153 = v5;
	if (v5)
	{
		v6 = sub_14018B280(2 * v5 + 16, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			v7 = (__int64)(v6 + 4);
			*(_QWORD*)(v7 - 16) = off_140B55060;
		}
		else
		{
			v7 = 16i64;
		}
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *(int**)(a1 + 8 * v3);
	v9 = 2 * v5;
	v174 = (int*)v7;
	v10 = v7;
	sub_1407DB590((int*)v7, v8, 2 * v5);
	v11 = *(_QWORD*)(a1 + 28344);
	v12 = *(int**)(a1 + 28336);
	if (v11)
	{
		v153 = v11 + v5;
		v13 = sub_14018DB00(v10, v11 + v5, 2i64);
		sub_1407DB590((int*)((char*)v13 + v9), v12, 2 * v11);
		v14 = v174;
		if (v174 != v13)
		{
			sub_1407DB590(v13, v174, v9);
			if (v14)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
			v174 = v13;
		}
	}
	v162 = sub_14018B280(40i64, 0);
	v163 = 0i64;
	*(_BYTE*)v162 = 0;
	*((_QWORD*)v162 + 1) = 0i64;
	*((_QWORD*)v162 + 2) = v162;
	*((_QWORD*)v162 + 3) = v162;
	v166 = 0i64;
	v165 = sub_14018B280(40i64, 0);
	*(_BYTE*)v165 = 0;
	*((_QWORD*)v165 + 1) = 0i64;
	*((_QWORD*)v165 + 2) = v165;
	*((_QWORD*)v165 + 3) = v165;
	v148 = 0i64;
	v147 = sub_14018B280(72i64, 0);
	*(_BYTE*)v147 = 0;
	*((_QWORD*)v147 + 1) = 0i64;
	*((_QWORD*)v147 + 2) = v147;
	*((_QWORD*)v147 + 3) = v147;
	v152 = 0i64;
	v151 = sub_14018B280(72i64, 0);
	*(_BYTE*)v151 = 0;
	*((_QWORD*)v151 + 1) = 0i64;
	*((_QWORD*)v151 + 2) = v151;
	*((_QWORD*)v151 + 3) = v151;
	v143 = 0i64;
	v142 = sub_14018B280(40i64, 0);
	*(_BYTE*)v142 = 0;
	*((_QWORD*)v142 + 1) = 0i64;
	*((_QWORD*)v142 + 2) = v142;
	*((_QWORD*)v142 + 3) = v142;
	v159 = 0i64;
	v158 = sub_14018B280(40i64, 0);
	*(_BYTE*)v158 = 0;
	*((_QWORD*)v158 + 1) = 0i64;
	*((_QWORD*)v158 + 2) = v158;
	*((_QWORD*)v158 + 3) = v158;
	v156 = 0i64;
	v155 = sub_14018B280(48i64, 0);
	*(_BYTE*)v155 = 0;
	*((_QWORD*)v155 + 1) = 0i64;
	v15 = 0;
	*((_QWORD*)v155 + 2) = v155;
	*((_QWORD*)v155 + 3) = v155;
	while (1)
	{
		if (qword_140C63838)
		{
			v16 = qword_140C63838(off_140A6A1A0, qword_140C63858);
		}
		else if (dword_140C655F8)
		{
			v16 = 0;
		}
		else
		{
			v16 = (int)sub_1401FD100() >= 0
				? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63FB8 + 40i64))(qword_140C63FB8)
				: 0;
		}
		if (v15 == v16)
			break;
		if (qword_140C63848)
		{
			v17 = qword_140C63848(off_140A6A1A0, v15, qword_140C63858);
		}
		else
		{
			if (dword_140C655F8 || (int)sub_1401FD100() < 0)
				goto LABEL_39;
			v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FB8 + 32i64))(qword_140C63FB8, v15);
		}
		v18 = (_DWORD*)v17;
		if (v17)
		{
			v19 = v155;
			v20 = *((_QWORD*)v155 + 1);
			while (v20)
			{
				if (*(_DWORD*)(v20 + 32) < *v18)
				{
					v20 = *(_QWORD*)(v20 + 24);
				}
				else
				{
					v19 = (int*)v20;
					v20 = *(_QWORD*)(v20 + 16);
				}
			}
			if (v19 == v155 || *v18 < (unsigned int)v19[8])
			{
				LODWORD(v149[0]) = *v18;
				v149[1] = 0i64;
				v171 = (__int64)v19;
				sub_140055C60((__int64)v154, (int**)&v172, &v171, v149);
				v19 = (int*)v172;
			}
			*((_QWORD*)v19 + 5) = v18;
		}
	LABEL_39:
		++v15;
	}
	v21 = *(_QWORD*)(a1 + 120);
	if (v21)
		v22 = *(_DWORD*)(v21 + 220);
	else
		v22 = 23;
	LODWORD(v173) = v22;
	if ((dword_140DC2340 & 1) == 0)
	{
		dword_140DC2340 |= 1u;
		v23 = sub_140200220(0x3AEu);
		if (v23)
			v24 = *(_DWORD*)(v23 + 28);
		else
			v24 = 1056964608;
		dword_140DC2344 = v24;
	}
	v25 = 0;
	v26 = v153;
	if (v153)
	{
		v27 = 0i64;
		do
		{
			v28 = *((unsigned __int16*)v174 + v27);
			LODWORD(v172) = v28;
			if (qword_140C63840)
			{
				v29 = (int*)qword_140C63840(off_140A6A1D8, v28, qword_140C63858);
			}
			else
			{
				if (dword_140C65444 || (int)sub_1401FD540() < 0)
					goto LABEL_251;
				v29 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 24i64))(
					qword_140C653A0,
					v28);
			}
			v30 = v29;
			if (!v29)
				goto LABEL_251;
			v31 = v29[4];
			v4 += v31;
			if (v4 > *(_DWORD*)(a1 + 28256))
			{
				v35 = 31;
				goto LABEL_273;
			}
			if (v29[3] != v22)
			{
				v35 = 4;
				goto LABEL_273;
			}
			if (v29[7])
			{
				v32 = *(_DWORD*)(a1 + 28144);
				v33 = 0;
				if (!v32)
				{
				LABEL_63:
					v35 = 32;
					goto LABEL_273;
				}
				v34 = (unsigned __int16*)(a1 + 28148);
				while (*v34 != *v29)
				{
					++v33;
					++v34;
					if (v33 >= v32)
						goto LABEL_63;
				}
			}
			v36 = v29[8];
			v37 = *((_QWORD*)v155 + 1);
			LODWORD(v171) = v30[8];
			v38 = v155;
			if (!v37)
				goto LABEL_72;
			do
			{
				if (*(_DWORD*)(v37 + 32) < v36)
				{
					v37 = *(_QWORD*)(v37 + 24);
				}
				else
				{
					v38 = (int*)v37;
					v37 = *(_QWORD*)(v37 + 16);
				}
			} while (v37);
			if (v38 == v155 || v36 < v38[8])
			{
			LABEL_72:
				v139 = v155;
				v39 = &v139;
			}
			else
			{
				v144 = v38;
				v39 = &v144;
			}
			v40 = *v39;
			if (v40 == v155)
			{
			LABEL_276:
				v35 = 36;
				goto LABEL_273;
			}
			v41 = v30[9];
			if (v41)
			{
				if (v41 > 2)
				{
					v35 = 37;
					goto LABEL_273;
				}
				if (v41 == 1)
				{
					v42 = sub_1403D2990((__int64)v146, (int*)&v171);
					v43 = &v170;
				}
				else
				{
					v42 = sub_1403D2990((__int64)v150, (int*)&v171);
					v43 = &v167;
				}
				sub_1400293C0((__int64)v42, (__int64)v43, (int*)&v172);
				v44 = v158;
				v45 = v171;
				v46 = *((_QWORD*)v158 + 1);
				v47 = v158;
				while (v46)
				{
					if (*(_DWORD*)(v46 + 32) < (unsigned int)v171)
					{
						v46 = *(_QWORD*)(v46 + 24);
					}
					else
					{
						v47 = (int*)v46;
						v46 = *(_QWORD*)(v46 + 16);
					}
				}
				if (v47 == v158 || (unsigned int)v171 < v47[8])
				{
					v160 = (unsigned int)v171;
					v171 = (__int64)v47;
					sub_140032B30((__int64)v157, &v145, &v171, &v160);
					v47 = v145;
					v44 = v158;
				}
				v48 = *((_QWORD*)v44 + 1);
				v49 = v47[9];
				v50 = v30[9];
				v51 = v44;
				while (v48)
				{
					if (*(_DWORD*)(v48 + 32) < v45)
					{
						v48 = *(_QWORD*)(v48 + 24);
					}
					else
					{
						v51 = (int*)v48;
						v48 = *(_QWORD*)(v48 + 16);
					}
				}
				if (v51 == v44 || v45 < v51[8])
				{
					v140 = v45;
					v171 = (__int64)v51;
					sub_140032B30((__int64)v157, v149, &v171, &v140);
					v51 = v149[0];
				}
				if (v49 < v50)
					v49 = v50;
				v22 = v173;
				v51[9] = v49;
				v26 = v153;
			}
			else
			{
				v52 = *((_QWORD*)v40 + 5);
				v53 = (_DWORD*)(v52 + 8);
				v54 = (_DWORD*)(v52 + 4);
				if (*v53)
				{
					v55 = (float)v31 * *(float*)&dword_140DC2344;
					v56 = sub_1403D2690((__int64)v141, v54);
					*(float*)v56 = v55 + *(float*)v56;
					v57 = sub_1403D2690((__int64)v141, v53);
					*(float*)v57 = v55 + *(float*)v57;
				}
				else
				{
					v58 = sub_1403D2690((__int64)v141, v54);
					*(float*)v58 = (float)v30[4] + *(float*)v58;
				}
			}
			if (v30[5])
				sub_1400293C0((__int64)v164, (__int64)v169, v30 + 5);
			sub_1400293C0((__int64)v161, (__int64)v168, v30);
			v27 = (unsigned int)++v25;
		} while (v25 != v26);
	}
	v59 = v158;
	v60 = v155;
	v61 = *((_QWORD*)v158 + 2);
	if ((int*)v61 != v158)
	{
		do
		{
			if (*(_DWORD*)(v61 + 36))
			{
				v62 = *((_QWORD*)v60 + 1);
				v63 = *(_DWORD*)(v61 + 32);
				v64 = v60;
				LODWORD(v171) = v63;
				if (!v62)
					goto LABEL_117;
				do
				{
					if (*(_DWORD*)(v62 + 32) < v63)
					{
						v62 = *(_QWORD*)(v62 + 24);
					}
					else
					{
						v64 = (int*)v62;
						v62 = *(_QWORD*)(v62 + 16);
					}
				} while (v62);
				if (v64 == v60 || v63 < v64[8])
				{
				LABEL_117:
					v145 = v60;
					v65 = &v145;
				}
				else
				{
					v149[0] = v64;
					v65 = v149;
				}
				v66 = *v65;
				if (v66 == v60)
					goto LABEL_251;
				v67 = (_DWORD*)*((_QWORD*)v66 + 5);
				v68 = v67 + 2;
				if (v67[2])
				{
					v69 = v142;
					v70 = v67 + 1;
					v71 = *((_QWORD*)v142 + 1);
					v72 = v142;
					while (v71)
					{
						if (*(_DWORD*)(v71 + 32) < *v70)
						{
							v71 = *(_QWORD*)(v71 + 24);
						}
						else
						{
							v72 = (int*)v71;
							v71 = *(_QWORD*)(v71 + 16);
						}
					}
					if (v72 == v142 || *v70 < v72[8])
					{
						v172 = *v70;
						v139 = v72;
						sub_140032B30((__int64)v141, &v144, (__int64*)&v139, &v172);
						v72 = v144;
						v69 = v142;
					}
					if ((float)(int)v67[3] > *((float*)v72 + 9))
						goto LABEL_275;
					v73 = *((_QWORD*)v69 + 1);
					v74 = v69;
					while (v73)
					{
						if (*(_DWORD*)(v73 + 32) < *v68)
						{
							v73 = *(_QWORD*)(v73 + 24);
						}
						else
						{
							v74 = (int*)v73;
							v73 = *(_QWORD*)(v73 + 16);
						}
					}
					if (v74 == v69 || *v68 < v74[8])
					{
						v173 = *v68;
						v139 = v74;
						sub_140032B30((__int64)v141, (int**)&v140, (__int64*)&v139, &v173);
						v74 = (int*)v140;
					}
					if ((float)(int)v67[4] > *((float*)v74 + 9))
					{
					LABEL_275:
						v35 = 33;
						goto LABEL_273;
					}
					v75 = *(_QWORD*)(*((_QWORD*)sub_1403D2990((__int64)v146, (int*)&v171) + 1) + 16i64);
					while (v75 != *((_QWORD*)sub_1403D2990((__int64)v146, (int*)&v171) + 1))
					{
						v76 = sub_1401FD7A0(*(_DWORD*)(v75 + 32));
						if (!v76)
							goto LABEL_251;
						v77 = (float)*(int*)(v76 + 16) * *(float*)&dword_140DC2344;
						v78 = sub_1403D2690((__int64)v141, v70);
						*(float*)v78 = v77 + *(float*)v78;
						v79 = sub_1403D2690((__int64)v141, v68);
						*(float*)v79 = v77 + *(float*)v79;
						v80 = *(_QWORD*)(v75 + 24);
						if (v80)
						{
							v75 = *(_QWORD*)(v75 + 24);
							for (i = *(_QWORD*)(v80 + 16); i; i = *(_QWORD*)(i + 16))
								v75 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v75 + 8); v75 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v75 = j;
							if (*(_QWORD*)(v75 + 24) != j)
								v75 = j;
						}
					}
					v59 = v158;
					v60 = v155;
				}
			}
			v83 = *(_QWORD*)(v61 + 24);
			if (v83)
			{
				v61 = *(_QWORD*)(v61 + 24);
				for (k = *(_QWORD*)(v83 + 16); k; k = *(_QWORD*)(k + 16))
					v61 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v61 + 8); v61 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v61 = m;
				if (*(_QWORD*)(v61 + 24) != m)
					v61 = m;
			}
		} while ((int*)v61 != v59);
	}
	v86 = *((_QWORD*)v59 + 2);
	while ((int*)v86 != v59)
	{
		if (*(_DWORD*)(v86 + 36))
		{
			v87 = *((_QWORD*)v60 + 1);
			v88 = *(_DWORD*)(v86 + 32);
			v89 = v60;
			LODWORD(v171) = v88;
			if (!v87)
				goto LABEL_169;
			do
			{
				if (*(_DWORD*)(v87 + 32) < v88)
				{
					v87 = *(_QWORD*)(v87 + 24);
				}
				else
				{
					v89 = (int*)v87;
					v87 = *(_QWORD*)(v87 + 16);
				}
			} while (v87);
			if (v89 == v60 || v88 < v89[8])
			{
			LABEL_169:
				v145 = v60;
				v90 = &v145;
			}
			else
			{
				v149[0] = v89;
				v90 = v149;
			}
			v91 = *v90;
			if (v91 == v60)
				goto LABEL_276;
			v92 = (_DWORD*)*((_QWORD*)v91 + 5);
			if (!v92[2])
			{
				v93 = v142;
				v94 = *((_QWORD*)v142 + 1);
				while (v94)
				{
					if (*(_DWORD*)(v94 + 32) < v92[1])
					{
						v94 = *(_QWORD*)(v94 + 24);
					}
					else
					{
						v93 = (int*)v94;
						v94 = *(_QWORD*)(v94 + 16);
					}
				}
				if (v93 == v142 || v92[1] < (unsigned int)v93[8])
				{
					v172 = (unsigned int)v92[1];
					v139 = v93;
					sub_140032B30((__int64)v141, &v144, (__int64*)&v139, &v172);
					v93 = v144;
				}
				if ((float)(int)v92[3] > *((float*)v93 + 9))
					goto LABEL_275;
				v95 = *(_QWORD*)(*((_QWORD*)sub_1403D2990((__int64)v146, (int*)&v171) + 1) + 16i64);
				while (v95 != *((_QWORD*)sub_1403D2990((__int64)v146, (int*)&v171) + 1))
				{
					v96 = sub_1401FD7A0(*(_DWORD*)(v95 + 32));
					if (!v96)
						goto LABEL_251;
					v97 = v142;
					v98 = *((_QWORD*)v142 + 1);
					while (v98)
					{
						if (*(_DWORD*)(v98 + 32) < v92[1])
						{
							v98 = *(_QWORD*)(v98 + 24);
						}
						else
						{
							v97 = (int*)v98;
							v98 = *(_QWORD*)(v98 + 16);
						}
					}
					if (v97 == v142 || v92[1] < (unsigned int)v97[8])
					{
						v99 = v92[1];
						v139 = v97;
						v173 = v99;
						sub_140032B30((__int64)v141, (int**)&v140, (__int64*)&v139, &v173);
						v97 = (int*)v140;
					}
					*((float*)v97 + 9) = (float)*(int*)(v96 + 16) + *((float*)v97 + 9);
					v100 = *(_QWORD*)(v95 + 24);
					if (v100)
					{
						v95 = *(_QWORD*)(v95 + 24);
						for (n = *(_QWORD*)(v100 + 16); n; n = *(_QWORD*)(n + 16))
							v95 = n;
					}
					else
					{
						for (ii = *(_QWORD*)(v95 + 8); v95 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
							v95 = ii;
						if (*(_QWORD*)(v95 + 24) != ii)
							v95 = ii;
					}
				}
				v59 = v158;
				v60 = v155;
			}
		}
		v103 = *(_QWORD*)(v86 + 24);
		if (v103)
		{
			v86 = *(_QWORD*)(v86 + 24);
			for (jj = *(_QWORD*)(v103 + 16); jj; jj = *(_QWORD*)(jj + 16))
				v86 = jj;
		}
		else
		{
			for (kk = *(_QWORD*)(v86 + 8); v86 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
				v86 = kk;
			if (*(_QWORD*)(v86 + 24) != kk)
				v86 = kk;
		}
	}
	v106 = *((_QWORD*)v59 + 2);
	if ((int*)v106 == v59)
	{
	LABEL_246:
		v128 = *((_QWORD*)v59 + 2);
		while ((int*)v128 != v59)
		{
			if (*(_DWORD*)(v128 + 36) == 2)
			{
				v129 = *((_QWORD*)v60 + 1);
				v130 = *(_DWORD*)(v128 + 32);
				v131 = (__int64)v60;
				if (!v129)
					goto LABEL_257;
				do
				{
					if (*(_DWORD*)(v129 + 32) < v130)
					{
						v129 = *(_QWORD*)(v129 + 24);
					}
					else
					{
						v131 = v129;
						v129 = *(_QWORD*)(v129 + 16);
					}
				} while (v129);
				if ((int*)v131 == v60 || v130 < *(_DWORD*)(v131 + 32))
				{
				LABEL_257:
					v172 = (unsigned __int64)v60;
					v132 = (__int64*)&v172;
				}
				else
				{
					v171 = v131;
					v132 = &v171;
				}
				v133 = *v132;
				if ((int*)v133 == v60)
					goto LABEL_276;
				v134 = *(_DWORD**)(v133 + 40);
				if (!v134[2])
				{
					v135 = (float)(int)v134[5];
					if (v135 > *(float*)sub_1403D2690((__int64)v141, v134 + 1))
						goto LABEL_275;
					v59 = v158;
					v60 = v155;
				}
			}
			v136 = *(_QWORD*)(v128 + 24);
			if (v136)
			{
				v128 = *(_QWORD*)(v128 + 24);
				for (mm = *(_QWORD*)(v136 + 16); mm; mm = *(_QWORD*)(mm + 16))
					v128 = mm;
			}
			else
			{
				for (nn = *(_QWORD*)(v128 + 8); v128 == *(_QWORD*)(nn + 24); nn = *(_QWORD*)(nn + 8))
					v128 = nn;
				if (*(_QWORD*)(v128 + 24) != nn)
					v128 = nn;
			}
		}
		v35 = 34;
		if (sub_1403D5640(*((_QWORD*)v162 + 2), (__int64)v162, *((_QWORD*)v165 + 2), (__int64)v165))
			v35 = 1;
		goto LABEL_273;
	}
	while (2)
	{
		if (*(_DWORD*)(v106 + 36) != 2)
			goto LABEL_237;
		v107 = *((_QWORD*)v60 + 1);
		v108 = *(_DWORD*)(v106 + 32);
		v109 = v60;
		LODWORD(v171) = v108;
		if (!v107)
			goto LABEL_220;
		do
		{
			if (*(_DWORD*)(v107 + 32) < v108)
			{
				v107 = *(_QWORD*)(v107 + 24);
			}
			else
			{
				v109 = (int*)v107;
				v107 = *(_QWORD*)(v107 + 16);
			}
		} while (v107);
		if (v109 == v60 || v108 < v109[8])
		{
		LABEL_220:
			v173 = (unsigned __int64)v60;
			v110 = (__int64*)&v173;
		}
		else
		{
			v172 = (unsigned __int64)v109;
			v110 = (__int64*)&v172;
		}
		v111 = *v110;
		if ((int*)v111 == v60)
			goto LABEL_276;
		v112 = *(_DWORD**)(v111 + 40);
		v113 = v112 + 2;
		if (!v112[2])
		{
		LABEL_237:
			v125 = *(_QWORD*)(v106 + 24);
			if (v125)
			{
				v106 = *(_QWORD*)(v106 + 24);
				for (i1 = *(_QWORD*)(v125 + 16); i1; i1 = *(_QWORD*)(i1 + 16))
					v106 = i1;
			}
			else
			{
				for (i2 = *(_QWORD*)(v106 + 8); v106 == *(_QWORD*)(i2 + 24); i2 = *(_QWORD*)(i2 + 8))
					v106 = i2;
				if (*(_QWORD*)(v106 + 24) != i2)
					v106 = i2;
			}
			if ((int*)v106 == v59)
				goto LABEL_246;
			continue;
		}
		break;
	}
	v114 = v112 + 1;
	v115 = (float)(int)v112[5];
	if (v115 > *(float*)sub_1403D2690((__int64)v141, v112 + 1))
		goto LABEL_275;
	v116 = (float)(int)v112[6];
	if (v116 > *(float*)sub_1403D2690((__int64)v141, v112 + 2))
		goto LABEL_275;
	v117 = *(_QWORD*)(*((_QWORD*)sub_1403D2990((__int64)v150, (int*)&v171) + 1) + 16i64);
	if (v117 == *((_QWORD*)sub_1403D2990((__int64)v150, (int*)&v171) + 1))
	{
	LABEL_236:
		v59 = v158;
		v60 = v155;
		goto LABEL_237;
	}
	while (1)
	{
		v118 = sub_1401FD7A0(*(_DWORD*)(v117 + 32));
		if (!v118)
			break;
		v119 = (float)*(int*)(v118 + 16) * *(float*)&dword_140DC2344;
		v120 = sub_1403D2690((__int64)v141, v114);
		*(float*)v120 = v119 + *(float*)v120;
		v121 = sub_1403D2690((__int64)v141, v113);
		*(float*)v121 = v119 + *(float*)v121;
		v122 = *(_QWORD*)(v117 + 24);
		if (v122)
		{
			v117 = *(_QWORD*)(v117 + 24);
			for (i3 = *(_QWORD*)(v122 + 16); i3; i3 = *(_QWORD*)(i3 + 16))
				v117 = i3;
		}
		else
		{
			for (i4 = *(_QWORD*)(v117 + 8); v117 == *(_QWORD*)(i4 + 24); i4 = *(_QWORD*)(i4 + 8))
				v117 = i4;
			if (*(_QWORD*)(v117 + 24) != i4)
				v117 = i4;
		}
		if (v117 == *((_QWORD*)sub_1403D2990((__int64)v150, (int*)&v171) + 1))
			goto LABEL_236;
	}
LABEL_251:
	v35 = 35;
LABEL_273:
	sub_140008410((__int64)v154);
	sub_14018B900((__int64)v155, 0);
	sub_140008410((__int64)v157);
	sub_14018B900((__int64)v158, 0);
	sub_140008410((__int64)v141);
	sub_14018B900((__int64)v142, 0);
	if (v152)
	{
		sub_140032150((__int64)v150, *((_QWORD**)v151 + 1));
		*((_QWORD*)v151 + 2) = v151;
		*((_QWORD*)v151 + 1) = 0i64;
		*((_QWORD*)v151 + 3) = v151;
		v152 = 0i64;
	}
	sub_14018B900((__int64)v151, 0);
	if (v148)
	{
		sub_140032150((__int64)v146, *((_QWORD**)v147 + 1));
		*((_QWORD*)v147 + 2) = v147;
		*((_QWORD*)v147 + 1) = 0i64;
		*((_QWORD*)v147 + 3) = v147;
		v148 = 0i64;
	}
	sub_14018B900((__int64)v147, 0);
	sub_140008410((__int64)v164);
	sub_14018B900((__int64)v165, 0);
	sub_140008410((__int64)v161);
	sub_14018B900((__int64)v162, 0);
	if (v174)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v174 - 2) + 8i64))(v174 - 4);
	return v35;
}
// 140A6A1A0: using guessed type wchar_t *off_140A6A1A0[2];
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FB8: using guessed type __int64 qword_140C63FB8;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;
// 140C655F8: using guessed type int dword_140C655F8;
// 140DC2340: using guessed type int dword_140DC2340;
// 140DC2344: using guessed type int dword_140DC2344;
// 1403D02A0: using guessed type char var_118[8];
// 1403D02A0: using guessed type char var_170[8];
// 1403D02A0: using guessed type char var_140[8];
// 1403D02A0: using guessed type char var_F8[8];
// 1403D02A0: using guessed type char var_1A0[8];
// 1403D02A0: using guessed type char var_70[16];
// 1403D02A0: using guessed type char var_B0[8];
// 1403D02A0: using guessed type char var_80[16];
// 1403D02A0: using guessed type char var_D0[8];


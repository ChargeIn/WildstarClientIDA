#include "../winhttp.h"

//----- (0000000140543630) ----------------------------------------------------
void __fastcall sub_140543630(
	__int64 a1,
	int a2,
	__int64 a3,
	unsigned int a4,
	int a5,
	int a6,
	int a7,
	_DWORD* a8,
	float a9,
	int a10)
{
	__int64 v13; // rax
	int* v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rax
	unsigned int v17; // ecx
	_DWORD* v18; // rax
	int v19; // edx
	int v20; // r8d
	__int64 v21; // r8
	__int64 v22; // rax
	__int64 v23; // rax
	_DWORD* v24; // rcx
	unsigned int v25; // eax
	int v26; // edx
	BOOL v27; // eax
	int v28; // edx
	__int64 v29; // rax
	__int64 v30; // r8
	int v31; // edx
	__int64 v32; // r8
	unsigned int v33; // r9d
	int v34; // r12d
	int** v35; // r14
	int** v36; // r13
	int* v37; // rax
	__int64 v38; // rcx
	int v39; // r8d
	int* v40; // rax
	int v41; // ebx
	__int64 v42; // rcx
	int* v43; // rax
	int* v44; // rbx
	int v45; // eax
	int v46; // ebp
	__int64 v47; // rax
	__int64 v48; // rdi
	int* v49; // rax
	int* v50; // rcx
	bool v51; // zf
	__int64 v52; // rcx
	__int64 v53; // rax
	int* v54; // rax
	int v55; // ebx
	int v56; // r8d
	int* v57; // rax
	int v58; // xmm0_4
	int v59; // xmm1_4
	__int64 v60; // rax
	int v61; // xmm1_4
	__int64 v62; // rax
	float v63; // xmm1_4
	__int64 v64; // rax
	int v65; // xmm1_4
	__int64 v66; // rax
	__int64 v67; // rcx
	__int64 v68; // rcx
	int* v69; // rbx
	float* v70; // rax
	float v71; // xmm6_4
	float v72; // xmm7_4
	__int64 v73; // rax
	float v74; // xmm1_4
	float v75; // xmm0_4
	__int64 v76; // rax
	float v77; // xmm0_4
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // rcx
	int* v81; // rbx
	float* v82; // rax
	float v83; // xmm6_4
	__int64 v84; // rcx
	int* v85; // rax
	int v86; // eax
	int v87; // eax
	__int64 v88; // rcx
	__int64 v89; // rcx
	int* v90; // rbx
	int* v91; // rax
	__int64 v92; // r14
	int v93; // ebx
	double v94; // xmm6_8
	float v95; // xmm7_4
	float v96; // xmm0_4
	double v97; // xmm6_8
	float v98; // xmm7_4
	float v99; // xmm0_4
	double v100; // xmm6_8
	float v101; // xmm7_4
	float v102; // xmm0_4
	__int64 v103; // rdx
	_DWORD* v104; // rcx
	__int64 v105; // rax
	double v106; // xmm6_8
	float v107; // xmm7_4
	float v108; // xmm0_4
	int v109; // eax
	int v110; // eax
	int v111; // eax
	int v112; // eax
	int v113; // edx
	__m128* v114; // rax
	__m128 v115; // xmm7
	__m128 v116; // xmm4
	__m128 v117; // xmm1
	float v118; // xmm2_4
	__m128 v119; // xmm1
	float v120; // xmm0_4
	__m128i v121; // xmm1
	__m128 v122; // xmm3
	__m128 v123; // xmm1
	float v124; // xmm2_4
	float v125; // xmm0_4
	__m128i v126; // xmm7
	__m128i v127; // xmm3
	__int64 v128; // rcx
	int* v129; // rax
	int* v130; // rbx
	int v131; // ebp
	__int64 v132; // rax
	int* v133; // rax
	__int64 v134; // rcx
	int* v135; // rbx
	__int64 v136; // rax
	int v137; // edx
	int v138; // ecx
	int v139; // ebp
	__int64 v140; // rax
	int* v141; // rax
	int v142; // ecx
	__int64 v143; // rcx
	int* v144; // rax
	int* v145; // rbx
	float v146; // xmm0_4
	float* v147; // rax
	float v148; // xmm1_4
	__int64 v149; // rax
	int v150; // ebp
	__int64 v151; // rax
	int* v152; // rax
	int** v153; // r8
	__int64 v154; // rax
	__int64 v155; // rax
	__int64 v156; // rdx
	__int64 v157; // rcx
	float* v158; // rax
	float v159; // xmm0_4
	__int64 v160; // rax
	int v161; // [rsp+40h] [rbp-78h]
	int** v162; // [rsp+48h] [rbp-70h]
	__int64 v163; // [rsp+50h] [rbp-68h]
	_DWORD* v164; // [rsp+50h] [rbp-68h]

	v13 = sub_1403D90D0(qword_140C65898, a4);
	v14 = 0i64;
	v15 = v13;
	v163 = v13;
	if (v13)
	{
		if (*(int*)(v13 + 84) > 1 && !(unsigned int)sub_14045A950(*(_QWORD*)(qword_140C65898 + 120), a4))
		{
			v16 = *(_QWORD*)(v15 + 224);
			if (v16)
			{
				v17 = 0;
				v18 = (_DWORD*)(v16 + 40);
				do
				{
					v19 = *(v18 - 3);
					if (!v19)
						break;
					v20 = *(_DWORD*)(a1 + 304);
					if (v19 == v20 || *v18 == v20)
						return;
					++v17;
					++v18;
				} while (v17 < 3);
			}
		}
	}
	v21 = *(unsigned int*)(a3 + 44);
	if ((!(_DWORD)v21
		|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				v15,
				v21,
				0i64,
				0i64,
				0))
		&& ((*(_DWORD*)(a3 + 16) & 0x4000) == 0
			|| (v22 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && *(_DWORD*)(a1 + 340) == *(_DWORD*)(v22 + 8)
			|| (v23 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(a1 + 340) == *(_DWORD*)(v23 + 8)))
	{
		v24 = *(_DWORD**)(*(_QWORD*)(a1 + 312) + 112i64);
		v25 = v24[31];
		v27 = v25 <= 7 && (v26 = 133, _bittest(&v26, v25)) || v24[6] == 3 && !v24[39] && ((v25 - 4) & 0xFFFFFFFB) == 0;
		v28 = a7;
		if (v27)
			v28 = a4;
		v29 = sub_1403D90D0(qword_140C65898, v28);
		v30 = *(unsigned int*)(a3 + 48);
		if (!(_DWORD)v30
			|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					v29,
					v30,
					0i64,
					0i64,
					0))
		{
			v31 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 4i64);
			if (*(_DWORD*)(a3 + 8) == 2 && (*(_DWORD*)(a3 + 16) & 0x1000) != 0)
			{
				if (v15)
				{
					v32 = *(_QWORD*)(v15 + 5576);
					v33 = 0;
					if (v32)
					{
						do
						{
							if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v32 + 56) + 312i64) + 112i64) + 4i64) == v31)
								v33 += *(_DWORD*)(v32 + 80);
							v32 = *(_QWORD*)(v32 + 24);
						} while (v32);
						if (v33 > 1)
							sub_140469B60(v15, v31, *(_DWORD*)(a3 + 24));
					}
				}
			}
			v34 = -1;
			v35 = 0i64;
			v162 = 0i64;
			if (a6)
			{
				v36 = (int**)(a1 + 552);
			}
			else if ((*(_BYTE*)(a3 + 52) & 4) != 0 || (v36 = (int**)(a1 + 560), *(_DWORD*)(a3 + 40) == -1))
			{
				v36 = (int**)(a1 + 536);
			}
			if ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1)
			{
				v35 = (int**)(a1 + 544);
				v162 = (int**)(a1 + 544);
			}
			if ((*(_BYTE*)(a3 + 16) & 0x10) != 0)
				v161 = sub_140543460(a1, a4, a7);
			else
				v161 = 0;
			switch (*(_DWORD*)(a3 + 32))
			{
			case 0:
				if (v15)
				{
					v37 = sub_14018B280(192i64, 0);
					if (v37)
						v14 = sub_14054EE30(v37, a4, *(_DWORD*)(a1 + 340), *(_DWORD*)(a1 + 92), (__int64)v36, (_DWORD*)a3);
					*v14 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
					if (a5)
					{
						if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
							v34 = *(_DWORD*)(a1 + 80);
						else
							v34 = *(_DWORD*)(a3 + 40);
					}
					v14[1] = v34;
					v14[12] = *(_DWORD*)(a3 + 32);
					if (a4 == *(_DWORD*)(a1 + 340)
						&& (*(_DWORD*)(a1 + 192) || *(_DWORD*)(v15 + 3416))
						&& (*(_DWORD*)(a3 + 52) & 0x800) == 0
						|| (*(_DWORD*)(a3 + 52) & 0x400) != 0)
					{
						v14[44] = 4;
					}
					else
					{
						v14[44] = 5;
					}
					v14[45] = sub_140542E20(a1, a5, a4);
					v14[46] = *(_DWORD*)(a1 + 84);
					v38 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
					v14[20] = (int)(*(_DWORD*)(v38 + 268) << 23) >> 31;
					sub_140578460(v38, 0, v39, v14, *(_DWORD*)(a1 + 92), v36, v35);
				}
				return;
			case 1:
				v40 = sub_14018B280(160i64, 0);
				if (v40)
				{
					v41 = *(_DWORD*)(a1 + 92);
					v14 = v40;
					sub_1407E4830(v40, 0i64, 0xA0ui64);
					sub_14054E9F0((__int64)v14, v41, (__int64)v36, a3);
					v14[38] = a4;
				}
				*v14 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				v14[1] = v34;
				v14[12] = *(_DWORD*)(a3 + 32);
				v42 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
				v14[20] = (int)(*(_DWORD*)(v42 + 268) << 23) >> 31;
				sub_140578460(v42, 1, a4, v14, *(_DWORD*)(a1 + 92), v36, v35);
				return;
			case 2:
				if (*(_QWORD*)(qword_140C65898 + 25744) && a4 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64)
					|| (v53 = *(_QWORD*)(a3 + 56)) != 0 && *(float*)(v53 + 16) > 0.0000099999997
					|| sub_14039E0E0(qword_140C65898) && *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 192i64) == a4)
				{
					v54 = sub_14018B280(184i64, 0);
					if (v54)
					{
						v55 = *(_DWORD*)(a1 + 92);
						v14 = v54;
						sub_1407E4830(v54, 0i64, 0xB8ui64);
						sub_14054E9F0((__int64)v14, v55, (__int64)v36, a3);
					}
					*v14 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
					if (a5)
					{
						if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
							v34 = *(_DWORD*)(a1 + 80);
						else
							v34 = *(_DWORD*)(a3 + 40);
					}
					v14[1] = v34;
					v14[12] = *(_DWORD*)(a3 + 32);
					v14[38] = *(_DWORD*)(a3 + 64);
					v14[44] = sub_140542E20(a1, a5, a4);
					v57 = *(int**)(a3 + 56);
					v58 = 0;
					if (v57)
						v59 = *v57;
					else
						v59 = 0;
					v14[39] = v59;
					v60 = *(_QWORD*)(a3 + 56);
					if (v60)
						v61 = *(_DWORD*)(v60 + 4);
					else
						v61 = 0;
					v14[40] = v61;
					v62 = *(_QWORD*)(a3 + 56);
					if (v62)
						v63 = *(float*)(v62 + 8);
					else
						v63 = 0.0;
					v14[41] = (int)v63;
					v64 = *(_QWORD*)(a3 + 56);
					if (v64)
						v65 = *(_DWORD*)(v64 + 12);
					else
						v65 = 0;
					v14[42] = v65;
					v66 = *(_QWORD*)(a3 + 56);
					if (v66)
						v58 = *(_DWORD*)(v66 + 16);
					v14[43] = v58;
					v67 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
					v14[20] = (int)(*(_DWORD*)(v67 + 268) << 23) >> 31;
					sub_140578460(v67, 2, v56, v14, *(_DWORD*)(a1 + 92), v36, v35);
				}
				return;
			case 3:
				if (*(_QWORD*)(qword_140C65898 + 25744) && a4 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64)
					|| (v68 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && a4 == *(_DWORD*)(v68 + 8))
				{
					v69 = sub_14018B280(168i64, 0);
					if (v69)
					{
						v70 = *(float**)(a3 + 56);
						v71 = 0.0;
						if (v70)
							v72 = *v70;
						else
							v72 = 0.0;
						sub_14054E9F0((__int64)v69, *(_DWORD*)(a1 + 92), (__int64)v36, a3);
						v69[38] = (int)v72;
						v73 = *(_QWORD*)(a3 + 56);
						if (!v73 || (v74 = *(float*)(v73 + 4), v74 == 0.0))
							v75 = 0.0;
						else
							v75 = 1000.0 / v74;
						*((float*)v69 + 39) = v75;
						v76 = *(_QWORD*)(a3 + 56);
						if (v76)
							v77 = *(float*)(v76 + 8);
						else
							v77 = 0.0;
						v69[40] = (int)v77;
						v78 = *(_QWORD*)(a3 + 56);
						if (v78)
							v71 = *(float*)(v78 + 12);
						v69[41] = (int)v71;
					}
					else
					{
						v69 = 0i64;
					}
					*v69 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
					if (a5)
					{
						if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
							v34 = *(_DWORD*)(a1 + 80);
						else
							v34 = *(_DWORD*)(a3 + 40);
					}
					v69[1] = v34;
					v69[12] = *(_DWORD*)(a3 + 32);
					v79 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
					v69[20] = (int)(*(_DWORD*)(v79 + 268) << 23) >> 31;
					sub_140578460(v79, 3, a4, v69, *(_DWORD*)(a1 + 92), v36, v35);
				}
				return;
			case 4:
				if (*(_QWORD*)(qword_140C65898 + 25744) && a4 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64)
					|| (v80 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && a4 == *(_DWORD*)(v80 + 8))
				{
					v81 = sub_14018B280(160i64, 0);
					if (v81)
					{
						v82 = *(float**)(a3 + 56);
						if (v82)
							v83 = *v82;
						else
							v83 = 0.0;
						sub_14054E9F0((__int64)v81, *(_DWORD*)(a1 + 92), (__int64)v36, a3);
						v81[38] = (int)v83;
					}
					else
					{
						v81 = 0i64;
					}
					*v81 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
					if (a5)
					{
						if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
							v34 = *(_DWORD*)(a1 + 80);
						else
							v34 = *(_DWORD*)(a3 + 40);
					}
					v81[1] = v34;
					v81[12] = *(_DWORD*)(a3 + 32);
					v84 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
					v81[20] = (int)(*(_DWORD*)(v84 + 268) << 23) >> 31;
					sub_140578460(v84, 4, a4, v81, *(_DWORD*)(a1 + 92), v36, v35);
				}
				return;
			case 5:
				if (v15)
				{
					v85 = sub_14018B280(256i64, 0);
					if (v85)
						v14 = sub_14054E950(v85, a4, *(_DWORD*)(a1 + 340), *(_DWORD*)(a1 + 92), (__int64)v36, a3);
					*v14 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
					if (a5)
					{
						if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
							v34 = *(_DWORD*)(a1 + 80);
						else
							v34 = *(_DWORD*)(a3 + 40);
					}
					v14[1] = v34;
					v14[12] = *(_DWORD*)(a3 + 32);
					v14[53] = *(_DWORD*)(a3 + 76);
					v14[54] = *(_DWORD*)(a3 + 80);
					*((_QWORD*)v14 + 19) = *(_QWORD*)(a3 + 88);
					v14[40] = *(_DWORD*)(a3 + 96);
					v14[41] = *(_DWORD*)(a3 + 100);
					v14[42] = *(_DWORD*)(a3 + 104);
					v14[43] = *(_DWORD*)(a3 + 108);
					v14[55] = *(_DWORD*)(a3 + 84);
					v14[48] = *(_DWORD*)(a3 + 64);
					v86 = *(_DWORD*)(a3 + 16);
					v87 = (v86 & 0x20) != 0 ? 1 : ((unsigned __int8)v86 >> 5) & 2;
					v14[59] = v87;
					v14[60] = a7;
					v14[61] = *(_DWORD*)(a1 + 344);
					v14[62] = *(_DWORD*)(a3 + 152);
					v14[57] = (*(_DWORD*)(a3 + 16) >> 7) & 1;
					v14[58] = (*(_DWORD*)(a3 + 16) >> 10) & 1;
					*((_OWORD*)v14 + 11) = *(_OWORD*)(a3 + 112);
					v14[63] = *(_DWORD*)(a3 + 136);
					v88 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
					v14[20] = (int)(*(_DWORD*)(v88 + 268) << 23) >> 31;
					if ((int)sub_140578460(v88, 5, a4, v14, *(_DWORD*)(a1 + 92), v36, v35) >= 0)
						goto LABEL_185;
				}
				return;
			case 6:
				v91 = sub_14018B280(400i64, 8u);
				v92 = (__int64)v91;
				if (v91)
				{
					v93 = *(_DWORD*)(a1 + 92);
					sub_1407E4830(v91, 0i64, 0xD0ui64);
					sub_1407E4830((int*)v92, 0i64, 0x190ui64);
					sub_14054E9F0(v92, v93, (__int64)v36, a3);
					v15 = v163;
					*(_DWORD*)(v92 + 200) = *(_DWORD*)(a3 + 52) & 1;
				}
				else
				{
					v92 = 0i64;
				}
				*(_DWORD*)v92 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				*(_DWORD*)(v92 + 4) = v34;
				*(_DWORD*)(v92 + 48) = *(_DWORD*)(a3 + 32);
				*(_DWORD*)(v92 + 192) = *(_DWORD*)(a3 + 64);
				*(_OWORD*)(v92 + 176) = *(_OWORD*)(a3 + 112);
				*(_DWORD*)(v92 + 388) = *(_DWORD*)(a3 + 136);
				*(_QWORD*)&v94 = *(unsigned int*)(a1 + 368);
				v95 = sub_1408FE3D0(v94);
				v96 = sub_1408FC950(v94);
				*(float*)(v92 + 256) = v95;
				*(_DWORD*)(v92 + 228) = 0;
				*(_QWORD*)(v92 + 236) = 0i64;
				*(float*)(v92 + 224) = v96;
				*(float*)(v92 + 264) = v96;
				*(_QWORD*)(v92 + 244) = 1065353216i64;
				*(_DWORD*)(v92 + 252) = 0;
				*(_DWORD*)(v92 + 260) = 0;
				*(float*)(v92 + 232) = -v95;
				*(_DWORD*)(v92 + 268) = 0;
				*(_OWORD*)(v92 + 272) = xmmword_140C78440;
				*(_DWORD*)(v92 + 272) = *(_DWORD*)(a1 + 352);
				*(_DWORD*)(v92 + 276) = *(_DWORD*)(a1 + 356);
				*(_DWORD*)(v92 + 280) = *(_DWORD*)(a1 + 360);
				if (a2 == 4)
				{
					if (a8)
					{
						*(_QWORD*)&v97 = LODWORD(a9);
						*(_DWORD*)(v92 + 208) = 0;
						*(float*)&v97 = a9 + 3.1415927;
						*(_DWORD*)(v92 + 352) = a10;
						v98 = sub_1408FE3D0(v97);
						v99 = sub_1408FC950(v97);
						*(float*)(v92 + 256) = v98;
						*(_DWORD*)(v92 + 228) = 0;
						*(_QWORD*)(v92 + 236) = 0i64;
						*(_QWORD*)(v92 + 244) = 1065353216i64;
						*(_DWORD*)(v92 + 252) = 0;
						*(float*)(v92 + 224) = v99;
						*(float*)(v92 + 264) = v99;
						*(float*)(v92 + 232) = -v98;
						*(_DWORD*)(v92 + 260) = 0;
						*(_DWORD*)(v92 + 268) = 0;
						*(_OWORD*)(v92 + 272) = xmmword_140C78440;
						*(_DWORD*)(v92 + 272) = *a8;
						*(_DWORD*)(v92 + 276) = a8[1];
						*(_DWORD*)(v92 + 280) = a8[2];
						goto LABEL_224;
					}
				LABEL_213:
					sub_14018B900(v92, 0);
					return;
				}
				if (a2 == 3)
				{
					*(_DWORD*)(v92 + 208) = 0;
					*(_QWORD*)&v100 = *(unsigned int*)(a1 + 368);
					*(float*)&v100 = *(float*)&v100 + 3.1415927;
					v101 = sub_1408FE3D0(v100);
					v102 = sub_1408FC950(v100);
					*(float*)(v92 + 256) = v101;
					*(_DWORD*)(v92 + 228) = 0;
					*(_QWORD*)(v92 + 236) = 0i64;
					*(_QWORD*)(v92 + 244) = 1065353216i64;
					*(_DWORD*)(v92 + 252) = 0;
					*(float*)(v92 + 224) = v102;
					*(float*)(v92 + 264) = v102;
					*(float*)(v92 + 232) = -v101;
					*(_DWORD*)(v92 + 260) = 0;
					*(_DWORD*)(v92 + 268) = 0;
					*(_OWORD*)(v92 + 272) = xmmword_140C78440;
					*(_DWORD*)(v92 + 272) = *(_DWORD*)(a1 + 352);
					*(_DWORD*)(v92 + 276) = *(_DWORD*)(a1 + 356);
					*(_DWORD*)(v92 + 280) = *(_DWORD*)(a1 + 360);
				}
				else if ((*(_DWORD*)(a3 + 16) & 0x200) != 0)
				{
					v103 = *(_QWORD*)(a1 + 856);
					v104 = (_DWORD*)v103;
					v105 = *(_QWORD*)(v103 + 8);
					while (v105)
					{
						if (*(_DWORD*)(v105 + 32) < a4)
						{
							v105 = *(_QWORD*)(v105 + 24);
						}
						else
						{
							v104 = (_DWORD*)v105;
							v105 = *(_QWORD*)(v105 + 16);
						}
					}
					if (v104 == (_DWORD*)v103 || (v164 = v104, a4 < v104[8]))
						v164 = *(_DWORD**)(a1 + 856);
					if (v164 == *(_DWORD**)(a1 + 856) || v164 == (_DWORD*)-36i64)
						goto LABEL_213;
					*(_DWORD*)(v92 + 208) = 0;
					*(_QWORD*)&v106 = (unsigned int)v164[14];
					*(float*)&v106 = *(float*)&v106 + 3.1415927;
					v107 = sub_1408FE3D0(v106);
					v108 = sub_1408FC950(v106);
					*(float*)(v92 + 256) = v107;
					*(_DWORD*)(v92 + 228) = 0;
					*(_QWORD*)(v92 + 236) = 0i64;
					*(_QWORD*)(v92 + 244) = 1065353216i64;
					*(_DWORD*)(v92 + 252) = 0;
					*(float*)(v92 + 224) = v108;
					*(float*)(v92 + 264) = v108;
					*(float*)(v92 + 232) = -v107;
					*(_DWORD*)(v92 + 260) = 0;
					*(_DWORD*)(v92 + 268) = 0;
					*(_OWORD*)(v92 + 272) = xmmword_140C78440;
					*(_DWORD*)(v92 + 272) = v164[11];
					*(_DWORD*)(v92 + 276) = v164[12];
					*(_DWORD*)(v92 + 280) = v164[13];
					*(_DWORD*)(v92 + 352) = v164[15];
				}
				else
				{
					v109 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 124i64);
					if ((v109 == 4 || (unsigned int)(v109 - 7) <= 1) && a2 == 1)
					{
						*(_DWORD*)(v92 + 208) = 0;
						if (v15)
						{
							*(_DWORD*)(v92 + 224) = *(_DWORD*)(v15 + 4528);
							*(_DWORD*)(v92 + 228) = *(_DWORD*)(v15 + 4532);
							*(_DWORD*)(v92 + 232) = *(_DWORD*)(v15 + 4536);
							*(_DWORD*)(v92 + 240) = *(_DWORD*)(v15 + 4544);
							*(_DWORD*)(v92 + 244) = *(_DWORD*)(v15 + 4548);
							*(_DWORD*)(v92 + 248) = *(_DWORD*)(v15 + 4552);
							*(_DWORD*)(v92 + 256) = *(_DWORD*)(v15 + 4560);
							*(_DWORD*)(v92 + 260) = *(_DWORD*)(v15 + 4564);
							*(_DWORD*)(v92 + 264) = *(_DWORD*)(v15 + 4568);
						}
					}
					else
					{
						*(_DWORD*)(v92 + 208) = 1;
						*(_DWORD*)(v92 + 352) = a4;
						*(_DWORD*)(v92 + 356) = *(_DWORD*)(a3 + 84);
						v110 = *(_DWORD*)(a3 + 16);
						if ((v110 & 0x20) != 0)
							v111 = 1;
						else
							v111 = ((unsigned __int8)v110 >> 5) & 2;
						*(_DWORD*)(v92 + 380) = v111;
						*(_DWORD*)(v92 + 384) = *(_DWORD*)(a3 + 152);
					}
				}
			LABEL_224:
				v112 = *(_DWORD*)(a3 + 16);
				if ((v112 & 0x80u) == 0)
				{
					if ((v112 & 0x400) == 0)
						goto LABEL_232;
					v113 = *(_DWORD*)(a1 + 344);
				}
				else
				{
					v113 = a7;
				}
				v114 = (__m128*)sub_1403D90D0(qword_140C65898, v113);
				if (v114
					&& (fabs(v114[286].m128_f32[0] - *(float*)(v92 + 272)) > 0.0000099999997
						|| fabs(v114[286].m128_f32[2] - *(float*)(v92 + 280)) > 0.0000099999997))
				{
					v115 = (__m128)0x40400000u;
					v116 = _mm_sub_ps(
						v114[286],
						_mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v92 + 272), (__m128) * (unsigned int*)(v92 + 280)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v92 + 276), (__m128)0i64)));
					v117 = _mm_mul_ps(v116, v116);
					v118 = (float)(v117.m128_f32[0] + _mm_shuffle_ps(v117, v117, 85).m128_f32[0])
						+ _mm_shuffle_ps(v117, v117, 170).m128_f32[0];
					v119 = (__m128)0x40400000u;
					v120 = fsqrt(v118);
					v119.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v118 * (float)(1.0 / v120)) * (float)(1.0 / v120)))
							* 0.5)
						* (float)(1.0 / v120),
						0.0);
					v121 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v119, v119, 0), v116);
					*(_DWORD*)(v92 + 256) = _mm_cvtsi128_si32(v121);
					*(_DWORD*)(v92 + 260) = _mm_cvtsi128_si32(_mm_srli_si128(v121, 4));
					*(_DWORD*)(v92 + 264) = _mm_cvtsi128_si32(_mm_srli_si128(v121, 8));
					v122 = _mm_sub_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(*(__m128*)(v92 + 256), *(__m128*)(v92 + 256), 210),
							_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(*(__m128*)(v92 + 256), *(__m128*)(v92 + 256), 201),
							_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
					v123 = _mm_mul_ps(v122, v122);
					v124 = (float)(v123.m128_f32[0] + _mm_shuffle_ps(v123, v123, 85).m128_f32[0])
						+ _mm_shuffle_ps(v123, v123, 170).m128_f32[0];
					v125 = fsqrt(v124);
					v115.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v124 * (float)(1.0 / v125)) * (float)(1.0 / v125)))
							* 0.5)
						* (float)(1.0 / v125),
						0.0);
					v126 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v115, v115, 0), v122);
					*(_DWORD*)(v92 + 224) = _mm_cvtsi128_si32(v126);
					*(_DWORD*)(v92 + 228) = _mm_cvtsi128_si32(_mm_srli_si128(v126, 4));
					*(_DWORD*)(v92 + 232) = _mm_cvtsi128_si32(_mm_srli_si128(v126, 8));
					v127 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(*(__m128*)(v92 + 224), *(__m128*)(v92 + 224), 210),
							_mm_shuffle_ps(*(__m128*)(v92 + 256), *(__m128*)(v92 + 256), 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(*(__m128*)(v92 + 224), *(__m128*)(v92 + 224), 201),
							_mm_shuffle_ps(*(__m128*)(v92 + 256), *(__m128*)(v92 + 256), 210)));
					*(_DWORD*)(v92 + 240) = _mm_cvtsi128_si32(v127);
					*(_DWORD*)(v92 + 244) = _mm_cvtsi128_si32(_mm_srli_si128(v127, 4));
					*(_DWORD*)(v92 + 248) = _mm_cvtsi128_si32(_mm_srli_si128(v127, 8));
				}
			LABEL_232:
				*(_DWORD*)(v92 + 372) = a7;
				*(_DWORD*)(v92 + 376) = *(_DWORD*)(a1 + 344);
				*(_DWORD*)(v92 + 364) = (*(_DWORD*)(a3 + 16) >> 7) & 1;
				*(_DWORD*)(v92 + 368) = (*(_DWORD*)(a3 + 16) >> 10) & 1;
				*(_QWORD*)(v92 + 152) = *(_QWORD*)(a3 + 88);
				*(_DWORD*)(v92 + 160) = *(_DWORD*)(a3 + 96);
				*(_DWORD*)(v92 + 164) = *(_DWORD*)(a3 + 100);
				*(_DWORD*)(v92 + 168) = *(_DWORD*)(a3 + 104);
				*(_DWORD*)(v92 + 172) = *(_DWORD*)(a3 + 108);
				v128 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
				*(_DWORD*)(v92 + 80) = (int)(*(_DWORD*)(v128 + 268) << 23) >> 31;
				if ((int)sub_140578460(v128, 6, a4, (int*)v92, *(_DWORD*)(a1 + 92), v36, v162) >= 0)
				{
				LABEL_185:
					v90 = *v36;
					sub_1403F9C60(v89, a1);
					(*(void(__fastcall**)(int*))(*(_QWORD*)v90 + 88i64))(v90);
				}
				return;
			case 7:
				v129 = sub_14018B280(160i64, 0);
				v130 = v129;
				if (v129)
				{
					sub_14054EB60((__int64)v129, a4, *(_DWORD*)(a1 + 340), *(_DWORD*)(a1 + 92), (__int64)v36, a3);
					v130[38] = a4;
				}
				else
				{
					v130 = 0i64;
				}
				*v130 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				v130[1] = v34;
				v130[12] = *(_DWORD*)(a3 + 32);
				v130[20] = (int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 268i64) << 23) >> 31;
				v131 = *(_DWORD*)(a1 + 92);
				sub_1400035B0();
				if (a4)
				{
					v132 = sub_1403D90D0(qword_140C65898, a4);
					v48 = v132;
					if (v132)
					{
						if (!*(_QWORD*)(v132 + 5864))
						{
							v133 = sub_14018B280(64i64, 0);
							v50 = v133;
							if (!v133)
								goto LABEL_298;
							*(_QWORD*)v133 = v130;
							v133[2] = v131;
							v133[3] = 7;
							*((_QWORD*)v133 + 2) = 0i64;
							*((_QWORD*)v133 + 3) = 0i64;
							*((_QWORD*)v133 + 4) = 0i64;
							*((_QWORD*)v133 + 5) = 0i64;
							*((_QWORD*)v133 + 6) = 0i64;
							*((_QWORD*)v133 + 7) = 0i64;
							goto LABEL_299;
						}
					}
				}
				sub_1400035B0();
				v51 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
				v134 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
				dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
				if (v51 || (_DWORD)v134 == 0x3FFFFFFF)
					dword_140C8AF30 = 1;
				sub_140576F90(v134, v130, (__int64*)v36);
				sub_14018B900((__int64)v130, 0);
				return;
			case 8:
				v135 = sub_14018B280(160i64, 0);
				if (v135)
				{
					v136 = *(_QWORD*)(a3 + 144);
					v137 = *(_DWORD*)(a1 + 92);
					if (v136)
						v138 = *(_DWORD*)(v136 + 124);
					else
						v138 = 0;
					v135[38] = v138;
					sub_14054E9F0((__int64)v135, v137, (__int64)v36, a3);
				}
				else
				{
					v135 = 0i64;
				}
				*v135 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				v135[1] = v34;
				v135[12] = *(_DWORD*)(a3 + 32);
				v139 = *(_DWORD*)(a1 + 92);
				sub_1400035B0();
				if (a4)
				{
					v140 = sub_1403D90D0(qword_140C65898, a4);
					v48 = v140;
					if (v140)
					{
						if (!*(_QWORD*)(v140 + 5864))
						{
							v141 = sub_14018B280(64i64, 0);
							v50 = v141;
							if (!v141)
								goto LABEL_298;
							*(_QWORD*)v141 = v135;
							v141[2] = v139;
							v141[3] = 8;
							*((_QWORD*)v141 + 2) = 0i64;
							*((_QWORD*)v141 + 3) = 0i64;
							*((_QWORD*)v141 + 4) = 0i64;
							*((_QWORD*)v141 + 5) = 0i64;
							*((_QWORD*)v141 + 6) = 0i64;
							*((_QWORD*)v141 + 7) = 0i64;
							goto LABEL_299;
						}
					}
				}
				sub_1400035B0();
				v51 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
				v142 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
				dword_140C8AF30 = v142;
				if (v51 || v142 == 0x3FFFFFFF)
					dword_140C8AF30 = 1;
				v143 = *(_QWORD*)(qword_140C65898 + 120);
				if (v143)
				{
					LOBYTE(v14) = a4 == *(_DWORD*)(v143 + 8);
					if ((_DWORD)v14)
						sub_1405770F0((int**)qword_140C65B78, v135, v36);
				}
				sub_14018B900((__int64)v135, 0);
				return;
			case 9:
				v144 = sub_14018B280(176i64, 0);
				v145 = v144;
				if (v144)
					sub_14054E9F0((__int64)v144, *(_DWORD*)(a1 + 92), (__int64)v36, a3);
				else
					v145 = 0i64;
				*v145 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				v145[1] = v34;
				v146 = 0.0;
				v145[12] = *(_DWORD*)(a3 + 32);
				v147 = *(float**)(a3 + 56);
				if (v147)
					v148 = *v147;
				else
					v148 = 0.0;
				v145[39] = a4;
				v145[38] = (int)v148;
				v145[40] = *(_DWORD*)(a1 + 340);
				v149 = *(_QWORD*)(a3 + 56);
				if (v149)
					v146 = *(float*)(v149 + 4);
				v145[41] = (int)v146;
				v145[42] = *(_DWORD*)(a1 + 304);
				v145[20] = (int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 268i64) << 23) >> 31;
				v150 = *(_DWORD*)(a1 + 92);
				sub_1400035B0();
				if (a4)
				{
					v151 = sub_1403D90D0(qword_140C65898, a4);
					v48 = v151;
					if (v151)
					{
						if (!*(_QWORD*)(v151 + 5864))
						{
							v152 = sub_14018B280(64i64, 0);
							v50 = v152;
							if (!v152)
								goto LABEL_298;
							*(_QWORD*)v152 = v145;
							v152[2] = v150;
							v152[3] = 9;
							*((_QWORD*)v152 + 2) = 0i64;
							*((_QWORD*)v152 + 3) = 0i64;
							*((_QWORD*)v152 + 4) = 0i64;
							*((_QWORD*)v152 + 5) = 0i64;
							*((_QWORD*)v152 + 6) = 0i64;
							*((_QWORD*)v152 + 7) = 0i64;
							goto LABEL_299;
						}
					}
				}
				sub_1400035B0();
				v51 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
				v157 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
				dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
				if (v51 || (_DWORD)v157 == 0x3FFFFFFF)
					dword_140C8AF30 = 1;
				sub_140577250(v157, v156, v145, (__int64*)v36);
				sub_14018B900((__int64)v145, 0);
				return;
			case 0xA:
				v158 = *(float**)(a3 + 56);
				if (v158)
					v159 = *v158;
				else
					v159 = 0.0;
				v160 = sub_140237680((int)v159);
				if (v160)
					sub_1405458E0(a1, v160);
				return;
			case 0xC:
				v43 = sub_14018B280(160i64, 0);
				v44 = v43;
				if (v43)
					sub_14054E9F0((__int64)v43, *(_DWORD*)(a1 + 92), (__int64)v36, a3);
				else
					v44 = 0i64;
				*v44 = sub_140542E70(a1, *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 12), v161);
				if (a5)
				{
					if (a5 == 1 && *(_DWORD*)(a1 + 80) && ((*(_BYTE*)(a3 + 52) & 4) != 0 || *(_DWORD*)(a3 + 40) == -1))
						v34 = *(_DWORD*)(a1 + 80);
					else
						v34 = *(_DWORD*)(a3 + 40);
				}
				v44[1] = v34;
				v45 = *(_DWORD*)(a3 + 32);
				v44[38] = a4;
				v44[12] = v45;
				v44[20] = (int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 268i64) << 23) >> 31;
				v46 = *(_DWORD*)(a1 + 92);
				sub_1400035B0();
				if (a4 && (v47 = sub_1403D90D0(qword_140C65898, a4), (v48 = v47) != 0) && !*(_QWORD*)(v47 + 5864))
				{
					v49 = sub_14018B280(64i64, 0);
					v50 = v49;
					if (v49)
					{
						*(_QWORD*)v49 = v44;
						v49[2] = v46;
						v49[3] = 12;
						*((_QWORD*)v49 + 2) = 0i64;
						*((_QWORD*)v49 + 3) = 0i64;
						*((_QWORD*)v49 + 4) = 0i64;
						*((_QWORD*)v49 + 5) = 0i64;
						*((_QWORD*)v49 + 6) = 0i64;
						*((_QWORD*)v49 + 7) = 0i64;
					}
					else
					{
					LABEL_298:
						v50 = 0i64;
					}
				LABEL_299:
					v153 = (int**)(v48 + 1464);
					if (!*((_QWORD*)v50 + 2))
					{
						*((_QWORD*)v50 + 2) = v153;
						*((_QWORD*)v50 + 3) = *v153;
						*v153 = v50;
						v154 = *((_QWORD*)v50 + 3);
						if (v154)
							*(_QWORD*)(v154 + 16) = v50 + 6;
					}
					if (v35)
					{
						if (!*((_QWORD*)v50 + 6))
						{
							*((_QWORD*)v50 + 6) = v35;
							*((_QWORD*)v50 + 7) = *v35;
							*v35 = v50;
							v155 = *((_QWORD*)v50 + 7);
							if (v155)
								*(_QWORD*)(v155 + 48) = v50 + 14;
						}
					}
					sub_1400035B0();
				}
				else
				{
					sub_1400035B0();
					v51 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
					v52 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
					dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
					if (v51 || (_DWORD)v52 == 0x3FFFFFFF)
						dword_140C8AF30 = 1;
					sub_140577510(v52, v44, (__int64*)v36);
					sub_14018B900((__int64)v44, 0);
				}
				return;
			default:
				return;
			}
		}
	}
}
// 1405439F0: variable 'v39' is possibly undefined
// 140543E08: variable 'v56' is possibly undefined
// 140544239: variable 'v89' is possibly undefined
// 140545067: variable 'v156' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C8AF30: using guessed type int dword_140C8AF30;


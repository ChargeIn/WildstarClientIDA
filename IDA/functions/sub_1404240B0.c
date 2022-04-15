#include "../winhttp.h"

//----- (00000001404240B0) ----------------------------------------------------
_QWORD* __fastcall sub_1404240B0(__int64 a1, _QWORD* a2, int a3, int* a4, int a5)
{
	int v6; // r15d
	__int64 v8; // rbx
	int* v9; // r14
	int* v10; // rax
	bool v11; // zf
	__int64 v12; // rax
	__int64 v13; // rax
	int* v14; // r14
	unsigned int v15; // r12d
	int* v16; // rax
	__int64 v17; // rax
	int* v18; // r15
	__int64 v19; // rdi
	signed __int64 v20; // rdi
	int* v21; // r14
	unsigned __int64 v22; // rdi
	int* v23; // rax
	__int64 v24; // rcx
	int v25; // eax
	unsigned __int64 v26; // rcx
	__int64* v27; // rax
	int* v28; // r8
	__int64 v29; // r9
	int* v30; // r14
	unsigned __int64 v31; // rdi
	__int64 v32; // rdi
	int* v33; // rcx
	signed __int64 v34; // rdx
	__int64 v35; // rax
	unsigned __int16* v36; // r14
	unsigned __int16 v37; // cx
	__int16 v38; // ax
	int* v39; // rdi
	__int16 v40; // dx
	unsigned __int64 v41; // rdi
	__int64* v42; // rax
	__int64 v43; // rcx
	__int64* v44; // rax
	int* v45; // rax
	__int64 v46; // rdx
	_WORD* v47; // r8
	__int64 v48; // r12
	int* v49; // rdi
	__int16 v50; // dx
	unsigned __int64 v51; // rdi
	__int64* v52; // rax
	__int64 v53; // rcx
	__int64* v54; // rax
	int* v55; // rax
	__int64 v56; // rdx
	_WORD* v57; // r8
	__int64 v58; // r12
	int* v59; // rdi
	__int16 v60; // dx
	unsigned __int64 v61; // rdi
	__int64* v62; // rax
	__int64 v63; // rcx
	__int64* v64; // rax
	int* v65; // rax
	__int64 v66; // rdx
	_WORD* v67; // r8
	__int64 v68; // r12
	int* v69; // rdi
	__int16 v70; // dx
	unsigned __int64 v71; // rdi
	__int64* v72; // rax
	__int64 v73; // rcx
	__int64* v74; // rax
	int* v75; // rax
	__int64 v76; // rdx
	_WORD* v77; // r8
	__int64 v78; // r12
	int* v79; // rdi
	__int16 v80; // dx
	unsigned __int64 v81; // rdi
	__int64* v82; // rax
	__int64 v83; // rcx
	__int64* v84; // rax
	int* v85; // rax
	__int64 v86; // rdx
	_WORD* v87; // r8
	__int64 v88; // r12
	int* v89; // rdi
	__int16 v90; // dx
	unsigned __int64 v91; // rdi
	__int64* v92; // rax
	__int64 v93; // rcx
	__int64* v94; // rax
	int* v95; // rax
	__int64 v96; // rdx
	_WORD* v97; // r8
	__int64 v98; // r12
	int* v99; // rdi
	__int16 v100; // dx
	unsigned __int64 v101; // rdi
	__int64* v102; // rax
	__int64 v103; // rcx
	__int64* v104; // rax
	int* v105; // rax
	__int64 v106; // rdx
	_WORD* v107; // r8
	__int64 v108; // r12
	int* v109; // rdi
	__int16 v110; // dx
	unsigned __int64 v111; // rdi
	__int64* v112; // rax
	__int64 v113; // rcx
	__int64* v114; // rax
	int* v115; // rax
	__int64 v116; // rdx
	_WORD* v117; // r8
	__int64 v118; // r12
	__int16 v119; // ax
	__int16 v120; // ax
	__int16 v121; // ax
	__int16 v122; // ax
	__int16 v123; // ax
	__int16 v124; // ax
	__int16 v125; // ax
	__int16 v126; // ax
	__int64 v127; // rax
	int* v128; // rdx
	__int64 v129; // rax
	__int64 v130; // rax
	__int64 v131; // rdi
	void* v132; // r8
	int* v133; // rdx
	int* v134; // rdi
	int* v135; // rax
	int* v136; // rdx
	__int64 v137; // rax
	__int64 v138; // rax
	unsigned __int16* v139; // rdi
	unsigned __int16 v140; // cx
	__int16 v141; // ax
	__int16 v142; // ax
	__int16 v143; // ax
	__int16 v144; // ax
	__int16 v145; // ax
	__int16 v146; // ax
	__int16 v147; // ax
	__int16 v148; // ax
	__int16 v149; // ax
	__int16 v150; // ax
	__int16 v151; // ax
	__int16 v152; // ax
	unsigned __int16 v153; // cx
	__int16 v154; // ax
	__int16 v155; // ax
	__int16 v156; // ax
	__int16 v157; // ax
	__int16 v158; // ax
	__int16 v159; // ax
	__int16 v160; // ax
	__int16 v161; // ax
	__int16 v162; // ax
	__int16 v163; // ax
	__int16 v164; // ax
	__int16 v165; // ax
	__int16 v166; // ax
	__int16 v167; // ax
	__int16 v168; // ax
	__int16 v169; // ax
	__int64 v170; // rax
	__int64 v171; // rax
	int* v172; // rdx
	__int64 v173; // rax
	__int64 v175; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v176; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v177; // [rsp+50h] [rbp-B0h] BYREF
	int v178; // [rsp+58h] [rbp-A8h]
	__int64 v179; // [rsp+60h] [rbp-A0h] BYREF
	int* v180; // [rsp+68h] [rbp-98h]
	int* v181; // [rsp+70h] [rbp-90h]
	int* v182; // [rsp+78h] [rbp-88h]
	const wchar_t* v183; // [rsp+80h] [rbp-80h] BYREF
	const wchar_t* v184; // [rsp+88h] [rbp-78h]
	const wchar_t* v185; // [rsp+90h] [rbp-70h]
	const wchar_t* v186; // [rsp+98h] [rbp-68h]
	int v187[132]; // [rsp+A0h] [rbp-60h] BYREF

	v6 = a3;
	v178 = a3;
	if (a5)
	{
		sub_140423060(a1, a2, a3, (__int64)a4);
		return a2;
	}
	v8 = 0i64;
	v9 = sub_14018B280(16i64, 0);
	v180 = v9;
	v181 = v9;
	v182 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	if (!a4 || (unsigned int)v6 > 3)
	{
		a2[1] = v9;
		a2[2] = v9;
		a2[3] = v9 + 4;
		return a2;
	}
	if ((int)sub_14001B370(
		v187,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"AddonSaveData") >= 0
		&& LOWORD(v187[0]))
	{
		v10 = v187;
		do
		{
			v11 = *((_WORD*)v10 + 1) == 0;
			v10 = (int*)((char*)v10 + 2);
		} while (!v11);
	}
	v12 = 0i64;
	if (LOWORD(v187[0]))
	{
		do
			++v12;
		while (*((_WORD*)v187 + v12));
	}
	if ((2 * v12) >> 1)
		sub_14001C310(&v179, v187, (int*)((char*)v187 + 2 * v12));
	else
		sub_1407DB590(v9, v187, 0i64);
	v13 = 0i64;
	do
		v11 = *((_WORD*)&unk_1409E8E54 + ++v13) == 0;
	while (!v11);
	sub_14001C310(&v179, (int*)&unk_1409E8E54, (int*)((char*)&unk_1409E8E54 + 2 * v13));
	if (v6 >= 1)
	{
		v14 = *(int**)(qword_140C635F0 + 5744);
		v15 = *(_DWORD*)(qword_140C635F0 + 5736);
		if (!v14 || !*(_WORD*)v14)
		{
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			v134 = sub_14018B280(2i64, 0);
			a2[1] = v134;
			a2[3] = (char*)v134 + 2;
			a2[2] = v134;
			sub_1407DB590(v134, dword_1409E8E3C, 0i64);
			a2[2] = v134;
			if (v134)
				*(_WORD*)v134 = 0;
			goto LABEL_240;
		}
		if ((dword_140DC2838 & 1) == 0)
		{
			qword_140DC2848 = 0i64;
			qword_140DC2850 = 0i64;
			qword_140DC2858 = 0i64;
			dword_140DC2838 |= 1u;
			v16 = sub_14018B280(16i64, 0);
			qword_140DC2848 = (__int64)v16;
			qword_140DC2850 = (__int64)v16;
			qword_140DC2858 = (__int64)(v16 + 4);
			if (v16)
				*(_WORD*)v16 = 0;
			sub_1407DD89C(sub_140950CA0);
		}
		if (dword_140C8AC44 != v15)
		{
			v17 = 0i64;
			dword_140C8AC44 = v15;
			v18 = 0i64;
			if (*(_WORD*)v14)
			{
				do
					++v17;
				while (*((_WORD*)v14 + v17));
			}
			v19 = (2 * v17) >> 1;
			if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v18 = sub_14018B280(2 * (v19 + 1), 0);
			v20 = 2 * v19;
			sub_1407DB590(v18, v14, v20);
			v21 = (int*)((char*)v18 + v20);
			if ((int*)((char*)v18 + v20))
				*(_WORD*)v21 = 0;
			v22 = v20 >> 1;
			if (!(((char*)v21 - (char*)v18) >> 1)
				|| (WORD1(v177) = 64, v23 = (int*)sub_14002C8A0(v18, (__int64)v21, v177), v23 == v21))
			{
				LODWORD(v24) = -1;
			}
			else
			{
				v24 = ((char*)v23 - (char*)v18) >> 1;
			}
			v25 = 3;
			if ((int)v24 < 3)
				v25 = v24;
			v26 = v25;
			if (v22 >= v25)
			{
				v177 = ((char*)v21 - (char*)v18) >> 1;
				v27 = &v177;
				v176 = v26;
				v28 = 0i64;
				if (v22 >= v26)
					v27 = (__int64*)&v176;
				v29 = 0i64;
				v30 = (int*)((char*)v18 + 2 * *v27);
				v31 = ((2 * *v27) >> 1) + 1;
				if (v31 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v32 = 2 * v31;
					v28 = sub_14018B280(v32, 0);
					v29 = (__int64)v28 + v32;
				}
				v33 = v28;
				if (v18 != v30)
				{
					v34 = (char*)v18 - (char*)v28;
					do
					{
						if (v33)
							*(_WORD*)v33 = *(_WORD*)((char*)v33 + v34);
						v33 = (int*)((char*)v33 + 2);
					} while ((int*)((char*)v33 + v34) != v30);
				}
				if (v33)
					*(_WORD*)v33 = 0;
				v35 = qword_140DC2848;
				qword_140DC2850 = (__int64)v33;
				qword_140DC2858 = v29;
				qword_140DC2848 = (__int64)v28;
				if (v35)
					sub_14018B900(v35, 0);
			}
			else
			{
				sub_14001C480((__int64)&qword_140DC2840, v18, v21);
			}
			sub_14018EFA0(&v183, (__int64)L"%08x", v15);
			v36 = (unsigned __int16*)v184;
			v37 = v184[7];
			if (v37 == 48)
			{
				v38 = sub_140011B20(v184[6]);
				v39 = (int*)qword_140DC2850;
				v40 = v38;
				LOWORD(v177) = v38;
				if (qword_140DC2850 + 2 == qword_140DC2858)
				{
					v176 = 1i64;
					v41 = (qword_140DC2850 - qword_140DC2848) >> 1;
					v42 = (__int64*)&v176;
					v175 = v41;
					if (v41)
						v42 = &v175;
					v43 = *v42;
					v175 = (qword_140DC2850 - qword_140DC2848) >> 1;
					v44 = &v175;
					v176 = v41 + v43;
					if (v41 + v43 >= v41)
						v44 = (__int64*)&v176;
					v175 = 2 * (*v44 + 1);
					v45 = sub_14018B280(v175, 0);
					v46 = qword_140DC2850;
					v47 = (_WORD*)qword_140DC2848;
					v48 = (__int64)v45;
					v39 = v45;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v39)
								*(_WORD*)v39 = *v47;
							++v47;
							v39 = (int*)((char*)v39 + 2);
						} while (v47 != (_WORD*)v46);
						v47 = (_WORD*)qword_140DC2848;
					}
					if (v39)
					{
						*(_WORD*)v39 = 0;
						v47 = (_WORD*)qword_140DC2848;
					}
					if (v47)
						sub_14018B900((__int64)v47, 0);
					v40 = v177;
					qword_140DC2848 = v48;
					qword_140DC2850 = (__int64)v39;
					qword_140DC2858 = v48 + v175;
				}
				if (v39 != (int*)-2i64)
				{
					*((_WORD*)v39 + 1) = 0;
					v39 = (int*)qword_140DC2850;
				}
				*(_WORD*)v39 = v40;
				qword_140DC2850 += 2i64;
				v49 = (int*)qword_140DC2850;
				v50 = sub_140011B20(*v36);
				LOWORD(v177) = v50;
				if ((int*)((char*)v49 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v51 = ((__int64)v49 - qword_140DC2848) >> 1;
					v52 = &v175;
					v176 = v51;
					if (v51)
						v52 = (__int64*)&v176;
					v53 = *v52;
					v175 = v51;
					v54 = &v175;
					v176 = v51 + v53;
					if (v51 + v53 >= v51)
						v54 = (__int64*)&v176;
					v175 = 2 * (*v54 + 1);
					v55 = sub_14018B280(v175, 0);
					v56 = qword_140DC2850;
					v57 = (_WORD*)qword_140DC2848;
					v58 = (__int64)v55;
					v49 = v55;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v49)
								*(_WORD*)v49 = *v57;
							++v57;
							v49 = (int*)((char*)v49 + 2);
						} while (v57 != (_WORD*)v56);
						v57 = (_WORD*)qword_140DC2848;
					}
					if (v49)
					{
						*(_WORD*)v49 = 0;
						v57 = (_WORD*)qword_140DC2848;
					}
					if (v57)
						sub_14018B900((__int64)v57, 0);
					v50 = v177;
					qword_140DC2848 = v58;
					qword_140DC2850 = (__int64)v49;
					qword_140DC2858 = v58 + v175;
				}
				if (v49 != (int*)-2i64)
				{
					*((_WORD*)v49 + 1) = 0;
					v49 = (int*)qword_140DC2850;
				}
				*(_WORD*)v49 = v50;
				qword_140DC2850 += 2i64;
				v59 = (int*)qword_140DC2850;
				v60 = sub_140011B20(v36[2]);
				LOWORD(v177) = v60;
				if ((int*)((char*)v59 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v61 = ((__int64)v59 - qword_140DC2848) >> 1;
					v62 = &v175;
					v176 = v61;
					if (v61)
						v62 = (__int64*)&v176;
					v63 = *v62;
					v175 = v61;
					v64 = &v175;
					v176 = v61 + v63;
					if (v61 + v63 >= v61)
						v64 = (__int64*)&v176;
					v175 = 2 * (*v64 + 1);
					v65 = sub_14018B280(v175, 0);
					v66 = qword_140DC2850;
					v67 = (_WORD*)qword_140DC2848;
					v68 = (__int64)v65;
					v59 = v65;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v59)
								*(_WORD*)v59 = *v67;
							++v67;
							v59 = (int*)((char*)v59 + 2);
						} while (v67 != (_WORD*)v66);
						v67 = (_WORD*)qword_140DC2848;
					}
					if (v59)
					{
						*(_WORD*)v59 = 0;
						v67 = (_WORD*)qword_140DC2848;
					}
					if (v67)
						sub_14018B900((__int64)v67, 0);
					v60 = v177;
					qword_140DC2848 = v68;
					qword_140DC2850 = (__int64)v59;
					qword_140DC2858 = v68 + v175;
				}
				if (v59 != (int*)-2i64)
				{
					*((_WORD*)v59 + 1) = 0;
					v59 = (int*)qword_140DC2850;
				}
				*(_WORD*)v59 = v60;
				qword_140DC2850 += 2i64;
				v69 = (int*)qword_140DC2850;
				v70 = sub_140011B20(v36[1]);
				LOWORD(v177) = v70;
				if ((int*)((char*)v69 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v71 = ((__int64)v69 - qword_140DC2848) >> 1;
					v72 = &v175;
					v176 = v71;
					if (v71)
						v72 = (__int64*)&v176;
					v73 = *v72;
					v175 = v71;
					v74 = &v175;
					v176 = v71 + v73;
					if (v71 + v73 >= v71)
						v74 = (__int64*)&v176;
					v175 = 2 * (*v74 + 1);
					v75 = sub_14018B280(v175, 0);
					v76 = qword_140DC2850;
					v77 = (_WORD*)qword_140DC2848;
					v78 = (__int64)v75;
					v69 = v75;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v69)
								*(_WORD*)v69 = *v77;
							++v77;
							v69 = (int*)((char*)v69 + 2);
						} while (v77 != (_WORD*)v76);
						v77 = (_WORD*)qword_140DC2848;
					}
					if (v69)
					{
						*(_WORD*)v69 = 0;
						v77 = (_WORD*)qword_140DC2848;
					}
					if (v77)
						sub_14018B900((__int64)v77, 0);
					v70 = v177;
					qword_140DC2848 = v78;
					qword_140DC2850 = (__int64)v69;
					qword_140DC2858 = v78 + v175;
				}
				if (v69 != (int*)-2i64)
				{
					*((_WORD*)v69 + 1) = 0;
					v69 = (int*)qword_140DC2850;
				}
				*(_WORD*)v69 = v70;
				qword_140DC2850 += 2i64;
				v79 = (int*)qword_140DC2850;
				v80 = sub_140011B20(v36[7]);
				LOWORD(v177) = v80;
				if ((int*)((char*)v79 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v81 = ((__int64)v79 - qword_140DC2848) >> 1;
					v82 = &v175;
					v176 = v81;
					if (v81)
						v82 = (__int64*)&v176;
					v83 = *v82;
					v175 = v81;
					v84 = &v175;
					v176 = v81 + v83;
					if (v81 + v83 >= v81)
						v84 = (__int64*)&v176;
					v175 = 2 * (*v84 + 1);
					v85 = sub_14018B280(v175, 0);
					v86 = qword_140DC2850;
					v87 = (_WORD*)qword_140DC2848;
					v88 = (__int64)v85;
					v79 = v85;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v79)
								*(_WORD*)v79 = *v87;
							++v87;
							v79 = (int*)((char*)v79 + 2);
						} while (v87 != (_WORD*)v86);
						v87 = (_WORD*)qword_140DC2848;
					}
					if (v79)
					{
						*(_WORD*)v79 = 0;
						v87 = (_WORD*)qword_140DC2848;
					}
					if (v87)
						sub_14018B900((__int64)v87, 0);
					v80 = v177;
					qword_140DC2848 = v88;
					qword_140DC2850 = (__int64)v79;
					qword_140DC2858 = v88 + v175;
				}
				if (v79 != (int*)-2i64)
				{
					*((_WORD*)v79 + 1) = 0;
					v79 = (int*)qword_140DC2850;
				}
				*(_WORD*)v79 = v80;
				qword_140DC2850 += 2i64;
				v89 = (int*)qword_140DC2850;
				v90 = sub_140011B20(v36[3]);
				LOWORD(v177) = v90;
				if ((int*)((char*)v89 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v91 = ((__int64)v89 - qword_140DC2848) >> 1;
					v92 = &v175;
					v176 = v91;
					if (v91)
						v92 = (__int64*)&v176;
					v93 = *v92;
					v175 = v91;
					v94 = &v175;
					v176 = v91 + v93;
					if (v91 + v93 >= v91)
						v94 = (__int64*)&v176;
					v175 = 2 * (*v94 + 1);
					v95 = sub_14018B280(v175, 0);
					v96 = qword_140DC2850;
					v97 = (_WORD*)qword_140DC2848;
					v98 = (__int64)v95;
					v89 = v95;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v89)
								*(_WORD*)v89 = *v97;
							++v97;
							v89 = (int*)((char*)v89 + 2);
						} while (v97 != (_WORD*)v96);
						v97 = (_WORD*)qword_140DC2848;
					}
					if (v89)
					{
						*(_WORD*)v89 = 0;
						v97 = (_WORD*)qword_140DC2848;
					}
					if (v97)
						sub_14018B900((__int64)v97, 0);
					v90 = v177;
					qword_140DC2848 = v98;
					qword_140DC2850 = (__int64)v89;
					qword_140DC2858 = v98 + v175;
				}
				if (v89 != (int*)-2i64)
				{
					*((_WORD*)v89 + 1) = 0;
					v89 = (int*)qword_140DC2850;
				}
				*(_WORD*)v89 = v90;
				qword_140DC2850 += 2i64;
				v99 = (int*)qword_140DC2850;
				v100 = sub_140011B20(v36[5]);
				LOWORD(v177) = v100;
				if ((int*)((char*)v99 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v101 = ((__int64)v99 - qword_140DC2848) >> 1;
					v102 = &v175;
					v176 = v101;
					if (v101)
						v102 = (__int64*)&v176;
					v103 = *v102;
					v175 = v101;
					v104 = &v175;
					v176 = v101 + v103;
					if (v101 + v103 >= v101)
						v104 = (__int64*)&v176;
					v175 = 2 * (*v104 + 1);
					v105 = sub_14018B280(v175, 0);
					v106 = qword_140DC2850;
					v107 = (_WORD*)qword_140DC2848;
					v108 = (__int64)v105;
					v99 = v105;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v99)
								*(_WORD*)v99 = *v107;
							++v107;
							v99 = (int*)((char*)v99 + 2);
						} while (v107 != (_WORD*)v106);
						v107 = (_WORD*)qword_140DC2848;
					}
					if (v99)
					{
						*(_WORD*)v99 = 0;
						v107 = (_WORD*)qword_140DC2848;
					}
					if (v107)
						sub_14018B900((__int64)v107, 0);
					v100 = v177;
					qword_140DC2848 = v108;
					qword_140DC2850 = (__int64)v99;
					qword_140DC2858 = v108 + v175;
				}
				if (v99 != (int*)-2i64)
				{
					*((_WORD*)v99 + 1) = 0;
					v99 = (int*)qword_140DC2850;
				}
				*(_WORD*)v99 = v100;
				qword_140DC2850 += 2i64;
				v109 = (int*)qword_140DC2850;
				v110 = sub_140011B20(v36[4]);
				LOWORD(v177) = v110;
				if ((int*)((char*)v109 + 2) == (int*)qword_140DC2858)
				{
					v175 = 1i64;
					v111 = ((__int64)v109 - qword_140DC2848) >> 1;
					v112 = &v175;
					v176 = v111;
					if (v111)
						v112 = (__int64*)&v176;
					v113 = *v112;
					v175 = v111;
					v114 = &v175;
					v176 = v111 + v113;
					if (v111 + v113 >= v111)
						v114 = (__int64*)&v176;
					v175 = 2 * (*v114 + 1);
					v115 = sub_14018B280(v175, 0);
					v116 = qword_140DC2850;
					v117 = (_WORD*)qword_140DC2848;
					v118 = (__int64)v115;
					v109 = v115;
					if (qword_140DC2848 != qword_140DC2850)
					{
						do
						{
							if (v109)
								*(_WORD*)v109 = *v117;
							++v117;
							v109 = (int*)((char*)v109 + 2);
						} while (v117 != (_WORD*)v116);
						v117 = (_WORD*)qword_140DC2848;
					}
					if (v109)
					{
						*(_WORD*)v109 = 0;
						v117 = (_WORD*)qword_140DC2848;
					}
					if (v117)
						sub_14018B900((__int64)v117, 0);
					v110 = v177;
					qword_140DC2848 = v118;
					qword_140DC2850 = (__int64)v109;
					qword_140DC2858 = v118 + v175;
				}
				if (v109 != (int*)-2i64)
				{
					*((_WORD*)v109 + 1) = 0;
					v109 = (int*)qword_140DC2850;
				}
				*(_WORD*)v109 = v110;
				qword_140DC2850 += 2i64;
			}
			else
			{
				v119 = sub_140011B20(v37);
				sub_1400A7EA0(&qword_140DC2840, v119);
				v120 = sub_140011B20(*v36);
				sub_1400A7EA0(&qword_140DC2840, v120);
				v121 = sub_140011B20(v36[2]);
				sub_1400A7EA0(&qword_140DC2840, v121);
				v122 = sub_140011B20(v36[1]);
				sub_1400A7EA0(&qword_140DC2840, v122);
				v123 = sub_140011B20(v36[6]);
				sub_1400A7EA0(&qword_140DC2840, v123);
				v124 = sub_140011B20(v36[3]);
				sub_1400A7EA0(&qword_140DC2840, v124);
				v125 = sub_140011B20(v36[5]);
				sub_1400A7EA0(&qword_140DC2840, v125);
				v126 = sub_140011B20(v36[4]);
				sub_1400A7EA0(&qword_140DC2840, v126);
			}
			sub_14018B900((__int64)v36, 0);
			if (v18)
				sub_14018B900((__int64)v18, 0);
			v6 = v178;
		}
		sub_14001C310(&v179, (int*)qword_140DC2848, (int*)qword_140DC2850);
		v127 = 0i64;
		do
			v11 = *((_WORD*)&unk_1409E8E04 + ++v127) == 0;
		while (!v11);
		sub_14001C310(&v179, (int*)&unk_1409E8E04, (int*)((char*)&unk_1409E8E04 + 2 * v127));
	}
	if (v6 >= 2)
	{
		v128 = *(int**)(qword_140C635F0 + 5752);
		if (!v128 || !*(_WORD*)v128)
		{
			v132 = &unk_1409E8EBC;
			v133 = (int*)&unk_1409E8EBC;
			goto LABEL_239;
		}
		v129 = 0i64;
		do
			v11 = *((_WORD*)v128 + ++v129) == 0;
		while (!v11);
		sub_14001C310(&v179, v128, (int*)((char*)v128 + 2 * v129));
		v130 = 0i64;
		do
			v11 = *((_WORD*)&unk_1409E8E9C + ++v130) == 0;
		while (!v11);
		sub_14001C310(&v179, (int*)&unk_1409E8E9C, (int*)((char*)&unk_1409E8E9C + 2 * v130));
	}
	if (v6 >= 3)
	{
		v131 = *(_QWORD*)(qword_140C635F0 + 5792);
		if (!v131)
		{
			v132 = &unk_1409E8E84;
			v133 = (int*)&unk_1409E8E84;
		LABEL_239:
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			sub_14001C1B0(a2, v133, (__int64)v132);
		LABEL_240:
			if (v180)
				sub_14018B900((__int64)v180, 0);
			return a2;
		}
		if ((dword_140DC2838 & 2) == 0)
		{
			qword_140DC2868 = 0i64;
			qword_140DC2870 = 0i64;
			qword_140DC2878 = 0i64;
			dword_140DC2838 |= 2u;
			v135 = sub_14018B280(16i64, 0);
			qword_140DC2868 = (__int64)v135;
			qword_140DC2870 = (__int64)v135;
			qword_140DC2878 = (__int64)(v135 + 4);
			if (v135)
				*(_WORD*)v135 = 0;
			sub_1407DD89C(sub_140950C70);
		}
		if (qword_140C8AC38 != v131)
		{
			qword_140C8AC38 = v131;
			v136 = *(int**)(qword_140C65898 + 136);
			if (!v136 || !*(_WORD*)v136)
			{
				v132 = &unk_1409E8E6C;
				v133 = (int*)&unk_1409E8E6C;
				goto LABEL_239;
			}
			v137 = 0i64;
			do
				v11 = *((_WORD*)v136 + ++v137) == 0;
			while (!v11);
			sub_14001C480((__int64)&qword_140DC2860, v136, (int*)((char*)v136 + 2 * v137));
			v138 = 0i64;
			do
				v11 = *((_WORD*)&unk_1409E8DEC + ++v138) == 0;
			while (!v11);
			sub_14001C310(&qword_140DC2860, (int*)&unk_1409E8DEC, (int*)((char*)&unk_1409E8DEC + 2 * v138));
			sub_14018EFA0(&v183, (__int64)L"%016llx", v131);
			v139 = (unsigned __int16*)v184;
			v140 = v184[7];
			if (v140 == 48)
			{
				v141 = sub_140011B20(v184[6]);
				sub_1400A7EA0(&qword_140DC2860, v141);
				v142 = sub_140011B20(*v139);
				sub_1400A7EA0(&qword_140DC2860, v142);
				v143 = sub_140011B20(v139[2]);
				sub_1400A7EA0(&qword_140DC2860, v143);
				v144 = sub_140011B20(v139[1]);
				sub_1400A7EA0(&qword_140DC2860, v144);
				v145 = sub_140011B20(v139[7]);
				sub_1400A7EA0(&qword_140DC2860, v145);
				v146 = sub_140011B20(v139[3]);
				sub_1400A7EA0(&qword_140DC2860, v146);
				v147 = sub_140011B20(v139[5]);
				sub_1400A7EA0(&qword_140DC2860, v147);
				v148 = sub_140011B20(v139[4]);
				sub_1400A7EA0(&qword_140DC2860, v148);
				v149 = sub_140011B20(v139[14]);
				sub_1400A7EA0(&qword_140DC2860, v149);
				v150 = sub_140011B20(v139[8]);
				sub_1400A7EA0(&qword_140DC2860, v150);
				v151 = sub_140011B20(v139[10]);
				sub_1400A7EA0(&qword_140DC2860, v151);
				v152 = sub_140011B20(v139[9]);
				sub_1400A7EA0(&qword_140DC2860, v152);
				v153 = v139[15];
			}
			else
			{
				v154 = sub_140011B20(v140);
				sub_1400A7EA0(&qword_140DC2860, v154);
				v155 = sub_140011B20(*v139);
				sub_1400A7EA0(&qword_140DC2860, v155);
				v156 = sub_140011B20(v139[2]);
				sub_1400A7EA0(&qword_140DC2860, v156);
				v157 = sub_140011B20(v139[1]);
				sub_1400A7EA0(&qword_140DC2860, v157);
				v158 = sub_140011B20(v139[6]);
				sub_1400A7EA0(&qword_140DC2860, v158);
				v159 = sub_140011B20(v139[3]);
				sub_1400A7EA0(&qword_140DC2860, v159);
				v160 = sub_140011B20(v139[5]);
				sub_1400A7EA0(&qword_140DC2860, v160);
				v161 = sub_140011B20(v139[4]);
				sub_1400A7EA0(&qword_140DC2860, v161);
				v162 = sub_140011B20(v139[15]);
				sub_1400A7EA0(&qword_140DC2860, v162);
				v163 = sub_140011B20(v139[8]);
				sub_1400A7EA0(&qword_140DC2860, v163);
				v164 = sub_140011B20(v139[10]);
				sub_1400A7EA0(&qword_140DC2860, v164);
				v165 = sub_140011B20(v139[9]);
				sub_1400A7EA0(&qword_140DC2860, v165);
				v153 = v139[14];
			}
			v166 = sub_140011B20(v153);
			sub_1400A7EA0(&qword_140DC2860, v166);
			v167 = sub_140011B20(v139[11]);
			sub_1400A7EA0(&qword_140DC2860, v167);
			v168 = sub_140011B20(v139[13]);
			sub_1400A7EA0(&qword_140DC2860, v168);
			v169 = sub_140011B20(v139[12]);
			sub_1400A7EA0(&qword_140DC2860, v169);
			sub_14018B900((__int64)v139, 0);
		}
		sub_14001C310(&v179, (int*)qword_140DC2868, (int*)qword_140DC2870);
		v170 = 0i64;
		do
			v11 = *((_WORD*)&unk_1409E8DD4 + ++v170) == 0;
		while (!v11);
		sub_14001C310(&v179, (int*)&unk_1409E8DD4, (int*)((char*)&unk_1409E8DD4 + 2 * v170));
	}
	v183 = L"_Gen";
	v184 = L"_Acct";
	v185 = L"_Rlm";
	v186 = L"_Char";
	v171 = 0i64;
	if (*(_WORD*)a4)
	{
		do
			++v171;
		while (*((_WORD*)a4 + v171));
	}
	sub_14001C310(&v179, a4, (int*)((char*)a4 + 2 * v171));
	v172 = (int*)(&v183)[v6];
	v173 = 0i64;
	if (*(_WORD*)v172)
	{
		do
			++v173;
		while (*((_WORD*)v172 + v173));
	}
	sub_14001C310(&v179, v172, (int*)((char*)v172 + 2 * v173));
	do
		v11 = aXml_0[++v8] == 0;
	while (!v11);
	sub_14001C310(&v179, (int*)L".xml", (int*)&aXml_0[v8]);
	a2[1] = v180;
	a2[2] = v181;
	a2[3] = v182;
	return a2;
}
// 1409E8E3C: using guessed type int dword_1409E8E3C[6];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B005B8: using guessed type wchar_t aAddonsavedata_0[14];
// 140B00660: using guessed type wchar_t aGen_0[5];
// 140B00670: using guessed type wchar_t a016llx_0[8];
// 140B00680: using guessed type wchar_t aXml_0[5];
// 140B00690: using guessed type wchar_t aChar_0[6];
// 140B006A0: using guessed type wchar_t aRlm_0[5];
// 140B006B0: using guessed type wchar_t aAcct_0[6];
// 140B006C0: using guessed type wchar_t a08x_9[5];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AC38: using guessed type __int64 qword_140C8AC38;
// 140C8AC44: using guessed type int dword_140C8AC44;
// 140DC2838: using guessed type int dword_140DC2838;
// 140DC2840: using guessed type _QWORD qword_140DC2840;
// 140DC2848: using guessed type __int64 qword_140DC2848;
// 140DC2850: using guessed type __int64 qword_140DC2850;
// 140DC2858: using guessed type __int64 qword_140DC2858;
// 140DC2860: using guessed type _QWORD qword_140DC2860;
// 140DC2868: using guessed type __int64 qword_140DC2868;
// 140DC2870: using guessed type __int64 qword_140DC2870;
// 140DC2878: using guessed type __int64 qword_140DC2878;


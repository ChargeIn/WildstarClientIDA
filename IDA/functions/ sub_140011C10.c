#include "../winhttp.h"

//----- (0000000140011C10) ----------------------------------------------------
void __fastcall sub_140011C10(__int64 a1, int** a2)
{
	unsigned __int16* v3; // r14
	unsigned __int16 v4; // cx
	__int16 v5; // ax
	int* v6; // rbp
	__int16 v7; // r12
	__int64 v8; // r15
	__int64 v9; // rax
	__int16 v10; // ax
	int* v11; // rbp
	__int16 v12; // r12
	__int64 v13; // r15
	__int64 v14; // rax
	__int16 v15; // ax
	int* v16; // rbp
	__int16 v17; // r12
	__int64 v18; // r15
	__int64 v19; // rax
	__int16 v20; // ax
	int* v21; // rbp
	__int16 v22; // r12
	__int64 v23; // r15
	__int64 v24; // rax
	__int16 v25; // ax
	int* v26; // rbp
	__int16 v27; // r12
	__int64 v28; // r15
	__int64 v29; // rax
	__int16 v30; // ax
	int* v31; // rbp
	__int16 v32; // r12
	__int64 v33; // r15
	__int64 v34; // rax
	__int16 v35; // ax
	int* v36; // rbp
	__int16 v37; // r12
	__int64 v38; // r15
	__int64 v39; // rax
	__int16 v40; // ax
	int* v41; // rbp
	__int16 v42; // r12
	__int64 v43; // r15
	__int64 v44; // rax
	__int16 v45; // ax
	int* v46; // rbp
	__int16 v47; // r12
	__int64 v48; // r15
	__int64 v49; // rax
	__int16 v50; // ax
	int* v51; // rbp
	__int16 v52; // r12
	__int64 v53; // r15
	__int64 v54; // rax
	__int16 v55; // ax
	int* v56; // rbp
	__int16 v57; // r12
	__int64 v58; // r15
	__int64 v59; // rax
	__int16 v60; // ax
	int* v61; // rbp
	__int16 v62; // r12
	__int64 v63; // r15
	__int64 v64; // rax
	__int16 v65; // ax
	int* v66; // rbp
	__int16 v67; // r12
	__int64 v68; // r15
	__int64 v69; // rax
	__int16 v70; // ax
	int* v71; // rbp
	__int16 v72; // r12
	__int64 v73; // r15
	__int64 v74; // rax
	__int16 v75; // ax
	int* v76; // rbp
	__int16 v77; // r12
	__int64 v78; // r15
	__int64 v79; // rax
	__int16 v80; // ax
	int* v81; // rbp
	__int16 v82; // r12
	__int64 v83; // r15
	__int16 v84; // ax
	int* v85; // rbp
	__int16 v86; // r12
	__int64 v87; // r15
	__int64 v88; // rax
	__int16 v89; // ax
	int* v90; // rbp
	__int16 v91; // r12
	__int64 v92; // r15
	__int64 v93; // rax
	__int16 v94; // ax
	int* v95; // rbp
	__int16 v96; // r12
	__int64 v97; // r15
	__int64 v98; // rax
	__int16 v99; // ax
	int* v100; // rbp
	__int16 v101; // r12
	__int64 v102; // r15
	__int64 v103; // rax
	__int16 v104; // ax
	int* v105; // rbp
	__int16 v106; // r12
	__int64 v107; // r15
	__int64 v108; // rax
	__int16 v109; // ax
	int* v110; // rbp
	__int16 v111; // r12
	__int64 v112; // r15
	__int64 v113; // rax
	__int16 v114; // ax
	int* v115; // rbp
	__int16 v116; // r12
	__int64 v117; // r15
	__int64 v118; // rax
	__int16 v119; // ax
	int* v120; // rbp
	__int16 v121; // r12
	__int64 v122; // r15
	__int64 v123; // rax
	__int16 v124; // ax
	int* v125; // rbp
	__int16 v126; // r12
	__int64 v127; // r15
	__int64 v128; // rax
	__int16 v129; // ax
	int* v130; // rbp
	__int16 v131; // r12
	__int64 v132; // r15
	__int64 v133; // rax
	__int16 v134; // ax
	int* v135; // rbp
	__int16 v136; // r12
	__int64 v137; // r15
	__int64 v138; // rax
	__int16 v139; // ax
	int* v140; // rbp
	__int16 v141; // r12
	__int64 v142; // r15
	__int64 v143; // rax
	__int16 v144; // ax
	int* v145; // rbp
	__int16 v146; // r12
	__int64 v147; // r15
	__int64 v148; // rax
	__int16 v149; // ax
	int* v150; // rbp
	__int16 v151; // r12
	__int64 v152; // r15
	__int64 v153; // rax
	__int16 v154; // ax
	int* v155; // rbp
	__int16 v156; // r12
	__int64 v157; // r15
	__int64 v158; // rax
	__int16 v159; // ax
	__int64 v160; // rax
	__int64 v161; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int16* v162; // [rsp+28h] [rbp-30h]

	sub_14018EFA0(&v161, (__int64)L"%016llx", a1);
	v3 = v162;
	v4 = v162[7];
	if (v4 != 48)
	{
		v84 = sub_140011B20(v4);
		v85 = *a2;
		v86 = v84;
		if (*a2)
			v87 = *((_QWORD*)v85 - 1);
		else
			v87 = 0i64;
		v88 = sub_14018D140(*a2, v87 + 1);
		*(_WORD*)(v88 + 2 * v87) = v86;
		*(_WORD*)(v88 + 2 * v87 + 2) = 0;
		*a2 = (int*)v88;
		if (v85 != (int*)v88 && v85)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v85 - 2) + 8i64))(v85 - 4);
		v89 = sub_140011B20(*v3);
		v90 = *a2;
		v91 = v89;
		if (*a2)
			v92 = *((_QWORD*)v90 - 1);
		else
			v92 = 0i64;
		v93 = sub_14018D140(*a2, v92 + 1);
		*(_WORD*)(v93 + 2 * v92) = v91;
		*(_WORD*)(v93 + 2 * v92 + 2) = 0;
		*a2 = (int*)v93;
		if (v90 != (int*)v93 && v90)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v90 - 2) + 8i64))(v90 - 4);
		v94 = sub_140011B20(v3[2]);
		v95 = *a2;
		v96 = v94;
		if (*a2)
			v97 = *((_QWORD*)v95 - 1);
		else
			v97 = 0i64;
		v98 = sub_14018D140(*a2, v97 + 1);
		*(_WORD*)(v98 + 2 * v97) = v96;
		*(_WORD*)(v98 + 2 * v97 + 2) = 0;
		*a2 = (int*)v98;
		if (v95 != (int*)v98 && v95)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v95 - 2) + 8i64))(v95 - 4);
		v99 = sub_140011B20(v3[1]);
		v100 = *a2;
		v101 = v99;
		if (*a2)
			v102 = *((_QWORD*)v100 - 1);
		else
			v102 = 0i64;
		v103 = sub_14018D140(*a2, v102 + 1);
		*(_WORD*)(v103 + 2 * v102) = v101;
		*(_WORD*)(v103 + 2 * v102 + 2) = 0;
		*a2 = (int*)v103;
		if (v100 != (int*)v103 && v100)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v100 - 2) + 8i64))(v100 - 4);
		v104 = sub_140011B20(v3[6]);
		v105 = *a2;
		v106 = v104;
		if (*a2)
			v107 = *((_QWORD*)v105 - 1);
		else
			v107 = 0i64;
		v108 = sub_14018D140(*a2, v107 + 1);
		*(_WORD*)(v108 + 2 * v107) = v106;
		*(_WORD*)(v108 + 2 * v107 + 2) = 0;
		*a2 = (int*)v108;
		if (v105 != (int*)v108 && v105)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v105 - 2) + 8i64))(v105 - 4);
		v109 = sub_140011B20(v3[3]);
		v110 = *a2;
		v111 = v109;
		if (*a2)
			v112 = *((_QWORD*)v110 - 1);
		else
			v112 = 0i64;
		v113 = sub_14018D140(*a2, v112 + 1);
		*(_WORD*)(v113 + 2 * v112) = v111;
		*(_WORD*)(v113 + 2 * v112 + 2) = 0;
		*a2 = (int*)v113;
		if (v110 != (int*)v113 && v110)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v110 - 2) + 8i64))(v110 - 4);
		v114 = sub_140011B20(v3[5]);
		v115 = *a2;
		v116 = v114;
		if (*a2)
			v117 = *((_QWORD*)v115 - 1);
		else
			v117 = 0i64;
		v118 = sub_14018D140(*a2, v117 + 1);
		*(_WORD*)(v118 + 2 * v117) = v116;
		*(_WORD*)(v118 + 2 * v117 + 2) = 0;
		*a2 = (int*)v118;
		if (v115 != (int*)v118 && v115)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v115 - 2) + 8i64))(v115 - 4);
		v119 = sub_140011B20(v3[4]);
		v120 = *a2;
		v121 = v119;
		if (*a2)
			v122 = *((_QWORD*)v120 - 1);
		else
			v122 = 0i64;
		v123 = sub_14018D140(*a2, v122 + 1);
		*(_WORD*)(v123 + 2 * v122) = v121;
		*(_WORD*)(v123 + 2 * v122 + 2) = 0;
		*a2 = (int*)v123;
		if (v120 != (int*)v123 && v120)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v120 - 2) + 8i64))(v120 - 4);
		v124 = sub_140011B20(v3[15]);
		v125 = *a2;
		v126 = v124;
		if (*a2)
			v127 = *((_QWORD*)v125 - 1);
		else
			v127 = 0i64;
		v128 = sub_14018D140(*a2, v127 + 1);
		*(_WORD*)(v128 + 2 * v127) = v126;
		*(_WORD*)(v128 + 2 * v127 + 2) = 0;
		*a2 = (int*)v128;
		if (v125 != (int*)v128 && v125)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v125 - 2) + 8i64))(v125 - 4);
		v129 = sub_140011B20(v3[8]);
		v130 = *a2;
		v131 = v129;
		if (*a2)
			v132 = *((_QWORD*)v130 - 1);
		else
			v132 = 0i64;
		v133 = sub_14018D140(*a2, v132 + 1);
		*(_WORD*)(v133 + 2 * v132) = v131;
		*(_WORD*)(v133 + 2 * v132 + 2) = 0;
		*a2 = (int*)v133;
		if (v130 != (int*)v133 && v130)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v130 - 2) + 8i64))(v130 - 4);
		v134 = sub_140011B20(v3[10]);
		v135 = *a2;
		v136 = v134;
		if (*a2)
			v137 = *((_QWORD*)v135 - 1);
		else
			v137 = 0i64;
		v138 = sub_14018D140(*a2, v137 + 1);
		*(_WORD*)(v138 + 2 * v137) = v136;
		*(_WORD*)(v138 + 2 * v137 + 2) = 0;
		*a2 = (int*)v138;
		if (v135 != (int*)v138 && v135)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v135 - 2) + 8i64))(v135 - 4);
		v139 = sub_140011B20(v3[9]);
		v140 = *a2;
		v141 = v139;
		if (*a2)
			v142 = *((_QWORD*)v140 - 1);
		else
			v142 = 0i64;
		v143 = sub_14018D140(*a2, v142 + 1);
		*(_WORD*)(v143 + 2 * v142) = v141;
		*(_WORD*)(v143 + 2 * v142 + 2) = 0;
		*a2 = (int*)v143;
		if (v140 != (int*)v143 && v140)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v140 - 2) + 8i64))(v140 - 4);
		v144 = sub_140011B20(v3[14]);
		v145 = *a2;
		v146 = v144;
		if (*a2)
			v147 = *((_QWORD*)v145 - 1);
		else
			v147 = 0i64;
		v148 = sub_14018D140(*a2, v147 + 1);
		*(_WORD*)(v148 + 2 * v147) = v146;
		*(_WORD*)(v148 + 2 * v147 + 2) = 0;
		*a2 = (int*)v148;
		if (v145 != (int*)v148 && v145)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v145 - 2) + 8i64))(v145 - 4);
		v149 = sub_140011B20(v3[11]);
		v150 = *a2;
		v151 = v149;
		if (*a2)
			v152 = *((_QWORD*)v150 - 1);
		else
			v152 = 0i64;
		v153 = sub_14018D140(*a2, v152 + 1);
		*(_WORD*)(v153 + 2 * v152) = v151;
		*(_WORD*)(v153 + 2 * v152 + 2) = 0;
		*a2 = (int*)v153;
		if (v150 != (int*)v153 && v150)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v150 - 2) + 8i64))(v150 - 4);
		v154 = sub_140011B20(v3[13]);
		v155 = *a2;
		v156 = v154;
		if (*a2)
			v157 = *((_QWORD*)v155 - 1);
		else
			v157 = 0i64;
		v158 = sub_14018D140(*a2, v157 + 1);
		*(_WORD*)(v158 + 2 * v157) = v156;
		*(_WORD*)(v158 + 2 * v157 + 2) = 0;
		*a2 = (int*)v158;
		if (v155 != (int*)v158 && v155)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v155 - 2) + 8i64))(v155 - 4);
		v159 = sub_140011B20(v3[12]);
		v81 = *a2;
		v82 = v159;
		if (*a2)
		{
			v83 = *((_QWORD*)v81 - 1);
			goto LABEL_187;
		}
	LABEL_186:
		v83 = 0i64;
		goto LABEL_187;
	}
	v5 = sub_140011B20(v162[6]);
	v6 = *a2;
	v7 = v5;
	if (*a2)
		v8 = *((_QWORD*)v6 - 1);
	else
		v8 = 0i64;
	v9 = sub_14018D140(*a2, v8 + 1);
	*(_WORD*)(v9 + 2 * v8) = v7;
	*(_WORD*)(v9 + 2 * v8 + 2) = 0;
	*a2 = (int*)v9;
	if (v6 != (int*)v9 && v6)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	v10 = sub_140011B20(*v3);
	v11 = *a2;
	v12 = v10;
	if (*a2)
		v13 = *((_QWORD*)v11 - 1);
	else
		v13 = 0i64;
	v14 = sub_14018D140(*a2, v13 + 1);
	*(_WORD*)(v14 + 2 * v13) = v12;
	*(_WORD*)(v14 + 2 * v13 + 2) = 0;
	*a2 = (int*)v14;
	if (v11 != (int*)v14 && v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	v15 = sub_140011B20(v3[2]);
	v16 = *a2;
	v17 = v15;
	if (*a2)
		v18 = *((_QWORD*)v16 - 1);
	else
		v18 = 0i64;
	v19 = sub_14018D140(*a2, v18 + 1);
	*(_WORD*)(v19 + 2 * v18) = v17;
	*(_WORD*)(v19 + 2 * v18 + 2) = 0;
	*a2 = (int*)v19;
	if (v16 != (int*)v19 && v16)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	v20 = sub_140011B20(v3[1]);
	v21 = *a2;
	v22 = v20;
	if (*a2)
		v23 = *((_QWORD*)v21 - 1);
	else
		v23 = 0i64;
	v24 = sub_14018D140(*a2, v23 + 1);
	*(_WORD*)(v24 + 2 * v23) = v22;
	*(_WORD*)(v24 + 2 * v23 + 2) = 0;
	*a2 = (int*)v24;
	if (v21 != (int*)v24 && v21)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v21 - 2) + 8i64))(v21 - 4);
	v25 = sub_140011B20(v3[7]);
	v26 = *a2;
	v27 = v25;
	if (*a2)
		v28 = *((_QWORD*)v26 - 1);
	else
		v28 = 0i64;
	v29 = sub_14018D140(*a2, v28 + 1);
	*(_WORD*)(v29 + 2 * v28) = v27;
	*(_WORD*)(v29 + 2 * v28 + 2) = 0;
	*a2 = (int*)v29;
	if (v26 != (int*)v29 && v26)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 4);
	v30 = sub_140011B20(v3[3]);
	v31 = *a2;
	v32 = v30;
	if (*a2)
		v33 = *((_QWORD*)v31 - 1);
	else
		v33 = 0i64;
	v34 = sub_14018D140(*a2, v33 + 1);
	*(_WORD*)(v34 + 2 * v33) = v32;
	*(_WORD*)(v34 + 2 * v33 + 2) = 0;
	*a2 = (int*)v34;
	if (v31 != (int*)v34 && v31)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
	v35 = sub_140011B20(v3[5]);
	v36 = *a2;
	v37 = v35;
	if (*a2)
		v38 = *((_QWORD*)v36 - 1);
	else
		v38 = 0i64;
	v39 = sub_14018D140(*a2, v38 + 1);
	*(_WORD*)(v39 + 2 * v38) = v37;
	*(_WORD*)(v39 + 2 * v38 + 2) = 0;
	*a2 = (int*)v39;
	if (v36 != (int*)v39 && v36)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
	v40 = sub_140011B20(v3[4]);
	v41 = *a2;
	v42 = v40;
	if (*a2)
		v43 = *((_QWORD*)v41 - 1);
	else
		v43 = 0i64;
	v44 = sub_14018D140(*a2, v43 + 1);
	*(_WORD*)(v44 + 2 * v43) = v42;
	*(_WORD*)(v44 + 2 * v43 + 2) = 0;
	*a2 = (int*)v44;
	if (v41 != (int*)v44 && v41)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v41 - 2) + 8i64))(v41 - 4);
	v45 = sub_140011B20(v3[14]);
	v46 = *a2;
	v47 = v45;
	if (*a2)
		v48 = *((_QWORD*)v46 - 1);
	else
		v48 = 0i64;
	v49 = sub_14018D140(*a2, v48 + 1);
	*(_WORD*)(v49 + 2 * v48) = v47;
	*(_WORD*)(v49 + 2 * v48 + 2) = 0;
	*a2 = (int*)v49;
	if (v46 != (int*)v49 && v46)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v46 - 2) + 8i64))(v46 - 4);
	v50 = sub_140011B20(v3[8]);
	v51 = *a2;
	v52 = v50;
	if (*a2)
		v53 = *((_QWORD*)v51 - 1);
	else
		v53 = 0i64;
	v54 = sub_14018D140(*a2, v53 + 1);
	*(_WORD*)(v54 + 2 * v53) = v52;
	*(_WORD*)(v54 + 2 * v53 + 2) = 0;
	*a2 = (int*)v54;
	if (v51 != (int*)v54 && v51)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
	v55 = sub_140011B20(v3[10]);
	v56 = *a2;
	v57 = v55;
	if (*a2)
		v58 = *((_QWORD*)v56 - 1);
	else
		v58 = 0i64;
	v59 = sub_14018D140(*a2, v58 + 1);
	*(_WORD*)(v59 + 2 * v58) = v57;
	*(_WORD*)(v59 + 2 * v58 + 2) = 0;
	*a2 = (int*)v59;
	if (v56 != (int*)v59 && v56)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v56 - 2) + 8i64))(v56 - 4);
	v60 = sub_140011B20(v3[9]);
	v61 = *a2;
	v62 = v60;
	if (*a2)
		v63 = *((_QWORD*)v61 - 1);
	else
		v63 = 0i64;
	v64 = sub_14018D140(*a2, v63 + 1);
	*(_WORD*)(v64 + 2 * v63) = v62;
	*(_WORD*)(v64 + 2 * v63 + 2) = 0;
	*a2 = (int*)v64;
	if (v61 != (int*)v64 && v61)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v61 - 2) + 8i64))(v61 - 4);
	v65 = sub_140011B20(v3[15]);
	v66 = *a2;
	v67 = v65;
	if (*a2)
		v68 = *((_QWORD*)v66 - 1);
	else
		v68 = 0i64;
	v69 = sub_14018D140(*a2, v68 + 1);
	*(_WORD*)(v69 + 2 * v68) = v67;
	*(_WORD*)(v69 + 2 * v68 + 2) = 0;
	*a2 = (int*)v69;
	if (v66 != (int*)v69 && v66)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v66 - 2) + 8i64))(v66 - 4);
	v70 = sub_140011B20(v3[11]);
	v71 = *a2;
	v72 = v70;
	if (*a2)
		v73 = *((_QWORD*)v71 - 1);
	else
		v73 = 0i64;
	v74 = sub_14018D140(*a2, v73 + 1);
	*(_WORD*)(v74 + 2 * v73) = v72;
	*(_WORD*)(v74 + 2 * v73 + 2) = 0;
	*a2 = (int*)v74;
	if (v71 != (int*)v74 && v71)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v71 - 2) + 8i64))(v71 - 4);
	v75 = sub_140011B20(v3[13]);
	v76 = *a2;
	v77 = v75;
	if (*a2)
		v78 = *((_QWORD*)v76 - 1);
	else
		v78 = 0i64;
	v79 = sub_14018D140(*a2, v78 + 1);
	*(_WORD*)(v79 + 2 * v78) = v77;
	*(_WORD*)(v79 + 2 * v78 + 2) = 0;
	*a2 = (int*)v79;
	if (v76 != (int*)v79 && v76)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v76 - 2) + 8i64))(v76 - 4);
	v80 = sub_140011B20(v3[12]);
	v81 = *a2;
	v82 = v80;
	if (!*a2)
		goto LABEL_186;
	v83 = *((_QWORD*)v81 - 1);
LABEL_187:
	v160 = sub_14018D140(v81, v83 + 1);
	*(_WORD*)(v160 + 2 * v83) = v82;
	*(_WORD*)(v160 + 2 * v83 + 2) = 0;
	*a2 = (int*)v160;
	if (v81 != (int*)v160 && v81)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v81 - 2) + 8i64))(v81 - 4);
	sub_14018B900((__int64)v3, 0);
}
// 1409DFBC8: using guessed type wchar_t a016llx[8];


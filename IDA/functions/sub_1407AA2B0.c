#include "../winhttp.h"

//----- (00000001407AA2B0) ----------------------------------------------------
_QWORD* __fastcall sub_1407AA2B0(__int64 a1, _QWORD* a2, char a3, int a4)
{
	__int64 v4; // rdi
	_QWORD* v5; // r12
	char v7; // si
	int* v8; // rdx
	int* v9; // rax
	__int64 v10; // r13
	int* v11; // r14
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rcx
	int* v17; // r15
	int* v18; // rsi
	__int64* v19; // rax
	__int64 v20; // rax
	int* v21; // r12
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rbx
	unsigned __int64 v24; // rbx
	int* v25; // rbx
	__int64 v26; // rbx
	__int64 v27; // rcx
	__int64 v28; // rax
	int* v29; // r14
	__int64 v30; // rax
	__int64 v31; // rsi
	__int64 v32; // rbx
	__int64 v33; // rcx
	int* v34; // r15
	int* v35; // rsi
	__int64* v36; // rax
	__int64 v37; // rax
	int* v38; // r12
	unsigned __int64 v39; // rax
	unsigned __int64 v40; // rbx
	unsigned __int64 v41; // rbx
	int* v42; // rbx
	__int64 v43; // rbx
	__int64 v44; // rcx
	__int64 v45; // rax
	int* v46; // rsi
	__int64 v47; // rax
	__int64 v48; // r14
	__int64 v49; // rbx
	__int64 v50; // rcx
	int* v51; // r15
	int* v52; // r14
	__int64* v53; // rax
	__int64 v54; // rax
	int* v55; // r12
	unsigned __int64 v56; // rax
	unsigned __int64 v57; // rbx
	unsigned __int64 v58; // rbx
	int* v59; // rbx
	__int64 v60; // rbx
	__int64 v61; // rcx
	__int64 v62; // r13
	int* v63; // rsi
	__int64 v64; // rax
	__int64 v65; // r14
	__int64 v66; // rbx
	__int64 v67; // rcx
	int* v68; // r15
	int* v69; // r14
	__int64* v70; // rax
	__int64 v71; // rax
	int* v72; // r12
	unsigned __int64 v73; // rax
	unsigned __int64 v74; // rbx
	unsigned __int64 v75; // rbx
	__int64 v76; // rbx
	__int64 v77; // rax
	__int64 v78; // r15
	__int64 v79; // rdx
	__int64* v80; // rcx
	signed __int64 v81; // rsi
	__int16 v82; // ax
	int* v83; // rdx
	__int64 v84; // rax
	__int64 v85; // rax
	int* v86; // rsi
	__int64 v87; // rax
	__int64 v88; // r14
	__int64 v89; // rbx
	__int64 v90; // rcx
	int* v91; // r15
	int* v92; // r14
	__int64* v93; // rax
	__int64 v94; // rax
	int* v95; // r12
	unsigned __int64 v96; // rax
	unsigned __int64 v97; // rbx
	unsigned __int64 v98; // rbx
	__int64 v99; // rbx
	__int64 v100; // rax
	__int64 v101; // rdx
	__int64* v102; // rcx
	signed __int64 v103; // rsi
	__int16 v104; // ax
	int* v105; // rdx
	__int64 v106; // rax
	__int64 v107; // rax
	int* v108; // rsi
	__int64 v109; // rax
	__int64 v110; // r14
	__int64 v111; // rcx
	int* v112; // rax
	int* v113; // rdx
	__int64* v114; // rax
	__int64 v115; // rax
	__int64* v116; // rcx
	signed __int64 v117; // rsi
	__int16 v118; // ax
	int* v119; // rdx
	__int64 v120; // rax
	int* v124; // [rsp+38h] [rbp-39h]
	__int64 v125; // [rsp+40h] [rbp-31h] BYREF
	int* v126; // [rsp+48h] [rbp-29h]
	int* v127; // [rsp+50h] [rbp-21h]
	__int64 v128; // [rsp+58h] [rbp-19h]
	__int64 v129; // [rsp+60h] [rbp-11h] BYREF
	__int64 v130; // [rsp+68h] [rbp-9h]
	__int64 v131; // [rsp+80h] [rbp+Fh] BYREF
	int* v132; // [rsp+88h] [rbp+17h]
	int* v133; // [rsp+90h] [rbp+1Fh]
	__int64 v134; // [rsp+98h] [rbp+27h]

	v4 = 0i64;
	v5 = a2;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	v7 = a3;
	v8 = sub_14018B280(16i64, 0);
	v5[1] = v8;
	v5[2] = v8;
	v5[3] = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v9 = sub_14018B280(16i64, 0);
	v10 = (__int64)v9;
	v124 = v9;
	if (v9)
		*(_WORD*)v9 = 0;
	if (a4)
	{
		if ((v7 & 2) != 0)
		{
			v11 = 0i64;
			v132 = 0i64;
			v134 = 0i64;
			v12 = 0i64;
			do
				v13 = aCtrl_0[++v12] == 0;
			while (!v13);
			v14 = (2 * v12) >> 1;
			if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v11 = sub_14018B280(2 * (v14 + 1), 0);
				v132 = v11;
				v134 = (__int64)v11 + 2 * v14 + 2;
			}
			v15 = 2 * v14;
			sub_1407DB590(v11, (int*)L"Ctrl", 2 * v14);
			v17 = (int*)((char*)v11 + 2 * v14);
			v133 = v17;
			if (v17)
				*(_WORD*)v17 = 0;
			v18 = (int*)sub_14034BDD0(v16, 736661);
			if (v18)
			{
				v20 = 0i64;
				if (*(_WORD*)v18)
				{
					do
						++v20;
					while (*((_WORD*)v18 + v20));
				}
				v21 = (int*)((char*)v18 + 2 * v20);
				v22 = v15 >> 1;
				v23 = ((char*)v21 - (char*)v18) >> 1;
				if (v23 > v22)
				{
					v26 = 2 * v22;
					sub_1407DB590(v11, v18, 2 * v22);
					sub_14001C310(&v131, (int*)((char*)v18 + v26), v21);
					v17 = v133;
					v11 = v132;
				}
				else
				{
					v24 = 2 * v23;
					sub_1407DB590(v11, v18, v24);
					v25 = (int*)((char*)v11 + v24);
					if (v25 != v17)
					{
						sub_1407DB590(v25, v17, 2ui64);
						v17 = (int*)((char*)v17 - 2 * (((char*)v17 - (char*)v25) >> 1));
					}
				}
				v5 = a2;
			}
			else
			{
				v19 = sub_14018EFA0(&v125, (__int64)L"<<%d>>", 736661i64);
				if (v19 != &v131)
				{
					sub_14001C480((__int64)&v131, (int*)v19[1], (int*)v19[2]);
					v17 = v133;
					v11 = v132;
				}
				if (v126)
					sub_14018B900((__int64)v126, 0);
			}
			v27 = v10;
			v10 = (__int64)v11;
			if (v27)
				sub_14018B900(v27, 0);
			sub_14001C310(v5, v11, v17);
			v28 = 0i64;
			do
				v13 = *((_WORD*)&unk_1409FAA44 + ++v28) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FAA44, (int*)((char*)&unk_1409FAA44 + 2 * v28));
			v7 = a3;
		}
		if ((v7 & 4) != 0)
		{
			v29 = 0i64;
			v132 = 0i64;
			v134 = 0i64;
			v30 = 0i64;
			do
				v13 = aAlt_0[++v30] == 0;
			while (!v13);
			v31 = (2 * v30) >> 1;
			if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v29 = sub_14018B280(2 * (v31 + 1), 0);
				v132 = v29;
				v134 = (__int64)v29 + 2 * v31 + 2;
			}
			v32 = 2 * v31;
			sub_1407DB590(v29, (int*)L"Alt", 2 * v31);
			v34 = (int*)((char*)v29 + 2 * v31);
			v133 = v34;
			if (v34)
				*(_WORD*)v34 = 0;
			v35 = (int*)sub_14034BDD0(v33, 736663);
			if (v35)
			{
				v37 = 0i64;
				if (*(_WORD*)v35)
				{
					do
						++v37;
					while (*((_WORD*)v35 + v37));
				}
				v38 = (int*)((char*)v35 + 2 * v37);
				v39 = v32 >> 1;
				v40 = ((char*)v38 - (char*)v35) >> 1;
				if (v40 > v39)
				{
					v43 = 2 * v39;
					sub_1407DB590(v29, v35, 2 * v39);
					sub_14001C310(&v131, (int*)((char*)v35 + v43), v38);
					v34 = v133;
					v29 = v132;
				}
				else
				{
					v41 = 2 * v40;
					sub_1407DB590(v29, v35, v41);
					v42 = (int*)((char*)v29 + v41);
					if (v42 != v34)
					{
						sub_1407DB590(v42, v34, 2ui64);
						v34 = (int*)((char*)v34 - 2 * (((char*)v34 - (char*)v42) >> 1));
					}
				}
				v5 = a2;
			}
			else
			{
				v36 = sub_14018EFA0(&v125, (__int64)L"<<%d>>", 736663i64);
				if (v36 != &v131)
				{
					sub_14001C480((__int64)&v131, (int*)v36[1], (int*)v36[2]);
					v34 = v133;
					v29 = v132;
				}
				if (v126)
					sub_14018B900((__int64)v126, 0);
			}
			v44 = v10;
			v10 = (__int64)v29;
			if (v44)
				sub_14018B900(v44, 0);
			sub_14001C310(v5, v29, v34);
			v45 = 0i64;
			do
				v13 = *((_WORD*)&unk_1409FAA5C + ++v45) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FAA5C, (int*)((char*)&unk_1409FAA5C + 2 * v45));
			v7 = a3;
		}
		if ((v7 & 1) != 0)
		{
			v46 = 0i64;
			v132 = 0i64;
			v134 = 0i64;
			v47 = 0i64;
			do
				v13 = aShift_1[++v47] == 0;
			while (!v13);
			v48 = (2 * v47) >> 1;
			if ((unsigned __int64)(v48 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v46 = sub_14018B280(2 * (v48 + 1), 0);
				v132 = v46;
				v134 = (__int64)v46 + 2 * v48 + 2;
			}
			v49 = 2 * v48;
			sub_1407DB590(v46, (int*)L"Shift", 2 * v48);
			v51 = (int*)((char*)v46 + 2 * v48);
			v133 = v51;
			if (v51)
				*(_WORD*)v51 = 0;
			v52 = (int*)sub_14034BDD0(v50, 736662);
			if (v52)
			{
				v54 = 0i64;
				if (*(_WORD*)v52)
				{
					do
						++v54;
					while (*((_WORD*)v52 + v54));
				}
				v55 = (int*)((char*)v52 + 2 * v54);
				v56 = v49 >> 1;
				v57 = ((char*)v55 - (char*)v52) >> 1;
				if (v57 > v56)
				{
					v60 = 2 * v56;
					sub_1407DB590(v46, v52, 2 * v56);
					sub_14001C310(&v131, (int*)((char*)v52 + v60), v55);
					v51 = v133;
					v46 = v132;
				}
				else
				{
					v58 = 2 * v57;
					sub_1407DB590(v46, v52, v58);
					v59 = (int*)((char*)v46 + v58);
					if (v59 != v51)
					{
						sub_1407DB590(v59, v51, 2ui64);
						v51 = (int*)((char*)v51 - 2 * (((char*)v51 - (char*)v59) >> 1));
					}
				}
				v5 = a2;
			}
			else
			{
				v53 = sub_14018EFA0(&v125, (__int64)L"<<%d>>", 736662i64);
				if (v53 != &v131)
				{
					sub_14001C480((__int64)&v131, (int*)v53[1], (int*)v53[2]);
					v51 = v133;
					v46 = v132;
				}
				if (v126)
					sub_14018B900((__int64)v126, 0);
			}
			v61 = v10;
			v10 = (__int64)v46;
			if (v61)
				sub_14018B900(v61, 0);
			sub_14001C310(v5, v46, v51);
			do
				v13 = *((_WORD*)&unk_1409FAA74 + ++v4) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FAA74, (int*)((char*)&unk_1409FAA74 + 2 * v4));
		}
	}
	else
	{
		v62 = 10i64;
		if ((v7 & 2) != 0)
		{
			v63 = 0i64;
			v126 = 0i64;
			v128 = 0i64;
			v64 = 0i64;
			do
				v13 = aCtrl_1[++v64] == 0;
			while (!v13);
			v65 = (2 * v64) >> 1;
			if ((unsigned __int64)(v65 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v63 = sub_14018B280(2 * (v65 + 1), 0);
				v126 = v63;
				v128 = (__int64)v63 + 2 * v65 + 2;
			}
			v66 = 2 * v65;
			sub_1407DB590(v63, (int*)L"Ctrl", 2 * v65);
			v68 = (int*)((char*)v63 + 2 * v65);
			v127 = v68;
			if (v68)
				*(_WORD*)v68 = 0;
			v69 = (int*)sub_14034BDD0(v67, 455522);
			if (v69)
			{
				v71 = 0i64;
				if (*(_WORD*)v69)
				{
					do
						++v71;
					while (*((_WORD*)v69 + v71));
				}
				v72 = (int*)((char*)v69 + 2 * v71);
				v73 = v66 >> 1;
				v74 = ((char*)v72 - (char*)v69) >> 1;
				if (v74 > v73)
				{
					v76 = 2 * v73;
					sub_1407DB590(v63, v69, 2 * v73);
					sub_14001C310(&v125, (int*)((char*)v69 + v76), v72);
					v63 = v126;
				}
				else
				{
					v75 = 2 * v74;
					sub_1407DB590(v63, v69, v75);
					if ((int*)((char*)v63 + v75) != v68)
						sub_1407DB590((int*)((char*)v63 + v75), v68, 2ui64);
				}
				v5 = a2;
			}
			else
			{
				v70 = sub_14018EFA0(&v129, (__int64)L"<<%d>>", 455522i64);
				if (v70 != &v125)
				{
					sub_14001C480((__int64)&v125, (int*)v70[1], (int*)v70[2]);
					v63 = v126;
				}
				if (v130)
					sub_14018B900(v130, 0);
			}
			v77 = (__int64)v124;
			v78 = (__int64)v63;
			v124 = v63;
			if (v77)
				sub_14018B900(v77, 0);
			v79 = 10i64;
			v80 = &v131;
			v81 = (char*)v63 - (char*)&v131;
			while (v79 != -2147483636)
			{
				v82 = *(_WORD*)((char*)v80 + v81);
				if (!v82)
					break;
				*(_WORD*)v80 = v82;
				v80 = (__int64*)((char*)v80 + 2);
				if (!--v79)
				{
					v80 = (__int64*)((char*)v80 - 2);
					break;
				}
			}
			*(_WORD*)v80 = 0;
			v83 = (int*)sub_1409020F0((WCHAR*)&v131);
			v84 = 0i64;
			if (*(_WORD*)v83)
			{
				do
					++v84;
				while (*((_WORD*)v83 + v84));
			}
			sub_14001C310(v5, v83, (int*)((char*)v83 + 2 * v84));
			v85 = 0i64;
			do
				v13 = *((_WORD*)&unk_1409FAB5C + ++v85) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FAB5C, (int*)((char*)&unk_1409FAB5C + 2 * v85));
			v7 = a3;
		}
		else
		{
			v78 = (__int64)v9;
		}
		if ((v7 & 4) != 0)
		{
			v86 = 0i64;
			v126 = 0i64;
			v128 = 0i64;
			v87 = 0i64;
			do
				v13 = aAlt_1[++v87] == 0;
			while (!v13);
			v88 = (2 * v87) >> 1;
			if ((unsigned __int64)(v88 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v86 = sub_14018B280(2 * (v88 + 1), 0);
				v126 = v86;
				v128 = (__int64)v86 + 2 * v88 + 2;
			}
			v89 = 2 * v88;
			sub_1407DB590(v86, (int*)L"Alt", 2 * v88);
			v91 = (int*)((char*)v86 + 2 * v88);
			v127 = v91;
			if (v91)
				*(_WORD*)v91 = 0;
			v92 = (int*)sub_14034BDD0(v90, 455523);
			if (v92)
			{
				v94 = 0i64;
				if (*(_WORD*)v92)
				{
					do
						++v94;
					while (*((_WORD*)v92 + v94));
				}
				v95 = (int*)((char*)v92 + 2 * v94);
				v96 = v89 >> 1;
				v97 = ((char*)v95 - (char*)v92) >> 1;
				if (v97 > v96)
				{
					v99 = 2 * v96;
					sub_1407DB590(v86, v92, 2 * v96);
					sub_14001C310(&v125, (int*)((char*)v92 + v99), v95);
					v86 = v126;
				}
				else
				{
					v98 = 2 * v97;
					sub_1407DB590(v86, v92, v98);
					if ((int*)((char*)v86 + v98) != v91)
						sub_1407DB590((int*)((char*)v86 + v98), v91, 2ui64);
				}
				v5 = a2;
			}
			else
			{
				v93 = sub_14018EFA0(&v129, (__int64)L"<<%d>>", 455523i64);
				if (v93 != &v125)
				{
					sub_14001C480((__int64)&v125, (int*)v93[1], (int*)v93[2]);
					v86 = v126;
				}
				if (v130)
					sub_14018B900(v130, 0);
			}
			v100 = (__int64)v124;
			v78 = (__int64)v86;
			v124 = v86;
			if (v100)
				sub_14018B900(v100, 0);
			v101 = 10i64;
			v102 = &v131;
			v103 = (char*)v86 - (char*)&v131;
			while (v101 != -2147483636)
			{
				v104 = *(_WORD*)((char*)v102 + v103);
				if (!v104)
					break;
				*(_WORD*)v102 = v104;
				v102 = (__int64*)((char*)v102 + 2);
				if (!--v101)
				{
					v102 = (__int64*)((char*)v102 - 2);
					break;
				}
			}
			*(_WORD*)v102 = 0;
			v105 = (int*)sub_1409020F0((WCHAR*)&v131);
			v106 = 0i64;
			if (*(_WORD*)v105)
			{
				do
					++v106;
				while (*((_WORD*)v105 + v106));
			}
			sub_14001C310(v5, v105, (int*)((char*)v105 + 2 * v106));
			v107 = 0i64;
			do
				v13 = *((_WORD*)&unk_1409FAB8C + ++v107) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FAB8C, (int*)((char*)&unk_1409FAB8C + 2 * v107));
			v7 = a3;
		}
		if ((v7 & 1) != 0)
		{
			v108 = 0i64;
			v126 = 0i64;
			v128 = 0i64;
			v109 = 0i64;
			do
				v13 = aShift_2[++v109] == 0;
			while (!v13);
			v110 = (2 * v109) >> 1;
			if ((unsigned __int64)(v110 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v108 = sub_14018B280(2 * (v110 + 1), 0);
				v126 = v108;
				v128 = (__int64)v108 + 2 * v110 + 2;
			}
			sub_1407DB590(v108, (int*)L"Shift", 2 * v110);
			v112 = (int*)((char*)v108 + 2 * v110);
			v127 = v112;
			if (v112)
				*(_WORD*)v112 = 0;
			v113 = (int*)sub_14034BDD0(v111, 455520);
			if (v113)
			{
				v115 = 0i64;
				if (*(_WORD*)v113)
				{
					do
						++v115;
					while (*((_WORD*)v113 + v115));
				}
				sub_14001C480((__int64)&v125, v113, (int*)((char*)v113 + 2 * v115));
				v108 = v126;
			}
			else
			{
				v114 = sub_14018EFA0(&v129, (__int64)L"<<%d>>", 455520i64);
				if (v114 != &v125)
				{
					sub_14001C480((__int64)&v125, (int*)v114[1], (int*)v114[2]);
					v108 = v126;
				}
				if (v130)
					sub_14018B900(v130, 0);
			}
			v124 = v108;
			if (v78)
				sub_14018B900(v78, 0);
			v116 = &v131;
			v117 = (char*)v108 - (char*)&v131;
			while (v62 != -2147483636)
			{
				v118 = *(_WORD*)((char*)v116 + v117);
				if (!v118)
					break;
				*(_WORD*)v116 = v118;
				v116 = (__int64*)((char*)v116 + 2);
				if (!--v62)
				{
					v116 = (__int64*)((char*)v116 - 2);
					break;
				}
			}
			*(_WORD*)v116 = 0;
			v119 = (int*)sub_1409020F0((WCHAR*)&v131);
			v120 = 0i64;
			if (*(_WORD*)v119)
			{
				do
					++v120;
				while (*((_WORD*)v119 + v120));
			}
			sub_14001C310(v5, v119, (int*)((char*)v119 + 2 * v120));
			do
				v13 = *((_WORD*)&unk_1409FABA4 + ++v4) == 0;
			while (!v13);
			sub_14001C310(v5, (int*)&unk_1409FABA4, (int*)((char*)&unk_1409FABA4 + 2 * v4));
		}
		v10 = (__int64)v124;
	}
	if (v10)
		sub_14018B900(v10, 0);
	return v5;
}
// 1407AAA66: conditional instruction was optimized away because rdx.8!=0
// 1407AAC76: conditional instruction was optimized away because rdx.8!=0
// 1407AAE26: conditional instruction was optimized away because r13.8!=0
// 1407AA3E2: variable 'v16' is possibly undefined
// 1407AA5B2: variable 'v33' is possibly undefined
// 1407AA77C: variable 'v50' is possibly undefined
// 1407AA942: variable 'v67' is possibly undefined
// 1407AAB52: variable 'v90' is possibly undefined
// 1407AAD61: variable 'v111' is possibly undefined
// 140A171C0: using guessed type wchar_t aD_17[7];
// 140B529C0: using guessed type wchar_t aCtrl_0[5];
// 140B52BC0: using guessed type wchar_t aAlt_0[4];
// 140B52BC8: using guessed type wchar_t aShift_1[6];
// 140B52BD8: using guessed type wchar_t aCtrl_1[5];
// 140B52BE8: using guessed type wchar_t aAlt_1[4];
// 140B52BF0: using guessed type wchar_t aShift_2[6];


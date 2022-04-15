#include "../winhttp.h"

//----- (000000014004FE00) ----------------------------------------------------
__int64 __fastcall sub_14004FE00(__int64* a1)
{
	__int64 v1; // r10
	__int64* v2; // rdi
	unsigned int v3; // eax
	unsigned int v4; // eax
	unsigned int v5; // eax
	unsigned int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // eax
	__int64* v9; // rbx
	__int64 v10; // rsi
	__int64 v11; // r15
	unsigned int v12; // ebx
	unsigned int v13; // eax
	unsigned int v14; // ecx
	__int64 v15; // r12
	__int64 v16; // r13
	__int64 v17; // r14
	__int64 v18; // rdi
	__int64 v19; // rax
	int v20; // eax
	__int64* v21; // rbx
	unsigned __int64 i; // r15
	unsigned __int64 v23; // r14
	int* v24; // rsi
	int* v25; // rax
	unsigned __int64 v26; // r15
	__int64* v27; // rbx
	unsigned __int64 v28; // r14
	int* v29; // rsi
	int* v30; // rax
	unsigned __int64 v31; // r15
	__int64* v32; // rbx
	unsigned __int64 v33; // r14
	int* v34; // rsi
	int* v35; // rax
	__int64 v36; // r15
	int* v37; // r13
	int* v38; // rax
	int* v39; // rax
	unsigned int v40; // r12d
	unsigned int v41; // eax
	__int64 v42; // rax
	char* v43; // rsi
	int v44; // eax
	__int64 v45; // r14
	int* v46; // rax
	int* v47; // rbx
	__int64 v48; // rbx
	int* v49; // rax
	int* v50; // r14
	int* v51; // rdx
	__int64 v52; // rcx
	__int64 v53; // rbx
	int* v54; // rax
	int* v55; // r14
	int* v56; // rdx
	__int64 v57; // rcx
	__int64 v58; // rbx
	int* v59; // rax
	int* v60; // r14
	int* v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // rbx
	int* v64; // rax
	int* v65; // r14
	int* v66; // rdx
	__int64 v67; // rcx
	__int64 v68; // rbx
	int* v69; // rax
	int* v70; // r14
	int* v71; // rdx
	__int64 v72; // rcx
	__int64 v73; // rbx
	int* v74; // rax
	int* v75; // r14
	int* v76; // rdx
	__int64 v77; // rcx
	__int64 v78; // rbx
	int* v79; // rax
	int* v80; // r14
	int* v81; // rdx
	__int64 v82; // rcx
	__int64 v83; // rbx
	int* v84; // rax
	int* v85; // r14
	int* v86; // rdx
	__int64 v87; // rcx
	__int64 v88; // rbx
	int* v89; // rax
	int* v90; // r14
	int* v91; // rdx
	__int64 v92; // rcx
	__int64 v93; // rbx
	int* v94; // rax
	int* v95; // r14
	int* v96; // rdx
	__int64 v97; // rcx
	__int64 v98; // rbx
	int* v99; // rax
	int* v100; // r14
	int* v101; // rdx
	__int64 v102; // rcx
	__int64 v103; // rbx
	int* v104; // rax
	int* v105; // r14
	int* v106; // rdx
	__int64 v107; // rcx
	__int64 v108; // rbx
	int* v109; // rax
	int* v110; // r14
	int* v111; // rdx
	__int64 v112; // rcx
	__int64 v113; // rbx
	int* v114; // rax
	int* v115; // r14
	int* v116; // rdx
	__int64 v117; // rcx
	__int64 v118; // rbx
	int* v119; // rax
	int* v120; // r14
	int* v121; // rdx
	__int64 v122; // rcx
	__int64 result; // rax
	unsigned int v124; // [rsp+28h] [rbp-E0h]
	unsigned int v125; // [rsp+28h] [rbp-E0h]
	__int64 v127; // [rsp+38h] [rbp-D0h]
	__int64 v128; // [rsp+40h] [rbp-C8h]
	__int64 v129; // [rsp+48h] [rbp-C0h]
	__int64 v130; // [rsp+50h] [rbp-B8h]
	__int64 v131; // [rsp+58h] [rbp-B0h]
	__int64 v132; // [rsp+68h] [rbp-A0h]
	__int64 v133; // [rsp+70h] [rbp-98h] BYREF
	__int64 v134; // [rsp+80h] [rbp-88h]
	__int64 v135; // [rsp+88h] [rbp-80h]
	__int64 v136; // [rsp+90h] [rbp-78h]
	__int64 v137; // [rsp+C8h] [rbp-40h]
	__int64 v138; // [rsp+D0h] [rbp-38h]
	__int64 v139; // [rsp+E8h] [rbp-20h]
	__int64 v140; // [rsp+F8h] [rbp-10h]
	__int64 v141; // [rsp+100h] [rbp-8h] BYREF
	__int64 v142; // [rsp+108h] [rbp+0h]
	__int64 v143; // [rsp+110h] [rbp+8h]
	__int64 v144; // [rsp+118h] [rbp+10h]
	__int64 v145; // [rsp+120h] [rbp+18h]
	__int64 v146; // [rsp+130h] [rbp+28h]

	v1 = qword_140C63628;
	v2 = a1;
	if (qword_140C63628)
	{
		v3 = sub_1400518A0(qword_140C63628, 98, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v3);
		v1 = qword_140C63628;
	}
	if (v1)
	{
		v4 = sub_1400518A0(v1, 99, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v4);
		v1 = qword_140C63628;
	}
	if (v1)
	{
		v5 = sub_1400518A0(v1, 100, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v5);
		v1 = qword_140C63628;
	}
	if (v1)
	{
		v6 = sub_1400518A0(v1, 101, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v6);
		v1 = qword_140C63628;
	}
	if (v1)
	{
		v7 = sub_1400518A0(v1, 102, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v7);
		v1 = qword_140C63628;
	}
	if (v1)
	{
		v8 = sub_1400518A0(v1, 103, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v8);
	}
	v9 = v2 + 90;
	v10 = 3i64;
	do
	{
		(*(void(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
			qword_140C65848,
			v9++,
			0i64);
		--v10;
	} while (v10);
	v11 = 0i64;
	v130 = 0i64;
	v131 = 0i64;
	v129 = 0i64;
	v140 = 0i64;
	sub_1407E4830((int*)&v141, 0i64, 0xB0ui64);
	v132 = 0i64;
	sub_1407E4830((int*)&v133, 0i64, 0x80ui64);
	v12 = 0;
	v128 = 0i64;
	if (qword_140C63838)
	{
		v13 = qword_140C63838(off_140A6CE78, qword_140C63858);
	}
	else
	{
		if (dword_140C64CA4 || (int)sub_1402338A0() < 0)
			goto LABEL_64;
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D88 + 40i64))(qword_140C63D88);
	}
	v14 = v13;
	v124 = v13;
	if (v13)
	{
		v15 = v146;
		v16 = v145;
		v17 = v138;
		v18 = v144;
		while (!qword_140C63848)
		{
			if (!dword_140C64CA4)
			{
				if ((int)sub_1402338A0() >= 0)
					v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D88 + 32i64))(qword_140C63D88, v12);
				else
					v19 = 0i64;
				goto LABEL_29;
			}
			v19 = 0i64;
		LABEL_30:
			v20 = *(_DWORD*)(v19 + 56);
			if ((v20 & 0x10000) != 0)
			{
				++v128;
			}
			else
			{
				if ((v20 & 2) != 0)
					++v11;
				if ((v20 & 4) != 0)
					++v10;
				if ((v20 & 8) != 0)
					++v141;
				if ((v20 & 0x10) != 0)
					++v143;
				if ((v20 & 0x20) != 0)
					++v15;
				if ((v20 & 0x40) != 0)
					++v16;
				if ((v20 & 0x80u) != 0)
					++v142;
				if ((v20 & 0x100) != 0)
					++v18;
				if ((v20 & 0x200) != 0)
					++v133;
				if ((v20 & 0x400) != 0)
					++v134;
				if ((v20 & 0x800) != 0)
					++v135;
				if ((v20 & 0x1000) != 0)
					++v139;
				if ((v20 & 0x2000) != 0)
					++v136;
				if ((v20 & 0x4000) != 0)
					++v137;
				if ((v20 & 0x8000) != 0)
					++v17;
			}
			if (++v12 >= v14)
			{
				v144 = v18;
				v2 = a1;
				v130 = v10;
				v138 = v17;
				v129 = v11;
				v146 = v15;
				v145 = v16;
				goto LABEL_64;
			}
		}
		v19 = qword_140C63848(off_140A6CE78, v12, qword_140C63858);
	LABEL_29:
		v14 = v124;
		goto LABEL_30;
	}
LABEL_64:
	v21 = v2 + 96;
	for (i = 0i64; i < 3; ++i)
	{
		v23 = *(&v129 + i);
		if (v21[1] > v23)
			v21[1] = v23;
		v24 = (int*)*v21;
		if (v23)
		{
			if (v24 && (**((unsigned int(__fastcall***)(__int64, __int64))v24 - 2))((__int64)(v24 - 4), 8 * v23 + 16))
			{
				*((_QWORD*)v24 - 1) = v23;
			}
			else
			{
				v25 = sub_14018B280(8 * v23 + 16, 0);
				if (v25)
				{
					*(_QWORD*)v25 = off_140B55060;
					*((_QWORD*)v25 + 1) = v23;
				}
				v24 = v25 + 4;
			}
		}
		else
		{
			v24 = 0i64;
		}
		if ((int*)*v21 != v24)
		{
			sub_1407DB590(v24, (int*)*v21, 8 * v21[1]);
			if (*v21)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v21 - 16) + 8i64))(*v21 - 16);
			*v21 = (__int64)v24;
		}
		v21 += 2;
	}
	v26 = 0i64;
	v27 = a1 + 102;
	do
	{
		v28 = *(&v140 + v26);
		if (v27[1] > v28)
			v27[1] = v28;
		v29 = (int*)*v27;
		if (v28)
		{
			if (v29 && (**((unsigned int(__fastcall***)(__int64, __int64))v29 - 2))((__int64)(v29 - 4), 8 * v28 + 16))
			{
				*((_QWORD*)v29 - 1) = v28;
			}
			else
			{
				v30 = sub_14018B280(8 * v28 + 16, 0);
				if (v30)
				{
					*(_QWORD*)v30 = off_140B55060;
					*((_QWORD*)v30 + 1) = v28;
				}
				v29 = v30 + 4;
			}
		}
		else
		{
			v29 = 0i64;
		}
		if ((int*)*v27 != v29)
		{
			sub_1407DB590(v29, (int*)*v27, 8 * v27[1]);
			if (*v27)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v27 - 16) + 8i64))(*v27 - 16);
			*v27 = (__int64)v29;
		}
		++v26;
		v27 += 2;
	} while (v26 < 0x17);
	v31 = 0i64;
	v32 = a1 + 148;
	do
	{
		v33 = *(&v132 + v31);
		if (v32[1] > v33)
			v32[1] = v33;
		v34 = (int*)*v32;
		if (v33)
		{
			if (v34 && (**((unsigned int(__fastcall***)(__int64, __int64))v34 - 2))((__int64)(v34 - 4), 8 * v33 + 16))
			{
				*((_QWORD*)v34 - 1) = v33;
			}
			else
			{
				v35 = sub_14018B280(8 * v33 + 16, 0);
				if (v35)
				{
					*(_QWORD*)v35 = off_140B55060;
					*((_QWORD*)v35 + 1) = v33;
				}
				v34 = v35 + 4;
			}
		}
		else
		{
			v34 = 0i64;
		}
		if ((int*)*v32 != v34)
		{
			sub_1407DB590(v34, (int*)*v32, 8 * v32[1]);
			if (*v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v32 - 16) + 8i64))(*v32 - 16);
			*v32 = (__int64)v34;
		}
		++v31;
		v32 += 2;
	} while (v31 < 0x11);
	v36 = 0i64;
	v37 = 0i64;
	v127 = 0i64;
	if (v128)
	{
		v38 = sub_14018B280(4 * v128 + 16, 0);
		if (v38)
		{
			*((_QWORD*)v38 + 1) = v128;
			*(_QWORD*)v38 = off_140B55060;
		}
		v39 = v38 + 4;
		if (v39)
			v37 = v39;
	}
	v40 = 0;
	if (qword_140C63838)
	{
		v41 = qword_140C63838(off_140A6CE78, qword_140C63858);
	}
	else
	{
		if (dword_140C64CA4 || (int)sub_1402338A0() < 0)
			goto LABEL_229;
		v41 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D88 + 40i64))(qword_140C63D88);
	}
	v125 = v41;
	if (v41)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64CA4)
			{
				v43 = 0i64;
			}
			else
			{
				if ((int)sub_1402338A0() >= 0)
				{
					v42 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D88 + 32i64))(qword_140C63D88, v40);
					goto LABEL_130;
				}
				v43 = 0i64;
			}
		LABEL_131:
			v44 = *((_DWORD*)v43 + 14);
			if ((v44 & 0x10000) != 0)
			{
				v45 = v36 + 1;
				v46 = sub_14018DB00((__int64)v37, v36 + 1, 4i64);
				v47 = v46;
				v46[v36] = *(_DWORD*)v43;
				if (v37 != v46)
				{
					sub_1407DB590(v46, v37, 4 * v36);
					if (v37)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
					v37 = v47;
				}
				++v36;
				v127 = v45;
			}
			else
			{
				if ((v44 & 2) != 0)
				{
					v48 = a1[97];
					v49 = sub_14018DB00(a1[96], v48 + 1, 8i64);
					v50 = v49;
					*(_QWORD*)&v49[2 * v48] = v43;
					v51 = (int*)a1[96];
					if (v51 != v49)
					{
						sub_1407DB590(v49, v51, 8 * a1[97]);
						v52 = a1[96];
						if (v52)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
						a1[96] = (__int64)v50;
					}
					a1[97] = v48 + 1;
				}
				if ((v43[56] & 4) != 0)
				{
					v53 = a1[99];
					v54 = sub_14018DB00(a1[98], v53 + 1, 8i64);
					v55 = v54;
					*(_QWORD*)&v54[2 * v53] = v43;
					v56 = (int*)a1[98];
					if (v56 != v54)
					{
						sub_1407DB590(v54, v56, 8 * a1[99]);
						v57 = a1[98];
						if (v57)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v57 - 16) + 8i64))(v57 - 16);
						a1[98] = (__int64)v55;
					}
					a1[99] = v53 + 1;
				}
				if ((v43[56] & 8) != 0)
				{
					v58 = a1[105];
					v59 = sub_14018DB00(a1[104], v58 + 1, 8i64);
					v60 = v59;
					*(_QWORD*)&v59[2 * v58] = v43;
					v61 = (int*)a1[104];
					if (v61 != v59)
					{
						sub_1407DB590(v59, v61, 8 * a1[105]);
						v62 = a1[104];
						if (v62)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v62 - 16) + 8i64))(v62 - 16);
						a1[104] = (__int64)v60;
					}
					a1[105] = v58 + 1;
				}
				if ((v43[56] & 0x10) != 0)
				{
					v63 = a1[109];
					v64 = sub_14018DB00(a1[108], v63 + 1, 8i64);
					v65 = v64;
					*(_QWORD*)&v64[2 * v63] = v43;
					v66 = (int*)a1[108];
					if (v66 != v64)
					{
						sub_1407DB590(v64, v66, 8 * a1[109]);
						v67 = a1[108];
						if (v67)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v67 - 16) + 8i64))(v67 - 16);
						a1[108] = (__int64)v65;
					}
					a1[109] = v63 + 1;
				}
				if ((v43[56] & 0x20) != 0)
				{
					v68 = a1[117];
					v69 = sub_14018DB00(a1[116], v68 + 1, 8i64);
					v70 = v69;
					*(_QWORD*)&v69[2 * v68] = v43;
					v71 = (int*)a1[116];
					if (v71 != v69)
					{
						sub_1407DB590(v69, v71, 8 * a1[117]);
						v72 = a1[116];
						if (v72)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v72 - 16) + 8i64))(v72 - 16);
						a1[116] = (__int64)v70;
					}
					a1[117] = v68 + 1;
				}
				if ((v43[56] & 0x40) != 0)
				{
					v73 = a1[113];
					v74 = sub_14018DB00(a1[112], v73 + 1, 8i64);
					v75 = v74;
					*(_QWORD*)&v74[2 * v73] = v43;
					v76 = (int*)a1[112];
					if (v76 != v74)
					{
						sub_1407DB590(v74, v76, 8 * a1[113]);
						v77 = a1[112];
						if (v77)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v77 - 16) + 8i64))(v77 - 16);
						a1[112] = (__int64)v75;
					}
					a1[113] = v73 + 1;
				}
				if (v43[56] < 0)
				{
					v78 = a1[107];
					v79 = sub_14018DB00(a1[106], v78 + 1, 8i64);
					v80 = v79;
					*(_QWORD*)&v79[2 * v78] = v43;
					v81 = (int*)a1[106];
					if (v81 != v79)
					{
						sub_1407DB590(v79, v81, 8 * a1[107]);
						v82 = a1[106];
						if (v82)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v82 - 16) + 8i64))(v82 - 16);
						a1[106] = (__int64)v80;
					}
					a1[107] = v78 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x100) != 0)
				{
					v83 = a1[111];
					v84 = sub_14018DB00(a1[110], v83 + 1, 8i64);
					v85 = v84;
					*(_QWORD*)&v84[2 * v83] = v43;
					v86 = (int*)a1[110];
					if (v86 != v84)
					{
						sub_1407DB590(v84, v86, 8 * a1[111]);
						v87 = a1[110];
						if (v87)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v87 - 16) + 8i64))(v87 - 16);
						a1[110] = (__int64)v85;
					}
					a1[111] = v83 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x200) != 0)
				{
					v88 = a1[151];
					v89 = sub_14018DB00(a1[150], v88 + 1, 8i64);
					v90 = v89;
					*(_QWORD*)&v89[2 * v88] = v43;
					v91 = (int*)a1[150];
					if (v91 != v89)
					{
						sub_1407DB590(v89, v91, 8 * a1[151]);
						v92 = a1[150];
						if (v92)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v92 - 16) + 8i64))(v92 - 16);
						a1[150] = (__int64)v90;
					}
					a1[151] = v88 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x400) != 0)
				{
					v93 = a1[155];
					v94 = sub_14018DB00(a1[154], v93 + 1, 8i64);
					v95 = v94;
					*(_QWORD*)&v94[2 * v93] = v43;
					v96 = (int*)a1[154];
					if (v96 != v94)
					{
						sub_1407DB590(v94, v96, 8 * a1[155]);
						v97 = a1[154];
						if (v97)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v97 - 16) + 8i64))(v97 - 16);
						a1[154] = (__int64)v95;
					}
					a1[155] = v93 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x800) != 0)
				{
					v98 = a1[157];
					v99 = sub_14018DB00(a1[156], v98 + 1, 8i64);
					v100 = v99;
					*(_QWORD*)&v99[2 * v98] = v43;
					v101 = (int*)a1[156];
					if (v101 != v99)
					{
						sub_1407DB590(v99, v101, 8 * a1[157]);
						v102 = a1[156];
						if (v102)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v102 - 16) + 8i64))(v102 - 16);
						a1[156] = (__int64)v100;
					}
					a1[157] = v98 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x1000) != 0)
				{
					v103 = a1[181];
					v104 = sub_14018DB00(a1[180], v103 + 1, 8i64);
					v105 = v104;
					*(_QWORD*)&v104[2 * v103] = v43;
					v106 = (int*)a1[180];
					if (v106 != v104)
					{
						sub_1407DB590(v104, v106, 8 * a1[181]);
						v107 = a1[180];
						if (v107)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v107 - 16) + 8i64))(v107 - 16);
						a1[180] = (__int64)v105;
					}
					a1[181] = v103 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x2000) != 0)
				{
					v108 = a1[159];
					v109 = sub_14018DB00(a1[158], v108 + 1, 8i64);
					v110 = v109;
					*(_QWORD*)&v109[2 * v108] = v43;
					v111 = (int*)a1[158];
					if (v111 != v109)
					{
						sub_1407DB590(v109, v111, 8 * a1[159]);
						v112 = a1[158];
						if (v112)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v112 - 16) + 8i64))(v112 - 16);
						a1[158] = (__int64)v110;
					}
					a1[159] = v108 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x4000) != 0)
				{
					v113 = a1[173];
					v114 = sub_14018DB00(a1[172], v113 + 1, 8i64);
					v115 = v114;
					*(_QWORD*)&v114[2 * v113] = v43;
					v116 = (int*)a1[172];
					if (v116 != v114)
					{
						sub_1407DB590(v114, v116, 8 * a1[173]);
						v117 = a1[172];
						if (v117)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v117 - 16) + 8i64))(v117 - 16);
						a1[172] = (__int64)v115;
					}
					a1[173] = v113 + 1;
				}
				if ((*((_DWORD*)v43 + 14) & 0x8000) != 0)
				{
					v118 = a1[175];
					v119 = sub_14018DB00(a1[174], v118 + 1, 8i64);
					v120 = v119;
					*(_QWORD*)&v119[2 * v118] = v43;
					v121 = (int*)a1[174];
					if (v121 != v119)
					{
						sub_1407DB590(v119, v121, 8 * a1[175]);
						v122 = a1[174];
						if (v122)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v122 - 16) + 8i64))(v122 - 16);
						a1[174] = (__int64)v120;
					}
					a1[175] = v118 + 1;
				}
				v36 = v127;
			}
			if (++v40 >= v125)
				goto LABEL_229;
		}
		v42 = qword_140C63848(off_140A6CE78, v40, qword_140C63858);
	LABEL_130:
		v43 = (char*)v42;
		goto LABEL_131;
	}
LABEL_229:
	result = (*(__int64(__fastcall**)(__int64, __int64*, int*, __int64))(*(_QWORD*)qword_140C65848 + 16i64))(
		qword_140C65848,
		a1 + 95,
		v37,
		v36);
	if (v37)
		return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
	return result;
}
// 140A6CE78: using guessed type wchar_t *off_140A6CE78[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D88: using guessed type __int64 qword_140C63D88;
// 140C64CA4: using guessed type int dword_140C64CA4;
// 140C65848: using guessed type __int64 qword_140C65848;


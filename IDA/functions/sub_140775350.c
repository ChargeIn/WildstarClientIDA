#include "../winhttp.h"

//----- (0000000140775350) ----------------------------------------------------
__int64 __fastcall sub_140775350(__m128* a1, __int64 a2, __int64 a3, double a4, __int64 a5)
{
	_QWORD* v5; // rsi
	__int64 v6; // rdx
	unsigned __int64 v7; // rax
	_DWORD* v8; // r14
	__m128* v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	_QWORD* v13; // rcx
	int v14; // r10d
	_QWORD* v15; // rbx
	unsigned __int64 v16; // rcx
	__m128* v17; // r15
	unsigned int v18; // xmm6_4
	_DWORD* v19; // r13
	__int64 v20; // rax
	__m128* v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rax
	int v24; // eax
	int v25; // r12d
	unsigned int v26; // edi
	__int64 v27; // r9
	int v28; // r14d
	_DWORD* v29; // rdx
	__int64 v30; // rcx
	unsigned __int64* v31; // r15
	unsigned __int64 v32; // r14
	__int64 v33; // rdi
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64* v37; // rax
	float* v38; // rax
	__int64 v39; // r9
	_DWORD* v40; // rdx
	__int64 v41; // rcx
	unsigned __int64* v42; // r15
	unsigned __int64 v43; // r14
	__int64 v44; // rdi
	__int64 v45; // rax
	__int64 v46; // rcx
	int v47; // edi
	__int64 v48; // r9
	unsigned int v49; // r12d
	_DWORD* v50; // rdx
	__int64 v51; // rcx
	__int64 v52; // r8
	__int64 v53; // r9
	_DWORD* v54; // rdx
	__int64 v55; // rcx
	unsigned __int64* v56; // r15
	unsigned __int64 v57; // r14
	__int64 v58; // rdi
	__int64 v59; // rax
	__int64 v60; // rcx
	__int64 v61; // r9
	_DWORD* v62; // rdx
	__int64 v63; // rcx
	__int64 v64; // r8
	unsigned __int16* v65; // rax
	unsigned int v66; // edi
	__int64 v67; // r9
	_DWORD* v68; // rdx
	__int64 v69; // rcx
	__int64 v70; // rax
	__int16* v71; // r10
	__int16* v72; // rax
	__int64 v73; // r9
	_DWORD* v74; // rdx
	__int64 v75; // rcx
	unsigned __int16* v76; // r9
	__int64 v77; // rax
	__int64 v78; // r10
	__int64 v79; // r9
	int v80; // r12d
	_DWORD* v81; // rcx
	unsigned __int64* v82; // r15
	unsigned __int64 v83; // r14
	__int64 v84; // rdi
	__int64 v85; // rax
	__int64 v86; // rcx
	__int64 v87; // rax
	__int64* v88; // rax
	__int64 v89; // rax
	__int64 v90; // r10
	__int64 v91; // r9
	int v92; // r13d
	_DWORD* v93; // rcx
	unsigned __int64* v94; // r15
	unsigned __int64 v95; // r14
	__int64 v96; // rdi
	__int64 v97; // rax
	__int64 v98; // rcx
	__int64 v99; // r9
	_DWORD* v100; // rdx
	__int64 v101; // rcx
	__int64 v102; // r8
	__int64 v103; // rdi
	__int64 v104; // rax
	__int64 v105; // r10
	__int64 v106; // r9
	__int64 v107; // r12
	_DWORD* v108; // rcx
	unsigned __int64* v109; // r15
	unsigned __int64 v110; // r14
	__int64 v111; // rdi
	__int64 v112; // rax
	__int64 v113; // rcx
	_DWORD* v114; // rax
	__int64 v115; // rdx
	__int64 v116; // r8
	__int64 v117; // rdx
	_QWORD* v118; // rax
	__int64 v119; // r8
	__int64 v120; // rdx
	int v121; // r10d
	double v123; // [rsp+40h] [rbp-C0h]
	double v124; // [rsp+40h] [rbp-C0h]
	double v125; // [rsp+40h] [rbp-C0h]
	double v126; // [rsp+40h] [rbp-C0h]
	double v127; // [rsp+40h] [rbp-C0h]
	double v128; // [rsp+40h] [rbp-C0h]
	double v129; // [rsp+40h] [rbp-C0h]
	double v130; // [rsp+40h] [rbp-C0h]
	double v131; // [rsp+40h] [rbp-C0h]
	double v132; // [rsp+40h] [rbp-C0h]
	double v133; // [rsp+40h] [rbp-C0h]
	int v134; // [rsp+48h] [rbp-B8h]
	int v135; // [rsp+4Ch] [rbp-B4h] BYREF
	unsigned __int64 v136; // [rsp+50h] [rbp-B0h]
	__int64 v137; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v138; // [rsp+60h] [rbp-A0h]
	__m128* v139; // [rsp+78h] [rbp-88h]
	_DWORD* v140; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v141)(); // [rsp+88h] [rbp-78h] BYREF
	int v142; // [rsp+90h] [rbp-70h]
	_QWORD* v143; // [rsp+98h] [rbp-68h]
	int v144; // [rsp+A0h] [rbp-60h]
	__m128 v145; // [rsp+B0h] [rbp-50h] BYREF
	char v146[8]; // [rsp+C0h] [rbp-40h] BYREF
	int v147; // [rsp+C8h] [rbp-38h]
	__int64 v148; // [rsp+D0h] [rbp-30h]
	__int128 v149; // [rsp+E0h] [rbp-20h] BYREF
	char v150[8]; // [rsp+F0h] [rbp-10h] BYREF
	int v151; // [rsp+F8h] [rbp-8h]
	__int64 v152; // [rsp+100h] [rbp+0h]
	char v153[16]; // [rsp+110h] [rbp+10h] BYREF
	char v154[16]; // [rsp+120h] [rbp+20h] BYREF
	int v156; // [rsp+1A8h] [rbp+A8h] BYREF
	_DWORD* v157; // [rsp+1B0h] [rbp+B0h]

	v157 = (_DWORD*)a3;
	v5 = (_QWORD*)a2;
	v143 = (_QWORD*)a2;
	v6 = *(_QWORD*)(a2 + 32);
	v141 = off_140B569F0;
	v7 = *(_QWORD*)(v6 + 112);
	v8 = (_DWORD*)a3;
	v9 = a1;
	v144 = 1;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0((__int64)v5);
	v10 = v5[2];
	v11 = sub_14005C1B0((__int64)v5, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	v5[2] += 16i64;
	v12 = sub_1400578C0((__int64)v5);
	v13 = (_QWORD*)v9[3].m128_u64[1];
	v14 = v12;
	v142 = v12;
	v15 = (_QWORD*)*v13;
	if ((_QWORD*)*v13 != v13)
	{
		do
		{
			v16 = 0i64;
			v136 = 0i64;
			if (v15[4])
			{
				v17 = v9 + 2;
				v139 = v9 + 2;
				do
				{
					v18 = v9[1].m128_u32[0];
					v19 = *(_DWORD**)(v15[3] + 8 * v16);
					v135 = 0;
					v20 = *(_QWORD*)v19;
					v140 = v19;
					v21 = (__m128*)(*(__int64(__fastcall**)(_DWORD*, char*))(v20 + 16))(v19, v154);
					sub_1407711C0(&v145, v21, v17, a4, v18, a5, &v156, (float*)&v135);
					if (((int)v145.m128_f32[0] - *v8) * ((int)v145.m128_f32[0] - *v8)
						+ ((int)v145.m128_f32[1] - v8[1]) * ((int)v145.m128_f32[1] - v8[1]) < 256)
					{
						if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
							sub_14005E2C0((__int64)v5);
						v22 = v5[2];
						v23 = sub_14005C1B0((__int64)v5, 0, 0);
						*(_DWORD*)(v22 + 8) = 5;
						*(_QWORD*)v22 = v23;
						v5[2] += 16i64;
						v24 = sub_1400578C0((__int64)v5);
						v25 = v19[2];
						v26 = v24 - 1;
						v27 = *(_QWORD*)(v5[4] + 160i64);
						v28 = v24;
						v156 = v24;
						v134 = v24 - 1;
						if ((unsigned int)(v24 - 1) >= *(_DWORD*)(v27 + 56))
						{
							if ((double)v24 == 0.0)
							{
								v29 = *(_DWORD**)(v27 + 32);
							}
							else
							{
								v123 = (double)v24;
								v29 = (_DWORD*)(*(_QWORD*)(v27 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v123) + HIDWORD(v123))
										% (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
							}
							while (v29[6] != 3 || (double)v24 != *((double*)v29 + 2))
							{
								v29 = (_DWORD*)*((_QWORD*)v29 + 4);
								if (!v29)
								{
									v29 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v29 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v24 - 1));
						}
						v30 = v5[2];
						*(_QWORD*)v30 = *(_QWORD*)v29;
						*(_DWORD*)(v30 + 8) = v29[2];
						v5[2] += 16i64;
						v31 = (unsigned __int64*)sub_14018F0E0(&v137, L"id")[1];
						if (v31)
						{
							v32 = -1i64;
							do
								++v32;
							while (*((_BYTE*)v31 + v32));
							if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
								sub_14005E2C0((__int64)v5);
							v33 = v5[2];
							v34 = sub_140062650((__int64)v5, v31, v32);
							v28 = v156;
							*(_DWORD*)(v33 + 8) = 4;
							*(_QWORD*)v33 = v34;
							v26 = v134;
						}
						else
						{
							*(_DWORD*)(v5[2] + 8i64) = 0;
						}
						v35 = v138;
						v5[2] += 16i64;
						if (v35)
							sub_14018B900(v35, 0);
						v36 = v5[2];
						*(_DWORD*)(v36 + 8) = 3;
						*(double*)v36 = (double)v25;
						v5[2] += 16i64;
						v37 = (__int64*)sub_1400580E0((__int64)v5, -3);
						sub_14005EA50((__int64)v5, v37, (int*)(v5[2] - 32i64), (unsigned int*)(v5[2] - 16i64));
						v5[2] -= 48i64;
						v38 = (float*)(*(__int64(__fastcall**)(_DWORD*, char*))(*(_QWORD*)v19 + 16i64))(v19, v153);
						sub_1400FA3C0((__int64)v146, (__int64)v5, v38);
						v39 = *(_QWORD*)(v5[4] + 160i64);
						if (v26 >= *(_DWORD*)(v39 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v40 = *(_DWORD**)(v39 + 32);
							}
							else
							{
								v124 = (double)v28;
								v40 = (_DWORD*)(*(_QWORD*)(v39 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v124) + HIDWORD(v124))
										% (((1i64 << *(_BYTE*)(v39 + 11)) - 1) | 1)));
							}
							while (v40[6] != 3 || (double)v28 != *((double*)v40 + 2))
							{
								v40 = (_DWORD*)*((_QWORD*)v40 + 4);
								if (!v40)
								{
									v40 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v40 = (_DWORD*)(*(_QWORD*)(v39 + 24) + 16i64 * (v28 - 1));
						}
						v41 = v5[2];
						*(_QWORD*)v41 = *(_QWORD*)v40;
						*(_DWORD*)(v41 + 8) = v40[2];
						v5[2] += 16i64;
						v42 = (unsigned __int64*)sub_14018F0E0(&v137, L"loc")[1];
						if (v42)
						{
							v43 = -1i64;
							do
								++v43;
							while (*((_BYTE*)v42 + v43));
							if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
								sub_14005E2C0((__int64)v5);
							v44 = v5[2];
							v45 = sub_140062650((__int64)v5, v42, v43);
							v28 = v156;
							*(_DWORD*)(v44 + 8) = 4;
							*(_QWORD*)v44 = v45;
						}
						else
						{
							*(_DWORD*)(v5[2] + 8i64) = 0;
						}
						v46 = v138;
						v5[2] += 16i64;
						if (v46)
							sub_14018B900(v46, 0);
						v47 = v147;
						v48 = *(_QWORD*)(v5[4] + 160i64);
						v49 = v147 - 1;
						if ((unsigned int)(v147 - 1) >= *(_DWORD*)(v48 + 56))
						{
							if ((double)v147 == 0.0)
							{
								v50 = *(_DWORD**)(v48 + 32);
							}
							else
							{
								v125 = (double)v147;
								v50 = (_DWORD*)(*(_QWORD*)(v48 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v125) + HIDWORD(v125))
										% (((1i64 << *(_BYTE*)(v48 + 11)) - 1) | 1)));
							}
							while (v50[6] != 3 || (double)v147 != *((double*)v50 + 2))
							{
								v50 = (_DWORD*)*((_QWORD*)v50 + 4);
								if (!v50)
								{
									v50 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v50 = (_DWORD*)(*(_QWORD*)(v48 + 24) + 16i64 * (v147 - 1));
						}
						v51 = v5[2];
						*(_QWORD*)v51 = *(_QWORD*)v50;
						*(_DWORD*)(v51 + 8) = v50[2];
						v52 = v5[2] + 16i64;
						v5[2] = v52;
						sub_14005EA50((__int64)v5, (__int64*)(v52 - 48), (int*)(v52 - 32), (unsigned int*)(v52 - 16));
						v5[2] -= 48i64;
						v149 = *((_OWORD*)v19 + 20);
						sub_1400FA180((__int64)v150, (__int64)v5, (float*)&v149);
						v53 = *(_QWORD*)(v5[4] + 160i64);
						if ((unsigned int)(v28 - 1) >= *(_DWORD*)(v53 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v54 = *(_DWORD**)(v53 + 32);
							}
							else
							{
								v126 = (double)v28;
								v54 = (_DWORD*)(*(_QWORD*)(v53 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v126) + HIDWORD(v126))
										% (((1i64 << *(_BYTE*)(v53 + 11)) - 1) | 1)));
							}
							while (v54[6] != 3 || (double)v28 != *((double*)v54 + 2))
							{
								v54 = (_DWORD*)*((_QWORD*)v54 + 4);
								if (!v54)
								{
									v54 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v54 = (_DWORD*)(*(_QWORD*)(v53 + 24) + 16i64 * (v28 - 1));
						}
						v55 = v5[2];
						*(_QWORD*)v55 = *(_QWORD*)v54;
						*(_DWORD*)(v55 + 8) = v54[2];
						v5[2] += 16i64;
						v56 = (unsigned __int64*)sub_14018F0E0(&v137, L"ptMap")[1];
						if (v56)
						{
							v57 = -1i64;
							do
								++v57;
							while (*((_BYTE*)v56 + v57));
							if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
								sub_14005E2C0((__int64)v5);
							v58 = v5[2];
							v59 = sub_140062650((__int64)v5, v56, v57);
							v28 = v156;
							*(_DWORD*)(v58 + 8) = 4;
							*(_QWORD*)v58 = v59;
							v47 = v147;
						}
						else
						{
							*(_DWORD*)(v5[2] + 8i64) = 0;
						}
						v60 = v138;
						v5[2] += 16i64;
						if (v60)
							sub_14018B900(v60, 0);
						v61 = *(_QWORD*)(v5[4] + 160i64);
						if (v49 >= *(_DWORD*)(v61 + 56))
						{
							if ((double)v47 == 0.0)
							{
								v62 = *(_DWORD**)(v61 + 32);
							}
							else
							{
								v127 = (double)v47;
								v62 = (_DWORD*)(*(_QWORD*)(v61 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v127) + HIDWORD(v127))
										% (((1i64 << *(_BYTE*)(v61 + 11)) - 1) | 1)));
							}
							while (v62[6] != 3 || (double)v47 != *((double*)v62 + 2))
							{
								v62 = (_DWORD*)*((_QWORD*)v62 + 4);
								if (!v62)
								{
									v62 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v62 = (_DWORD*)(*(_QWORD*)(v61 + 24) + 16i64 * (v47 - 1));
						}
						v63 = v5[2];
						*(_QWORD*)v63 = *(_QWORD*)v62;
						*(_DWORD*)(v63 + 8) = v62[2];
						v64 = v5[2] + 16i64;
						v5[2] = v64;
						sub_14005EA50((__int64)v5, (__int64*)(v64 - 48), (int*)(v64 - 32), (unsigned int*)(v64 - 16));
						v5[2] -= 48i64;
						v65 = (unsigned __int16*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v19 + 8i64))(v19);
						v66 = v28 - 1;
						v67 = *(_QWORD*)(v5[4] + 160i64);
						if ((unsigned int)(v28 - 1) >= *(_DWORD*)(v67 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v68 = *(_DWORD**)(v67 + 32);
							}
							else
							{
								v128 = (double)v28;
								v68 = (_DWORD*)(*(_QWORD*)(v67 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v128) + HIDWORD(v128))
										% (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
							}
							while (v68[6] != 3 || (double)v28 != *((double*)v68 + 2))
							{
								v68 = (_DWORD*)*((_QWORD*)v68 + 4);
								if (!v68)
								{
									v68 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v68 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v28 - 1));
						}
						v69 = v5[2];
						*(_QWORD*)v69 = *(_QWORD*)v68;
						*(_DWORD*)(v69 + 8) = v68[2];
						v5[2] += 16i64;
						sub_1400F0870((__int64)v5, (__int64)v68, L"strName", v65);
						v5[2] -= 16i64;
						v70 = *(_QWORD*)sub_140770E90((__int64)v19);
						if (v70)
						{
							v72 = *(__int16**)(v70 + 32);
							v71 = &word_140B7B704;
							if (v72)
								v71 = v72;
						}
						else
						{
							v71 = 0i64;
						}
						v73 = *(_QWORD*)(v5[4] + 160i64);
						if (v66 >= *(_DWORD*)(v73 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v74 = *(_DWORD**)(v73 + 32);
							}
							else
							{
								v129 = (double)v28;
								v74 = (_DWORD*)(*(_QWORD*)(v73 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v129) + HIDWORD(v129))
										% (((1i64 << *(_BYTE*)(v73 + 11)) - 1) | 1)));
							}
							while (v74[6] != 3 || (double)v28 != *((double*)v74 + 2))
							{
								v74 = (_DWORD*)*((_QWORD*)v74 + 4);
								if (!v74)
								{
									v74 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v74 = (_DWORD*)(*(_QWORD*)(v73 + 24) + 16i64 * (v28 - 1));
						}
						v75 = v5[2];
						v76 = (unsigned __int16*)&unk_1409F999C;
						*(_QWORD*)v75 = *(_QWORD*)v74;
						*(_DWORD*)(v75 + 8) = v74[2];
						v5[2] += 16i64;
						if (v71)
							v76 = (unsigned __int16*)v71;
						sub_1400F0870((__int64)v5, (__int64)v74, L"strIcon", v76);
						v77 = v5[4];
						v78 = v5[2] - 16i64;
						v5[2] = v78;
						v79 = *(_QWORD*)(v77 + 160);
						v80 = v19[3];
						if (v66 >= *(_DWORD*)(v79 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v81 = *(_DWORD**)(v79 + 32);
							}
							else
							{
								v130 = (double)v28;
								v81 = (_DWORD*)(*(_QWORD*)(v79 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v130) + HIDWORD(v130))
										% (((1i64 << *(_BYTE*)(v79 + 11)) - 1) | 1)));
							}
							while (v81[6] != 3 || (double)v28 != *((double*)v81 + 2))
							{
								v81 = (_DWORD*)*((_QWORD*)v81 + 4);
								if (!v81)
								{
									v81 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v81 = (_DWORD*)(*(_QWORD*)(v79 + 24) + 16i64 * (v28 - 1));
						}
						*(_QWORD*)v78 = *(_QWORD*)v81;
						*(_DWORD*)(v78 + 8) = v81[2];
						v5[2] += 16i64;
						v82 = (unsigned __int64*)sub_14018F0E0(&v137, L"eType")[1];
						if (v82)
						{
							v83 = -1i64;
							do
								++v83;
							while (*((_BYTE*)v82 + v83));
							if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
								sub_14005E2C0((__int64)v5);
							v84 = v5[2];
							v85 = sub_140062650((__int64)v5, v82, v83);
							v28 = v156;
							*(_DWORD*)(v84 + 8) = 4;
							*(_QWORD*)v84 = v85;
							v66 = v134;
						}
						else
						{
							*(_DWORD*)(v5[2] + 8i64) = 0;
						}
						v86 = v138;
						v5[2] += 16i64;
						if (v86)
							sub_14018B900(v86, 0);
						v87 = v5[2];
						*(_DWORD*)(v87 + 8) = 3;
						*(double*)v87 = (double)v80;
						v5[2] += 16i64;
						v88 = (__int64*)sub_1400580E0((__int64)v5, -3);
						sub_14005EA50((__int64)v5, v88, (int*)(v5[2] - 32i64), (unsigned int*)(v5[2] - 16i64));
						v89 = v5[4];
						v90 = v5[2] - 48i64;
						v5[2] = v90;
						v91 = *(_QWORD*)(v89 + 160);
						v92 = v19[90];
						if (v66 >= *(_DWORD*)(v91 + 56))
						{
							if ((double)v28 == 0.0)
							{
								v93 = *(_DWORD**)(v91 + 32);
							}
							else
							{
								v131 = (double)v28;
								v93 = (_DWORD*)(*(_QWORD*)(v91 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v131) + HIDWORD(v131))
										% (((1i64 << *(_BYTE*)(v91 + 11)) - 1) | 1)));
							}
							while (v93[6] != 3 || (double)v28 != *((double*)v93 + 2))
							{
								v93 = (_DWORD*)*((_QWORD*)v93 + 4);
								if (!v93)
								{
									v93 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v93 = (_DWORD*)(*(_QWORD*)(v91 + 24) + 16i64 * (v28 - 1));
						}
						*(_QWORD*)v90 = *(_QWORD*)v93;
						*(_DWORD*)(v90 + 8) = v93[2];
						v5[2] += 16i64;
						v94 = (unsigned __int64*)sub_14018F0E0(&v137, L"userData")[1];
						if (v94)
						{
							v95 = -1i64;
							do
								++v95;
							while (*((_BYTE*)v94 + v95));
							if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
								sub_14005E2C0((__int64)v5);
							v96 = v5[2];
							v97 = sub_140062650((__int64)v5, v94, v95);
							v28 = v156;
							*(_DWORD*)(v96 + 8) = 4;
							*(_QWORD*)v96 = v97;
						}
						else
						{
							*(_DWORD*)(v5[2] + 8i64) = 0;
						}
						v98 = v138;
						v5[2] += 16i64;
						if (v98)
							sub_14018B900(v98, 0);
						v99 = *(_QWORD*)(v5[4] + 160i64);
						if ((unsigned int)(v92 - 1) >= *(_DWORD*)(v99 + 56))
						{
							if ((double)v92 == 0.0)
							{
								v100 = *(_DWORD**)(v99 + 32);
							}
							else
							{
								v132 = (double)v92;
								v100 = (_DWORD*)(*(_QWORD*)(v99 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v132) + HIDWORD(v132))
										% (((1i64 << *(_BYTE*)(v99 + 11)) - 1) | 1)));
							}
							while (v100[6] != 3 || (double)v92 != *((double*)v100 + 2))
							{
								v100 = (_DWORD*)*((_QWORD*)v100 + 4);
								if (!v100)
								{
									v100 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v100 = (_DWORD*)(*(_QWORD*)(v99 + 24) + 16i64 * (v92 - 1));
						}
						v101 = v5[2];
						*(_QWORD*)v101 = *(_QWORD*)v100;
						*(_DWORD*)(v101 + 8) = v100[2];
						v102 = v5[2] + 16i64;
						v5[2] = v102;
						sub_14005EA50((__int64)v5, (__int64*)(v102 - 48), (int*)(v102 - 32), (unsigned int*)(v102 - 16));
						v103 = (__int64)v140;
						v5[2] -= 48i64;
						if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v103 + 24i64))(v103))
						{
							v104 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v103 + 24i64))(v103);
							sub_140649930(v5, v104);
							v105 = v5[2];
							v106 = *(_QWORD*)(v5[4] + 160i64);
							v107 = (v105 - v5[3]) >> 4;
							if ((unsigned int)(v28 - 1) >= *(_DWORD*)(v106 + 56))
							{
								if ((double)v28 == 0.0)
								{
									v108 = *(_DWORD**)(v106 + 32);
								}
								else
								{
									v133 = (double)v28;
									v108 = (_DWORD*)(*(_QWORD*)(v106 + 32)
										+ 40
										* ((unsigned int)(LODWORD(v133) + HIDWORD(v133))
											% (((1i64 << *(_BYTE*)(v106 + 11)) - 1) | 1)));
								}
								while (v108[6] != 3 || (double)v28 != *((double*)v108 + 2))
								{
									v108 = (_DWORD*)*((_QWORD*)v108 + 4);
									if (!v108)
									{
										v108 = dword_140A12138;
										break;
									}
								}
							}
							else
							{
								v108 = (_DWORD*)(*(_QWORD*)(v106 + 24) + 16i64 * (v28 - 1));
							}
							*(_QWORD*)v105 = *(_QWORD*)v108;
							*(_DWORD*)(v105 + 8) = v108[2];
							v5[2] += 16i64;
							v109 = (unsigned __int64*)sub_14018F0E0(&v137, L"unit")[1];
							if (v109)
							{
								v110 = -1i64;
								do
									++v110;
								while (*((_BYTE*)v109 + v110));
								if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
									sub_14005E2C0((__int64)v5);
								v111 = v5[2];
								v112 = sub_140062650((__int64)v5, v109, v110);
								v28 = v156;
								*(_DWORD*)(v111 + 8) = 4;
								*(_QWORD*)v111 = v112;
							}
							else
							{
								*(_DWORD*)(v5[2] + 8i64) = 0;
							}
							v113 = v138;
							v5[2] += 16i64;
							if (v113)
								sub_14018B900(v113, 0);
							v114 = sub_1400580E0((__int64)v5, v107);
							v115 = v5[2];
							*(_QWORD*)v115 = *(_QWORD*)v114;
							*(_DWORD*)(v115 + 8) = v114[2];
							v116 = v5[2] + 16i64;
							v5[2] = v116;
							sub_14005EA50((__int64)v5, (__int64*)(v116 - 48), (int*)(v116 - 32), (unsigned int*)(v116 - 16));
							v5[2] -= 64i64;
						}
						sub_1400FB1D0((__int64)&v141);
						if (v152)
							sub_1400579E0(v152, v117, v151);
						if (v148)
							sub_1400579E0(v148, v117, v147);
						sub_1400579E0((__int64)v5, v117, v28);
						v9 = a1;
						v8 = v157;
						v17 = v139;
					}
					v16 = v136 + 1;
					v136 = v16;
				} while (v16 < v15[4]);
			}
			v15 = (_QWORD*)*v15;
		} while (v15 != (_QWORD*)v9[3].m128_u64[1]);
		v5 = v143;
		v14 = v142;
	}
	v118 = sub_14005C3C0(*(_QWORD*)(v5[4] + 160i64), v14);
	v119 = v5[2];
	*(_QWORD*)v119 = *v118;
	v120 = *((unsigned int*)v118 + 2);
	*(_DWORD*)(v119 + 8) = v120;
	v5[2] += 16i64;
	sub_1400579E0((__int64)v5, v120, v121);
	return 1i64;
}
// 140776162: variable 'v117' is possibly undefined
// 14077621A: variable 'v121' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4F198: using guessed type wchar_t aUnit_7[5];
// 140B4F1A8: using guessed type wchar_t aUserdata_0[9];
// 140B4F1C0: using guessed type wchar_t aEtype_48[6];
// 140B4F1D0: using guessed type wchar_t aStricon_22[8];
// 140B4F1E0: using guessed type wchar_t aStrname_119[8];
// 140B4F1F0: using guessed type wchar_t aPtmap_0[6];
// 140B4F200: using guessed type wchar_t aLoc_0[4];
// 140B4F208: using guessed type wchar_t aId_27[3];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140775350: using guessed type char var_70[16];
// 140775350: using guessed type char var_80[16];
// 140775350: using guessed type char var_D0[8];
// 140775350: using guessed type char var_A0[8];


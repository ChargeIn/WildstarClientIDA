#include "../winhttp.h"

//----- (000000014016E890) ----------------------------------------------------
void __fastcall sub_14016E890(__int64 a1)
{
	__int64 v1; // r15
	int* v2; // rdx
	_QWORD* v3; // rax
	__int64* v4; // r14
	__int64 v5; // r12
	__int64 v6; // r13
	_DWORD* v7; // rsi
	_QWORD** v8; // rdi
	int v9; // ebx
	__int64 i; // rdi
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // r15
	__int64 v16; // rdi
	int v17; // ebx
	int v18; // eax
	int v19; // ecx
	__int64 v20; // rbx
	int* v21; // rax
	int* v22; // rcx
	unsigned __int64 v23; // r8
	__int64 v24; // rcx
	int v25; // edx
	int v26; // r13d
	int v27; // r12d
	int* v28; // rax
	__int64 v29; // rbx
	int* v30; // rax
	__int64 v31; // rdx
	__int64 v32; // rcx
	int v33; // eax
	int v34; // eax
	int v35; // r13d
	int* v36; // rax
	__int64 v37; // rbx
	int* v38; // rax
	int v39; // xmm0_4
	__int64 v40; // rdx
	__int64 v41; // rax
	int* v42; // rax
	__int64 v43; // rbx
	int* v44; // rax
	int v45; // xmm0_4
	__int64 v46; // rdx
	__int64 v47; // rax
	int* v48; // rax
	__int64 v49; // rbx
	int* v50; // rax
	int v51; // xmm0_4
	__int64 v52; // rdx
	int v53; // edx
	int v54; // r12d
	int* v55; // rax
	__int64 v56; // rbx
	int* v57; // rax
	__int64 v58; // rdx
	__int64 v59; // rcx
	int v60; // eax
	int v61; // eax
	int v62; // r13d
	int* v63; // rax
	__int64 v64; // rbx
	int* v65; // rax
	int v66; // xmm0_4
	__int64 v67; // rdx
	__int64 v68; // rax
	int* v69; // rax
	__int64 v70; // rbx
	int* v71; // rax
	int v72; // xmm0_4
	__int64 v73; // rdx
	__int64 v74; // rax
	int* v75; // rax
	__int64 v76; // rbx
	int* v77; // rax
	int v78; // xmm0_4
	__int64 v79; // rdx
	__int64* v80; // rbx
	__int64 v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rdi
	unsigned __int64 v84; // r14
	__int64 v85; // [rsp+28h] [rbp-59h]
	_QWORD** v86; // [rsp+28h] [rbp-59h]
	int v87; // [rsp+28h] [rbp-59h]
	__int64 v88; // [rsp+38h] [rbp-49h] BYREF
	__int64 v89; // [rsp+40h] [rbp-41h]
	__int64 v90; // [rsp+48h] [rbp-39h]
	_DWORD* v91; // [rsp+50h] [rbp-31h]
	__int128 v92; // [rsp+58h] [rbp-29h]
	__int128 v93; // [rsp+68h] [rbp-19h]
	__int128 v94; // [rsp+78h] [rbp-9h]
	__int64* v95; // [rsp+88h] [rbp+7h]
	int v97; // [rsp+E8h] [rbp+67h]
	int v98; // [rsp+F0h] [rbp+6Fh]
	int v99; // [rsp+F8h] [rbp+77h]
	int* v100; // [rsp+100h] [rbp+7Fh] BYREF

	v1 = a1;
	v99 = 0;
	v98 = 0;
	if ((*(_BYTE*)(a1 + 664) & 0x10) != 0)
		v98 = *(_DWORD*)(a1 + 1372);
	*(_QWORD*)(a1 + 1600) = 0i64;
	v89 = 0i64;
	v90 = 0i64;
	v91 = 0i64;
	v92 = 0i64;
	v94 = 0i64;
	v95 = 0i64;
	v93 = 0i64;
	sub_140172F70(&v88);
	v3 = *(_QWORD**)(v1 + 1536);
	v4 = v95;
	v5 = *((_QWORD*)&v94 + 1);
	v6 = v94;
	v7 = (_DWORD*)*((_QWORD*)&v93 + 1);
	if (v3 != (_QWORD*)*v3)
	{
		do
		{
			v8 = (_QWORD**)(v3 + 1);
			v9 = *(_DWORD*)(v3[1] + 16i64);
			if (v7 == (_DWORD*)(v5 - 4))
			{
				if ((unsigned __int64)(v90 - (((__int64)v4 - v89) >> 3)) < 2)
				{
					sub_140173030((__int64)&v88, (__int64)v2);
					v4 = v95;
					v7 = (_DWORD*)*((_QWORD*)&v93 + 1);
				}
				*++v4 = (__int64)sub_14018B280(496i64, 0);
				if (v7)
					*v7 = v9;
				v6 = *v4;
				v95 = v4;
				v5 = v6 + 496;
				*(_QWORD*)&v94 = v6;
				v7 = (_DWORD*)v6;
				*((_QWORD*)&v94 + 1) = v6 + 496;
				*((_QWORD*)&v93 + 1) = v6;
			}
			else
			{
				if (v7)
					*v7 = v9;
				*((_QWORD*)&v93 + 1) = ++v7;
			}
			v3 = *v8;
		} while (*v8 != **(_QWORD***)(v1 + 1536));
	}
	for (i = (__int64)v91; v7 != v91; i = (__int64)v91)
	{
		v11 = (__int64)v7;
		if (v7 == (_DWORD*)v6)
			v11 = *(v4 - 1) + 496;
		v12 = *(int*)(v11 - 4);
		LODWORD(v100) = *(_DWORD*)(v11 - 4);
		if (v7 == (_DWORD*)v6)
		{
			sub_14018B900(v6, 0);
			v6 = *(v4 - 1);
			v5 = v6 + 496;
			v95 = --v4;
			v7 = (_DWORD*)(v6 + 492);
			*(_QWORD*)&v94 = v6;
			*((_QWORD*)&v94 + 1) = v6 + 496;
		}
		else
		{
			--v7;
		}
		*((_QWORD*)&v93 + 1) = v7;
		if ((int)v12 >= 0 && (int)v12 < (int)((__int64)(*(_QWORD*)(v1 + 1424) - *(_QWORD*)(v1 + 1416)) >> 3))
		{
			v13 = *(_QWORD*)(*(_QWORD*)(v1 + 1416) + 8 * v12);
			v85 = v13;
			if (v13)
			{
				if (*(_BYTE*)(v13 + 108))
				{
					v14 = *(_QWORD**)(v13 + 96);
					if (v14 != (_QWORD*)*v14)
					{
						v15 = v85;
						v16 = v89;
						do
						{
							v86 = (_QWORD**)(v14 + 1);
							v17 = *(_DWORD*)(v14[1] + 16i64);
							if (v7 == (_DWORD*)(v5 - 4))
							{
								if ((unsigned __int64)(v90 - (((__int64)v4 - v16) >> 3)) < 2)
								{
									sub_140173030((__int64)&v88, (__int64)v2);
									v4 = v95;
									v7 = (_DWORD*)*((_QWORD*)&v93 + 1);
									v16 = v89;
								}
								*++v4 = (__int64)sub_14018B280(496i64, 0);
								if (v7)
									*v7 = v17;
								v6 = *v4;
								v95 = v4;
								v5 = v6 + 496;
								*(_QWORD*)&v94 = v6;
								v7 = (_DWORD*)v6;
								*((_QWORD*)&v94 + 1) = v6 + 496;
								*((_QWORD*)&v93 + 1) = v6;
							}
							else
							{
								if (v7)
									*v7 = v17;
								*((_QWORD*)&v93 + 1) = ++v7;
							}
							v14 = *v86;
						} while (*v86 != **(_QWORD***)(v15 + 96));
						LODWORD(v12) = (_DWORD)v100;
						v1 = a1;
					}
				}
				LODWORD(v100) = v12;
				v98 += sub_14016E100(v1, (int*)&v100);
				LODWORD(v100) = v12;
				v18 = sub_14016E310(v1, (int*)&v100);
				v19 = v99;
				v20 = *(_QWORD*)(v1 + 1600);
				if (v99 < v18)
					v19 = v18;
				v99 = v19;
				v21 = sub_14018DB00(*(_QWORD*)(v1 + 1592), v20 + 1, 4i64);
				v100 = v21;
				v22 = &v21[v20];
				if (v22)
					*v22 = v12;
				if (*(int**)(v1 + 1592) != v21)
				{
					v23 = 0i64;
					if (*(_QWORD*)(v1 + 1600))
					{
						v2 = v21;
						do
						{
							if (v2)
								*v2 = *(_DWORD*)((char*)v2 - (char*)v21 + *(_QWORD*)(v1 + 1592));
							++v23;
							++v2;
						} while (v23 < *(_QWORD*)(v1 + 1600));
					}
					v24 = *(_QWORD*)(v1 + 1592);
					if (v24)
						(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16, v2);
					*(_QWORD*)(v1 + 1592) = v100;
				}
				*(_QWORD*)(v1 + 1600) = v20 + 1;
			}
		}
	}
	v25 = *(_DWORD*)(v1 + 716);
	v26 = *(_DWORD*)(v1 + 724);
	v97 = *(_DWORD*)(v1 + 720);
	v87 = *(_DWORD*)(v1 + 728);
	v27 = 0;
	LODWORD(v100) = v25;
	if (v99 + v25 - v26 > 0)
		v27 = v99 + v25 - v26;
	if ((*(_BYTE*)(v1 + 656) & 4) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 464))
		{
			v28 = sub_14018B280(1400i64, 0);
			v29 = (__int64)v28;
			if (v28)
			{
				sub_1400C35F0((__int64)v28);
				sub_1400C35F0(v29 + 416);
				sub_1400C35F0(v29 + 832);
				*(_QWORD*)(v29 + 1272) = 0i64;
				*(_QWORD*)(v29 + 1280) = 0i64;
				*(_QWORD*)(v29 + 1288) = 0i64;
				v30 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v29 + 1272) = v30;
				*(_QWORD*)(v29 + 1280) = v30;
				*(_QWORD*)(v29 + 1288) = v30 + 4;
				if (v30)
					*(_WORD*)v30 = 0;
				*(_DWORD*)(v29 + 1256) = dword_140C63664;
				*(_QWORD*)(v29 + 1248) = 0i64;
				*(_DWORD*)(v29 + 1260) = 1065353216;
				sub_1400C41E0(v29);
			}
			else
			{
				v29 = 0i64;
			}
			v31 = *(_QWORD*)(v1 + 48) + 408i64;
			*(_QWORD*)(v1 + 464) = v29;
			sub_1400C4330(v29, v31, 0);
			v25 = (int)v100;
		}
		v32 = *(_QWORD*)(v1 + 464);
		v33 = *(_DWORD*)(v32 + 1300);
		*(_DWORD*)(v32 + 1296) = v27;
		if (v33 < v27)
			v27 = v33;
		v34 = 0;
		if (v27 > 0)
			v34 = v27;
		*(_BYTE*)(v32 + 1392) |= 0x10u;
		*(_DWORD*)(v32 + 1300) = v34;
	}
	v35 = v26 - v25;
	if ((*(_BYTE*)(v1 + 656) & 4) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 464))
		{
			v36 = sub_14018B280(1400i64, 0);
			v37 = (__int64)v36;
			if (v36)
			{
				sub_1400C35F0((__int64)v36);
				sub_1400C35F0(v37 + 416);
				sub_1400C35F0(v37 + 832);
				*(_QWORD*)(v37 + 1272) = 0i64;
				*(_QWORD*)(v37 + 1280) = 0i64;
				*(_QWORD*)(v37 + 1288) = 0i64;
				v38 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v37 + 1272) = v38;
				*(_QWORD*)(v37 + 1280) = v38;
				*(_QWORD*)(v37 + 1288) = v38 + 4;
				if (v38)
					*(_WORD*)v38 = 0;
				v39 = dword_140C63664;
				*(_QWORD*)(v37 + 1248) = 0i64;
				*(_DWORD*)(v37 + 1256) = v39;
				*(_DWORD*)(v37 + 1260) = 1065353216;
				sub_1400C41E0(v37);
			}
			else
			{
				v37 = 0i64;
			}
			v40 = *(_QWORD*)(v1 + 48) + 408i64;
			*(_QWORD*)(v1 + 464) = v37;
			sub_1400C4330(v37, v40, 0);
		}
		v41 = *(_QWORD*)(v1 + 464);
		*(_BYTE*)(v41 + 1392) |= 0x10u;
		*(_DWORD*)(v41 + 1304) = v35;
	}
	if ((*(_BYTE*)(v1 + 656) & 4) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 464))
		{
			v42 = sub_14018B280(1400i64, 0);
			v43 = (__int64)v42;
			if (v42)
			{
				sub_1400C35F0((__int64)v42);
				sub_1400C35F0(v43 + 416);
				sub_1400C35F0(v43 + 832);
				*(_QWORD*)(v43 + 1272) = 0i64;
				*(_QWORD*)(v43 + 1280) = 0i64;
				*(_QWORD*)(v43 + 1288) = 0i64;
				v44 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v43 + 1272) = v44;
				*(_QWORD*)(v43 + 1280) = v44;
				*(_QWORD*)(v43 + 1288) = v44 + 4;
				if (v44)
					*(_WORD*)v44 = 0;
				v45 = dword_140C63664;
				*(_QWORD*)(v43 + 1248) = 0i64;
				*(_DWORD*)(v43 + 1256) = v45;
				*(_DWORD*)(v43 + 1260) = 1065353216;
				sub_1400C41E0(v43);
			}
			else
			{
				v43 = 0i64;
			}
			v46 = *(_QWORD*)(v1 + 48) + 408i64;
			*(_QWORD*)(v1 + 464) = v43;
			sub_1400C4330(v43, v46, 0);
		}
		v47 = *(_QWORD*)(v1 + 464);
		*(_DWORD*)(v47 + 816) = 1006632960;
		*(_DWORD*)(v47 + 400) = 1006632960;
	}
	if ((*(_BYTE*)(v1 + 656) & 4) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 464))
		{
			v48 = sub_14018B280(1400i64, 0);
			v49 = (__int64)v48;
			if (v48)
			{
				sub_1400C35F0((__int64)v48);
				sub_1400C35F0(v49 + 416);
				sub_1400C35F0(v49 + 832);
				*(_QWORD*)(v49 + 1272) = 0i64;
				*(_QWORD*)(v49 + 1280) = 0i64;
				*(_QWORD*)(v49 + 1288) = 0i64;
				v50 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v49 + 1272) = v50;
				*(_QWORD*)(v49 + 1280) = v50;
				*(_QWORD*)(v49 + 1288) = v50 + 4;
				if (v50)
					*(_WORD*)v50 = 0;
				v51 = dword_140C63664;
				*(_QWORD*)(v49 + 1248) = 0i64;
				*(_DWORD*)(v49 + 1256) = v51;
				*(_DWORD*)(v49 + 1260) = 1065353216;
				sub_1400C41E0(v49);
			}
			else
			{
				v49 = 0i64;
			}
			v52 = *(_QWORD*)(v1 + 48) + 408i64;
			*(_QWORD*)(v1 + 464) = v49;
			sub_1400C4330(v49, v52, 0);
		}
		*(_DWORD*)(*(_QWORD*)(v1 + 464) + 1308i64) = 16;
	}
	v53 = v97;
	v54 = 0;
	if (v98 + v97 - v87 > 0)
		v54 = v98 + v97 - v87;
	if ((*(_BYTE*)(v1 + 656) & 2) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 472))
		{
			v55 = sub_14018B280(1400i64, 0);
			v56 = (__int64)v55;
			if (v55)
			{
				sub_1400C35F0((__int64)v55);
				sub_1400C35F0(v56 + 416);
				sub_1400C35F0(v56 + 832);
				*(_QWORD*)(v56 + 1272) = 0i64;
				*(_QWORD*)(v56 + 1280) = 0i64;
				*(_QWORD*)(v56 + 1288) = 0i64;
				v57 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v56 + 1272) = v57;
				*(_QWORD*)(v56 + 1280) = v57;
				*(_QWORD*)(v56 + 1288) = v57 + 4;
				if (v57)
					*(_WORD*)v57 = 0;
				*(_DWORD*)(v56 + 1256) = dword_140C63664;
				*(_QWORD*)(v56 + 1248) = 0i64;
				*(_DWORD*)(v56 + 1260) = 1065353216;
				sub_1400C41E0(v56);
			}
			else
			{
				v56 = 0i64;
			}
			v58 = *(_QWORD*)(v1 + 48) + 168i64;
			*(_QWORD*)(v1 + 472) = v56;
			sub_1400C4330(v56, v58, 1);
			v53 = v97;
		}
		v59 = *(_QWORD*)(v1 + 472);
		v60 = *(_DWORD*)(v59 + 1300);
		*(_DWORD*)(v59 + 1296) = v54;
		if (v60 < v54)
			v54 = v60;
		v61 = 0;
		if (v54 > 0)
			v61 = v54;
		*(_BYTE*)(v59 + 1392) |= 0x10u;
		*(_DWORD*)(v59 + 1300) = v61;
	}
	v62 = v87 - v53;
	if ((*(_BYTE*)(v1 + 656) & 2) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 472))
		{
			v63 = sub_14018B280(1400i64, 0);
			v64 = (__int64)v63;
			if (v63)
			{
				sub_1400C35F0((__int64)v63);
				sub_1400C35F0(v64 + 416);
				sub_1400C35F0(v64 + 832);
				*(_QWORD*)(v64 + 1272) = 0i64;
				*(_QWORD*)(v64 + 1280) = 0i64;
				*(_QWORD*)(v64 + 1288) = 0i64;
				v65 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v64 + 1272) = v65;
				*(_QWORD*)(v64 + 1280) = v65;
				*(_QWORD*)(v64 + 1288) = v65 + 4;
				if (v65)
					*(_WORD*)v65 = 0;
				v66 = dword_140C63664;
				*(_QWORD*)(v64 + 1248) = 0i64;
				*(_DWORD*)(v64 + 1256) = v66;
				*(_DWORD*)(v64 + 1260) = 1065353216;
				sub_1400C41E0(v64);
			}
			else
			{
				v64 = 0i64;
			}
			v67 = *(_QWORD*)(v1 + 48) + 168i64;
			*(_QWORD*)(v1 + 472) = v64;
			sub_1400C4330(v64, v67, 1);
		}
		v68 = *(_QWORD*)(v1 + 472);
		*(_BYTE*)(v68 + 1392) |= 0x10u;
		*(_DWORD*)(v68 + 1304) = v62;
	}
	if ((*(_BYTE*)(v1 + 656) & 2) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 472))
		{
			v69 = sub_14018B280(1400i64, 0);
			v70 = (__int64)v69;
			if (v69)
			{
				sub_1400C35F0((__int64)v69);
				sub_1400C35F0(v70 + 416);
				sub_1400C35F0(v70 + 832);
				*(_QWORD*)(v70 + 1272) = 0i64;
				*(_QWORD*)(v70 + 1280) = 0i64;
				*(_QWORD*)(v70 + 1288) = 0i64;
				v71 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v70 + 1272) = v71;
				*(_QWORD*)(v70 + 1280) = v71;
				*(_QWORD*)(v70 + 1288) = v71 + 4;
				if (v71)
					*(_WORD*)v71 = 0;
				v72 = dword_140C63664;
				*(_QWORD*)(v70 + 1248) = 0i64;
				*(_DWORD*)(v70 + 1256) = v72;
				*(_DWORD*)(v70 + 1260) = 1065353216;
				sub_1400C41E0(v70);
			}
			else
			{
				v70 = 0i64;
			}
			v73 = *(_QWORD*)(v1 + 48) + 168i64;
			*(_QWORD*)(v1 + 472) = v70;
			sub_1400C4330(v70, v73, 1);
		}
		v74 = *(_QWORD*)(v1 + 472);
		*(_DWORD*)(v74 + 816) = 1006632960;
		*(_DWORD*)(v74 + 400) = 1006632960;
	}
	if ((*(_BYTE*)(v1 + 656) & 2) != 0 && *(_QWORD*)(v1 + 48))
	{
		if (!*(_QWORD*)(v1 + 472))
		{
			v75 = sub_14018B280(1400i64, 0);
			v76 = (__int64)v75;
			if (v75)
			{
				sub_1400C35F0((__int64)v75);
				sub_1400C35F0(v76 + 416);
				sub_1400C35F0(v76 + 832);
				*(_QWORD*)(v76 + 1272) = 0i64;
				*(_QWORD*)(v76 + 1280) = 0i64;
				*(_QWORD*)(v76 + 1288) = 0i64;
				v77 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v76 + 1272) = v77;
				*(_QWORD*)(v76 + 1280) = v77;
				*(_QWORD*)(v76 + 1288) = v77 + 4;
				if (v77)
					*(_WORD*)v77 = 0;
				v78 = dword_140C63664;
				*(_QWORD*)(v76 + 1248) = 0i64;
				*(_DWORD*)(v76 + 1256) = v78;
				*(_DWORD*)(v76 + 1260) = 1065353216;
				sub_1400C41E0(v76);
			}
			else
			{
				v76 = 0i64;
			}
			v79 = *(_QWORD*)(v1 + 48) + 168i64;
			*(_QWORD*)(v1 + 472) = v76;
			sub_1400C4330(v76, v79, 1);
		}
		*(_DWORD*)(*(_QWORD*)(v1 + 472) + 1308i64) = 16;
	}
	*(_BYTE*)(v1 + 1368) = 0;
	sub_14016F5C0(v1);
	v80 = (__int64*)v93;
	v81 = *((_QWORD*)&v92 + 1);
	v82 = v93;
	while ((_DWORD*)i != v7)
	{
		i += 4i64;
		if (i == v81)
		{
			i = *(_QWORD*)(v82 + 8);
			v82 += 8i64;
			v81 = i + 496;
		}
	}
	v83 = v89;
	if (v89)
	{
		v84 = (unsigned __int64)(v4 + 1);
		if ((unsigned __int64)v93 < v84)
		{
			do
				sub_14018B900(*v80++, 0);
			while ((unsigned __int64)v80 < v84);
		}
		sub_14018B900(v83, 0);
	}
}
// 14016EC62: conditional instruction was optimized away because r12d.4>=0
// 14016F0C7: conditional instruction was optimized away because r12d.4>=0
// 14016E982: variable 'v2' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;


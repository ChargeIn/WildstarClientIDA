#include "../winhttp.h"

//----- (000000014057B840) ----------------------------------------------------
int* sub_14057B840(__int64 a1, ...)
{
	struct _FILETIME v1; // rdx
	int* v2; // r14
	__int64 v3; // r15
	struct _FILETIME v4; // rbx
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	struct _FILETIME v10; // r13
	int** v11; // r14
	int v12; // eax
	__int64 v13; // rbx
	__int64 v14; // r13
	int* v15; // r15
	int* v16; // rax
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	unsigned __int64 v20; // rbx
	int v21; // eax
	int* v22; // rax
	__int64 v23; // r12
	struct _FILETIME v24; // r13
	int* v25; // rcx
	unsigned int v26; // r8d
	unsigned __int64 v27; // r13
	int* v28; // rdi
	__int64 v29; // rax
	int v30; // ecx
	__int64 v31; // rbx
	int* v32; // rax
	__int64 v33; // rax
	bool v34; // zf
	unsigned __int64 v35; // rcx
	_QWORD* v36; // rdx
	__int64 v37; // rbx
	unsigned __int64 v38; // r15
	int* v39; // rax
	int* v40; // r14
	int* v41; // rdx
	__int64 v42; // rcx
	int* v43; // r14
	__int64 v44; // r15
	__int64 v45; // r13
	__int64 v46; // rbx
	int* v47; // rax
	int* v48; // rdi
	unsigned __int64 v49; // rbx
	int v50; // ecx
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rcx
	int* v54; // r9
	unsigned __int64 v55; // r8
	int* v56; // r9
	unsigned __int64 v57; // r8
	int* v58; // rax
	int* v59; // rax
	__int64* v60; // rdi
	__int64 v61; // rcx
	unsigned int v62; // eax
	__int64 v63; // rbx
	_QWORD* v64; // rax
	int* v65; // rdx
	int* v66; // r9
	__int64 v67; // rcx
	__int64 v68; // r8
	struct _FILETIME v69; // rdx
	__int64 v70; // rax
	unsigned __int64 v71; // rdx
	int* v72; // r9
	unsigned __int64 v73; // r8
	int* v74; // r9
	unsigned __int64 v75; // r8
	int* v76; // rax
	int* v77; // rax
	__int64* v78; // rdi
	__int64 v79; // rcx
	unsigned int v80; // eax
	__int64 v81; // rbx
	_QWORD* v82; // rax
	int* v83; // rdx
	__int64 v84; // r8
	struct _FILETIME v85; // rdx
	__int64 v86; // rax
	__int64 v87; // r11
	float v88; // xmm1_4
	int v89; // r10d
	int v90; // edx
	int v91; // r8d
	int v92; // r9d
	int v93; // r10d
	__int64 v94; // rdi
	__int64 v95; // rbx
	unsigned __int64 v96; // rbx
	float v97; // xmm6_4
	unsigned __int64 v98; // rax
	float v99; // xmm1_4
	unsigned __int64 v100; // rcx
	unsigned __int64 v101; // rax
	__int64 v102; // r9
	__int64 v103; // r8
	unsigned __int64 v104; // rdi
	int* v105; // rax
	__int64 v106; // rdi
	__int64 v107; // rcx
	int* v108; // r14
	__int64 v109; // r15
	__int64 v110; // rbx
	int* v111; // rax
	int* v112; // rdi
	unsigned __int64 v113; // rbx
	int* v114; // r14
	__int64 v115; // r15
	__int64 v116; // rbx
	int* v117; // rax
	int* v118; // rdi
	unsigned __int64 v119; // rbx
	int* v121; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v122; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v123; // [rsp+38h] [rbp-D0h]
	__int64(__fastcall * *v124)(); // [rsp+58h] [rbp-B0h] BYREF
	__int64 v125; // [rsp+68h] [rbp-A0h]
	__int64 v126; // [rsp+80h] [rbp-88h] BYREF
	int* v127; // [rsp+88h] [rbp-80h]
	int* v128; // [rsp+90h] [rbp-78h]
	int* v129; // [rsp+98h] [rbp-70h]
	__int64 v130; // [rsp+A0h] [rbp-68h]
	unsigned int v131; // [rsp+A8h] [rbp-60h]
	char v132[8]; // [rsp+B0h] [rbp-58h] BYREF
	int* v133; // [rsp+B8h] [rbp-50h]
	int* v134; // [rsp+C0h] [rbp-48h]
	__int128 v135; // [rsp+118h] [rbp+10h]
	int* v136; // [rsp+128h] [rbp+20h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+1C0h] [rbp+B8h] BYREF
	va_list SystemTimeAsFileTimea; // [rsp+1C0h] [rbp+B8h]
	__int64 v140; // [rsp+1C8h] [rbp+C0h]
	int* v141; // [rsp+1D0h] [rbp+C8h] BYREF
	va_list va1; // [rsp+1D0h] [rbp+C8h]
	__int64 v143; // [rsp+1D8h] [rbp+D0h]
	va_list va2; // [rsp+1E0h] [rbp+D8h] BYREF

	va_start(va2, a1);
	va_start(va1, a1);
	va_start(SystemTimeAsFileTimea, a1);
	SystemTimeAsFileTime = va_arg(va1, struct _FILETIME);
	v1 = SystemTimeAsFileTime;
	v140 = va_arg(va1, _QWORD);
	va_copy(va2, va1);
	v141 = va_arg(va2, int*);
	v143 = va_arg(va2, _QWORD);
	*(_QWORD*)a1 = **(_QWORD**)&SystemTimeAsFileTime;
	v2 = *(int**)(*(_QWORD*)&v1 + 8i64);
	v3 = *(_QWORD*)(a1 + 8);
	v4 = v1;
	if (v2)
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		v4 = SystemTimeAsFileTime;
		*(_QWORD*)(a1 + 8) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v10 = v4;
	v11 = (int**)(a1 + 24);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(*(_QWORD*)&v4 + 20i64);
	v12 = *(_DWORD*)(*(_QWORD*)&v4 + 16i64);
	v13 = 10i64;
	v14 = *(_QWORD*)&v10 - a1;
	*(_DWORD*)(a1 + 20) = v12;
	v122 = 10i64;
	do
	{
		v15 = (int*)&unk_1409F2BD4;
		if (*(int**)((char*)v11 + v14))
			v15 = *(int**)((char*)v11 + v14);
		v16 = *v11;
		v121 = *v11;
		if (v15)
		{
			v17 = 0i64;
			if (*(_WORD*)v15)
			{
				do
					++v17;
				while (*((_WORD*)v15 + v17));
			}
			v18 = sub_14018B280(2 * v17 + 18, 0);
			if (v18)
			{
				*(_QWORD*)v18 = off_140B55060;
				*((_QWORD*)v18 + 1) = v17;
			}
			else
			{
				v18 = 0i64;
			}
			v19 = v18 + 4;
			v20 = 2 * v17;
			sub_1407DB590(v18 + 4, v15, v20);
			v16 = v121;
			*(_WORD*)((char*)v19 + v20) = 0;
			v13 = v122;
			*v11 = v19;
		}
		else
		{
			*v11 = 0i64;
		}
		if (v16)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		v21 = *(_DWORD*)((char*)v11 + v14 + 8);
		v11 += 5;
		--v13;
		*((_DWORD*)v11 - 8) = v21;
		v22 = *(int**)((char*)v11 + v14 - 24);
		v122 = v13;
		*(v11 - 3) = v22;
		*(v11 - 2) = *(int**)((char*)v11 + v14 - 16);
		*(v11 - 1) = *(int**)((char*)v11 + v14 - 8);
	} while (v13);
	v23 = a1;
	v24 = SystemTimeAsFileTime;
	*(_DWORD*)(a1 + 424) = *(_DWORD*)(*(_QWORD*)&SystemTimeAsFileTime + 424i64);
	*(_DWORD*)(a1 + 428) = *(_DWORD*)(*(_QWORD*)&v24 + 428i64);
	*(_DWORD*)(a1 + 432) = *(_DWORD*)(*(_QWORD*)&v24 + 432i64);
	*(_DWORD*)(a1 + 436) = *(_DWORD*)(*(_QWORD*)&v24 + 436i64);
	*(_DWORD*)(a1 + 440) = *(_DWORD*)(*(_QWORD*)&v24 + 440i64);
	*(_DWORD*)(a1 + 444) = *(_DWORD*)(*(_QWORD*)&v24 + 444i64);
	*(_DWORD*)(a1 + 448) = *(_DWORD*)(*(_QWORD*)&v24 + 448i64);
	*(_DWORD*)(a1 + 452) = *(_DWORD*)(*(_QWORD*)&v24 + 452i64);
	*(_DWORD*)(a1 + 456) = *(_DWORD*)(*(_QWORD*)&v24 + 456i64);
	*(_DWORD*)(a1 + 460) = *(_DWORD*)(*(_QWORD*)&v24 + 460i64);
	*(_DWORD*)(a1 + 464) = *(_DWORD*)(*(_QWORD*)&v24 + 464i64);
	*(_DWORD*)(a1 + 468) = *(_DWORD*)(*(_QWORD*)&v24 + 468i64);
	*(_QWORD*)(a1 + 472) = *(unsigned int*)(*(_QWORD*)&v24 + 472i64);
	*(_QWORD*)(a1 + 480) = *(unsigned int*)(*(_QWORD*)&v24 + 476i64);
	*(_DWORD*)(a1 + 488) = *(_DWORD*)(*(_QWORD*)&v24 + 480i64);
	*(_DWORD*)(a1 + 492) = *(_DWORD*)(*(_QWORD*)&v24 + 484i64);
	*(_QWORD*)(a1 + 496) = *(_QWORD*)(*(_QWORD*)&v24 + 488i64);
	*(_DWORD*)(a1 + 504) = *(_DWORD*)(*(_QWORD*)&v24 + 496i64);
	*(_DWORD*)(a1 + 508) = *(_DWORD*)(*(_QWORD*)&v24 + 640i64);
	*(_DWORD*)(a1 + 512) = *(_DWORD*)(*(_QWORD*)&v24 + 636i64);
	*(_DWORD*)(a1 + 516) = *(_DWORD*)(*(_QWORD*)&v24 + 644i64);
	*(_DWORD*)(a1 + 520) = *(_DWORD*)(*(_QWORD*)&v24 + 648i64);
	*(_DWORD*)(a1 + 560) = *(_DWORD*)(*(_QWORD*)&v24 + 632i64);
	if (a1 != -568)
		sub_1401E82F0((__int64*)(a1 + 568), *(float*)(*(_QWORD*)&v24 + 660i64));
	v25 = v141;
	v26 = 0;
	LODWORD(v122) = 0;
	*(_QWORD*)(a1 + 608) = *(_QWORD*)v141;
	*(_QWORD*)(a1 + 616) = *((_QWORD*)v25 + 6);
	if (*(_DWORD*)(*(_QWORD*)&v24 + 500i64))
	{
		while (1)
		{
			if (v26 >= 0xA)
				goto LABEL_66;
			v27 = v26;
			if ((unsigned __int64)v26 >= *(_QWORD*)(a1 + 632))
				break;
		LABEL_55:
			v43 = *(int**)(*(_QWORD*)&SystemTimeAsFileTime + 8 * v27 + 504);
			v44 = *(_QWORD*)(*(_QWORD*)(a1 + 624) + 8 * v27);
			v45 = *(_QWORD*)(v44 + 24);
			if (v43)
			{
				v46 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v46;
					while (*((_WORD*)v43 + v46));
				}
				v47 = sub_14018B280(2 * v46 + 18, 0);
				if (v47)
				{
					*((_QWORD*)v47 + 1) = v46;
					*(_QWORD*)v47 = off_140B55060;
				}
				else
				{
					v47 = 0i64;
				}
				v48 = v47 + 4;
				v49 = 2 * v46;
				sub_1407DB590(v47 + 4, v43, v49);
				*(_WORD*)((char*)v48 + v49) = 0;
				*(_QWORD*)(v44 + 24) = v48;
			}
			else
			{
				*(_QWORD*)(v44 + 24) = 0i64;
			}
			if (v45)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v45 - 16) + 8i64))(v45 - 16);
			v24 = SystemTimeAsFileTime;
			v26 = v122 + 1;
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 624) + 8i64 * (unsigned int)v122) + 32i64) = v141[(unsigned int)v122 + 2];
			LODWORD(v122) = v26;
			if (v26 >= *(_DWORD*)(*(_QWORD*)&v24 + 500i64))
				goto LABEL_66;
		}
		while (1)
		{
			v28 = sub_14018B280(40i64, 0);
			if (v28)
				break;
			v28 = 0i64;
		LABEL_50:
			v37 = *(_QWORD*)(a1 + 632);
			v38 = v37 + 1;
			v39 = sub_14018DB00(*(_QWORD*)(a1 + 624), v37 + 1, 8i64);
			v40 = v39;
			*(_QWORD*)&v39[2 * v37] = v28;
			v41 = *(int**)(a1 + 624);
			if (v41 != v39)
			{
				sub_1407DB590(v39, v41, 8i64 * *(_QWORD*)(a1 + 632));
				v42 = *(_QWORD*)(a1 + 624);
				if (v42)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
				*(_QWORD*)(a1 + 624) = v40;
			}
			*(_QWORD*)(a1 + 632) = v38;
			if (v27 < v38)
				goto LABEL_55;
		}
		if (qword_140C63840)
		{
			v29 = qword_140C63840(off_140A6A408, 644i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_38;
			v29 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 644i64);
		}
		if (v29)
		{
			v30 = *(_DWORD*)(v29 + 4);
		LABEL_39:
			v31 = v30;
			*v28 = 0;
			*((_QWORD*)v28 + 2) = v30;
			if (v30)
			{
				v32 = sub_14018B280(8i64 * v30 + 16, 0);
				if (v32)
				{
					*(_QWORD*)v32 = off_140B55060;
					*((_QWORD*)v32 + 1) = v31;
					v33 = (__int64)(v32 + 4);
				}
				else
				{
					v33 = 16i64;
				}
			}
			else
			{
				v33 = 0i64;
			}
			v34 = *((_QWORD*)v28 + 2) == 0i64;
			*((_QWORD*)v28 + 1) = v33;
			v35 = 0i64;
			if (!v34)
			{
				do
				{
					v36 = (_QWORD*)(*((_QWORD*)v28 + 1) + 8 * v35);
					if (v36)
						*v36 = 0i64;
					++v35;
				} while (v35 < *((_QWORD*)v28 + 2));
			}
			*((_QWORD*)v28 + 3) = 0i64;
			v28[8] = 0;
			goto LABEL_50;
		}
	LABEL_38:
		v30 = 64;
		goto LABEL_39;
	}
LABEL_66:
	v50 = *(_DWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 760) = 2;
	v51 = (unsigned int)(v50 - 1);
	if (!(_DWORD)v51)
	{
		v74 = *(int**)(a1 + 8);
		v75 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 760) = 15;
		sub_140403E90(v51, 0xFui64, v75, v74);
		sub_1400B7090((__int64)&v124, 641928);
		v124 = off_140B69230;
		v136 = 0i64;
		v135 = 0i64;
		v76 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v135 = v76;
		*((_QWORD*)&v135 + 1) = v76;
		v136 = v76 + 4;
		if (v76)
			*(_WORD*)v76 = 0;
		v77 = sub_14018B280(96i64, 0);
		if (v77)
		{
			v78 = (__int64*)sub_1404DDB40((__int64)v77, *(int**)(a1 + 8));
			SystemTimeAsFileTime = (struct _FILETIME)v78;
		}
		else
		{
			v78 = 0i64;
			SystemTimeAsFileTime = 0i64;
		}
		v79 = v130;
		v80 = v131;
		if (v127 == v128)
			v79 = (__int64)v78;
		v130 = v79;
		++v131;
		v81 = *v78;
		v82 = sub_14018EFA0(&v122, (__int64)L"%d", v80);
		(*(void(__fastcall**)(__int64*, _QWORD*))(v81 + 72))(v78, v82);
		if (v123)
			sub_14018B900(v123, 0);
		v83 = v128;
		if (v128 == v129)
		{
			sub_1400B9430(&v126, v128, (struct _FILETIME*)SystemTimeAsFileTimea);
		}
		else
		{
			if (v128)
			{
				*(_QWORD*)v128 = v78;
				v83 = v128;
			}
			v128 = v83 + 2;
		}
		v66 = v133;
		if (v133 != v134)
		{
			*(_WORD*)v133 = 0;
			v66 = v133;
			v134 = v133;
		}
		v67 = qword_140C63648;
		if (!qword_140C63648)
			goto LABEL_123;
		SystemTimeAsFileTime = 0i64;
		(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), struct _FILETIME*))qword_140C63648)(
			qword_140C63648,
			v125,
			&v124,
			(struct _FILETIME*)SystemTimeAsFileTimea);
		v85 = SystemTimeAsFileTime;
		if (SystemTimeAsFileTime)
		{
			v86 = 0i64;
			if (*(_WORD*)SystemTimeAsFileTime.dwLowDateTime)
			{
				do
					++v86;
				while (*(_WORD*)(*(_QWORD*)&SystemTimeAsFileTime + 2 * v86));
			}
			sub_14001C480((__int64)v132, *(int**)&SystemTimeAsFileTime, (int*)(*(_QWORD*)&SystemTimeAsFileTime + 2 * v86));
			v66 = v133;
		}
		else
		{
			v66 = v133;
			if (v133 == v134)
			{
			LABEL_123:
				v71 = 16i64;
				goto LABEL_124;
			}
			*(_WORD*)v133 = 0;
			v66 = v133;
			v134 = v133;
		}
		if (SystemTimeAsFileTime)
		{
			(*(void(__fastcall**)(__int64, struct _FILETIME, __int64, int*))(*(_QWORD*)(*(_QWORD*)&SystemTimeAsFileTime
				- 16i64)
				+ 8i64))(
					*(_QWORD*)&SystemTimeAsFileTime - 16i64,
					v85,
					v84,
					v66);
			v66 = v133;
		}
		goto LABEL_123;
	}
	v52 = (unsigned int)(v51 - 1);
	if (!(_DWORD)v52)
	{
		v72 = *(int**)(a1 + 8);
		v73 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 760) = 17;
		sub_140403E90(v52, 0x11ui64, v73, v72);
		goto LABEL_127;
	}
	v53 = (unsigned int)(v52 - 1);
	if ((_DWORD)v53)
	{
		if ((_DWORD)v53 == 4)
		{
			v54 = *(int**)(a1 + 8);
			v55 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 760) = 47;
			sub_140403E90(v53, 0x2Fui64, v55, v54);
		}
		goto LABEL_127;
	}
	v56 = *(int**)(a1 + 8);
	v57 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 760) = 29;
	sub_140403E90(v53, 0x1Dui64, v57, v56);
	sub_1400B7090((__int64)&v124, 641928);
	v124 = off_140B69230;
	v136 = 0i64;
	v135 = 0i64;
	v58 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v135 = v58;
	*((_QWORD*)&v135 + 1) = v58;
	v136 = v58 + 4;
	if (v58)
		*(_WORD*)v58 = 0;
	v59 = sub_14018B280(96i64, 0);
	if (v59)
	{
		v60 = (__int64*)sub_1404DDB40((__int64)v59, *(int**)(a1 + 8));
		SystemTimeAsFileTime = (struct _FILETIME)v60;
	}
	else
	{
		v60 = 0i64;
		SystemTimeAsFileTime = 0i64;
	}
	v61 = v130;
	v62 = v131;
	if (v127 == v128)
		v61 = (__int64)v60;
	v130 = v61;
	++v131;
	v63 = *v60;
	v64 = sub_14018EFA0(&v122, (__int64)L"%d", v62);
	(*(void(__fastcall**)(__int64*, _QWORD*))(v63 + 72))(v60, v64);
	if (v123)
		sub_14018B900(v123, 0);
	v65 = v128;
	if (v128 == v129)
	{
		sub_1400B9430(&v126, v128, (struct _FILETIME*)SystemTimeAsFileTimea);
	}
	else
	{
		if (v128)
		{
			*(_QWORD*)v128 = v60;
			v65 = v128;
		}
		v128 = v65 + 2;
	}
	v66 = v133;
	if (v133 != v134)
	{
		*(_WORD*)v133 = 0;
		v66 = v133;
		v134 = v133;
	}
	v67 = qword_140C63648;
	if (!qword_140C63648)
		goto LABEL_96;
	SystemTimeAsFileTime = 0i64;
	(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), struct _FILETIME*))qword_140C63648)(
		qword_140C63648,
		v125,
		&v124,
		(struct _FILETIME*)SystemTimeAsFileTimea);
	v69 = SystemTimeAsFileTime;
	if (SystemTimeAsFileTime)
	{
		v70 = 0i64;
		if (*(_WORD*)SystemTimeAsFileTime.dwLowDateTime)
		{
			do
				++v70;
			while (*(_WORD*)(*(_QWORD*)&SystemTimeAsFileTime + 2 * v70));
		}
		sub_14001C480((__int64)v132, *(int**)&SystemTimeAsFileTime, (int*)(*(_QWORD*)&SystemTimeAsFileTime + 2 * v70));
		v66 = v133;
		goto LABEL_94;
	}
	v66 = v133;
	if (v133 != v134)
	{
		*(_WORD*)v133 = 0;
		v66 = v133;
		v134 = v133;
	LABEL_94:
		if (SystemTimeAsFileTime)
		{
			(*(void(__fastcall**)(__int64, struct _FILETIME, __int64, int*))(*(_QWORD*)(*(_QWORD*)&SystemTimeAsFileTime
				- 16i64)
				+ 8i64))(
					*(_QWORD*)&SystemTimeAsFileTime - 16i64,
					v69,
					v68,
					v66);
			v66 = v133;
		}
	}
LABEL_96:
	v71 = 30i64;
LABEL_124:
	sub_140403E90(v67, v71, *(_QWORD*)a1, v66);
	if ((_QWORD)v135)
		sub_14018B900(v135, 0);
	sub_1400B7390(&v124);
LABEL_127:
	v87 = v140;
	v88 = 0.0;
	v89 = *(_DWORD*)(a1 + 508) + *(_DWORD*)(a1 + 512);
	*(_DWORD*)(a1 + 768) = v143;
	*(_DWORD*)(a1 + 764) = 0;
	*(_DWORD*)(a1 + 772) = *(_DWORD*)(v87 + 16);
	v90 = *(_DWORD*)(v87 + 52);
	*(_DWORD*)(a1 + 780) = v90;
	v91 = *(_DWORD*)(v87 + 60);
	*(_DWORD*)(a1 + 784) = v91;
	v92 = *(_DWORD*)(v87 + 56);
	*(_DWORD*)(a1 + 776) = v92;
	v93 = *(_DWORD*)(a1 + 516) + v89;
	if (v93)
		v88 = (float)(v91 + v92 + v90) / (float)v93;
	*(float*)(a1 + 788) = v88;
	*(_QWORD*)(a1 + 792) = *(_QWORD*)v87;
	*(_QWORD*)(a1 + 800) = *(_QWORD*)(v87 + 8);
	*(_QWORD*)(a1 + 528) = *(_QWORD*)(*(_QWORD*)&v24 + 584i64);
	*(_QWORD*)(a1 + 536) = *(_QWORD*)(*(_QWORD*)&v24 + 592i64);
	if (*(_QWORD*)(a1 + 592))
	{
		v94 = *(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64);
		if (v94)
		{
			do
			{
				sub_1400083B0(a1 + 576, *(_QWORD*)(v94 + 24));
				v95 = *(_QWORD*)(v94 + 16);
				sub_14018B900(v94, 0);
				v94 = v95;
			} while (v95);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 16i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 24i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(a1 + 592) = 0i64;
	}
	v96 = 0i64;
	if (*(_DWORD*)(*(_QWORD*)&v24 + 600i64))
	{
		do
		{
			v97 = *(float*)(*(_QWORD*)(*(_QWORD*)&v24 + 608i64) + 8 * v96 + 4);
			GetSystemTimeAsFileTime((LPFILETIME)SystemTimeAsFileTimea);
			v98 = 0i64;
			v99 = (float)(v97 - (float)(int)v97) * 8.6400002e11;
			if (v99 >= 9.223372e18)
			{
				v99 = v99 - 9.223372e18;
				if (v99 < 9.223372e18)
					v98 = 0x8000000000000000ui64;
			}
			v100 = v98 + (unsigned int)(int)v99;
			v101 = 0i64;
			if (v97 >= 9.223372e18)
			{
				v97 = v97 - 9.223372e18;
				if (v97 < 9.223372e18)
					v101 = 0x8000000000000000ui64;
			}
			v102 = *(_QWORD*)(a1 + 584);
			v103 = *(_QWORD*)(*(_QWORD*)&v24 + 608i64);
			v104 = v101 + (unsigned int)(int)v97;
			v105 = (int*)v102;
			v106 = *(_QWORD*)&SystemTimeAsFileTime + v100 + 864000000000i64 * v104;
			v107 = *(_QWORD*)(v102 + 8);
			while (v107)
			{
				if (*(_DWORD*)(v107 + 32) < *(_DWORD*)(v103 + 8 * v96))
				{
					v107 = *(_QWORD*)(v107 + 24);
				}
				else
				{
					v105 = (int*)v107;
					v107 = *(_QWORD*)(v107 + 16);
				}
			}
			if (v105 == (int*)v102 || *(_DWORD*)(v103 + 8 * v96) < (unsigned int)v105[8])
			{
				LODWORD(v122) = *(_DWORD*)(v103 + 8 * v96);
				v123 = 0i64;
				v141 = v105;
				sub_140055C60(a1 + 576, &v121, (__int64*)va1, &v122);
				v105 = v121;
			}
			*((_QWORD*)v105 + 5) = v106;
			++v96;
		} while (v96 < *(unsigned int*)(*(_QWORD*)&v24 + 600i64));
		v23 = a1;
	}
	v108 = *(int**)(*(_QWORD*)&v24 + 616i64);
	v109 = *(_QWORD*)(v23 + 544);
	if (v108)
	{
		v110 = 0i64;
		if (*(_WORD*)v108)
		{
			do
				++v110;
			while (*((_WORD*)v108 + v110));
		}
		v111 = sub_14018B280(2 * v110 + 18, 0);
		if (v111)
		{
			*((_QWORD*)v111 + 1) = v110;
			*(_QWORD*)v111 = off_140B55060;
		}
		else
		{
			v111 = 0i64;
		}
		v112 = v111 + 4;
		v113 = 2 * v110;
		sub_1407DB590(v111 + 4, v108, v113);
		*(_WORD*)((char*)v112 + v113) = 0;
		*(_QWORD*)(v23 + 544) = v112;
	}
	else
	{
		*(_QWORD*)(v23 + 544) = 0i64;
	}
	if (v109)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v109 - 16) + 8i64))(v109 - 16);
	v114 = *(int**)(*(_QWORD*)&v24 + 624i64);
	v115 = *(_QWORD*)(v23 + 552);
	if (v114)
	{
		v116 = 0i64;
		if (*(_WORD*)v114)
		{
			do
				++v116;
			while (*((_WORD*)v114 + v116));
		}
		v117 = sub_14018B280(2 * v116 + 18, 0);
		if (v117)
		{
			*((_QWORD*)v117 + 1) = v116;
			*(_QWORD*)v117 = off_140B55060;
		}
		else
		{
			v117 = 0i64;
		}
		v118 = v117 + 4;
		v119 = 2 * v116;
		sub_1407DB590(v117 + 4, v114, v119);
		*(_WORD*)((char*)v118 + v119) = 0;
		*(_QWORD*)(v23 + 552) = v118;
	}
	else
	{
		*(_QWORD*)(v23 + 552) = 0i64;
	}
	if (v115)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v115 - 16) + 8i64))(v115 - 16);
	return sub_140580D70(v23, v140);
}
// 14057C037: variable 'v69' is possibly undefined
// 14057C037: variable 'v68' is possibly undefined
// 14057C227: variable 'v85' is possibly undefined
// 14057C227: variable 'v84' is possibly undefined
// 14057C237: variable 'v67' is possibly undefined
// 1409D2FA4: using guessed type wchar_t aD_5[3];
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 14057B840: using guessed type char var_F8[8];


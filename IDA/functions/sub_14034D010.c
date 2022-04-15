//----- (000000014034D010) ----------------------------------------------------
int __fastcall sub_14034D010(__int64 a1)
{
	_QWORD* v1; // rbx
	int v2; // ebp
	__int64 v4; // rsi
	__int64* v5; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64* v8; // rbx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64* v11; // rbx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	__int64* v14; // rbx
	_QWORD* v15; // rcx
	__int64 v16; // rcx
	__int64* v17; // rbx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	__int64* v20; // rbx
	_QWORD* v21; // rcx
	__int64 v22; // rcx
	__int64* v23; // rbx
	_QWORD* v24; // rcx
	__int64 v25; // rcx
	__int64* v26; // rbx
	_QWORD* v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rbp
	__int64 v30; // rbx
	_QWORD* v31; // rax
	unsigned __int64 i; // rsi
	__int64 v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rcx
	unsigned __int64 j; // rsi
	__int64 v37; // rbx
	__int64 v38; // rcx
	__int64 v39; // rcx
	unsigned __int64 k; // rsi
	__int64 v41; // rbx
	__int64 v42; // rcx
	__int64 v43; // rcx
	unsigned __int64 m; // rsi
	__int64 v45; // rbx
	__int64 v46; // rcx
	__int64 v47; // rcx
	unsigned __int64 n; // rsi
	__int64 v49; // rbx
	__int64 v50; // rcx
	__int64 v51; // rcx
	unsigned __int64 ii; // rsi
	__int64 v53; // rbx
	__int64 v54; // rcx
	__int64 v55; // rcx
	unsigned __int64 jj; // rsi
	__int64 v57; // rbx
	__int64 v58; // rcx
	__int64 v59; // rcx
	unsigned __int64 kk; // rsi
	__int64 v61; // rbx
	__int64 v62; // rcx
	__int64 v63; // rcx
	const void*** v64; // rbx
	int v65; // esi
	int mm; // ebp
	int result; // eax
	const void*** v68; // rdi
	__int64 v69; // rcx
	__int64 v70; // rcx
	__int64 v71; // rcx
	__int64 v72; // rcx
	__int64 v73; // rcx
	__int64 v74; // rcx
	__int64 v75; // rcx
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rcx
	__int64 v79; // rcx
	__int64 v80; // rcx
	__int64 v81; // rcx
	__int64 v82; // rcx
	__int64 v83; // rcx
	__int64 v84; // rcx
	__int64 v85; // rcx
	__int64 v86; // rcx
	__int64 v87; // rcx
	__int64 v88; // rcx
	__int64 v89; // rcx
	__int64 v90; // rcx
	__int64 v91; // rcx
	__int64 v92; // rcx
	__int64 v93; // rcx
	__int64 v94; // rcx
	__int64 v95; // rcx
	__int64 v96; // rbx
	__int64 v97; // rcx
	int nn; // esi
	__int64 v99; // rcx
	__int64 v100; // rcx
	__int64 v101; // rcx
	__int64 v102; // rcx
	__int64 v103; // rcx
	__int64 v104; // rcx
	__int64 v105; // rcx
	__int64 v106; // rcx
	__int64 v107; // rcx
	__int64 v108; // rcx
	__int64 v109; // rcx
	__int64 v110; // rcx
	__int64 v111; // rcx
	__int64 v112; // rcx
	__int64 v113; // rcx
	__int64 v114; // rcx
	__int64 v115; // rcx
	__int64 v116; // rcx
	__int64 v117; // rcx
	__int64 v118; // rcx
	__int64 v119; // rcx
	__int64 v120; // rcx
	__int64 v121; // rcx
	__int64 v122; // rcx
	__int64 v123; // rcx
	__int64 v124; // rcx
	__int64 v125; // rcx
	__int64 v126; // rcx
	const void*** v128; // [rsp+68h] [rbp+10h]

	v1 = (_QWORD*)(a1 + 688);
	v2 = 11;
	*(_QWORD*)a1 = off_140B657D8;
	v128 = (const void***)(a1 + 688);
	v4 = 11i64;
	do
	{
		if (*v1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
			*v1 = 0i64;
		}
		++v1;
		--v4;
	} while (v4);
	sub_1401981B0((__int64**)(a1 + 776));
	while (*(_QWORD*)(a1 + 904))
	{
		v5 = *(__int64**)(a1 + 904);
		if (v5)
		{
			sub_14018B900(v5[1], 0);
			v6 = (_QWORD*)v5[2];
			if (v6)
				*v6 = v5[3];
			v7 = v5[3];
			if (v7)
				*(_QWORD*)(v7 + 16) = v5[2];
			v5[2] = 0i64;
			v5[3] = 0i64;
			sub_14018B900((__int64)v5, 0);
		}
	}
	while (*(_QWORD*)(a1 + 952))
	{
		v8 = *(__int64**)(a1 + 952);
		if (v8)
		{
			sub_14018B900(v8[1], 0);
			v9 = (_QWORD*)v8[2];
			if (v9)
				*v9 = v8[3];
			v10 = v8[3];
			if (v10)
				*(_QWORD*)(v10 + 16) = v8[2];
			v8[2] = 0i64;
			v8[3] = 0i64;
			sub_14018B900((__int64)v8, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1000))
	{
		v11 = *(__int64**)(a1 + 1000);
		if (v11)
		{
			sub_14018B900(v11[1], 0);
			v12 = (_QWORD*)v11[2];
			if (v12)
				*v12 = v11[3];
			v13 = v11[3];
			if (v13)
				*(_QWORD*)(v13 + 16) = v11[2];
			v11[2] = 0i64;
			v11[3] = 0i64;
			sub_14018B900((__int64)v11, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1048))
	{
		v14 = *(__int64**)(a1 + 1048);
		if (v14)
		{
			sub_14018B900(v14[1], 0);
			v15 = (_QWORD*)v14[2];
			if (v15)
				*v15 = v14[3];
			v16 = v14[3];
			if (v16)
				*(_QWORD*)(v16 + 16) = v14[2];
			v14[2] = 0i64;
			v14[3] = 0i64;
			sub_14018B900((__int64)v14, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1096))
	{
		v17 = *(__int64**)(a1 + 1096);
		if (v17)
		{
			sub_14018B900(v17[1], 0);
			v18 = (_QWORD*)v17[2];
			if (v18)
				*v18 = v17[3];
			v19 = v17[3];
			if (v19)
				*(_QWORD*)(v19 + 16) = v17[2];
			v17[2] = 0i64;
			v17[3] = 0i64;
			sub_14018B900((__int64)v17, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1144))
	{
		v20 = *(__int64**)(a1 + 1144);
		if (v20)
		{
			sub_14018B900(v20[1], 0);
			v21 = (_QWORD*)v20[2];
			if (v21)
				*v21 = v20[3];
			v22 = v20[3];
			if (v22)
				*(_QWORD*)(v22 + 16) = v20[2];
			v20[2] = 0i64;
			v20[3] = 0i64;
			sub_14018B900((__int64)v20, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1192))
	{
		v23 = *(__int64**)(a1 + 1192);
		if (v23)
		{
			sub_14018B900(v23[1], 0);
			v24 = (_QWORD*)v23[2];
			if (v24)
				*v24 = v23[3];
			v25 = v23[3];
			if (v25)
				*(_QWORD*)(v25 + 16) = v23[2];
			v23[2] = 0i64;
			v23[3] = 0i64;
			sub_14018B900((__int64)v23, 0);
		}
	}
	while (*(_QWORD*)(a1 + 1240))
	{
		v26 = *(__int64**)(a1 + 1240);
		if (v26)
		{
			sub_14018B900(v26[1], 0);
			v27 = (_QWORD*)v26[2];
			if (v27)
				*v27 = v26[3];
			v28 = v26[3];
			if (v28)
				*(_QWORD*)(v28 + 16) = v26[2];
			v26[2] = 0i64;
			v26[3] = 0i64;
			sub_14018B900((__int64)v26, 0);
		}
	}
	qword_140C65878 = 0i64;
	if (*(_QWORD*)(a1 + 2800))
	{
		v29 = *(_QWORD*)(*(_QWORD*)(a1 + 2792) + 8i64);
		if (v29)
		{
			do
			{
				sub_1400083B0(a1 + 2784, *(_QWORD*)(v29 + 24));
				v30 = *(_QWORD*)(v29 + 16);
				sub_14018B900(v29, 0);
				v29 = v30;
			} while (v30);
		}
		v2 = 11;
		*(_QWORD*)(*(_QWORD*)(a1 + 2792) + 16i64) = *(_QWORD*)(a1 + 2792);
		*(_QWORD*)(*(_QWORD*)(a1 + 2792) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 2792) + 24i64) = *(_QWORD*)(a1 + 2792);
		*(_QWORD*)(a1 + 2800) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 2792), 0);
	v31 = (_QWORD*)(a1 + 2784);
	do
	{
		--v2;
		v31 -= 16;
		*v31 = off_140B657E8;
	} while (v2 >= 0);
	if (*(_QWORD*)(a1 + 1240))
		sub_1401A4A00((const void***)(a1 + 1240));
	for (i = 0i64; i < *(_QWORD*)(a1 + 1208); ++i)
	{
		v33 = *(_QWORD*)(a1 + 1216) + 8 * i;
		while (*(_QWORD*)v33)
		{
			v34 = *(_QWORD*)v33;
			*(_QWORD*)v33 = *(_QWORD*)(*(_QWORD*)v33 + 8i64);
			sub_14018B900(v34, 0);
		}
	}
	v35 = *(_QWORD*)(a1 + 1216);
	*(_QWORD*)(a1 + 1200) = 0i64;
	sub_14018B900(v35, 0);
	*(_QWORD*)(a1 + 1216) = 0i64;
	if (*(_QWORD*)(a1 + 1192))
		sub_1401A4A00((const void***)(a1 + 1192));
	for (j = 0i64; j < *(_QWORD*)(a1 + 1160); ++j)
	{
		v37 = *(_QWORD*)(a1 + 1168) + 8 * j;
		while (*(_QWORD*)v37)
		{
			v38 = *(_QWORD*)v37;
			*(_QWORD*)v37 = *(_QWORD*)(*(_QWORD*)v37 + 8i64);
			sub_14018B900(v38, 0);
		}
	}
	v39 = *(_QWORD*)(a1 + 1168);
	*(_QWORD*)(a1 + 1152) = 0i64;
	sub_14018B900(v39, 0);
	*(_QWORD*)(a1 + 1168) = 0i64;
	if (*(_QWORD*)(a1 + 1144))
		sub_1401A4A00((const void***)(a1 + 1144));
	for (k = 0i64; k < *(_QWORD*)(a1 + 1112); ++k)
	{
		v41 = *(_QWORD*)(a1 + 1120) + 8 * k;
		while (*(_QWORD*)v41)
		{
			v42 = *(_QWORD*)v41;
			*(_QWORD*)v41 = *(_QWORD*)(*(_QWORD*)v41 + 8i64);
			sub_14018B900(v42, 0);
		}
	}
	v43 = *(_QWORD*)(a1 + 1120);
	*(_QWORD*)(a1 + 1104) = 0i64;
	sub_14018B900(v43, 0);
	*(_QWORD*)(a1 + 1120) = 0i64;
	if (*(_QWORD*)(a1 + 1096))
		sub_1401A4A00((const void***)(a1 + 1096));
	for (m = 0i64; m < *(_QWORD*)(a1 + 1064); ++m)
	{
		v45 = *(_QWORD*)(a1 + 1072) + 8 * m;
		while (*(_QWORD*)v45)
		{
			v46 = *(_QWORD*)v45;
			*(_QWORD*)v45 = *(_QWORD*)(*(_QWORD*)v45 + 8i64);
			sub_14018B900(v46, 0);
		}
	}
	v47 = *(_QWORD*)(a1 + 1072);
	*(_QWORD*)(a1 + 1056) = 0i64;
	sub_14018B900(v47, 0);
	*(_QWORD*)(a1 + 1072) = 0i64;
	if (*(_QWORD*)(a1 + 1048))
		sub_1401A4A00((const void***)(a1 + 1048));
	for (n = 0i64; n < *(_QWORD*)(a1 + 1016); ++n)
	{
		v49 = *(_QWORD*)(a1 + 1024) + 8 * n;
		while (*(_QWORD*)v49)
		{
			v50 = *(_QWORD*)v49;
			*(_QWORD*)v49 = *(_QWORD*)(*(_QWORD*)v49 + 8i64);
			sub_14018B900(v50, 0);
		}
	}
	v51 = *(_QWORD*)(a1 + 1024);
	*(_QWORD*)(a1 + 1008) = 0i64;
	sub_14018B900(v51, 0);
	*(_QWORD*)(a1 + 1024) = 0i64;
	if (*(_QWORD*)(a1 + 1000))
		sub_1401A4A00((const void***)(a1 + 1000));
	for (ii = 0i64; ii < *(_QWORD*)(a1 + 968); ++ii)
	{
		v53 = *(_QWORD*)(a1 + 976) + 8 * ii;
		while (*(_QWORD*)v53)
		{
			v54 = *(_QWORD*)v53;
			*(_QWORD*)v53 = *(_QWORD*)(*(_QWORD*)v53 + 8i64);
			sub_14018B900(v54, 0);
		}
	}
	v55 = *(_QWORD*)(a1 + 976);
	*(_QWORD*)(a1 + 960) = 0i64;
	sub_14018B900(v55, 0);
	*(_QWORD*)(a1 + 976) = 0i64;
	if (*(_QWORD*)(a1 + 952))
		sub_1401A4A00((const void***)(a1 + 952));
	for (jj = 0i64; jj < *(_QWORD*)(a1 + 920); ++jj)
	{
		v57 = *(_QWORD*)(a1 + 928) + 8 * jj;
		while (*(_QWORD*)v57)
		{
			v58 = *(_QWORD*)v57;
			*(_QWORD*)v57 = *(_QWORD*)(*(_QWORD*)v57 + 8i64);
			sub_14018B900(v58, 0);
		}
	}
	v59 = *(_QWORD*)(a1 + 928);
	*(_QWORD*)(a1 + 912) = 0i64;
	sub_14018B900(v59, 0);
	*(_QWORD*)(a1 + 928) = 0i64;
	if (*(_QWORD*)(a1 + 904))
		sub_1401A4A00((const void***)(a1 + 904));
	for (kk = 0i64; kk < *(_QWORD*)(a1 + 872); ++kk)
	{
		v61 = *(_QWORD*)(a1 + 880) + 8 * kk;
		while (*(_QWORD*)v61)
		{
			v62 = *(_QWORD*)v61;
			*(_QWORD*)v61 = *(_QWORD*)(*(_QWORD*)v61 + 8i64);
			sub_14018B900(v62, 0);
		}
	}
	v63 = *(_QWORD*)(a1 + 880);
	*(_QWORD*)(a1 + 864) = 0i64;
	sub_14018B900(v63, 0);
	v64 = (const void***)(a1 + 856);
	*(_QWORD*)(a1 + 880) = 0i64;
	if (*(_QWORD*)(a1 + 856))
		sub_1401A4A00((const void***)(a1 + 856));
	v65 = 8;
	for (mm = 8; mm >= 0; --mm)
	{
		if (*--v64)
			sub_1401A4A00(v64);
	}
	result = sub_1401981B0((__int64**)(a1 + 776));
	if (*(_QWORD*)(a1 + 776))
		result = (unsigned int)sub_1401A4A00((const void***)(a1 + 776));
	v68 = v128;
	do
	{
		if (*--v68)
			result = (unsigned int)sub_1401A4A00(v68);
		--v65;
	} while (v65 >= 0);
	if (*(_QWORD*)(a1 + 560))
		result = (unsigned int)sub_1401A4A00((const void***)(a1 + 560));
	v69 = *(_QWORD*)(a1 + 552);
	if (v69)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v69 + 8i64))(v69);
	v70 = *(_QWORD*)(a1 + 544);
	if (v70)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v70 + 8i64))(v70);
	v71 = *(_QWORD*)(a1 + 536);
	if (v71)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v71 + 8i64))(v71);
	v72 = *(_QWORD*)(a1 + 528);
	if (v72)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v72 + 8i64))(v72);
	v73 = *(_QWORD*)(a1 + 520);
	if (v73)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v73 + 8i64))(v73);
	v74 = *(_QWORD*)(a1 + 512);
	if (v74)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v74 + 8i64))(v74);
	v75 = *(_QWORD*)(a1 + 504);
	if (v75)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v75 + 8i64))(v75);
	v76 = *(_QWORD*)(a1 + 496);
	if (v76)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v76 + 8i64))(v76);
	v77 = *(_QWORD*)(a1 + 488);
	if (v77)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v77 + 8i64))(v77);
	v78 = *(_QWORD*)(a1 + 480);
	if (v78)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v78 + 8i64))(v78);
	v79 = *(_QWORD*)(a1 + 472);
	if (v79)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v79 + 8i64))(v79);
	v80 = *(_QWORD*)(a1 + 464);
	if (v80)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v80 + 8i64))(v80);
	v81 = *(_QWORD*)(a1 + 456);
	if (v81)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v81 + 8i64))(v81);
	v82 = *(_QWORD*)(a1 + 448);
	if (v82)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v82 + 8i64))(v82);
	v83 = *(_QWORD*)(a1 + 432);
	if (v83)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v83 + 8i64))(v83);
	v84 = *(_QWORD*)(a1 + 416);
	if (v84)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v84 + 8i64))(v84);
	v85 = *(_QWORD*)(a1 + 408);
	if (v85)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v85 + 8i64))(v85);
	v86 = *(_QWORD*)(a1 + 400);
	if (v86)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v86 + 8i64))(v86);
	v87 = *(_QWORD*)(a1 + 392);
	if (v87)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v87 + 8i64))(v87);
	v88 = *(_QWORD*)(a1 + 384);
	if (v88)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v88 + 8i64))(v88);
	v89 = *(_QWORD*)(a1 + 376);
	if (v89)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v89 + 8i64))(v89);
	v90 = *(_QWORD*)(a1 + 368);
	if (v90)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v90 + 8i64))(v90);
	v91 = *(_QWORD*)(a1 + 360);
	if (v91)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v91 + 8i64))(v91);
	v92 = *(_QWORD*)(a1 + 352);
	if (v92)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v92 + 8i64))(v92);
	v93 = *(_QWORD*)(a1 + 344);
	if (v93)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v93 + 8i64))(v93);
	v94 = *(_QWORD*)(a1 + 336);
	if (v94)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v94 + 8i64))(v94);
	v95 = *(_QWORD*)(a1 + 328);
	if (v95)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v95 + 8i64))(v95);
	v96 = a1 + 320;
	v97 = *(_QWORD*)(a1 + 320);
	if (v97)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v97 + 8i64))(v97);
	for (nn = 3; nn >= 0; --nn)
	{
		v99 = *(_QWORD*)(v96 - 8);
		v96 -= 8i64;
		if (v99)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v99 + 8i64))(v99);
	}
	v100 = *(_QWORD*)(a1 + 280);
	if (v100)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v100 + 8i64))(v100);
	v101 = *(_QWORD*)(a1 + 272);
	if (v101)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v101 + 8i64))(v101);
	v102 = *(_QWORD*)(a1 + 264);
	if (v102)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v102 + 8i64))(v102);
	v103 = *(_QWORD*)(a1 + 256);
	if (v103)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v103 + 8i64))(v103);
	v104 = *(_QWORD*)(a1 + 248);
	if (v104)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v104 + 8i64))(v104);
	v105 = *(_QWORD*)(a1 + 240);
	if (v105)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v105 + 8i64))(v105);
	v106 = *(_QWORD*)(a1 + 232);
	if (v106)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v106 + 8i64))(v106);
	v107 = *(_QWORD*)(a1 + 224);
	if (v107)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v107 + 8i64))(v107);
	v108 = *(_QWORD*)(a1 + 216);
	if (v108)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v108 + 8i64))(v108);
	v109 = *(_QWORD*)(a1 + 208);
	if (v109)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v109 + 8i64))(v109);
	v110 = *(_QWORD*)(a1 + 200);
	if (v110)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v110 + 8i64))(v110);
	v111 = *(_QWORD*)(a1 + 192);
	if (v111)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v111 + 8i64))(v111);
	v112 = *(_QWORD*)(a1 + 184);
	if (v112)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v112 + 8i64))(v112);
	v113 = *(_QWORD*)(a1 + 176);
	if (v113)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v113 + 8i64))(v113);
	v114 = *(_QWORD*)(a1 + 168);
	if (v114)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v114 + 8i64))(v114);
	v115 = *(_QWORD*)(a1 + 160);
	if (v115)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v115 + 8i64))(v115);
	v116 = *(_QWORD*)(a1 + 152);
	if (v116)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v116 + 8i64))(v116);
	v117 = *(_QWORD*)(a1 + 144);
	if (v117)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v117 + 8i64))(v117);
	v118 = *(_QWORD*)(a1 + 136);
	if (v118)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v118 + 8i64))(v118);
	v119 = *(_QWORD*)(a1 + 128);
	if (v119)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v119 + 8i64))(v119);
	v120 = *(_QWORD*)(a1 + 120);
	if (v120)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v120 + 8i64))(v120);
	v121 = *(_QWORD*)(a1 + 112);
	if (v121)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v121 + 8i64))(v121);
	v122 = *(_QWORD*)(a1 + 104);
	if (v122)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v122 + 8i64))(v122);
	v123 = *(_QWORD*)(a1 + 96);
	if (v123)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v123 + 8i64))(v123);
	v124 = *(_QWORD*)(a1 + 88);
	if (v124)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v124 + 8i64))(v124);
	v125 = *(_QWORD*)(a1 + 80);
	if (v125)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v125 + 8i64))(v125);
	v126 = *(_QWORD*)(a1 + 72);
	if (v126)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v126 + 8i64))(v126);
	return result;
}
// 140B657D8: using guessed type __int64 (__fastcall *off_140B657D8[4])();
// 140B657E8: using guessed type __int64 (__fastcall *off_140B657E8[2])();
// 140C65878: using guessed type __int64 qword_140C65878;


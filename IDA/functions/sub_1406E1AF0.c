//----- (00000001406E1AF0) ----------------------------------------------------
void __fastcall sub_1406E1AF0(_QWORD* a1)
{
	unsigned __int64 v2; // r14
	int i; // r15d
	_QWORD* v4; // rbp
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rdi
	int j; // esi
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 k; // rbp
	__int64 v14; // rsi
	unsigned __int64 m; // rdi
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 n; // rdi
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	unsigned __int64 ii; // rsi
	__int64 v35; // rdi
	__int64 v36; // rcx
	__int64 v37; // rcx
	unsigned __int64 jj; // rsi
	__int64 v39; // rdi
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	unsigned __int64 kk; // rsi
	__int64 v44; // rdi
	__int64 v45; // rcx
	__int64 v46; // rcx
	unsigned __int64 mm; // rsi
	__int64 v48; // rdi
	__int64 v49; // rcx
	__int64 v50; // rcx
	__int64 v51; // rdx
	_QWORD* v52; // rdi
	int nn; // esi
	__int64 v54; // rcx
	__int64 v55; // rcx
	_QWORD* v56; // rdi
	int i1; // esi
	__int64 v58; // rcx
	__int64 v59; // rcx
	__int64 v60; // rcx
	__int64 v61; // rcx
	__int64 v62; // rcx
	__int64 v63; // rcx
	__int64 v64; // rcx
	__int64 v65; // rcx
	__int64 v66; // rcx
	__int64 v67; // rcx
	__int64 v68; // rcx
	_QWORD* v69; // rdi
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

	*a1 = off_140B720D0;
	v2 = 0i64;
	for (i = 5; v2 < a1[308]; ++v2)
	{
		v4 = *(_QWORD**)(a1[307] + 8 * v2);
		if (v4)
		{
			v5 = v4[74];
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			v6 = v4[62];
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v4[62] = 0i64;
			}
			v7 = v4[65];
			if (v7)
				sub_14018B900(v7, 0);
			v8 = v4[48];
			if (v8)
				sub_14018B900(v8, 0);
			v9 = v4 + 45;
			for (j = 5; j >= 0; --j)
			{
				v11 = *(v9 - 6);
				v9 -= 6;
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
					*v9 = 0i64;
				}
				v12 = v9[3];
				if (v12)
					sub_14018B900(v12, 0);
			}
			sub_14018B900((__int64)v4, 0);
		}
	}
	for (k = 0i64; k < a1[320]; ++k)
	{
		v14 = *(_QWORD*)(a1[319] + 8 * k);
		if (v14)
		{
			for (m = 0i64; m < *(_QWORD*)(v14 + 80); ++m)
			{
				v16 = *(_QWORD*)(*(_QWORD*)(v14 + 72) + 8 * m);
				if (v16)
					sub_14018B900(v16, 0);
			}
			v17 = *(_QWORD*)(v14 + 72);
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
			sub_14018B900(v14, 0);
		}
	}
	for (n = 0i64; n < a1[322]; ++n)
	{
		v19 = *(_QWORD*)(a1[321] + 8 * n);
		if (v19)
			sub_14018B900(v19, 0);
	}
	v20 = a1[479];
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	v21 = a1[477];
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = a1[476];
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v23 = a1[475];
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = a1[474];
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = a1[347];
	if (v25)
		sub_14018B900(v25, 0);
	v26 = a1[342];
	if (v26)
		sub_14018B900(v26, 0);
	v27 = a1[335];
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
	v28 = a1[333];
	if (v28)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
	v29 = a1[331];
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
	v30 = a1[324];
	if (v30)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
		a1[324] = 0i64;
	}
	v31 = a1[327];
	if (v31)
		sub_14018B900(v31, 0);
	v32 = a1[321];
	if (v32)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
	v33 = a1[319];
	if (v33)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v33 - 16) + 8i64))(v33 - 16);
	for (ii = 0i64; ii < a1[315]; ++ii)
	{
		v35 = a1[316] + 8 * ii;
		while (*(_QWORD*)v35)
		{
			v36 = *(_QWORD*)v35;
			*(_QWORD*)v35 = *(_QWORD*)(*(_QWORD*)v35 + 8i64);
			sub_14018B900(v36, 0);
		}
	}
	v37 = a1[316];
	a1[314] = 0i64;
	sub_14018B900(v37, 0);
	a1[316] = 0i64;
	for (jj = 0i64; jj < a1[310]; ++jj)
	{
		v39 = a1[311] + 8 * jj;
		while (*(_QWORD*)v39)
		{
			v40 = *(_QWORD*)v39;
			*(_QWORD*)v39 = *(_QWORD*)(*(_QWORD*)v39 + 8i64);
			sub_14018B900(v40, 0);
		}
	}
	v41 = a1[311];
	a1[309] = 0i64;
	sub_14018B900(v41, 0);
	a1[311] = 0i64;
	v42 = a1[307];
	if (v42)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
	for (kk = 0i64; kk < a1[303]; ++kk)
	{
		v44 = a1[304] + 8 * kk;
		while (*(_QWORD*)v44)
		{
			v45 = *(_QWORD*)v44;
			*(_QWORD*)v44 = *(_QWORD*)(*(_QWORD*)v44 + 8i64);
			sub_14018B900(v45, 0);
		}
	}
	v46 = a1[304];
	a1[302] = 0i64;
	sub_14018B900(v46, 0);
	a1[304] = 0i64;
	for (mm = 0i64; mm < a1[298]; ++mm)
	{
		v48 = a1[299] + 8 * mm;
		while (*(_QWORD*)v48)
		{
			v49 = *(_QWORD*)v48;
			*(_QWORD*)v48 = *(_QWORD*)(*(_QWORD*)v48 + 8i64);
			sub_14018B900(v49, 0);
		}
	}
	v50 = a1[299];
	a1[297] = 0i64;
	sub_14018B900(v50, 0);
	a1[299] = 0i64;
	v52 = a1 + 296;
	for (nn = 4; nn >= 0; --nn)
	{
		v54 = *(v52 - 6);
		v52 -= 6;
		if (v54)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v54 + 8i64))(v54);
			*v52 = 0i64;
		}
		v55 = v52[3];
		if (v55)
			sub_14018B900(v55, 0);
	}
	v56 = a1 + 266;
	for (i1 = 19; i1 >= 0; --i1)
	{
		v58 = *--v56;
		if (v58)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v58 - 16) + 8i64))(v58 - 16);
	}
	v59 = a1[239];
	if (v59)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v59 + 8i64))(v59);
		a1[239] = 0i64;
	}
	v60 = a1[242];
	if (v60)
		sub_14018B900(v60, 0);
	v61 = a1[233];
	if (v61)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v61 + 8i64))(v61);
		a1[233] = 0i64;
	}
	v62 = a1[236];
	if (v62)
		sub_14018B900(v62, 0);
	v63 = a1[227];
	if (v63)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 8i64))(v63);
		a1[227] = 0i64;
	}
	v64 = a1[230];
	if (v64)
		sub_14018B900(v64, 0);
	v65 = a1[221];
	if (v65)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v65 + 8i64))(v65);
		a1[221] = 0i64;
	}
	v66 = a1[224];
	if (v66)
		sub_14018B900(v66, 0);
	v67 = a1[215];
	if (v67)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v67 + 8i64))(v67);
		a1[215] = 0i64;
	}
	v68 = a1[218];
	if (v68)
		sub_14018B900(v68, 0);
	v69 = a1 + 215;
	do
	{
		v70 = *(v69 - 6);
		v69 -= 6;
		if (v70)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v70 + 8i64))(v70);
			*v69 = 0i64;
		}
		v71 = v69[3];
		if (v71)
			sub_14018B900(v71, 0);
		--i;
	} while (i >= 0);
	v72 = a1[173];
	if (v72)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v72 + 8i64))(v72);
		a1[173] = 0i64;
	}
	v73 = a1[176];
	if (v73)
		sub_14018B900(v73, 0);
	v74 = a1[167];
	if (v74)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v74 + 8i64))(v74);
		a1[167] = 0i64;
	}
	v75 = a1[170];
	if (v75)
		sub_14018B900(v75, 0);
	v76 = a1[161];
	if (v76)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v76 + 8i64))(v76);
		a1[161] = 0i64;
	}
	v77 = a1[164];
	if (v77)
		sub_14018B900(v77, 0);
	v78 = a1[155];
	if (v78)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v78 + 8i64))(v78);
		a1[155] = 0i64;
	}
	v79 = a1[158];
	if (v79)
		sub_14018B900(v79, 0);
	v80 = a1[149];
	if (v80)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v80 + 8i64))(v80);
		a1[149] = 0i64;
	}
	v81 = a1[152];
	if (v81)
		sub_14018B900(v81, 0);
	v82 = a1[143];
	if (v82)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v82 + 8i64))(v82);
		a1[143] = 0i64;
	}
	v83 = a1[146];
	if (v83)
		sub_14018B900(v83, 0);
	sub_1400C6030((__int64)a1, v51);
}
// 1406E2204: variable 'v51' is possibly undefined
// 140B720D0: using guessed type __int64 (__fastcall *off_140B720D0[25])();


//----- (0000000140313C20) ----------------------------------------------------
void __fastcall sub_140313C20(__int64 a1)
{
	unsigned __int16* v2; // rdx
	unsigned int v3; // edi
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	unsigned int v8; // r14d
	int* v9; // rsi
	unsigned __int16* v10; // rdx
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	int v22; // ecx
	int v23; // ecx
	int v24; // ecx
	int v25; // ecx
	int v26; // ecx
	int v27; // ecx
	int v28; // ecx
	unsigned __int64 v29; // rsi
	__int64 v30; // rax
	__int64 v31; // rax
	int* v32; // rax
	int* v33; // rdi
	__int64 v34; // rax
	unsigned int v35; // ebp
	__int64 v36; // rdi
	__int64 v37; // rsi
	unsigned int i; // ebp
	__int64 v39; // rdi
	__int64 v40; // rsi
	__int64 v41; // rcx
	unsigned int j; // r15d
	__int64 v43; // rdi
	unsigned int k; // r15d
	unsigned int v45; // edi
	__int64 v46; // rsi
	__int64 v47; // rcx
	unsigned int v48; // edi
	__int64 v49; // rax
	__int64 v50; // rax
	int* v51; // rax
	int* v52; // rsi
	__int64 v53; // rax
	unsigned int v54; // esi
	__int64 v55; // rax
	unsigned int v56; // r15d
	__int64 v57; // rdi
	__int64 v58; // rax
	unsigned int v59; // r15d
	__int64 v60; // rdi
	__int64 v61; // rsi
	unsigned int m; // r15d
	__int64 v63; // rdi
	unsigned int n; // r15d
	__int64 v65; // rdi
	__int64 v66; // rsi
	unsigned int ii; // r15d
	__int64 v68; // rdi
	__int64 v69; // rsi
	__int64 v70; // rdi

	if (!*(_BYTE*)(a1 + 400))
	{
		sub_140313B30((_QWORD*)a1);
		v2 = *(unsigned __int16**)(a1 + 416);
		v3 = v2[330]
			+ v2[884]
			+ 2 * (v2[512] + v2[636] + v2[760] + v2[1078] + v2[1230] + v2[1352] + v2[1476] + v2[1600] + v2[1724]);
		v4 = 16i64 * v3;
		if (!is_mul_ok(v3, 0x10ui64))
			v4 = -1i64;
		v5 = __CFADD__(v4, 8i64);
		v6 = v4 + 8;
		if (v5)
			v6 = -1i64;
		v7 = sub_14018B280(v6, 0);
		v8 = 0;
		if (v7)
		{
			*v7 = v3;
			v9 = v7 + 2;
			if ((int)(v3 - 1) >= 0)
				sub_1407E4830(v9, 0i64, 16i64 * v3);
		}
		else
		{
			v9 = 0i64;
		}
		v10 = *(unsigned __int16**)(a1 + 416);
		*(_QWORD*)(a1 + 1176) = v9;
		*(_QWORD*)(a1 + 1184) = v9;
		v11 = v10[636];
		*(_QWORD*)(a1 + 1192) = &v9[4 * v10[636]];
		v12 = v10[636] + v11;
		*(_QWORD*)(a1 + 1200) = &v9[4 * v12];
		v13 = v10[760] + v12;
		*(_QWORD*)(a1 + 1208) = &v9[4 * v13];
		v14 = v10[760] + v13;
		*(_QWORD*)(a1 + 1224) = &v9[4 * v14];
		v15 = v10[330] + v14;
		*(_QWORD*)(a1 + 1232) = &v9[4 * v15];
		v16 = v10[512] + v15;
		*(_QWORD*)(a1 + 1240) = &v9[4 * v16];
		v17 = v10[512] + v16;
		*(_QWORD*)(a1 + 1256) = &v9[4 * v17];
		v18 = v10[884] + v17;
		*(_QWORD*)(a1 + 1264) = &v9[4 * v18];
		v19 = v10[1078] + v18;
		*(_QWORD*)(a1 + 1272) = &v9[4 * v19];
		v20 = v10[1078] + v19;
		*(_QWORD*)(a1 + 1280) = &v9[4 * v20];
		v21 = v10[1230] + v20;
		*(_QWORD*)(a1 + 1288) = &v9[4 * v21];
		v22 = v10[1230] + v21;
		*(_QWORD*)(a1 + 1296) = &v9[4 * v22];
		v23 = v10[1352] + v22;
		*(_QWORD*)(a1 + 1304) = &v9[4 * v23];
		v24 = v10[1352] + v23;
		*(_QWORD*)(a1 + 1312) = &v9[4 * v24];
		v25 = v10[1476] + v24;
		*(_QWORD*)(a1 + 1320) = &v9[4 * v25];
		v26 = v10[1476] + v25;
		*(_QWORD*)(a1 + 1328) = &v9[4 * v26];
		v27 = v10[1600] + v26;
		*(_QWORD*)(a1 + 1336) = &v9[4 * v27];
		v28 = v10[1600] + v27;
		*(_QWORD*)(a1 + 1344) = &v9[4 * v28];
		*(_QWORD*)(a1 + 1352) = &v9[4 * v10[1724] + 4 * v28];
		v29 = 2 * v10[330];
		v30 = 32 * v29;
		if (!is_mul_ok(v29, 0x20ui64))
			v30 = -1i64;
		v5 = __CFADD__(v30, 16i64);
		v31 = v30 + 16;
		if (v5)
			v31 = -1i64;
		v32 = sub_14018B280(v31, 0);
		if (v32)
		{
			*v32 = v29;
			v33 = v32 + 4;
			if ((int)v29 - 1 >= 0)
				sub_1407E4830(v33, 0i64, 32i64 * (unsigned int)v29);
		}
		else
		{
			v33 = 0i64;
		}
		v34 = *(_QWORD*)(a1 + 416);
		*(_QWORD*)(a1 + 1216) = v33;
		v35 = 0;
		if (*(_WORD*)(v34 + 1272))
		{
			do
			{
				v36 = 24i64 * v35;
				v37 = 16i64 * v35;
				sub_140317EC0(v36 + *(_QWORD*)(a1 + 416) + 1280i64, v37 + *(_QWORD*)(a1 + 1184), (int**)(a1 + 384));
				sub_140317FC0(v36 + *(_QWORD*)(a1 + 416) + 1400i64, v37 + *(_QWORD*)(a1 + 1192), (_QWORD*)(a1 + 384));
				++v35;
			} while (v35 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1272i64));
		}
		for (i = 0; i < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1520i64); ++i)
		{
			v39 = 24i64 * i;
			v40 = 16i64 * i;
			sub_140317EC0(v39 + *(_QWORD*)(a1 + 416) + 1528i64, v40 + *(_QWORD*)(a1 + 1200), (int**)(a1 + 384));
			sub_140317FC0(v39 + *(_QWORD*)(a1 + 416) + 1648i64, v40 + *(_QWORD*)(a1 + 1208), (_QWORD*)(a1 + 384));
		}
		sub_140317EC0(*(_QWORD*)(a1 + 8) + 56i64, a1 + 96, (int**)(a1 + 384));
		sub_1403180D0(*(_QWORD*)(a1 + 416) + 392i64, (__m128i*)(a1 + 720), (__m128i**)(a1 + 384));
		v41 = *(_QWORD*)(a1 + 416);
		if ((*(_BYTE*)(v41 + 3784) & 2) != 0)
			sub_1403181E0(v41 + 632, (__m128*)(a1 + 880), (_QWORD*)(a1 + 384));
		sub_140317EC0(*(_QWORD*)(a1 + 416) + 2400i64, a1 + 1160, (int**)(a1 + 384));
		for (j = 0;
			j < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1024i64);
			sub_140317FC0(*(_QWORD*)(a1 + 416) + 24 * (j++ + 48i64), v43 + *(_QWORD*)(a1 + 1240), (_QWORD*)(a1 + 384)))
		{
			v43 = 16i64 * j;
			sub_140317FC0(*(_QWORD*)(a1 + 416) + 24 * (j + 43i64), v43 + *(_QWORD*)(a1 + 1232), (_QWORD*)(a1 + 384));
		}
		for (k = 0; k < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 660i64); ++k)
		{
			v45 = 0;
			v46 = 24i64 * k;
			do
			{
				sub_140318300(
					v46 + *(_QWORD*)(a1 + 416) + 664i64,
					(__m128*)(*(_QWORD*)(a1 + 1216) + 32i64 * (k + v45 * *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 660i64))),
					(_QWORD*)(a1 + 384));
				++v45;
				v46 += 120i64;
			} while (v45 < 2);
			sub_140317FC0(
				24i64 * k + *(_QWORD*)(a1 + 416) + 904i64,
				*(_QWORD*)(a1 + 1224) + 16i64 * k,
				(_QWORD*)(a1 + 384));
		}
		v47 = *(_QWORD*)(a1 + 416);
		if ((*(_BYTE*)(v47 + 3784) & 8) != 0)
		{
			v48 = *(unsigned __int16*)(v47 + 1768);
			v49 = 32i64 * *(unsigned __int16*)(v47 + 1768);
			if (!is_mul_ok(*(unsigned __int16*)(v47 + 1768), 0x20ui64))
				v49 = -1i64;
			v5 = __CFADD__(v49, 16i64);
			v50 = v49 + 16;
			if (v5)
				v50 = -1i64;
			v51 = sub_14018B280(v50, 0);
			if (v51)
			{
				*v51 = v48;
				v52 = v51 + 4;
				if ((int)(v48 - 1) >= 0)
					sub_1407E4830(v52, 0i64, 32i64 * v48);
			}
			else
			{
				v52 = 0i64;
			}
			v53 = *(_QWORD*)(a1 + 416);
			*(_QWORD*)(a1 + 1248) = v52;
			v54 = 0;
			if (*(_WORD*)(v53 + 1768))
			{
				do
				{
					sub_140318430(
						*(_QWORD*)(a1 + 416) + 24 * (v54 + 74i64),
						(__m128i*)(*(_QWORD*)(a1 + 1248) + 32i64 * v54),
						(__m128i**)(a1 + 384));
					sub_140317FC0(
						*(_QWORD*)(a1 + 416) + 24 * (v54 + 79i64),
						*(_QWORD*)(a1 + 1256) + 16i64 * v54,
						(_QWORD*)(a1 + 384));
					++v54;
				} while (v54 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1768i64));
			}
		}
		v55 = *(_QWORD*)(a1 + 416);
		if (*(char*)(v55 + 3784) < 0)
		{
			v56 = 0;
			if (*(_WORD*)(v55 + 2156))
			{
				do
				{
					v57 = 16i64 * v56;
					sub_140317EC0(*(_QWORD*)(a1 + 416) + 24 * (v56 + 90i64), v57 + *(_QWORD*)(a1 + 1264), (int**)(a1 + 384));
					sub_140317FC0(
						*(_QWORD*)(a1 + 416) + 24 * (v56++ + 95i64),
						v57 + *(_QWORD*)(a1 + 1272),
						(_QWORD*)(a1 + 384));
				} while (v56 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2156i64));
			}
		}
		v58 = *(_QWORD*)(a1 + 416);
		if (*(_WORD*)(v58 + 2456) == 2)
		{
			v59 = 0;
			if (*(_WORD*)(v58 + 2460))
			{
				do
				{
					v60 = 24i64 * v59;
					v61 = 16i64 * v59;
					sub_140317EC0(v60 + *(_QWORD*)(a1 + 416) + 2464i64, v61 + *(_QWORD*)(a1 + 1280), (int**)(a1 + 384));
					sub_140317FC0(v60 + *(_QWORD*)(a1 + 416) + 2584i64, v61 + *(_QWORD*)(a1 + 1288), (_QWORD*)(a1 + 384));
					++v59;
				} while (v59 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2460i64));
			}
			for (m = 0;
				m < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2704i64);
				sub_140317FC0(
					*(_QWORD*)(a1 + 416) + 24 * (m++ + 118i64),
					v63 + *(_QWORD*)(a1 + 1304),
					(_QWORD*)(a1 + 384)))
			{
				v63 = 16i64 * m;
				sub_140317EC0(*(_QWORD*)(a1 + 416) + 24 * (m + 113i64), v63 + *(_QWORD*)(a1 + 1296), (int**)(a1 + 384));
			}
			for (n = 0; n < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 2952i64); ++n)
			{
				v65 = 24i64 * n;
				v66 = 16i64 * n;
				sub_140317EC0(v65 + *(_QWORD*)(a1 + 416) + 2960i64, v66 + *(_QWORD*)(a1 + 1312), (int**)(a1 + 384));
				sub_140317FC0(v65 + *(_QWORD*)(a1 + 416) + 3080i64, v66 + *(_QWORD*)(a1 + 1320), (_QWORD*)(a1 + 384));
			}
			for (ii = 0; ii < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 3200i64); ++ii)
			{
				v68 = 24i64 * ii;
				v69 = 16i64 * ii;
				sub_140317EC0(v68 + *(_QWORD*)(a1 + 416) + 3208i64, v69 + *(_QWORD*)(a1 + 1328), (int**)(a1 + 384));
				sub_140317FC0(v68 + *(_QWORD*)(a1 + 416) + 3328i64, v69 + *(_QWORD*)(a1 + 1336), (_QWORD*)(a1 + 384));
			}
			if (*(_WORD*)(*(_QWORD*)(a1 + 416) + 3448i64))
			{
				do
				{
					v70 = 16i64 * v8;
					sub_140317EC0(*(_QWORD*)(a1 + 416) + 24 * (v8 + 144i64), v70 + *(_QWORD*)(a1 + 1344), (int**)(a1 + 384));
					sub_140317FC0(
						*(_QWORD*)(a1 + 416) + 24 * (v8++ + 149i64),
						v70 + *(_QWORD*)(a1 + 1352),
						(_QWORD*)(a1 + 384));
				} while (v8 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 3448i64));
			}
		}
		*(_BYTE*)(a1 + 400) = 1;
	}
}


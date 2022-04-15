//----- (00000001400E39F0) ----------------------------------------------------
void __fastcall sub_1400E39F0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // ebx
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rbp
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rsi
	_QWORD** v16; // rax
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	_QWORD** v19; // rax
	_QWORD* v20; // rbx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rbx
	__int64 v24; // rcx
	__int64 v25; // rbp
	__int64 v26; // rcx
	__int64 v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rbp
	_QWORD** v30; // rax
	_QWORD* v31; // rbx
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rbp
	__int64 v36; // rbx
	__int64 v37; // rcx
	__int64 v38; // rbp
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rbx
	__int64 v42; // rcx
	__int64 v43; // rsi
	__int64 v44; // rbx
	__int64 v45; // rcx
	__int64 v46; // rbp
	__int64 v47; // rbx
	__int64 v48; // rcx
	__int64 v49; // rbp
	_QWORD** v50; // rax
	_QWORD* v51; // rbx
	__int64 v52; // rcx
	_QWORD** v53; // rax
	_QWORD* v54; // rbx
	__int64 v55; // rcx
	__int64 v56; // rcx

	*(_QWORD*)a1 = off_140B567D0;
	sub_1400E5D00(a1);
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = 0i64;
	v2 = *(_QWORD*)(a1 + 40);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v3 = 0;
	if (*(_QWORD*)(a1 + 2784))
	{
		v4 = 0i64;
		do
		{
			v5 = (_QWORD*)(*(_QWORD*)(a1 + 2776) + 8 * v4);
			if (*v5)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
				*v5 = 0i64;
			}
			v4 = ++v3;
		} while ((unsigned __int64)v3 < *(_QWORD*)(a1 + 2784));
	}
	sub_1400E2220(qword_140C63650, a1);
	v6 = *(_QWORD**)(a1 + 368);
	if (v6)
	{
		sub_14010DB00(*(_QWORD**)(a1 + 368));
		sub_14010DA30(v6 + 9);
		v7 = v6[6];
		if (v7)
			sub_14018B900(v7, 0);
		v8 = v6[2];
		if (v8)
			sub_14018B900(v8, 0);
		sub_14018B900((__int64)v6, 0);
	}
	v9 = *(_QWORD*)(a1 + 360);
	if (v9)
	{
		sub_1401542B0(*(__int64**)(a1 + 360));
		sub_14018B900(v9, 0);
	}
	if (*(_QWORD*)(a1 + 3608))
	{
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 3600) + 8i64);
		if (v10)
		{
			do
			{
				sub_140044CA0(a1 + 3592, *(_QWORD**)(v10 + 24));
				v11 = *(_QWORD*)(v10 + 40);
				v12 = *(_QWORD*)(v10 + 16);
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900(v10, 0);
				v10 = v12;
			} while (v12);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 16i64) = *(_QWORD*)(a1 + 3600);
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 24i64) = *(_QWORD*)(a1 + 3600);
		*(_QWORD*)(a1 + 3608) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 3600), 0);
	sub_140150CE0(a1 + 3552);
	sub_1400E3920(a1 + 3368);
	sub_140008410(a1 + 3328);
	sub_14018B900(*(_QWORD*)(a1 + 3336), 0);
	sub_140008410(a1 + 3288);
	sub_14018B900(*(_QWORD*)(a1 + 3296), 0);
	if (*(_QWORD*)(a1 + 3272))
	{
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 3264) + 8i64);
		if (v13)
		{
			do
			{
				sub_140044CA0(a1 + 3256, *(_QWORD**)(v13 + 24));
				v14 = *(_QWORD*)(v13 + 40);
				v15 = *(_QWORD*)(v13 + 16);
				if (v14)
					sub_14018B900(v14, 0);
				sub_14018B900(v13, 0);
				v13 = v15;
			} while (v15);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 16i64) = *(_QWORD*)(a1 + 3264);
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 24i64) = *(_QWORD*)(a1 + 3264);
		*(_QWORD*)(a1 + 3272) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 3264), 0);
	v16 = *(_QWORD***)(a1 + 3248);
	v17 = *v16;
	if (*v16 != v16)
	{
		do
		{
			v18 = (__int64)v17;
			v17 = (_QWORD*)*v17;
			sub_14018B900(v18, 0);
		} while (v17 != *(_QWORD**)(a1 + 3248));
	}
	**(_QWORD**)(a1 + 3248) = *(_QWORD*)(a1 + 3248);
	*(_QWORD*)(*(_QWORD*)(a1 + 3248) + 8i64) = *(_QWORD*)(a1 + 3248);
	sub_14018B900(*(_QWORD*)(a1 + 3248), 0);
	v19 = *(_QWORD***)(a1 + 3232);
	v20 = *v19;
	if (*v19 != v19)
	{
		do
		{
			v21 = (__int64)v20;
			v20 = (_QWORD*)*v20;
			sub_14018B900(v21, 0);
		} while (v20 != *(_QWORD**)(a1 + 3232));
	}
	**(_QWORD**)(a1 + 3232) = *(_QWORD*)(a1 + 3232);
	*(_QWORD*)(*(_QWORD*)(a1 + 3232) + 8i64) = *(_QWORD*)(a1 + 3232);
	sub_14018B900(*(_QWORD*)(a1 + 3232), 0);
	v22 = *(_QWORD*)(a1 + 3200);
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
	if (*(_QWORD*)(a1 + 2808))
	{
		v23 = *(_QWORD*)(*(_QWORD*)(a1 + 2800) + 8i64);
		if (v23)
		{
			do
			{
				sub_140044CA0(a1 + 2792, *(_QWORD**)(v23 + 24));
				v24 = *(_QWORD*)(v23 + 40);
				v25 = *(_QWORD*)(v23 + 16);
				if (v24)
					sub_14018B900(v24, 0);
				sub_14018B900(v23, 0);
				v23 = v25;
			} while (v25);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 16i64) = *(_QWORD*)(a1 + 2800);
		*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 24i64) = *(_QWORD*)(a1 + 2800);
		*(_QWORD*)(a1 + 2808) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 2800), 0);
	v26 = *(_QWORD*)(a1 + 2776);
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
	sub_1400F47C0((__int64*)(a1 + 2688));
	sub_14014E2B0(a1 + 2648);
	if (*(_QWORD*)(a1 + 2672))
	{
		v27 = *(_QWORD*)(*(_QWORD*)(a1 + 2664) + 8i64);
		if (v27)
		{
			do
			{
				sub_140044CA0(a1 + 2656, *(_QWORD**)(v27 + 24));
				v28 = *(_QWORD*)(v27 + 40);
				v29 = *(_QWORD*)(v27 + 16);
				if (v28)
					sub_14018B900(v28, 0);
				sub_14018B900(v27, 0);
				v27 = v29;
			} while (v29);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 16i64) = *(_QWORD*)(a1 + 2664);
		*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 24i64) = *(_QWORD*)(a1 + 2664);
		*(_QWORD*)(a1 + 2672) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 2664), 0);
	v30 = *(_QWORD***)(a1 + 2640);
	v31 = *v30;
	if (*v30 != v30)
	{
		do
		{
			v32 = (__int64)v31;
			v31 = (_QWORD*)*v31;
			sub_14018B900(v32, 0);
		} while (v31 != *(_QWORD**)(a1 + 2640));
	}
	**(_QWORD**)(a1 + 2640) = *(_QWORD*)(a1 + 2640);
	*(_QWORD*)(*(_QWORD*)(a1 + 2640) + 8i64) = *(_QWORD*)(a1 + 2640);
	sub_14018B900(*(_QWORD*)(a1 + 2640), 0);
	*(_QWORD*)(a1 + 2584) = off_140B5C6B0;
	sub_1401518A0(a1 + 2584);
	if (*(_QWORD*)(a1 + 2616))
	{
		v33 = *(_QWORD*)(*(_QWORD*)(a1 + 2608) + 8i64);
		if (v33)
		{
			do
			{
				sub_140044CA0(a1 + 2600, *(_QWORD**)(v33 + 24));
				v34 = *(_QWORD*)(v33 + 40);
				v35 = *(_QWORD*)(v33 + 16);
				if (v34)
					sub_14018B900(v34, 0);
				sub_14018B900(v33, 0);
				v33 = v35;
			} while (v35);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 16i64) = *(_QWORD*)(a1 + 2608);
		*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 24i64) = *(_QWORD*)(a1 + 2608);
		*(_QWORD*)(a1 + 2616) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 2608), 0);
	sub_140137F70((_QWORD*)(a1 + 2496));
	if (*(_QWORD*)(a1 + 2552))
	{
		v36 = *(_QWORD*)(*(_QWORD*)(a1 + 2544) + 8i64);
		if (v36)
		{
			do
			{
				sub_140044CA0(a1 + 2536, *(_QWORD**)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 40);
				v38 = *(_QWORD*)(v36 + 16);
				if (v37)
					sub_14018B900(v37, 0);
				sub_14018B900(v36, 0);
				v36 = v38;
			} while (v38);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 16i64) = *(_QWORD*)(a1 + 2544);
		*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 24i64) = *(_QWORD*)(a1 + 2544);
		*(_QWORD*)(a1 + 2552) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 2544), 0);
	v39 = *(_QWORD*)(a1 + 2512);
	if (v39)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
	sub_1400F19D0((_QWORD*)(a1 + 384));
	sub_140108C90((_QWORD*)(a1 + 240));
	v40 = *(_QWORD*)(a1 + 336);
	if (v40)
		sub_14018B900(v40, 0);
	sub_140109F00((_QWORD*)(a1 + 288));
	sub_140109F00((_QWORD*)(a1 + 288));
	sub_14018B900(*(_QWORD*)(a1 + 304), 0);
	*(_QWORD*)(a1 + 304) = 0i64;
	sub_140109E00((_QWORD*)(a1 + 248));
	sub_14018B900(*(_QWORD*)(a1 + 264), 0);
	*(_QWORD*)(a1 + 264) = 0i64;
	if (*(_QWORD*)(a1 + 224))
	{
		v41 = *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64);
		if (v41)
		{
			do
			{
				sub_140044CA0(a1 + 208, *(_QWORD**)(v41 + 24));
				v42 = *(_QWORD*)(v41 + 40);
				v43 = *(_QWORD*)(v41 + 16);
				if (v42)
					sub_14018B900(v42, 0);
				sub_14018B900(v41, 0);
				v41 = v43;
			} while (v43);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 16i64) = *(_QWORD*)(a1 + 216);
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 24i64) = *(_QWORD*)(a1 + 216);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 216), 0);
	if (*(_QWORD*)(a1 + 192))
	{
		v44 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 8i64);
		if (v44)
		{
			do
			{
				sub_140044CA0(a1 + 176, *(_QWORD**)(v44 + 24));
				v45 = *(_QWORD*)(v44 + 40);
				v46 = *(_QWORD*)(v44 + 16);
				if (v45)
					sub_14018B900(v45, 0);
				sub_14018B900(v44, 0);
				v44 = v46;
			} while (v46);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 184) + 16i64) = *(_QWORD*)(a1 + 184);
		*(_QWORD*)(*(_QWORD*)(a1 + 184) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 184) + 24i64) = *(_QWORD*)(a1 + 184);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 184), 0);
	if (*(_QWORD*)(a1 + 160))
	{
		v47 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8i64);
		if (v47)
		{
			do
			{
				sub_140044CA0(a1 + 144, *(_QWORD**)(v47 + 24));
				v48 = *(_QWORD*)(v47 + 40);
				v49 = *(_QWORD*)(v47 + 16);
				if (v48)
					sub_14018B900(v48, 0);
				sub_14018B900(v47, 0);
				v47 = v49;
			} while (v49);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 152) + 16i64) = *(_QWORD*)(a1 + 152);
		*(_QWORD*)(*(_QWORD*)(a1 + 152) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 152) + 24i64) = *(_QWORD*)(a1 + 152);
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 152), 0);
	v50 = *(_QWORD***)(a1 + 136);
	v51 = *v50;
	if (*v50 != v50)
	{
		do
		{
			v52 = (__int64)v51;
			v51 = (_QWORD*)*v51;
			sub_14018B900(v52, 0);
		} while (v51 != *(_QWORD**)(a1 + 136));
	}
	**(_QWORD**)(a1 + 136) = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = *(_QWORD*)(a1 + 136);
	sub_14018B900(*(_QWORD*)(a1 + 136), 0);
	v53 = *(_QWORD***)(a1 + 120);
	v54 = *v53;
	if (*v53 != v53)
	{
		do
		{
			v55 = (__int64)v54;
			v54 = (_QWORD*)*v54;
			sub_14018B900(v55, 0);
		} while (v54 != *(_QWORD**)(a1 + 120));
	}
	**(_QWORD**)(a1 + 120) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = *(_QWORD*)(a1 + 120);
	sub_14018B900(*(_QWORD*)(a1 + 120), 0);
	v56 = *(_QWORD*)(a1 + 16);
	if (v56)
		sub_14018B900(v56, 0);
}
// 140B567D0: using guessed type __int64 (__fastcall *off_140B567D0[7])();
// 140B5C6B0: using guessed type __int64 (__fastcall *off_140B5C6B0[10])();
// 140C63650: using guessed type __int64 qword_140C63650;


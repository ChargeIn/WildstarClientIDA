//----- (00000001400C6030) ----------------------------------------------------
void __fastcall sub_1400C6030(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 i; // rsi
	_QWORD* v12; // rbx
	__int64 v13; // rcx
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	_QWORD* v16; // rsi
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v23; // rsi
	__int64 v24; // rbx
	__int64 v25; // rbx
	__int64 v26; // rcx
	__int64 v27; // rsi
	_QWORD** v28; // rax
	_QWORD* v29; // rbx
	__int64 v30; // rcx
	_QWORD* v31; // rax
	_QWORD* v32; // rbx
	__int64* v33; // rsi
	__int64 v34; // rbp
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	const void*** v38; // r14
	__int64 v39; // rax
	_QWORD* v40; // rax
	_QWORD* v41; // rbx
	__int64 v42; // rsi
	__int64 v43; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	__int64 v46; // rsi
	__int64 v47; // rbp
	__int64 v48; // rbx
	_QWORD* v49; // rax
	_QWORD* v50; // rbx
	__int64 v51; // rcx
	__int64 v52; // rbx
	__int64 v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rcx
	__int64 v57; // rcx
	void(__fastcall * **v58)(_QWORD, __int64); // rcx
	_QWORD* v59; // rbx
	__int64 v60; // rcx
	_QWORD* v61; // rbx
	__int64 v62; // rcx
	_QWORD* v63; // rbx
	__int64 v64; // rcx
	__int64 v65; // rbx
	__int64 v66; // rcx
	__int64 v67; // rsi
	__int64 v68; // rbx
	__int64 v69; // rbx
	__int64 v70; // rcx
	__int64 v71; // rsi
	__int64 v72; // rbx
	int v73; // esi
	_DWORD* v74; // rcx
	__int64 v75; // r8
	__int64 v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rcx
	_QWORD** v79; // rax
	_QWORD* v80; // rbx
	__int64 v81; // rcx
	_QWORD** v82; // rax
	_QWORD* v83; // rbx
	__int64 v84; // rcx
	_QWORD** v85; // rax
	_QWORD* v86; // rbx
	__int64 v87; // rcx
	__int64 v88; // rcx
	__int64 v89; // rbx
	__int64 v90; // rcx
	__int64 v91; // rbp
	int ii; // ebx
	_QWORD** v93; // rax
	_QWORD* v94; // rbx
	__int64 v95; // rcx

	*(_QWORD*)a1 = off_140B56570;
	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
	{
		sub_1400579E0(*(_QWORD*)(v3 + 400), a2, *(_DWORD*)(a1 + 808));
		v4 = *(_QWORD*)(a1 + 32);
		if (*(_QWORD*)(v4 + 2888) == a1)
		{
			v5 = *(_QWORD*)(v4 + 2888);
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*(_QWORD*)(v4 + 2888) = 0i64;
			}
		}
	}
	v6 = *(_QWORD*)(a1 + 440);
	if (v6)
		sub_14018B900(v6, 0);
	v7 = *(_QWORD*)(a1 + 608);
	if (v7)
		sub_14018B900(v7, 0);
	v8 = *(_QWORD*)(a1 + 528);
	if (v8)
	{
		sub_140150CE0(*(_QWORD*)(a1 + 528));
		sub_14018B900(v8, 0);
	}
	v9 = *(_QWORD*)(a1 + 464);
	if (v9)
		sub_1400C6A40(v9);
	v10 = *(_QWORD*)(a1 + 472);
	if (v10)
		sub_1400C6A40(v10);
	if (*(_QWORD*)(a1 + 480))
	{
		for (i = 0i64; i < 64; i += 8i64)
		{
			v12 = *(_QWORD**)(i + *(_QWORD*)(a1 + 480));
			if (v12)
			{
				if (*v12)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
					*v12 = 0i64;
				}
				v13 = v12[3];
				if (v13)
					sub_14018B900(v13, 0);
				sub_14018B900((__int64)v12, 0);
			}
		}
		sub_14018B900(*(_QWORD*)(a1 + 480), 0);
	}
	v14 = *(_QWORD**)(a1 + 1000);
	v15 = (_QWORD*)v14[2];
	if (v15 != v14)
	{
		do
		{
			v16 = (_QWORD*)v15[5];
			if (v16)
			{
				v17 = v16[10];
				if (v17)
					sub_14018B900(v17, 0);
				v18 = v16[6];
				if (v18)
					sub_14018B900(v18, 0);
				v19 = v16[2];
				if (v19)
					sub_14018B900(v19, 0);
				sub_14018B900((__int64)v16, 0);
			}
			v20 = v15[3];
			if (v20)
			{
				v15 = (_QWORD*)v15[3];
				for (j = *(_QWORD**)(v20 + 16); j; j = (_QWORD*)j[2])
					v15 = j;
			}
			else
			{
				for (k = v15[1]; v15 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v15 = (_QWORD*)k;
				if (v15[3] != k)
					v15 = (_QWORD*)k;
			}
		} while (v15 != *(_QWORD**)(a1 + 1000));
	}
	if (*(_QWORD*)(a1 + 1008))
	{
		v23 = *(_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64);
		if (v23)
		{
			do
			{
				sub_1400083B0(a1 + 992, *(_QWORD*)(v23 + 24));
				v24 = *(_QWORD*)(v23 + 16);
				sub_14018B900(v23, 0);
				v23 = v24;
			} while (v24);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 16i64) = *(_QWORD*)(a1 + 1000);
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 24i64) = *(_QWORD*)(a1 + 1000);
		*(_QWORD*)(a1 + 1008) = 0i64;
	}
	if (*(_QWORD*)(a1 + 976))
	{
		v25 = *(_QWORD*)(*(_QWORD*)(a1 + 968) + 8i64);
		if (v25)
		{
			do
			{
				sub_140044CA0(a1 + 960, *(_QWORD**)(v25 + 24));
				v26 = *(_QWORD*)(v25 + 40);
				v27 = *(_QWORD*)(v25 + 16);
				if (v26)
					sub_14018B900(v26, 0);
				sub_14018B900(v25, 0);
				v25 = v27;
			} while (v27);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 16i64) = *(_QWORD*)(a1 + 968);
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 24i64) = *(_QWORD*)(a1 + 968);
		*(_QWORD*)(a1 + 976) = 0i64;
	}
	v28 = *(_QWORD***)(a1 + 592);
	v29 = *v28;
	if (*v28 != v28)
	{
		do
		{
			v30 = (__int64)v29;
			v29 = (_QWORD*)*v29;
			sub_14018B900(v30, 0);
		} while (v29 != *(_QWORD**)(a1 + 592));
	}
	**(_QWORD**)(a1 + 592) = *(_QWORD*)(a1 + 592);
	*(_QWORD*)(*(_QWORD*)(a1 + 592) + 8i64) = *(_QWORD*)(a1 + 592);
	v31 = *(_QWORD**)(a1 + 304);
	v32 = (_QWORD*)*v31;
	if ((_QWORD*)*v31 != v31)
	{
		do
		{
			v33 = (__int64*)v32[2];
			if (v33)
			{
				v34 = v33[1];
				if (v34)
				{
					sub_140150220(v33[1]);
					sub_14018B900(v34, 0);
				}
				v35 = v33[3];
				if (v35)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
					v33[3] = 0i64;
				}
				v36 = v33[6];
				if (v36)
					sub_14018B900(v36, 0);
				sub_14018B900((__int64)v33, 0);
			}
			v32 = (_QWORD*)*v32;
		} while (v32 != *(_QWORD**)(a1 + 304));
	}
	v37 = *(_QWORD*)(a1 + 312);
	if (v37)
		sub_14018B900(v37, 0);
	v38 = (const void***)(a1 + 344);
	v39 = *(_QWORD*)(a1 + 344);
	if (v39)
	{
		v40 = *(_QWORD**)(v39 + 8);
		v41 = (_QWORD*)v40[2];
		if (v41 != v40)
		{
			do
			{
				v42 = v41[5];
				if (v42)
				{
					sub_140150220(v41[5]);
					sub_14018B900(v42, 0);
				}
				v43 = v41[3];
				if (v43)
				{
					v41 = (_QWORD*)v41[3];
					for (m = *(_QWORD**)(v43 + 16); m; m = (_QWORD*)m[2])
						v41 = m;
				}
				else
				{
					for (n = v41[1]; v41 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
						v41 = (_QWORD*)n;
					if (v41[3] != n)
						v41 = (_QWORD*)n;
				}
			} while (v41 != (*v38)[1]);
		}
		v46 = (__int64)*v38;
		if (*v38)
		{
			if (*(_QWORD*)(v46 + 16))
			{
				v47 = *(_QWORD*)(*(_QWORD*)(v46 + 8) + 8i64);
				if (v47)
				{
					do
					{
						sub_1400083B0(v46, *(_QWORD*)(v47 + 24));
						v48 = *(_QWORD*)(v47 + 16);
						sub_14018B900(v47, 0);
						v47 = v48;
					} while (v48);
				}
				*(_QWORD*)(*(_QWORD*)(v46 + 8) + 16i64) = *(_QWORD*)(v46 + 8);
				*(_QWORD*)(*(_QWORD*)(v46 + 8) + 8i64) = 0i64;
				*(_QWORD*)(*(_QWORD*)(v46 + 8) + 24i64) = *(_QWORD*)(v46 + 8);
				*(_QWORD*)(v46 + 16) = 0i64;
			}
			sub_14018B900(*(_QWORD*)(v46 + 8), 0);
			sub_14018B900(v46, 0);
		}
	}
	v49 = *(_QWORD**)(a1 + 560);
	v50 = (_QWORD*)*v49;
	if ((_QWORD*)*v49 != v49)
	{
		do
		{
			v51 = v50[2];
			if (v51)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v51 + 8i64))(v51);
			v50 = (_QWORD*)*v50;
		} while (v50 != *(_QWORD**)(a1 + 560));
	}
	v52 = *(_QWORD*)(a1 + 680);
	if (v52)
	{
		sub_1400C5810(*(__int64**)(a1 + 680));
		v53 = *(_QWORD*)(v52 + 80);
		if (v53)
			sub_14018B900(v53, 0);
		v54 = *(_QWORD*)(v52 + 48);
		if (v54)
			sub_14018B900(v54, 0);
		sub_14018B900(v52, 0);
	}
	v55 = *(_QWORD*)(a1 + 16);
	if (v55)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v55 + 8i64))(v55);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v56 = *(_QWORD*)(a1 + 448);
	if (v56)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v56 + 8i64))(v56);
		*(_QWORD*)(a1 + 448) = 0i64;
	}
	v57 = *(_QWORD*)(a1 + 688);
	if (v57)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v57 + 8i64))(v57);
		*(_QWORD*)(a1 + 688) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 944), 0);
	v58 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 288);
	if (v58)
		(**v58)(v58, 1i64);
	v59 = *(_QWORD**)(a1 + 736);
	if (v59)
	{
		if (*v59)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v59 + 8i64))(*v59);
			*v59 = 0i64;
		}
		v60 = v59[3];
		if (v60)
			sub_14018B900(v60, 0);
		sub_14018B900((__int64)v59, 0);
	}
	v61 = *(_QWORD**)(a1 + 792);
	if (v61)
	{
		if (*v61)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v61 + 8i64))(*v61);
			*v61 = 0i64;
		}
		v62 = v61[3];
		if (v62)
			sub_14018B900(v62, 0);
		sub_14018B900((__int64)v61, 0);
	}
	v63 = *(_QWORD**)(a1 + 800);
	if (v63)
	{
		if (*v63)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v63 + 8i64))(*v63);
			*v63 = 0i64;
		}
		v64 = v63[3];
		if (v64)
			sub_14018B900(v64, 0);
		sub_14018B900((__int64)v63, 0);
	}
	v65 = *(_QWORD*)(a1 + 368);
	if (v65)
	{
		v66 = *(_QWORD*)(v65 + 8);
		if (v66)
			sub_14018B900(v66, 0);
		sub_14018B900(v65, 0);
	}
	if (*(_QWORD*)(a1 + 1008))
	{
		v67 = *(_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64);
		if (v67)
		{
			do
			{
				sub_1400083B0(a1 + 992, *(_QWORD*)(v67 + 24));
				v68 = *(_QWORD*)(v67 + 16);
				sub_14018B900(v67, 0);
				v67 = v68;
			} while (v68);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 16i64) = *(_QWORD*)(a1 + 1000);
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 24i64) = *(_QWORD*)(a1 + 1000);
		*(_QWORD*)(a1 + 1008) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 1000), 0);
	if (*(_QWORD*)(a1 + 976))
	{
		v69 = *(_QWORD*)(*(_QWORD*)(a1 + 968) + 8i64);
		if (v69)
		{
			do
			{
				sub_140044CA0(a1 + 960, *(_QWORD**)(v69 + 24));
				v70 = *(_QWORD*)(v69 + 40);
				v71 = *(_QWORD*)(v69 + 16);
				if (v70)
					sub_14018B900(v70, 0);
				sub_14018B900(v69, 0);
				v69 = v71;
			} while (v71);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 16i64) = *(_QWORD*)(a1 + 968);
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 968) + 24i64) = *(_QWORD*)(a1 + 968);
		*(_QWORD*)(a1 + 976) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 968), 0);
	v72 = *(_QWORD*)(a1 + 832);
	*(_QWORD*)(a1 + 816) = off_140B56A08;
	if (v72)
	{
		v73 = *(_DWORD*)(a1 + 824);
		if (v73 >= 0)
		{
			v74 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v72, -10000) + 32i64);
			while (v74[6] != 3 || *((double*)v74 + 2) != 0.0)
			{
				v74 = (_DWORD*)*((_QWORD*)v74 + 4);
				if (!v74)
				{
					v74 = dword_140A12138;
					break;
				}
			}
			v75 = *(_QWORD*)(v72 + 16);
			*(_QWORD*)v75 = *(_QWORD*)v74;
			*(_DWORD*)(v75 + 8) = v74[2];
			*(_QWORD*)(v72 + 16) += 16i64;
			sub_140058B30(v72, -10000);
			v76 = *(_QWORD*)(v72 + 16);
			*(_DWORD*)(v76 + 8) = 3;
			*(double*)v76 = (double)v73;
			*(_QWORD*)(v72 + 16) += 16i64;
			sub_140058B30(v72, -10000);
		}
	}
	v77 = *(_QWORD*)(a1 + 744);
	if (v77)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v77 + 8i64))(v77);
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	v78 = *(_QWORD*)(a1 + 768);
	if (v78)
		sub_14018B900(v78, 0);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 712));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 708));
	v79 = *(_QWORD***)(a1 + 592);
	v80 = *v79;
	if (*v79 != v79)
	{
		do
		{
			v81 = (__int64)v80;
			v80 = (_QWORD*)*v80;
			sub_14018B900(v81, 0);
		} while (v80 != *(_QWORD**)(a1 + 592));
	}
	**(_QWORD**)(a1 + 592) = *(_QWORD*)(a1 + 592);
	*(_QWORD*)(*(_QWORD*)(a1 + 592) + 8i64) = *(_QWORD*)(a1 + 592);
	sub_14018B900(*(_QWORD*)(a1 + 592), 0);
	v82 = *(_QWORD***)(a1 + 576);
	v83 = *v82;
	if (*v82 != v82)
	{
		do
		{
			v84 = (__int64)v83;
			v83 = (_QWORD*)*v83;
			sub_14018B900(v84, 0);
		} while (v83 != *(_QWORD**)(a1 + 576));
	}
	**(_QWORD**)(a1 + 576) = *(_QWORD*)(a1 + 576);
	*(_QWORD*)(*(_QWORD*)(a1 + 576) + 8i64) = *(_QWORD*)(a1 + 576);
	sub_14018B900(*(_QWORD*)(a1 + 576), 0);
	v85 = *(_QWORD***)(a1 + 560);
	v86 = *v85;
	if (*v85 != v85)
	{
		do
		{
			v87 = (__int64)v86;
			v86 = (_QWORD*)*v86;
			sub_14018B900(v87, 0);
		} while (v86 != *(_QWORD**)(a1 + 560));
	}
	**(_QWORD**)(a1 + 560) = *(_QWORD*)(a1 + 560);
	*(_QWORD*)(*(_QWORD*)(a1 + 560) + 8i64) = *(_QWORD*)(a1 + 560);
	sub_14018B900(*(_QWORD*)(a1 + 560), 0);
	v88 = *(_QWORD*)(a1 + 536);
	if (v88)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v88 - 16) + 8i64))(v88 - 16);
	sub_14014E2B0(a1 + 488);
	if (*(_QWORD*)(a1 + 512))
	{
		v89 = *(_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64);
		if (v89)
		{
			do
			{
				sub_140044CA0(a1 + 496, *(_QWORD**)(v89 + 24));
				v90 = *(_QWORD*)(v89 + 40);
				v91 = *(_QWORD*)(v89 + 16);
				if (v90)
					sub_14018B900(v90, 0);
				sub_14018B900(v89, 0);
				v89 = v91;
			} while (v91);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 16i64) = *(_QWORD*)(a1 + 504);
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 24i64) = *(_QWORD*)(a1 + 504);
		*(_QWORD*)(a1 + 512) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	for (ii = 2; ii >= 0; --ii)
	{
		if (*--v38)
			sub_1401A4A00(v38);
	}
	v93 = *(_QWORD***)(a1 + 304);
	v94 = *v93;
	if (*v93 != v93)
	{
		do
		{
			v95 = (__int64)v94;
			v94 = (_QWORD*)*v94;
			sub_14018B900(v95, 0);
		} while (v94 != *(_QWORD**)(a1 + 304));
	}
	**(_QWORD**)(a1 + 304) = *(_QWORD*)(a1 + 304);
	*(_QWORD*)(*(_QWORD*)(a1 + 304) + 8i64) = *(_QWORD*)(a1 + 304);
	sub_14018B900(*(_QWORD*)(a1 + 304), 0);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56570: using guessed type __int64 (__fastcall *off_140B56570[25])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63678: using guessed type __int64 qword_140C63678;


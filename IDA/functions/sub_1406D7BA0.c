//----- (00000001406D7BA0) ----------------------------------------------------
__int64 __fastcall sub_1406D7BA0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_QWORD* a4,
	_OWORD* a5,
	__int64 a6,
	int a7,
	_DWORD* a8)
{
	__int64 v8; // rbx
	int v10; // r14d
	int** v11; // rsi
	int i; // ebp
	int* v13; // rax
	int v14; // xmm0_4
	int** v15; // rsi
	int* v16; // rax
	int v17; // xmm0_4
	__int64 v18; // rbp
	void(__fastcall * **v19)(_QWORD); // rbp
	__int64 v20; // r8
	bool v21; // zf
	__int64 v22; // rsi
	void(__fastcall * **v23)(_QWORD); // rsi
	__int64 v24; // r8
	__int64 v25; // rsi
	void(__fastcall * **v26)(_QWORD); // rsi
	__int64 v27; // r8
	__int64 v28; // rsi
	void(__fastcall * **v29)(_QWORD); // rsi
	__int64 v30; // r8
	__int64 v31; // rsi
	void(__fastcall * **v32)(_QWORD); // rsi
	__int64 v33; // r8
	__int64 v34; // rbp
	void(__fastcall * **v35)(_QWORD); // rbp
	__int64 v36; // r8
	__int64 v37; // rbp
	void(__fastcall * **v38)(_QWORD); // rbp
	__int64 v39; // r8
	__int64 v40; // rbp
	void(__fastcall * **v41)(_QWORD); // rbp
	__int64 v42; // r8
	__int64 v43; // rbp
	void(__fastcall * **v44)(_QWORD); // rbp
	__int64 v45; // r8
	__int64 v46; // rbp
	void(__fastcall * **v47)(_QWORD); // rbp
	__int64 v48; // r8
	__int64 v49; // rbp
	void(__fastcall * **v50)(_QWORD); // rbp
	__int64 v51; // r8
	__int64 v52; // rbp
	void(__fastcall * **v53)(_QWORD); // rbp
	__int64 v54; // r8
	__int64 v55; // rsi
	void(__fastcall * **v56)(_QWORD); // rsi
	__int64 v57; // r8
	__int64 v58; // rbp
	void(__fastcall * **v59)(_QWORD); // rbp
	__int64 v60; // r8
	__int64 v61; // rbp
	void(__fastcall * **v62)(_QWORD); // rbp
	__int64 v63; // r8
	__int64 v64; // rbp
	void(__fastcall * **v65)(_QWORD); // rbp
	__int64 v66; // r8
	__int64 v67; // rbp
	void(__fastcall * **v68)(_QWORD); // rbp
	__int64 v69; // r8
	__int64 v70; // rbp
	void(__fastcall * **v71)(_QWORD); // rbp
	__int64 v72; // r8
	__int64 v73; // rbp
	void(__fastcall * **v74)(_QWORD); // rbp
	__int64 v75; // r8
	__int64 v76; // rbp
	void(__fastcall * **v77)(_QWORD); // rbp

	v8 = 0i64;
	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_WORD*)(a1 + 1024) = 0;
	*(_QWORD*)a1 = off_140B71330;
	*(_DWORD*)(a1 + 1028) = *a8;
	*(_DWORD*)(a1 + 1032) = a8[1];
	sub_1406D7B10(a1 + 1040);
	sub_1401095E0(a1 + 1664);
	sub_1401095E0(a1 + 1712);
	sub_1401095E0(a1 + 1760);
	v10 = 7;
	v11 = (int**)(a1 + 1840);
	for (i = 7; i >= 0; --i)
	{
		*(v11 - 1) = 0i64;
		*v11 = 0i64;
		v11[1] = 0i64;
		v13 = sub_14018B280(16i64, 0);
		*(v11 - 1) = v13;
		*v11 = v13;
		v11[1] = v13 + 4;
		if (v13)
			*(_WORD*)v13 = 0;
		v14 = dword_140C63664;
		*(v11 - 4) = 0i64;
		*((_DWORD*)v11 - 5) = 1065353216;
		*((_DWORD*)v11 - 6) = v14;
		v11 += 6;
	}
	v15 = (int**)(a1 + 2224);
	do
	{
		*(v15 - 1) = 0i64;
		*v15 = 0i64;
		v15[1] = 0i64;
		v16 = sub_14018B280(16i64, 0);
		*(v15 - 1) = v16;
		*v15 = v16;
		v15[1] = v16 + 4;
		if (v16)
			*(_WORD*)v16 = 0;
		v17 = dword_140C63664;
		*(v15 - 4) = 0i64;
		*((_DWORD*)v15 - 5) = 1065353216;
		*((_DWORD*)v15 - 6) = v17;
		v15 += 6;
		--v10;
	} while (v10 >= 0);
	*(_QWORD*)(a1 + 2576) = 0i64;
	sub_1401095E0(a1 + 2584);
	sub_1401095E0(a1 + 2632);
	sub_1401095E0(a1 + 2680);
	v18 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 0x100000000ui64;
	if (v18 && (!*(_QWORD*)(a1 + 2584) || !sub_14002C740(a1 + 2600, L"HuddieNameplateFrame")))
	{
		v19 = (void(__fastcall***)(_QWORD))sub_140108E80(v18 + 240, (const __m128i*)L"HuddieNameplateFrame");
		if (v19)
		{
			v20 = 0i64;
			do
				v21 = aHuddienameplat[++v20] == 0;
			while (!v21);
			sub_14001C480(a1 + 2600, (int*)L"HuddieNameplateFrame", (int*)&aHuddienameplat[v20]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2584), v19);
	}
	v22 = *(_QWORD*)(a1 + 32);
	if (v22 && (!*(_QWORD*)(a1 + 1664) || !sub_14002C740(a1 + 1680, L"UI_BK3_ItemDrag_DestinationNoGlow")))
	{
		v23 = (void(__fastcall***)(_QWORD))sub_140108E80(v22 + 240, (const __m128i*)L"UI_BK3_ItemDrag_DestinationNoGlow");
		if (v23)
		{
			v24 = 0i64;
			do
				v21 = aUiBk3ItemdragD_3[++v24] == 0;
			while (!v21);
			sub_14001C480(a1 + 1680, (int*)L"UI_BK3_ItemDrag_DestinationNoGlow", (int*)&aUiBk3ItemdragD_3[v24]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1664), v23);
	}
	v25 = *(_QWORD*)(a1 + 32);
	if (v25 && (!*(_QWORD*)(a1 + 1712) || !sub_14002C740(a1 + 1728, L"UI_BK3_ItemDrag_DestinationDeniedNoGlow")))
	{
		v26 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v25 + 240,
			(const __m128i*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
		if (v26)
		{
			v27 = 0i64;
			do
				v21 = aUiBk3ItemdragD_4[++v27] == 0;
			while (!v21);
			sub_14001C480(a1 + 1728, (int*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow", (int*)&aUiBk3ItemdragD_4[v27]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1712), v26);
	}
	v28 = *(_QWORD*)(a1 + 32);
	if (v28 && (!*(_QWORD*)(a1 + 1760) || !sub_14002C740(a1 + 1776, L"UI_BK3_ItemDrag_OriginalNoGlow")))
	{
		v29 = (void(__fastcall***)(_QWORD))sub_140108E80(v28 + 240, (const __m128i*)L"UI_BK3_ItemDrag_OriginalNoGlow");
		if (v29)
		{
			v30 = 0i64;
			do
				v21 = aUiBk3ItemdragO_1[++v30] == 0;
			while (!v21);
			sub_14001C480(a1 + 1776, (int*)L"UI_BK3_ItemDrag_OriginalNoGlow", (int*)&aUiBk3ItemdragO_1[v30]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1760), v29);
	}
	v31 = *(_QWORD*)(a1 + 32);
	if (v31 && (!*(_QWORD*)(a1 + 2192) || !sub_14002C740(a1 + 2208, L"UI_BK3_ItemDrag_Quality_Grey")))
	{
		v32 = (void(__fastcall***)(_QWORD))sub_140108E80(v31 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Grey");
		if (v32)
		{
			v33 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_7[++v33] == 0;
			while (!v21);
			sub_14001C480(a1 + 2208, (int*)L"UI_BK3_ItemDrag_Quality_Grey", (int*)&aUiBk3ItemdragQ_7[v33]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2192), v32);
	}
	v34 = *(_QWORD*)(a1 + 32);
	if (v34 && (!*(_QWORD*)(a1 + 2240) || !sub_14002C740(a1 + 2256, L"UI_BK3_ItemDrag_Quality_Grey")))
	{
		v35 = (void(__fastcall***)(_QWORD))sub_140108E80(v34 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Grey");
		if (v35)
		{
			v36 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_8[++v36] == 0;
			while (!v21);
			sub_14001C480(a1 + 2256, (int*)L"UI_BK3_ItemDrag_Quality_Grey", (int*)&aUiBk3ItemdragQ_8[v36]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2240), v35);
	}
	v37 = *(_QWORD*)(a1 + 32);
	if (v37 && (!*(_QWORD*)(a1 + 2288) || !sub_14002C740(a1 + 2304, L"UI_BK3_ItemDrag_Quality_White")))
	{
		v38 = (void(__fastcall***)(_QWORD))sub_140108E80(v37 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_White");
		if (v38)
		{
			v39 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_9[++v39] == 0;
			while (!v21);
			sub_14001C480(a1 + 2304, (int*)L"UI_BK3_ItemDrag_Quality_White", (int*)&aUiBk3ItemdragQ_9[v39]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2288), v38);
	}
	v40 = *(_QWORD*)(a1 + 32);
	if (v40 && (!*(_QWORD*)(a1 + 2336) || !sub_14002C740(a1 + 2352, L"UI_BK3_ItemDrag_Quality_Green")))
	{
		v41 = (void(__fastcall***)(_QWORD))sub_140108E80(v40 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Green");
		if (v41)
		{
			v42 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_10[++v42] == 0;
			while (!v21);
			sub_14001C480(a1 + 2352, (int*)L"UI_BK3_ItemDrag_Quality_Green", (int*)&aUiBk3ItemdragQ_10[v42]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2336), v41);
	}
	v43 = *(_QWORD*)(a1 + 32);
	if (v43 && (!*(_QWORD*)(a1 + 2384) || !sub_14002C740(a1 + 2400, L"UI_BK3_ItemDrag_Quality_Blue")))
	{
		v44 = (void(__fastcall***)(_QWORD))sub_140108E80(v43 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Blue");
		if (v44)
		{
			v45 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_11[++v45] == 0;
			while (!v21);
			sub_14001C480(a1 + 2400, (int*)L"UI_BK3_ItemDrag_Quality_Blue", (int*)&aUiBk3ItemdragQ_11[v45]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2384), v44);
	}
	v46 = *(_QWORD*)(a1 + 32);
	if (v46 && (!*(_QWORD*)(a1 + 2432) || !sub_14002C740(a1 + 2448, L"UI_BK3_ItemDrag_Quality_Purple")))
	{
		v47 = (void(__fastcall***)(_QWORD))sub_140108E80(v46 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Purple");
		if (v47)
		{
			v48 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_12[++v48] == 0;
			while (!v21);
			sub_14001C480(a1 + 2448, (int*)L"UI_BK3_ItemDrag_Quality_Purple", (int*)&aUiBk3ItemdragQ_12[v48]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2432), v47);
	}
	v49 = *(_QWORD*)(a1 + 32);
	if (v49 && (!*(_QWORD*)(a1 + 2480) || !sub_14002C740(a1 + 2496, L"UI_BK3_ItemDrag_Quality_Orange")))
	{
		v50 = (void(__fastcall***)(_QWORD))sub_140108E80(v49 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Orange");
		if (v50)
		{
			v51 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_13[++v51] == 0;
			while (!v21);
			sub_14001C480(a1 + 2496, (int*)L"UI_BK3_ItemDrag_Quality_Orange", (int*)&aUiBk3ItemdragQ_13[v51]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2480), v50);
	}
	v52 = *(_QWORD*)(a1 + 32);
	if (v52 && (!*(_QWORD*)(a1 + 2528) || !sub_14002C740(a1 + 2544, L"UI_BK3_ItemDrag_Quality_Pink")))
	{
		v53 = (void(__fastcall***)(_QWORD))sub_140108E80(v52 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Pink");
		if (v53)
		{
			v54 = 0i64;
			do
				v21 = aUiBk3ItemdragQ_14[++v54] == 0;
			while (!v21);
			sub_14001C480(a1 + 2544, (int*)L"UI_BK3_ItemDrag_Quality_Pink", (int*)&aUiBk3ItemdragQ_14[v54]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2528), v53);
	}
	v55 = *(_QWORD*)(a1 + 32);
	if (v55 && (!*(_QWORD*)(a1 + 1808) || !sub_14002C740(a1 + 1824, L"UI_RarityBorder_Grey")))
	{
		v56 = (void(__fastcall***)(_QWORD))sub_140108E80(v55 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v56)
		{
			v57 = 0i64;
			do
				v21 = aUiRarityborder_15[++v57] == 0;
			while (!v21);
			sub_14001C480(a1 + 1824, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder_15[v57]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1808), v56);
	}
	v58 = *(_QWORD*)(a1 + 32);
	if (v58 && (!*(_QWORD*)(a1 + 1856) || !sub_14002C740(a1 + 1872, L"UI_RarityBorder_Grey")))
	{
		v59 = (void(__fastcall***)(_QWORD))sub_140108E80(v58 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v59)
		{
			v60 = 0i64;
			do
				v21 = aUiRarityborder_16[++v60] == 0;
			while (!v21);
			sub_14001C480(a1 + 1872, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder_16[v60]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1856), v59);
	}
	v61 = *(_QWORD*)(a1 + 32);
	if (v61 && (!*(_QWORD*)(a1 + 1904) || !sub_14002C740(a1 + 1920, L"UI_RarityBorder_White")))
	{
		v62 = (void(__fastcall***)(_QWORD))sub_140108E80(v61 + 240, (const __m128i*)L"UI_RarityBorder_White");
		if (v62)
		{
			v63 = 0i64;
			do
				v21 = aUiRarityborder_17[++v63] == 0;
			while (!v21);
			sub_14001C480(a1 + 1920, (int*)L"UI_RarityBorder_White", (int*)&aUiRarityborder_17[v63]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1904), v62);
	}
	v64 = *(_QWORD*)(a1 + 32);
	if (v64 && (!*(_QWORD*)(a1 + 1952) || !sub_14002C740(a1 + 1968, L"UI_RarityBorder_Green")))
	{
		v65 = (void(__fastcall***)(_QWORD))sub_140108E80(v64 + 240, (const __m128i*)L"UI_RarityBorder_Green");
		if (v65)
		{
			v66 = 0i64;
			do
				v21 = aUiRarityborder_18[++v66] == 0;
			while (!v21);
			sub_14001C480(a1 + 1968, (int*)L"UI_RarityBorder_Green", (int*)&aUiRarityborder_18[v66]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1952), v65);
	}
	v67 = *(_QWORD*)(a1 + 32);
	if (v67 && (!*(_QWORD*)(a1 + 2000) || !sub_14002C740(a1 + 2016, L"UI_RarityBorder_Blue")))
	{
		v68 = (void(__fastcall***)(_QWORD))sub_140108E80(v67 + 240, (const __m128i*)L"UI_RarityBorder_Blue");
		if (v68)
		{
			v69 = 0i64;
			do
				v21 = aUiRarityborder_19[++v69] == 0;
			while (!v21);
			sub_14001C480(a1 + 2016, (int*)L"UI_RarityBorder_Blue", (int*)&aUiRarityborder_19[v69]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2000), v68);
	}
	v70 = *(_QWORD*)(a1 + 32);
	if (v70 && (!*(_QWORD*)(a1 + 2048) || !sub_14002C740(a1 + 2064, L"UI_RarityBorder_Purple")))
	{
		v71 = (void(__fastcall***)(_QWORD))sub_140108E80(v70 + 240, (const __m128i*)L"UI_RarityBorder_Purple");
		if (v71)
		{
			v72 = 0i64;
			do
				v21 = aUiRarityborder_20[++v72] == 0;
			while (!v21);
			sub_14001C480(a1 + 2064, (int*)L"UI_RarityBorder_Purple", (int*)&aUiRarityborder_20[v72]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2048), v71);
	}
	v73 = *(_QWORD*)(a1 + 32);
	if (v73 && (!*(_QWORD*)(a1 + 2096) || !sub_14002C740(a1 + 2112, L"UI_RarityBorder_Orange")))
	{
		v74 = (void(__fastcall***)(_QWORD))sub_140108E80(v73 + 240, (const __m128i*)L"UI_RarityBorder_Orange");
		if (v74)
		{
			v75 = 0i64;
			do
				v21 = aUiRarityborder_21[++v75] == 0;
			while (!v21);
			sub_14001C480(a1 + 2112, (int*)L"UI_RarityBorder_Orange", (int*)&aUiRarityborder_21[v75]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2096), v74);
	}
	v76 = *(_QWORD*)(a1 + 32);
	if (v76 && (!*(_QWORD*)(a1 + 2144) || !sub_14002C740(a1 + 2160, L"UI_RarityBorder_Pink")))
	{
		v77 = (void(__fastcall***)(_QWORD))sub_140108E80(v76 + 240, (const __m128i*)L"UI_RarityBorder_Pink");
		if (v77)
		{
			do
				v21 = aUiRarityborder_22[++v8] == 0;
			while (!v21);
			sub_14001C480(a1 + 2160, (int*)L"UI_RarityBorder_Pink", (int*)&aUiRarityborder_22[v8]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2144), v77);
	}
	*(_DWORD*)(a1 + 676) = 3;
	return a1;
}
// 140B3C300: using guessed type wchar_t aUiBk3ItemdragQ_13[31];
// 140B3C340: using guessed type wchar_t aUiBk3ItemdragQ_12[31];
// 140B3C380: using guessed type wchar_t aUiBk3ItemdragQ_11[29];
// 140B3C3C0: using guessed type wchar_t aUiBk3ItemdragQ_10[30];
// 140B3C400: using guessed type wchar_t aUiBk3ItemdragQ_9[30];
// 140B3C440: using guessed type wchar_t aUiBk3ItemdragQ_8[29];
// 140B3C480: using guessed type wchar_t aUiBk3ItemdragQ_7[29];
// 140B3C4C0: using guessed type wchar_t aUiBk3ItemdragO_1[31];
// 140B3C500: using guessed type wchar_t aUiBk3ItemdragD_4[40];
// 140B3C550: using guessed type wchar_t aUiBk3ItemdragD_3[34];
// 140B3C598: using guessed type wchar_t aHuddienameplat[21];
// 140B3C650: using guessed type wchar_t aUiRarityborder_22[21];
// 140B3C680: using guessed type wchar_t aUiRarityborder_21[23];
// 140B3C6B0: using guessed type wchar_t aUiRarityborder_20[23];
// 140B3C6E0: using guessed type wchar_t aUiRarityborder_19[21];
// 140B3C710: using guessed type wchar_t aUiRarityborder_18[22];
// 140B3C740: using guessed type wchar_t aUiRarityborder_17[22];
// 140B3C770: using guessed type wchar_t aUiRarityborder_16[21];
// 140B3C7A0: using guessed type wchar_t aUiRarityborder_15[21];
// 140B3C7D0: using guessed type wchar_t aUiBk3ItemdragQ_14[29];
// 140B71330: using guessed type __int64 (__fastcall *off_140B71330[25])();
// 140C63664: using guessed type int dword_140C63664;


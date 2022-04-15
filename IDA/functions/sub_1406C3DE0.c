//----- (00000001406C3DE0) ----------------------------------------------------
__int64 __fastcall sub_1406C3DE0(__int64 a1, __int64 a2, __int64 a3, __m128i* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	int v8; // eax
	_QWORD* v9; // rsi
	int v10; // r15d
	int** v11; // rbx
	int i; // r14d
	int* v13; // rcx
	int v14; // xmm0_4
	_QWORD* v15; // rsi
	int v16; // r14d
	int** v17; // rbx
	int* v18; // rcx
	int v19; // xmm0_4
	_QWORD* v20; // rsi
	int v21; // r14d
	int** v22; // rbx
	int* v23; // rcx
	int v24; // xmm0_4
	_QWORD* v25; // rsi
	int v26; // r14d
	int** v27; // rbx
	int* v28; // rcx
	int v29; // xmm0_4
	_QWORD* v30; // rsi
	int** v31; // rbx
	int* v32; // rcx
	int v33; // xmm0_4
	unsigned int* v34; // r15
	__int64 v35; // r9
	__int64 v36; // r8
	_DWORD* v37; // rdx
	int v38; // eax
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rsi
	void(__fastcall * **v46)(_QWORD); // rsi
	__int64 v47; // r8
	bool v48; // zf
	__int64 v49; // rsi
	void(__fastcall * **v50)(_QWORD); // rsi
	__int64 v51; // r8
	__int64 v52; // rsi
	void(__fastcall * **v53)(_QWORD); // rsi
	__int64 v54; // r8
	__int64 v55; // rsi
	void(__fastcall * **v56)(_QWORD); // rsi
	__int64 v57; // r8
	__int64 v58; // rsi
	void(__fastcall * **v59)(_QWORD); // rsi
	__int64 v60; // r8
	__int64 v61; // rsi
	void(__fastcall * **v62)(_QWORD); // rsi
	__int64 v63; // r8
	__int64 v64; // rsi
	void(__fastcall * **v65)(_QWORD); // rsi
	__int64 v66; // r8
	__int64 v67; // rsi
	void(__fastcall * **v68)(_QWORD); // rsi
	__int64 v69; // r8
	__int64 v70; // rsi
	void(__fastcall * **v71)(_QWORD); // rsi
	__int64 v72; // r8
	__int64 v73; // rsi
	void(__fastcall * **v74)(_QWORD); // rsi
	__int64 v75; // r8
	__int64 v76; // rsi
	void(__fastcall * **v77)(_QWORD); // rsi
	__int64 v78; // r8
	__int64 v79; // rsi
	void(__fastcall * **v80)(_QWORD); // rsi
	__int64 v81; // r8
	__int64 v82; // rsi
	void(__fastcall * **v83)(_QWORD); // rsi
	__int64 v84; // r8
	__int64 v85; // rsi
	void(__fastcall * **v86)(_QWORD); // rsi
	__int64 v87; // r8
	__int64 v88; // rsi
	void(__fastcall * **v89)(_QWORD); // rsi
	__int64 v90; // r8
	__int64 v91; // rsi
	void(__fastcall * **v92)(_QWORD); // rsi
	__int64 v93; // r8
	__int64 v94; // r14
	void(__fastcall * **v95)(_QWORD); // r14
	__int64 v96; // r8
	__int64 v97; // r14
	void(__fastcall * **v98)(_QWORD); // r14
	__int64 v99; // r8
	__int64 v100; // r14
	void(__fastcall * **v101)(_QWORD); // r14
	__int64 v102; // r8
	__int64 v103; // r14
	void(__fastcall * **v104)(_QWORD); // r14
	__int64 v105; // r8
	__int64 v106; // r14
	void(__fastcall * **v107)(_QWORD); // r14
	__int64 v108; // r8
	__int64* v109; // rdx
	__int64 v110; // rcx
	int v111; // eax
	__int64 v112; // rax
	int v113; // xmm1_4
	int v114; // xmm0_4
	__int64 v115; // rax
	int v116; // xmm1_4
	__int64 v117; // rax
	int v118; // xmm0_4
	__int64 v119; // rdx
	__int64 v120; // rdx
	unsigned __int64 v121; // rbx
	__int64 v122; // r8
	__int64 v123; // rdx
	__int64 v124; // rcx
	int v125; // r9d
	unsigned int* v126; // rsi
	unsigned __int64 v127; // rbx
	__int64 v128; // r8
	__int64 v129; // rdx
	__int64 v130; // rcx
	int v131; // r9d
	__int64 v132; // rax
	__int64 v133; // rcx
	__int64 v134; // rax
	__int64 v135; // rcx
	__int64 v136; // rax
	__int64 v137; // rcx
	int v139[4]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v140; // [rsp+70h] [rbp-90h]
	__int64 v141[3]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v142; // [rsp+98h] [rbp-68h]
	int v143; // [rsp+A0h] [rbp-60h]
	int v144; // [rsp+A4h] [rbp-5Ch]
	int v145; // [rsp+A8h] [rbp-58h]
	int v146[5]; // [rsp+ACh] [rbp-54h]
	int v147; // [rsp+C0h] [rbp-40h]
	int v148[3]; // [rsp+D0h] [rbp-30h]
	int v149; // [rsp+DCh] [rbp-24h]
	__int64 v150; // [rsp+E0h] [rbp-20h]
	int v151; // [rsp+E8h] [rbp-18h]
	int v152; // [rsp+ECh] [rbp-14h]

	sub_14012FA20(a1, a2, a3, a4, 0, 0i64, 0, 0i64, a5, a6, a7);
	*(_QWORD*)a1 = off_140B70780;
	v8 = dword_140C636A8;
	*(_DWORD*)(a1 + 1576) = dword_140C636A8;
	*(_QWORD*)(a1 + 1568) = off_140B54E00;
	*(_QWORD*)(a1 + 1592) = 0i64;
	*(_DWORD*)(a1 + 1584) = 0;
	*(_BYTE*)(a1 + 1588) = 0;
	*(_DWORD*)(a1 + 1608) = v8;
	*(_QWORD*)(a1 + 1600) = off_140B54E00;
	*(_QWORD*)(a1 + 1624) = 0i64;
	*(_DWORD*)(a1 + 1616) = 0;
	*(_BYTE*)(a1 + 1620) = 0;
	*(_DWORD*)(a1 + 1640) = v8;
	*(_QWORD*)(a1 + 1632) = off_140B54E00;
	*(_QWORD*)(a1 + 1656) = 0i64;
	*(_DWORD*)(a1 + 1648) = 0;
	*(_BYTE*)(a1 + 1652) = 0;
	*(_DWORD*)(a1 + 1672) = v8;
	*(_QWORD*)(a1 + 1664) = off_140B54E00;
	*(_QWORD*)(a1 + 1688) = 0i64;
	*(_DWORD*)(a1 + 1680) = 0;
	*(_BYTE*)(a1 + 1684) = 0;
	*(_DWORD*)(a1 + 1704) = v8;
	*(_QWORD*)(a1 + 1696) = off_140B54E00;
	*(_QWORD*)(a1 + 1720) = 0i64;
	*(_DWORD*)(a1 + 1712) = 0;
	*(_BYTE*)(a1 + 1716) = 0;
	*(_DWORD*)(a1 + 1736) = v8;
	*(_QWORD*)(a1 + 1728) = off_140B54E00;
	*(_QWORD*)(a1 + 1752) = 0i64;
	*(_DWORD*)(a1 + 1744) = 0;
	*(_BYTE*)(a1 + 1748) = 0;
	*(_DWORD*)(a1 + 1768) = v8;
	*(_QWORD*)(a1 + 1760) = off_140B54E00;
	*(_QWORD*)(a1 + 1784) = 0i64;
	*(_DWORD*)(a1 + 1776) = 0;
	*(_BYTE*)(a1 + 1780) = 0;
	sub_1401095E0(a1 + 1800);
	sub_1401095E0(a1 + 1848);
	sub_1401095E0(a1 + 1896);
	sub_1401095E0(a1 + 1944);
	sub_1401095E0(a1 + 1992);
	sub_1401095E0(a1 + 2040);
	sub_1401095E0(a1 + 2088);
	sub_1401095E0(a1 + 2136);
	sub_1401095E0(a1 + 2184);
	sub_1401095E0(a1 + 2232);
	sub_1401095E0(a1 + 2280);
	sub_1401095E0(a1 + 2328);
	sub_1401095E0(a1 + 2376);
	sub_1401095E0(a1 + 2424);
	v9 = (_QWORD*)(a1 + 2472);
	v10 = 1;
	v11 = (int**)(a1 + 2504);
	for (i = 1; i >= 0; --i)
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
		*v9 = 0i64;
		*((_DWORD*)v11 - 5) = 1065353216;
		*((_DWORD*)v11 - 6) = v14;
		v11 += 6;
		v9 += 6;
	}
	v15 = (_QWORD*)(a1 + 2568);
	v16 = 1;
	v17 = (int**)(a1 + 2600);
	do
	{
		*(v17 - 1) = 0i64;
		*v17 = 0i64;
		v17[1] = 0i64;
		v18 = sub_14018B280(16i64, 0);
		*(v17 - 1) = v18;
		*v17 = v18;
		v17[1] = v18 + 4;
		if (v18)
			*(_WORD*)v18 = 0;
		v19 = dword_140C63664;
		*v15 = 0i64;
		*((_DWORD*)v17 - 5) = 1065353216;
		*((_DWORD*)v17 - 6) = v19;
		v17 += 6;
		v15 += 6;
		--v16;
	} while (v16 >= 0);
	v20 = (_QWORD*)(a1 + 2664);
	v21 = 1;
	v22 = (int**)(a1 + 2696);
	do
	{
		*(v22 - 1) = 0i64;
		*v22 = 0i64;
		v22[1] = 0i64;
		v23 = sub_14018B280(16i64, 0);
		*(v22 - 1) = v23;
		*v22 = v23;
		v22[1] = v23 + 4;
		if (v23)
			*(_WORD*)v23 = 0;
		v24 = dword_140C63664;
		*v20 = 0i64;
		*((_DWORD*)v22 - 5) = 1065353216;
		*((_DWORD*)v22 - 6) = v24;
		v22 += 6;
		v20 += 6;
		--v21;
	} while (v21 >= 0);
	v25 = (_QWORD*)(a1 + 2760);
	v26 = 1;
	v27 = (int**)(a1 + 2792);
	do
	{
		*(v27 - 1) = 0i64;
		*v27 = 0i64;
		v27[1] = 0i64;
		v28 = sub_14018B280(16i64, 0);
		*(v27 - 1) = v28;
		*v27 = v28;
		v27[1] = v28 + 4;
		if (v28)
			*(_WORD*)v28 = 0;
		v29 = dword_140C63664;
		*v25 = 0i64;
		*((_DWORD*)v27 - 5) = 1065353216;
		*((_DWORD*)v27 - 6) = v29;
		v27 += 6;
		v25 += 6;
		--v26;
	} while (v26 >= 0);
	v30 = (_QWORD*)(a1 + 2856);
	v31 = (int**)(a1 + 2888);
	do
	{
		*(v31 - 1) = 0i64;
		*v31 = 0i64;
		v31[1] = 0i64;
		v32 = sub_14018B280(16i64, 0);
		*(v31 - 1) = v32;
		*v31 = v32;
		v31[1] = v32 + 4;
		if (v32)
			*(_WORD*)v32 = 0;
		v33 = dword_140C63664;
		*v30 = 0i64;
		*((_DWORD*)v31 - 5) = 1065353216;
		*((_DWORD*)v31 - 6) = v33;
		v31 += 6;
		v30 += 6;
		--v10;
	} while (v10 >= 0);
	*(_DWORD*)(a1 + 2952) = 0;
	v34 = (unsigned int*)(a1 + 2956);
	*(_DWORD*)(a1 + 2956) = 0;
	v35 = 4i64;
	*(_DWORD*)(a1 + 3040) = 0;
	v36 = a1 + 2976;
	v37 = (_DWORD*)(a1 + 3024);
	do
	{
		v38 = *(_DWORD*)((char*)v37 + (_QWORD)((char*)&unk_140A14E90 - a1 - 2960) - 64);
		*v37 = 0;
		v36 += 8i64;
		*(v37 - 4) = v38;
		*(_QWORD*)(v36 - 8) = 0i64;
		++v37;
		--v35;
	} while (v35);
	*(_DWORD*)(a1 + 3040) |= 0x300u;
	*(_QWORD*)(a1 + 432) |= 0x10000000ui64;
	v39 = *(_QWORD*)(a1 + 1568);
	v139[0] = 1065353216;
	(*(void(__fastcall**)(__int64, int*))(v39 + 8))(a1 + 1568, v139);
	v40 = *(_QWORD*)(a1 + 1600);
	v139[0] = 0;
	(*(void(__fastcall**)(__int64, int*))(v40 + 8))(a1 + 1600, v139);
	v41 = *(_QWORD*)(a1 + 1632);
	v139[0] = 0;
	(*(void(__fastcall**)(__int64, int*))(v41 + 8))(a1 + 1632, v139);
	v42 = *(_QWORD*)(a1 + 1664);
	v139[0] = 0;
	(*(void(__fastcall**)(__int64, int*))(v42 + 8))(a1 + 1664, v139);
	v43 = *(_QWORD*)(a1 + 1728);
	v139[0] = 0;
	(*(void(__fastcall**)(__int64, int*))(v43 + 8))(a1 + 1728, v139);
	v44 = *(_QWORD*)(a1 + 1696);
	v139[0] = 0;
	(*(void(__fastcall**)(__int64, int*))(v44 + 8))(a1 + 1696, v139);
	v45 = *(_QWORD*)(a1 + 32);
	*(_BYTE*)(a1 + 29) |= 4u;
	*(_DWORD*)(a1 + 1792) = 0;
	if (v45 && (!*(_QWORD*)(a1 + 1992) || !sub_14002C740(a1 + 2008, L"sprAS_ReadyFlash")))
	{
		v46 = (void(__fastcall***)(_QWORD))sub_140108E80(v45 + 240, (const __m128i*)L"sprAS_ReadyFlash");
		if (v46)
		{
			v47 = 0i64;
			do
				v48 = aSprasReadyflas[++v47] == 0;
			while (!v48);
			sub_14001C480(a1 + 2008, (int*)L"sprAS_ReadyFlash", (int*)&aSprasReadyflas[v47]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1992), v46);
	}
	v49 = *(_QWORD*)(a1 + 32);
	if (v49 && (!*(_QWORD*)(a1 + 1944) || !sub_14002C740(a1 + 1960, L"sprAS_ButtonPress")))
	{
		v50 = (void(__fastcall***)(_QWORD))sub_140108E80(v49 + 240, (const __m128i*)L"sprAS_ButtonPress");
		if (v50)
		{
			v51 = 0i64;
			do
				v48 = aSprasButtonpre[++v51] == 0;
			while (!v48);
			sub_14001C480(a1 + 1960, (int*)L"sprAS_ButtonPress", (int*)&aSprasButtonpre[v51]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1944), v50);
	}
	v52 = *(_QWORD*)(a1 + 32);
	if (v52 && (!*(_QWORD*)(a1 + 2040) || !sub_14002C740(a1 + 2056, L"sprAS_Interrupt")))
	{
		v53 = (void(__fastcall***)(_QWORD))sub_140108E80(v52 + 240, (const __m128i*)L"sprAS_Interrupt");
		if (v53)
		{
			v54 = 0i64;
			do
				v48 = aSprasInterrupt[++v54] == 0;
			while (!v48);
			sub_14001C480(a1 + 2056, (int*)L"sprAS_Interrupt", (int*)&aSprasInterrupt[v54]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2040), v53);
	}
	v55 = *(_QWORD*)(a1 + 32);
	if (v55 && (!*(_QWORD*)(a1 + 1848) || !sub_14002C740(a1 + 1864, L"sprAS_Prompt_Resource")))
	{
		v56 = (void(__fastcall***)(_QWORD))sub_140108E80(v55 + 240, (const __m128i*)L"sprAS_Prompt_Resource");
		if (v56)
		{
			v57 = 0i64;
			do
				v48 = aSprasPromptRes[++v57] == 0;
			while (!v48);
			sub_14001C480(a1 + 1864, (int*)L"sprAS_Prompt_Resource", (int*)&aSprasPromptRes[v57]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1848), v56);
	}
	v58 = *(_QWORD*)(a1 + 32);
	if (v58 && (!*(_QWORD*)(a1 + 1896) || !sub_14002C740(a1 + 1912, L"sprAS_ChannelCast")))
	{
		v59 = (void(__fastcall***)(_QWORD))sub_140108E80(v58 + 240, (const __m128i*)L"sprAS_ChannelCast");
		if (v59)
		{
			v60 = 0i64;
			do
				v48 = aSprasChannelca[++v60] == 0;
			while (!v48);
			sub_14001C480(a1 + 1912, (int*)L"sprAS_ChannelCast", (int*)&aSprasChannelca[v60]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1896), v59);
	}
	v61 = *(_QWORD*)(a1 + 32);
	if (v61 && (!*(_QWORD*)(a1 + 2088) || !sub_14002C740(a1 + 2104, L"sprAS_GCD_OverlayFill")))
	{
		v62 = (void(__fastcall***)(_QWORD))sub_140108E80(v61 + 240, (const __m128i*)L"sprAS_GCD_OverlayFill");
		if (v62)
		{
			v63 = 0i64;
			do
				v48 = aSprasGcdOverla[++v63] == 0;
			while (!v48);
			sub_14001C480(a1 + 2104, (int*)L"sprAS_GCD_OverlayFill", (int*)&aSprasGcdOverla[v63]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2088), v62);
	}
	v64 = *(_QWORD*)(a1 + 32);
	if (v64 && (!*(_QWORD*)(a1 + 2136) || !sub_14002C740(a1 + 2152, L"sprAS_OffCooldownFlash")))
	{
		v65 = (void(__fastcall***)(_QWORD))sub_140108E80(v64 + 240, (const __m128i*)L"sprAS_OffCooldownFlash");
		if (v65)
		{
			v66 = 0i64;
			do
				v48 = aSprasOffcooldo[++v66] == 0;
			while (!v48);
			sub_14001C480(a1 + 2152, (int*)L"sprAS_OffCooldownFlash", (int*)&aSprasOffcooldo[v66]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2136), v65);
	}
	v67 = *(_QWORD*)(a1 + 32);
	if (v67 && (!*(_QWORD*)(a1 + 2280) || !sub_14002C740(a1 + 2296, L"UI_BK3_ItemDrag_DestinationNoGlow")))
	{
		v68 = (void(__fastcall***)(_QWORD))sub_140108E80(v67 + 240, (const __m128i*)L"UI_BK3_ItemDrag_DestinationNoGlow");
		if (v68)
		{
			v69 = 0i64;
			do
				v48 = aUiBk3ItemdragD[++v69] == 0;
			while (!v48);
			sub_14001C480(a1 + 2296, (int*)L"UI_BK3_ItemDrag_DestinationNoGlow", (int*)&aUiBk3ItemdragD[v69]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2280), v68);
	}
	v70 = *(_QWORD*)(a1 + 32);
	if (v70 && (!*(_QWORD*)(a1 + 2328) || !sub_14002C740(a1 + 2344, L"UI_BK3_ItemDrag_DestinationDeniedNoGlow")))
	{
		v71 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v70 + 240,
			(const __m128i*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
		if (v71)
		{
			v72 = 0i64;
			do
				v48 = aUiBk3ItemdragD_0[++v72] == 0;
			while (!v48);
			sub_14001C480(a1 + 2344, (int*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow", (int*)&aUiBk3ItemdragD_0[v72]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2328), v71);
	}
	v73 = *(_QWORD*)(a1 + 32);
	if (v73 && (!*(_QWORD*)(a1 + 2376) || !sub_14002C740(a1 + 2392, L"UI_BK3_ItemDrag_OriginalNoGlow")))
	{
		v74 = (void(__fastcall***)(_QWORD))sub_140108E80(v73 + 240, (const __m128i*)L"UI_BK3_ItemDrag_OriginalNoGlow");
		if (v74)
		{
			v75 = 0i64;
			do
				v48 = aUiBk3ItemdragO[++v75] == 0;
			while (!v48);
			sub_14001C480(a1 + 2392, (int*)L"UI_BK3_ItemDrag_OriginalNoGlow", (int*)&aUiBk3ItemdragO[v75]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2376), v74);
	}
	v76 = *(_QWORD*)(a1 + 32);
	if (v76 && (!*(_QWORD*)(a1 + 2424) || !sub_14002C740(a1 + 2440, L"BK3:UI_BK3_PremiumCalloutBanner_01")))
	{
		v77 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v76 + 240,
			(const __m128i*)L"BK3:UI_BK3_PremiumCalloutBanner_01");
		if (v77)
		{
			v78 = 0i64;
			do
				v48 = aBk3UiBk3Premiu[++v78] == 0;
			while (!v48);
			sub_14001C480(a1 + 2440, (int*)L"BK3:UI_BK3_PremiumCalloutBanner_01", (int*)&aBk3UiBk3Premiu[v78]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2424), v77);
	}
	v79 = *(_QWORD*)(a1 + 32);
	if (v79 && (!*(_QWORD*)(a1 + 2472) || !sub_14002C740(a1 + 2488, L"BK3:UI_BK3_MouseKey_BottomBar_Izq")))
	{
		v80 = (void(__fastcall***)(_QWORD))sub_140108E80(v79 + 240, (const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Izq");
		if (v80)
		{
			v81 = 0i64;
			do
				v48 = aBk3UiBk3Mousek[++v81] == 0;
			while (!v48);
			sub_14001C480(a1 + 2488, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Izq", (int*)&aBk3UiBk3Mousek[v81]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2472), v80);
	}
	v82 = *(_QWORD*)(a1 + 32);
	if (v82 && (!*(_QWORD*)(a1 + 2568) || !sub_14002C740(a1 + 2584, L"BK3:UI_BK3_MouseKey_BottomBar_Rght")))
	{
		v83 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v82 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Rght");
		if (v83)
		{
			v84 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_0[++v84] == 0;
			while (!v48);
			sub_14001C480(a1 + 2584, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Rght", (int*)&aBk3UiBk3Mousek_0[v84]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2568), v83);
	}
	v85 = *(_QWORD*)(a1 + 32);
	if (v85 && (!*(_QWORD*)(a1 + 2664) || !sub_14002C740(a1 + 2680, L"BK3:UI_BK3_MouseKey_BottomBar_Scrll")))
	{
		v86 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v85 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Scrll");
		if (v86)
		{
			v87 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_1[++v87] == 0;
			while (!v48);
			sub_14001C480(a1 + 2680, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Scrll", (int*)&aBk3UiBk3Mousek_1[v87]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2664), v86);
	}
	v88 = *(_QWORD*)(a1 + 32);
	if (v88 && (!*(_QWORD*)(a1 + 2760) || !sub_14002C740(a1 + 2776, L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp")))
	{
		v89 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v88 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp");
		if (v89)
		{
			v90 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_2[++v90] == 0;
			while (!v48);
			sub_14001C480(a1 + 2776, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp", (int*)&aBk3UiBk3Mousek_2[v90]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2760), v89);
	}
	v91 = *(_QWORD*)(a1 + 32);
	if (v91 && (!*(_QWORD*)(a1 + 2856) || !sub_14002C740(a1 + 2872, L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn")))
	{
		v92 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v91 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn");
		if (v92)
		{
			v93 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_3[++v93] == 0;
			while (!v48);
			sub_14001C480(a1 + 2872, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn", (int*)&aBk3UiBk3Mousek_3[v93]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2856), v92);
	}
	v94 = *(_QWORD*)(a1 + 32);
	if (v94 && (!*(_QWORD*)(a1 + 2520) || !sub_14002C740(a1 + 2536, L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red")))
	{
		v95 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v94 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red");
		if (v95)
		{
			v96 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_4[++v96] == 0;
			while (!v48);
			sub_14001C480(a1 + 2536, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red", (int*)&aBk3UiBk3Mousek_4[v96]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2520), v95);
	}
	v97 = *(_QWORD*)(a1 + 32);
	if (v97 && (!*(_QWORD*)(a1 + 2616) || !sub_14002C740(a1 + 2632, L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red")))
	{
		v98 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v97 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red");
		if (v98)
		{
			v99 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_5[++v99] == 0;
			while (!v48);
			sub_14001C480(a1 + 2632, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red", (int*)&aBk3UiBk3Mousek_5[v99]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2616), v98);
	}
	v100 = *(_QWORD*)(a1 + 32);
	if (v100 && (!*(_QWORD*)(a1 + 2712) || !sub_14002C740(a1 + 2728, L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red")))
	{
		v101 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v100 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red");
		if (v101)
		{
			v102 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_6[++v102] == 0;
			while (!v48);
			sub_14001C480(a1 + 2728, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red", (int*)&aBk3UiBk3Mousek_6[v102]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2712), v101);
	}
	v103 = *(_QWORD*)(a1 + 32);
	if (v103 && (!*(_QWORD*)(a1 + 2808) || !sub_14002C740(a1 + 2824, L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red")))
	{
		v104 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v103 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red");
		if (v104)
		{
			v105 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_7[++v105] == 0;
			while (!v48);
			sub_14001C480(a1 + 2824, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red", (int*)&aBk3UiBk3Mousek_7[v105]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2808), v104);
	}
	v106 = *(_QWORD*)(a1 + 32);
	if (v106 && (!*(_QWORD*)(a1 + 2904) || !sub_14002C740(a1 + 2920, L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red")))
	{
		v107 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v106 + 240,
			(const __m128i*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red");
		if (v107)
		{
			v108 = 0i64;
			do
				v48 = aBk3UiBk3Mousek_8[++v108] == 0;
			while (!v48);
			sub_14001C480(a1 + 2920, (int*)L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red", (int*)&aBk3UiBk3Mousek_8[v108]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2904), v107);
	}
	v148[0] = 0;
	v148[2] = 0;
	v149 = 1065353216;
	v150 = 2i64;
	v151 = 6;
	v148[1] = 1056964608;
	v152 = -2;
	v147 = 0;
	v109 = v141;
	v110 = 0i64;
	do
	{
		v111 = v148[v110++];
		++v109;
		*(_DWORD*)((char*)&v142 + v110 * 4 + 4) = v111;
		v146[v110] = *(int*)((char*)&v149 + v110 * 4);
		*(v109 - 1) = 0i64;
	} while (v110 < 4);
	v112 = v141[0];
	v113 = v144;
	*(_OWORD*)(a1 + 2960) = v140;
	*(_QWORD*)(a1 + 2976) = v112;
	v114 = v143;
	*(_QWORD*)(a1 + 2984) = v141[1];
	v115 = v141[2];
	*(_DWORD*)(a1 + 3012) = v113;
	v116 = v146[0];
	*(_DWORD*)(a1 + 3008) = v114;
	*(_QWORD*)(a1 + 2992) = v115;
	v117 = v142;
	v118 = v145;
	*(_DWORD*)(a1 + 3020) = v116;
	*(_DWORD*)(a1 + 3016) = v118;
	*(_QWORD*)(a1 + 3000) = v117;
	*(_DWORD*)(a1 + 3024) = v146[1];
	*(_DWORD*)(a1 + 3028) = v146[2];
	*(_DWORD*)(a1 + 3032) = v146[3];
	*(_DWORD*)(a1 + 3036) = v146[4];
	*(_DWORD*)(a1 + 3040) = v147 | 0x300;
	v119 = *(_QWORD*)(a1 + 32);
	if (v119)
		sub_140109710((__int64*)(a1 + 2232), v119 + 240, (__m128i*)L"WhiteFill", 0);
	v120 = *(_QWORD*)(a1 + 32);
	if (v120)
		sub_140109710((__int64*)(a1 + 2184), v120 + 240, (__m128i*)L"WhiteFill", 0);
	v121 = (unsigned int)sub_140142170(qword_140C63678, L"blue");
	if (v34 == (unsigned int*)v139)
	{
		v122 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v34);
		v122 = qword_140C63678;
		*v34 = v121;
		if (v121 < *(_QWORD*)(v122 + 48))
		{
			v123 = *(_QWORD*)(v122 + 40);
			v124 = 32i64 * (unsigned int)v121;
			v125 = *(_DWORD*)(v123 + v124 + 16);
			if ((unsigned int)(v125 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v123 + v124 + 16) = v125 + 1;
		}
	}
	sub_1401429A0(v122, v121);
	v126 = (unsigned int*)(a1 + 2952);
	v127 = (unsigned int)sub_140142170(qword_140C63678, L"black");
	if ((int*)(a1 + 2952) == v139)
	{
		v128 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v126);
		v128 = qword_140C63678;
		*v126 = v127;
		if (v127 < *(_QWORD*)(v128 + 48))
		{
			v129 = *(_QWORD*)(v128 + 40);
			v130 = 32i64 * (unsigned int)v127;
			v131 = *(_DWORD*)(v130 + v129 + 16);
			if ((unsigned int)(v131 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v130 + v129 + 16) = v131 + 1;
		}
	}
	sub_1401429A0(v128, v127);
	v132 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"Thick");
	v133 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 3072) = v132;
	v134 = sub_1400E58C0(v133, (int*)L"CRB_Pixel_O");
	v135 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 3056) = v134;
	v136 = sub_1400E58C0(v135, (int*)L"CRB_Pixel_O");
	v137 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 3064) = v136;
	*(_QWORD*)(a1 + 3080) = sub_1400E58C0(v137, (int*)L"CRB_HeaderMedium");
	return a1;
}
// 140B397F0: using guessed type wchar_t aUiBk3ItemdragD_0[40];
// 140B39840: using guessed type wchar_t aUiBk3ItemdragO[31];
// 140B39880: using guessed type wchar_t aSprasOffcooldo[23];
// 140B398B0: using guessed type wchar_t aUiBk3ItemdragD[34];
// 140B398F8: using guessed type wchar_t aSprasChannelca[18];
// 140B39920: using guessed type wchar_t aSprasGcdOverla[22];
// 140B39950: using guessed type wchar_t aSprasInterrupt[16];
// 140B39970: using guessed type wchar_t aSprasPromptRes[22];
// 140B399A0: using guessed type wchar_t aSprasReadyflas[17];
// 140B399C8: using guessed type wchar_t aSprasButtonpre[18];
// 140B39A58: using guessed type wchar_t aBlack_0[6];
// 140B39A68: using guessed type wchar_t aThick[6];
// 140B39A78: using guessed type wchar_t aWhitefill_32[10];
// 140B39A90: using guessed type wchar_t aBlue_0[5];
// 140B39AA0: using guessed type wchar_t aBk3UiBk3Mousek_8[41];
// 140B39AF8: using guessed type wchar_t aWhitefill_31[10];
// 140B39B10: using guessed type wchar_t aBk3UiBk3Mousek_6[40];
// 140B39B60: using guessed type wchar_t aBk3UiBk3Mousek_7[40];
// 140B39BB0: using guessed type wchar_t aBk3UiBk3Mousek_4[39];
// 140B39C00: using guessed type wchar_t aBk3UiBk3Mousek_5[39];
// 140B39C50: using guessed type wchar_t aBk3UiBk3Mousek_2[36];
// 140B39CD0: using guessed type wchar_t aBk3UiBk3Mousek_3[37];
// 140B39D20: using guessed type wchar_t aBk3UiBk3Mousek_0[35];
// 140B39DC0: using guessed type wchar_t aBk3UiBk3Mousek_1[36];
// 140B39E40: using guessed type wchar_t aBk3UiBk3Premiu[35];
// 140B39EA0: using guessed type wchar_t aBk3UiBk3Mousek[34];
// 140B39FD0: using guessed type wchar_t aCrbHeadermediu[17];
// 140B3A000: using guessed type wchar_t aCrbPixelO_0[12];
// 140B3A018: using guessed type wchar_t aCrbPixelO_1[12];
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140B70780: using guessed type __int64 (__fastcall *off_140B70780[25])();
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C636A8: using guessed type int dword_140C636A8;


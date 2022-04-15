//----- (0000000140761170) ----------------------------------------------------
__int64 __fastcall sub_140761170(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int* v11; // r9
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	unsigned int* v15; // r9
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	unsigned int* v19; // r9
	__int64 v20; // rax
	int v21; // esi
	int v22; // ecx
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	unsigned int* v32; // r9
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	unsigned int* v37; // r9
	__int64 v38; // rax
	int v39; // ecx
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rax
	unsigned int* v43; // r9
	__int64 v44; // rax
	float v45; // xmm0_4
	__int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	unsigned int* v49; // r9
	__int64 v50; // rax
	float v51; // xmm6_4
	float v52; // xmm0_4
	__int64 v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rax
	unsigned int* v56; // r9
	__int64 v57; // rax
	__int64 v58; // rax
	__int64 v59; // rbx
	__int64 v60; // rax
	unsigned int* v61; // r9
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rax
	__int64* v71; // rax
	__int64 v72; // rax
	__int64* v73; // rax
	__int64 v74; // rbx
	__int64 v75; // rax
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // rax
	__int64* v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64* v83; // rax
	__int64 v84; // rax
	__int64* v85; // rax
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rax
	__int64* v95; // rax
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rax
	__int64* v99; // rax
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	__int64 v104; // rax
	__int64* v105; // rax
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rax
	__int64* v109; // rax
	__int64 v110; // rbx
	__int64 v111; // rax
	__int64 v112; // rax
	__int64* v113; // rax
	__int64 v114; // rax
	__int64* v115; // rax
	__int64 v116; // rax
	__int64* v117; // rax
	__int64 v118; // rax
	__int64* v119; // rax
	__int64 v120; // rbx
	__int64 v121; // rax
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rax
	__int64* v125; // rax
	__int64 v126; // rax
	__int64* v127; // rax
	__int64 v128; // rax
	__int64* v129; // rax
	__int64 v130; // rax
	__int64* v131; // rax
	__int64 v132; // rax
	__int64* v133; // rax
	__int64 v134; // rax
	__int64* v135; // rax
	__int64 v137; // [rsp+20h] [rbp-20h] BYREF
	int v138; // [rsp+28h] [rbp-18h]

	sub_140057020(a1, "MarketplaceLib", &off_140B75F60);
	v2 = sub_140200220(0x439u);
	if (v2)
		v3 = *(_DWORD*)(v2 + 12);
	else
		v3 = 200;
	v4 = a1[2];
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v3;
	a1[2] += 16i64;
	v5 = a1[2];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"kMaxCommodityOrder", 0x12ui64);
	v7 = (unsigned int*)(a1[2] - 16i64);
	v137 = v6;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v5 - 32), (int*)&v137, v7);
	a1[2] -= 16i64;
	v8 = a1[2];
	*(_QWORD*)v8 = 0x4024000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = a1[2];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"kAuctionSearchMaxIds", 0x14ui64);
	v11 = (unsigned int*)(a1[2] - 16i64);
	v137 = v10;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v9 - 32), (int*)&v137, v11);
	a1[2] -= 16i64;
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4018000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = a1[2];
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"kAuctionSearchMaxFilters", 0x18ui64);
	v15 = (unsigned int*)(a1[2] - 16i64);
	v137 = v14;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v13 - 32), (int*)&v137, v15);
	a1[2] -= 16i64;
	v16 = a1[2];
	*(_QWORD*)v16 = 0x403E000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = a1[2];
	v18 = sub_140062650((__int64)a1, (unsigned __int64*)"kAuctionSearchPageSize", 0x16ui64);
	v19 = (unsigned int*)(a1[2] - 16i64);
	v137 = v18;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v17 - 32), (int*)&v137, v19);
	a1[2] -= 16i64;
	v20 = sub_140200220(0x447u);
	v21 = 12;
	if (v20)
		v22 = *(_DWORD*)(v20 + 4);
	else
		v22 = 12;
	v23 = a1[2];
	*(_DWORD*)(v23 + 8) = 3;
	*(double*)v23 = (double)v22;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"kAuctionSearchMaxResults", 0x18ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v137 = v25;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v137, v26);
	a1[2] -= 16i64;
	v27 = sub_140200220(0x433u);
	if (v27)
		v28 = *(_DWORD*)(v27 + 4);
	else
		v28 = 12;
	v29 = a1[2];
	*(_DWORD*)(v29 + 8) = 3;
	*(double*)v29 = (double)v28;
	a1[2] += 16i64;
	v30 = a1[2];
	v31 = sub_140062650((__int64)a1, (unsigned __int64*)"kItemAuctionRake", 0x10ui64);
	v32 = (unsigned int*)(a1[2] - 16i64);
	v137 = v31;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v30 - 32), (int*)&v137, v32);
	a1[2] -= 16i64;
	v33 = sub_140200220(0x433u);
	if (v33)
		v21 = *(_DWORD*)(v33 + 8);
	v34 = a1[2];
	*(_DWORD*)(v34 + 8) = 3;
	*(double*)v34 = (double)v21;
	a1[2] += 16i64;
	v35 = a1[2];
	v36 = sub_140062650((__int64)a1, (unsigned __int64*)"kCommodityAuctionRake", 0x15ui64);
	v37 = (unsigned int*)(a1[2] - 16i64);
	v137 = v36;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v35 - 32), (int*)&v137, v37);
	a1[2] -= 16i64;
	v38 = sub_140200220(0x46Au);
	if (v38)
		v39 = *(_DWORD*)(v38 + 4);
	else
		v39 = 500;
	v40 = a1[2];
	*(_DWORD*)(v40 + 8) = 3;
	*(double*)v40 = (double)v39;
	a1[2] += 16i64;
	v41 = a1[2];
	v42 = sub_140062650((__int64)a1, (unsigned __int64*)"knCommodityBuyOrderTaxMinimum", 0x1Dui64);
	v43 = (unsigned int*)(a1[2] - 16i64);
	v137 = v42;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v41 - 32), (int*)&v137, v43);
	a1[2] -= 16i64;
	v44 = sub_140200220(0x46Au);
	if (v44)
		v45 = *(float*)(v44 + 24);
	else
		v45 = 0.02;
	v46 = a1[2];
	*(_DWORD*)(v46 + 8) = 3;
	*(double*)v46 = v45;
	a1[2] += 16i64;
	v47 = a1[2];
	v48 = sub_140062650((__int64)a1, (unsigned __int64*)"kfCommodityBuyOrderTaxMultiplier", 0x20ui64);
	v49 = (unsigned int*)(a1[2] - 16i64);
	v137 = v48;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v47 - 32), (int*)&v137, v49);
	a1[2] -= 16i64;
	v50 = sub_140200220(0x432u);
	v51 = 7.0;
	if (v50)
		v52 = *(float*)(v50 + 24);
	else
		v52 = 7.0;
	v53 = a1[2];
	*(_DWORD*)(v53 + 8) = 3;
	*(double*)v53 = v52;
	a1[2] += 16i64;
	v54 = a1[2];
	v55 = sub_140062650((__int64)a1, (unsigned __int64*)"kItemAuctionListTimeDays", 0x18ui64);
	v56 = (unsigned int*)(a1[2] - 16i64);
	v137 = v55;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v54 - 32), (int*)&v137, v56);
	a1[2] -= 16i64;
	v57 = sub_140200220(0x432u);
	if (v57)
		v51 = *(float*)(v57 + 28);
	v58 = a1[2];
	*(_DWORD*)(v58 + 8) = 3;
	*(double*)v58 = v51;
	a1[2] += 16i64;
	v59 = a1[2];
	v60 = sub_140062650((__int64)a1, (unsigned __int64*)"kCommodityOrderListTimeDays", 0x1Bui64);
	v61 = (unsigned int*)(a1[2] - 16i64);
	v137 = v60;
	v138 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v59 - 32), (int*)&v137, v61);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AuctionEventType", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v62 = a1[2];
	v63 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v62 + 8) = 5;
	*(_QWORD*)v62 = v63;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Post", 4ui64);
	v64 = a1[2];
	*(_QWORD*)v64 = 0i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F978C, 3ui64);
	v66 = a1[2];
	*(_QWORD*)v66 = 0x3FF0000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Fill", 4ui64);
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4000000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v69, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Expire", 6ui64);
	v70 = a1[2];
	*(_QWORD*)v70 = 0x4008000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cancel", 6ui64);
	v72 = a1[2];
	*(_QWORD*)v72 = 0x4010000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AuctionPostResult", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v74 = a1[2];
	v75 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v74 + 8) = 5;
	*(_QWORD*)v74 = v75;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F97D4, 2ui64);
	v76 = a1[2];
	*(_QWORD*)v76 = 0i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DbFailure", 9ui64);
	v78 = a1[2];
	*(_QWORD*)v78 = 0x4014000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v79, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Item_BadId", 0xAui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4018000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotEnoughToFillQuantity", 0x17ui64);
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4033000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotEnoughCash", 0xDui64);
	v84 = a1[2];
	*(_QWORD*)v84 = 0x4034000000000000i64;
	*(_DWORD*)(v84 + 8) = 3;
	a1[2] += 16i64;
	v85 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v85, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotReady", 8ui64);
	v86 = a1[2];
	*(_QWORD*)v86 = 0x4056400000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v87, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CannotFillOrder", 0xFui64);
	v88 = a1[2];
	*(_QWORD*)v88 = 0x4056800000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v89, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TooManyOrders", 0xDui64);
	v90 = a1[2];
	*(_QWORD*)v90 = 0x4057800000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"OrderTooBig", 0xBui64);
	v92 = a1[2];
	*(_QWORD*)v92 = 0x4057C00000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotFound", 8ui64);
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4058000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v95, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BidTooLow", 9ui64);
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4058400000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"OwnItem", 7ui64);
	v98 = a1[2];
	*(_QWORD*)v98 = 0x4058800000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BidTooHigh", 0xAui64);
	v100 = a1[2];
	*(_QWORD*)v100 = 0x4058C00000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AlreadyHasBid", 0xDui64);
	v102 = a1[2];
	*(_QWORD*)v102 = 0x4059000000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	a1[2] += 16i64;
	v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionDisabled", 0x13ui64);
	v104 = a1[2];
	*(_QWORD*)v104 = 0x405EC00000000000i64;
	*(_DWORD*)(v104 + 8) = 3;
	a1[2] += 16i64;
	v105 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v105, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CommodityDisabled", 0x11ui64);
	v106 = a1[2];
	*(_QWORD*)v106 = 0x405F000000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v107, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TooManyBids", 0xBui64);
	v108 = a1[2];
	*(_QWORD*)v108 = 0x4062400000000000i64;
	*(_DWORD*)(v108 + 8) = 3;
	a1[2] += 16i64;
	v109 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v109, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AuctionSort", 0xBui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v110 = a1[2];
	v111 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v110 + 8) = 5;
	*(_QWORD*)v110 = v111;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MinBid", 6ui64);
	v112 = a1[2];
	*(_QWORD*)v112 = 0i64;
	*(_DWORD*)(v112 + 8) = 3;
	a1[2] += 16i64;
	v113 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v113, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Buyout", 6ui64);
	v114 = a1[2];
	*(_QWORD*)v114 = 0x3FF0000000000000i64;
	*(_DWORD*)(v114 + 8) = 3;
	a1[2] += 16i64;
	v115 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v115, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TimeLeft", 8ui64);
	v116 = a1[2];
	*(_QWORD*)v116 = 0x4000000000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	a1[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Property", 8ui64);
	v118 = a1[2];
	*(_QWORD*)v118 = 0x4008000000000000i64;
	*(_DWORD*)(v118 + 8) = 3;
	a1[2] += 16i64;
	v119 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v119, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterData", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v120 = a1[2];
	v121 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v120 + 8) = 5;
	*(_QWORD*)v120 = v121;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterPropertyMin", 0x1Cui64);
	v122 = a1[2];
	*(_QWORD*)v122 = 0i64;
	*(_DWORD*)(v122 + 8) = 3;
	a1[2] += 16i64;
	v123 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v123, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterPropertyMax", 0x1Cui64);
	v124 = a1[2];
	*(_QWORD*)v124 = 0x3FF0000000000000i64;
	*(_DWORD*)(v124 + 8) = 3;
	a1[2] += 16i64;
	v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterLevel", 0x16ui64);
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4000000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterQuality", 0x18ui64);
	v128 = a1[2];
	*(_QWORD*)v128 = 0x4008000000000000i64;
	*(_DWORD*)(v128 + 8) = 3;
	a1[2] += 16i64;
	v129 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v129, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterRuneSlot", 0x19ui64);
	v130 = a1[2];
	*(_QWORD*)v130 = 0x4010000000000000i64;
	*(_DWORD*)(v130 + 8) = 3;
	a1[2] += 16i64;
	v131 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v131, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterBuyoutMax", 0x1Aui64);
	v132 = a1[2];
	*(_QWORD*)v132 = 0x4014000000000000i64;
	*(_DWORD*)(v132 + 8) = 3;
	a1[2] += 16i64;
	v133 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v133, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemAuctionFilterEquippableBy", 0x1Dui64);
	v134 = a1[2];
	*(_QWORD*)v134 = 0x4018000000000000i64;
	*(_DWORD*)(v134 + 8) = 3;
	a1[2] += 16i64;
	v135 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v135, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1409F978C: using guessed type unsigned __int64 qword_1409F978C[9];
// 1409F97D4: using guessed type unsigned __int64 qword_1409F97D4[7];
// 140B75F60: using guessed type char *off_140B75F60;


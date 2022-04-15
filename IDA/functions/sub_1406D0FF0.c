#include "../winhttp.h"

//----- (00000001406D0FF0) ----------------------------------------------------
void __fastcall sub_1406D0FF0(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v2; // rsi
	void(__fastcall * **v4)(_QWORD); // rbp
	__int64 v5; // r8
	bool v6; // zf
	__int64 v7; // rbp
	void(__fastcall * **v8)(_QWORD); // rbp
	__int64 v9; // r8
	__int64 v10; // rbp
	void(__fastcall * **v11)(_QWORD); // rbp
	__int64 v12; // r8
	__int64 v13; // rbp
	void(__fastcall * **v14)(_QWORD); // rbp
	__int64 v15; // r8
	__int64 v16; // rbp
	void(__fastcall * **v17)(_QWORD); // rbp
	__int64 v18; // r8
	__int64 v19; // rbp
	void(__fastcall * **v20)(_QWORD); // rbp
	__int64 v21; // r8
	__int64 v22; // rbp
	void(__fastcall * **v23)(_QWORD); // rbp
	__int64 v24; // r8
	__int64 v25; // rbp
	void(__fastcall * **v26)(_QWORD); // rbp
	__int64 v27; // r8
	unsigned int v28; // eax
	__int64 v29; // rcx
	unsigned int* v30; // r14
	unsigned __int64 v31; // rbx
	__int64 v32; // r8
	__int64 v33; // rdx
	int v34; // r9d
	__int64 v35; // rbp
	void(__fastcall * **v36)(_QWORD); // rbp
	__int64 v37; // r8
	__int64 v38; // rbp
	void(__fastcall * **v39)(_QWORD); // rbp
	__int64 v40; // r8
	__int64 v41; // rbp
	void(__fastcall * **v42)(_QWORD); // rbp
	__int64 v43; // r8
	__int64 v44; // rbp
	void(__fastcall * **v45)(_QWORD); // rbp
	__int64 v46; // r8
	__int64 v47; // rbp
	void(__fastcall * **v48)(_QWORD); // rbp
	__int64 v49; // r8
	__int64 v50; // rbp
	void(__fastcall * **v51)(_QWORD); // rbp
	__int64 v52; // r8
	__int64 v53; // rbp
	void(__fastcall * **v54)(_QWORD); // rbp
	__int64 v55; // r8
	__int64 v56; // rbp
	void(__fastcall * **v57)(_QWORD); // rbp
	__int64 v58; // r8
	__int64 v59; // rbp
	void(__fastcall * **v60)(_QWORD); // rbp
	__int64 v61; // r8
	__int64 v62; // rbp
	void(__fastcall * **v63)(_QWORD); // rbp
	__int64 v64; // r8
	__int64 v65; // rbp
	void(__fastcall * **v66)(_QWORD); // rbp
	__int64 v67; // r8
	__int64 v68; // rbp
	void(__fastcall * **v69)(_QWORD); // rbp
	__int64 v70; // r8
	__int64 v71; // rbp
	void(__fastcall * **v72)(_QWORD); // rbp
	__int64 v73; // r8
	__int64 v74; // rbp
	void(__fastcall * **v75)(_QWORD); // rbp
	__int64 v76; // r8
	__int64 v77; // rbp
	void(__fastcall * **v78)(_QWORD); // rbp
	__int64 v79; // r8
	__int64 v80; // rbx
	void(__fastcall * **v81)(_QWORD); // rbx
	char v82; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 32);
	v2 = 0i64;
	if (v1 && (!*(_QWORD*)(a1 + 2120) || !sub_14002C740(a1 + 2136, L"UI_BK3_ItemIconBackplate")))
	{
		v4 = (void(__fastcall***)(_QWORD))sub_140108E80(v1 + 240, (const __m128i*)L"UI_BK3_ItemIconBackplate");
		if (v4)
		{
			v5 = 0i64;
			do
				v6 = aUiBk3Itemiconb[++v5] == 0;
			while (!v6);
			sub_14001C480(a1 + 2136, (int*)L"UI_BK3_ItemIconBackplate", (int*)&aUiBk3Itemiconb[v5]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2120), v4);
	}
	v7 = *(_QWORD*)(a1 + 32);
	if (v7 && (!*(_QWORD*)(a1 + 2168) || !sub_14002C740(a1 + 2184, L"UI_BK3_Holo_InsetSimple")))
	{
		v8 = (void(__fastcall***)(_QWORD))sub_140108E80(v7 + 240, (const __m128i*)L"UI_BK3_Holo_InsetSimple");
		if (v8)
		{
			v9 = 0i64;
			do
				v6 = aUiBk3HoloInset[++v9] == 0;
			while (!v6);
			sub_14001C480(a1 + 2184, (int*)L"UI_BK3_Holo_InsetSimple", (int*)&aUiBk3HoloInset[v9]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2168), v8);
	}
	v10 = *(_QWORD*)(a1 + 32);
	if (v10 && (!*(_QWORD*)(a1 + 2216) || !sub_14002C740(a1 + 2232, L"QuestNew")))
	{
		v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v10 + 240, (const __m128i*)L"QuestNew");
		if (v11)
		{
			v12 = 0i64;
			do
				v6 = aQuestnew[++v12] == 0;
			while (!v6);
			sub_14001C480(a1 + 2232, (int*)L"QuestNew", (int*)&aQuestnew[v12]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2216), v11);
	}
	v13 = *(_QWORD*)(a1 + 32);
	if (v13 && (!*(_QWORD*)(a1 + 2264) || !sub_14002C740(a1 + 2280, L"sprItem_New")))
	{
		v14 = (void(__fastcall***)(_QWORD))sub_140108E80(v13 + 240, (const __m128i*)L"sprItem_New");
		if (v14)
		{
			v15 = 0i64;
			do
				v6 = aSpritemNew[++v15] == 0;
			while (!v6);
			sub_14001C480(a1 + 2280, (int*)L"sprItem_New", (int*)&aSpritemNew[v15]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2264), v14);
	}
	v16 = *(_QWORD*)(a1 + 32);
	if (v16 && (!*(_QWORD*)(a1 + 2312) || !sub_14002C740(a1 + 2328, L"WhiteCircle")))
	{
		v17 = (void(__fastcall***)(_QWORD))sub_140108E80(v16 + 240, (const __m128i*)L"WhiteCircle");
		if (v17)
		{
			v18 = 0i64;
			do
				v6 = aWhitecircle_1[++v18] == 0;
			while (!v6);
			sub_14001C480(a1 + 2328, (int*)L"WhiteCircle", (int*)&aWhitecircle_1[v18]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2312), v17);
	}
	v19 = *(_QWORD*)(a1 + 32);
	if (v19 && (!*(_QWORD*)(a1 + 2360) || !sub_14002C740(a1 + 2376, L"UI_BK3_ItemDrag_DestinationNoGlow")))
	{
		v20 = (void(__fastcall***)(_QWORD))sub_140108E80(v19 + 240, (const __m128i*)L"UI_BK3_ItemDrag_DestinationNoGlow");
		if (v20)
		{
			v21 = 0i64;
			do
				v6 = aUiBk3ItemdragD_1[++v21] == 0;
			while (!v6);
			sub_14001C480(a1 + 2376, (int*)L"UI_BK3_ItemDrag_DestinationNoGlow", (int*)&aUiBk3ItemdragD_1[v21]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2360), v20);
	}
	v22 = *(_QWORD*)(a1 + 32);
	if (v22 && (!*(_QWORD*)(a1 + 2408) || !sub_14002C740(a1 + 2424, L"UI_BK3_ItemDrag_DestinationDeniedNoGlow")))
	{
		v23 = (void(__fastcall***)(_QWORD))sub_140108E80(
			v22 + 240,
			(const __m128i*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
		if (v23)
		{
			v24 = 0i64;
			do
				v6 = aUiBk3ItemdragD_2[++v24] == 0;
			while (!v6);
			sub_14001C480(a1 + 2424, (int*)L"UI_BK3_ItemDrag_DestinationDeniedNoGlow", (int*)&aUiBk3ItemdragD_2[v24]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2408), v23);
	}
	v25 = *(_QWORD*)(a1 + 32);
	if (v25 && (!*(_QWORD*)(a1 + 2456) || !sub_14002C740(a1 + 2472, L"UI_BK3_ItemDrag_OriginalNoGlow")))
	{
		v26 = (void(__fastcall***)(_QWORD))sub_140108E80(v25 + 240, (const __m128i*)L"UI_BK3_ItemDrag_OriginalNoGlow");
		if (v26)
		{
			v27 = 0i64;
			do
				v6 = aUiBk3ItemdragO_0[++v27] == 0;
			while (!v6);
			sub_14001C480(a1 + 2472, (int*)L"UI_BK3_ItemDrag_OriginalNoGlow", (int*)&aUiBk3ItemdragO_0[v27]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2456), v26);
	}
	v28 = sub_140142170(qword_140C63678, L"0x40ff4040");
	v29 = qword_140C63678;
	v30 = (unsigned int*)(a1 + 2504);
	v31 = v28;
	if ((char*)(a1 + 2504) != &v82)
	{
		sub_1401429A0(qword_140C63678, *v30);
		v29 = qword_140C63678;
		*v30 = v31;
		if (v31 < *(_QWORD*)(v29 + 48))
		{
			v32 = *(_QWORD*)(v29 + 40);
			v33 = 32i64 * (unsigned int)v31;
			v34 = *(_DWORD*)(v33 + v32 + 16);
			if ((unsigned int)(v34 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v33 + v32 + 16) = v34 + 1;
		}
	}
	sub_1401429A0(v29, v31);
	v35 = *(_QWORD*)(a1 + 32);
	if (v35 && (!*(_QWORD*)(a1 + 2944) || !sub_14002C740(a1 + 2960, L"UI_BK3_ItemDrag_Quality_Grey")))
	{
		v36 = (void(__fastcall***)(_QWORD))sub_140108E80(v35 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Grey");
		if (v36)
		{
			v37 = 0i64;
			do
				v6 = aUiBk3ItemdragQ[++v37] == 0;
			while (!v6);
			sub_14001C480(a1 + 2960, (int*)L"UI_BK3_ItemDrag_Quality_Grey", (int*)&aUiBk3ItemdragQ[v37]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2944), v36);
	}
	v38 = *(_QWORD*)(a1 + 32);
	if (v38 && (!*(_QWORD*)(a1 + 2992) || !sub_14002C740(a1 + 3008, L"UI_BK3_ItemDrag_Quality_Grey")))
	{
		v39 = (void(__fastcall***)(_QWORD))sub_140108E80(v38 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Grey");
		if (v39)
		{
			v40 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_0[++v40] == 0;
			while (!v6);
			sub_14001C480(a1 + 3008, (int*)L"UI_BK3_ItemDrag_Quality_Grey", (int*)&aUiBk3ItemdragQ_0[v40]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2992), v39);
	}
	v41 = *(_QWORD*)(a1 + 32);
	if (v41 && (!*(_QWORD*)(a1 + 3040) || !sub_14002C740(a1 + 3056, L"UI_BK3_ItemDrag_Quality_White")))
	{
		v42 = (void(__fastcall***)(_QWORD))sub_140108E80(v41 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_White");
		if (v42)
		{
			v43 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_1[++v43] == 0;
			while (!v6);
			sub_14001C480(a1 + 3056, (int*)L"UI_BK3_ItemDrag_Quality_White", (int*)&aUiBk3ItemdragQ_1[v43]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3040), v42);
	}
	v44 = *(_QWORD*)(a1 + 32);
	if (v44 && (!*(_QWORD*)(a1 + 3088) || !sub_14002C740(a1 + 3104, L"UI_BK3_ItemDrag_Quality_Green")))
	{
		v45 = (void(__fastcall***)(_QWORD))sub_140108E80(v44 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Green");
		if (v45)
		{
			v46 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_2[++v46] == 0;
			while (!v6);
			sub_14001C480(a1 + 3104, (int*)L"UI_BK3_ItemDrag_Quality_Green", (int*)&aUiBk3ItemdragQ_2[v46]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3088), v45);
	}
	v47 = *(_QWORD*)(a1 + 32);
	if (v47 && (!*(_QWORD*)(a1 + 3136) || !sub_14002C740(a1 + 3152, L"UI_BK3_ItemDrag_Quality_Blue")))
	{
		v48 = (void(__fastcall***)(_QWORD))sub_140108E80(v47 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Blue");
		if (v48)
		{
			v49 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_3[++v49] == 0;
			while (!v6);
			sub_14001C480(a1 + 3152, (int*)L"UI_BK3_ItemDrag_Quality_Blue", (int*)&aUiBk3ItemdragQ_3[v49]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3136), v48);
	}
	v50 = *(_QWORD*)(a1 + 32);
	if (v50 && (!*(_QWORD*)(a1 + 3184) || !sub_14002C740(a1 + 3200, L"UI_BK3_ItemDrag_Quality_Purple")))
	{
		v51 = (void(__fastcall***)(_QWORD))sub_140108E80(v50 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Purple");
		if (v51)
		{
			v52 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_4[++v52] == 0;
			while (!v6);
			sub_14001C480(a1 + 3200, (int*)L"UI_BK3_ItemDrag_Quality_Purple", (int*)&aUiBk3ItemdragQ_4[v52]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3184), v51);
	}
	v53 = *(_QWORD*)(a1 + 32);
	if (v53 && (!*(_QWORD*)(a1 + 3232) || !sub_14002C740(a1 + 3248, L"UI_BK3_ItemDrag_Quality_Orange")))
	{
		v54 = (void(__fastcall***)(_QWORD))sub_140108E80(v53 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Orange");
		if (v54)
		{
			v55 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_5[++v55] == 0;
			while (!v6);
			sub_14001C480(a1 + 3248, (int*)L"UI_BK3_ItemDrag_Quality_Orange", (int*)&aUiBk3ItemdragQ_5[v55]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3232), v54);
	}
	v56 = *(_QWORD*)(a1 + 32);
	if (v56 && (!*(_QWORD*)(a1 + 3280) || !sub_14002C740(a1 + 3296, L"UI_BK3_ItemDrag_Quality_Pink")))
	{
		v57 = (void(__fastcall***)(_QWORD))sub_140108E80(v56 + 240, (const __m128i*)L"UI_BK3_ItemDrag_Quality_Pink");
		if (v57)
		{
			v58 = 0i64;
			do
				v6 = aUiBk3ItemdragQ_6[++v58] == 0;
			while (!v6);
			sub_14001C480(a1 + 3296, (int*)L"UI_BK3_ItemDrag_Quality_Pink", (int*)&aUiBk3ItemdragQ_6[v58]);
		}
		sub_1401097F0((_QWORD*)(a1 + 3280), v57);
	}
	v59 = *(_QWORD*)(a1 + 32);
	if (v59 && (!*(_QWORD*)(a1 + 2560) || !sub_14002C740(a1 + 2576, L"UI_RarityBorder_Grey")))
	{
		v60 = (void(__fastcall***)(_QWORD))sub_140108E80(v59 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v60)
		{
			v61 = 0i64;
			do
				v6 = aUiRarityborder_7[++v61] == 0;
			while (!v6);
			sub_14001C480(a1 + 2576, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder_7[v61]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2560), v60);
	}
	v62 = *(_QWORD*)(a1 + 32);
	if (v62 && (!*(_QWORD*)(a1 + 2608) || !sub_14002C740(a1 + 2624, L"UI_RarityBorder_Grey")))
	{
		v63 = (void(__fastcall***)(_QWORD))sub_140108E80(v62 + 240, (const __m128i*)L"UI_RarityBorder_Grey");
		if (v63)
		{
			v64 = 0i64;
			do
				v6 = aUiRarityborder_8[++v64] == 0;
			while (!v6);
			sub_14001C480(a1 + 2624, (int*)L"UI_RarityBorder_Grey", (int*)&aUiRarityborder_8[v64]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2608), v63);
	}
	v65 = *(_QWORD*)(a1 + 32);
	if (v65 && (!*(_QWORD*)(a1 + 2656) || !sub_14002C740(a1 + 2672, L"UI_RarityBorder_White")))
	{
		v66 = (void(__fastcall***)(_QWORD))sub_140108E80(v65 + 240, (const __m128i*)L"UI_RarityBorder_White");
		if (v66)
		{
			v67 = 0i64;
			do
				v6 = aUiRarityborder_9[++v67] == 0;
			while (!v6);
			sub_14001C480(a1 + 2672, (int*)L"UI_RarityBorder_White", (int*)&aUiRarityborder_9[v67]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2656), v66);
	}
	v68 = *(_QWORD*)(a1 + 32);
	if (v68 && (!*(_QWORD*)(a1 + 2704) || !sub_14002C740(a1 + 2720, L"UI_RarityBorder_Green")))
	{
		v69 = (void(__fastcall***)(_QWORD))sub_140108E80(v68 + 240, (const __m128i*)L"UI_RarityBorder_Green");
		if (v69)
		{
			v70 = 0i64;
			do
				v6 = aUiRarityborder_10[++v70] == 0;
			while (!v6);
			sub_14001C480(a1 + 2720, (int*)L"UI_RarityBorder_Green", (int*)&aUiRarityborder_10[v70]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2704), v69);
	}
	v71 = *(_QWORD*)(a1 + 32);
	if (v71 && (!*(_QWORD*)(a1 + 2752) || !sub_14002C740(a1 + 2768, L"UI_RarityBorder_Blue")))
	{
		v72 = (void(__fastcall***)(_QWORD))sub_140108E80(v71 + 240, (const __m128i*)L"UI_RarityBorder_Blue");
		if (v72)
		{
			v73 = 0i64;
			do
				v6 = aUiRarityborder_11[++v73] == 0;
			while (!v6);
			sub_14001C480(a1 + 2768, (int*)L"UI_RarityBorder_Blue", (int*)&aUiRarityborder_11[v73]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2752), v72);
	}
	v74 = *(_QWORD*)(a1 + 32);
	if (v74 && (!*(_QWORD*)(a1 + 2800) || !sub_14002C740(a1 + 2816, L"UI_RarityBorder_Purple")))
	{
		v75 = (void(__fastcall***)(_QWORD))sub_140108E80(v74 + 240, (const __m128i*)L"UI_RarityBorder_Purple");
		if (v75)
		{
			v76 = 0i64;
			do
				v6 = aUiRarityborder_12[++v76] == 0;
			while (!v6);
			sub_14001C480(a1 + 2816, (int*)L"UI_RarityBorder_Purple", (int*)&aUiRarityborder_12[v76]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2800), v75);
	}
	v77 = *(_QWORD*)(a1 + 32);
	if (v77 && (!*(_QWORD*)(a1 + 2848) || !sub_14002C740(a1 + 2864, L"UI_RarityBorder_Orange")))
	{
		v78 = (void(__fastcall***)(_QWORD))sub_140108E80(v77 + 240, (const __m128i*)L"UI_RarityBorder_Orange");
		if (v78)
		{
			v79 = 0i64;
			do
				v6 = aUiRarityborder_13[++v79] == 0;
			while (!v6);
			sub_14001C480(a1 + 2864, (int*)L"UI_RarityBorder_Orange", (int*)&aUiRarityborder_13[v79]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2848), v78);
	}
	v80 = *(_QWORD*)(a1 + 32);
	if (v80 && (!*(_QWORD*)(a1 + 2896) || !sub_14002C740(a1 + 2912, L"UI_RarityBorder_Pink")))
	{
		v81 = (void(__fastcall***)(_QWORD))sub_140108E80(v80 + 240, (const __m128i*)L"UI_RarityBorder_Pink");
		if (v81)
		{
			do
				v6 = aUiRarityborder_14[++v2] == 0;
			while (!v6);
			sub_14001C480(a1 + 2912, (int*)L"UI_RarityBorder_Pink", (int*)&aUiRarityborder_14[v2]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2896), v81);
	}
}
// 140B3B300: using guessed type wchar_t aUiBk3ItemdragD_1[34];
// 140B3B348: using guessed type wchar_t aWhitecircle_1[12];
// 140B3B360: using guessed type wchar_t aSpritemNew[12];
// 140B3B378: using guessed type wchar_t aQuestnew[9];
// 140B3B390: using guessed type wchar_t aUiBk3HoloInset[24];
// 140B3B3C0: using guessed type wchar_t aUiBk3Itemiconb[25];
// 140B3B480: using guessed type wchar_t aUiRarityborder_11[21];
// 140B3B4B0: using guessed type wchar_t aUiRarityborder_10[22];
// 140B3B4E0: using guessed type wchar_t aUiRarityborder_9[22];
// 140B3B510: using guessed type wchar_t aUiRarityborder_8[21];
// 140B3B540: using guessed type wchar_t aUiRarityborder_7[21];
// 140B3B570: using guessed type wchar_t aUiBk3ItemdragQ_6[29];
// 140B3B5B0: using guessed type wchar_t aUiBk3ItemdragQ_5[31];
// 140B3B5F0: using guessed type wchar_t aUiBk3ItemdragQ_4[31];
// 140B3B630: using guessed type wchar_t aUiBk3ItemdragQ_3[29];
// 140B3B670: using guessed type wchar_t aUiBk3ItemdragQ_2[30];
// 140B3B6B0: using guessed type wchar_t aUiBk3ItemdragQ_1[30];
// 140B3B6F0: using guessed type wchar_t aUiBk3ItemdragQ_0[29];
// 140B3B730: using guessed type wchar_t aUiBk3ItemdragQ[29];
// 140B3B770: using guessed type wchar_t a0x40ff4040[11];
// 140B3B788: using guessed type wchar_t aUiBk3ItemdragO_0[31];
// 140B3B7F0: using guessed type wchar_t aUiBk3ItemdragD_2[40];
// 140B3B920: using guessed type wchar_t aUiRarityborder_14[21];
// 140B3B950: using guessed type wchar_t aUiRarityborder_13[23];
// 140B3B980: using guessed type wchar_t aUiRarityborder_12[23];
// 140C63678: using guessed type __int64 qword_140C63678;


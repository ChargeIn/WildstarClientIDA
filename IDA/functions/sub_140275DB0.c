//----- (0000000140275DB0) ----------------------------------------------------
int __fastcall sub_140275DB0(__int64 a1)
{
	bool v1; // zf
	int v3; // r12d
	__int64 v4; // rcx
	unsigned __int64 v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int64 i; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	HMODULE v16; // rcx
	HMODULE v17; // rcx
	HMODULE v18; // rcx
	__int64* v19; // rdi
	__int64 v20; // rbp
	__int64 v21; // rcx
	unsigned __int64 j; // rdi
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
	__int64 v33; // rdi
	__int64 v34; // rcx
	int v35; // r14d
	int k; // ebp
	__int64 v37; // rcx
	int v38; // r15d
	__int64 v39; // rdi
	int m; // ebp
	__int64 v41; // rcx
	__int64 v42; // rdi
	__int64 v43; // rcx
	__int64 v44; // rcx
	__int64 v45; // rdi
	int n; // ebp
	__int64 v47; // rcx
	__int64 v48; // rdi
	__int64 v49; // rcx
	__int64 v50; // rcx
	__int64 v51; // rdi
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rcx
	__int64 v57; // rcx
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

	v1 = *(_QWORD*)(a1 + 6776) == 0i64;
	*(_QWORD*)a1 = off_140B61270;
	v3 = 1;
	if (!v1)
	{
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6816) + 16i64))(*(_QWORD*)(a1 + 6816), 1i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6776) + 48i64))(*(_QWORD*)(a1 + 6776), 0xFFFFFFFFi64);
	}
	sub_1402773E0(a1, 0);
	sub_140281C30(a1);
	v4 = *(_QWORD*)(a1 + 6352);
	v5 = 0i64;
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		*(_QWORD*)(a1 + 6352) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 6360);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		*(_QWORD*)(a1 + 6360) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 6336);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
		*(_QWORD*)(a1 + 6336) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 6344);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		*(_QWORD*)(a1 + 6344) = 0i64;
	}
	v9 = *(_QWORD*)(a1 + 6304);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		*(_QWORD*)(a1 + 6304) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 6312);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		*(_QWORD*)(a1 + 6312) = 0i64;
	}
	for (i = 0i64; i < *(_QWORD*)(a1 + 6296); ++i)
	{
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 6288) + 8 * i);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	*(_QWORD*)(a1 + 6296) = 0i64;
	v13 = *(_QWORD*)(a1 + 6264);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
		*(_QWORD*)(a1 + 6264) = 0i64;
	}
	v14 = *(_QWORD*)(a1 + 6272);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
		*(_QWORD*)(a1 + 6272) = 0i64;
	}
	v15 = *(_QWORD*)(a1 + 6280);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
		*(_QWORD*)(a1 + 6280) = 0i64;
	}
	v16 = *(HMODULE*)(a1 + 8656);
	if (v16)
		FreeLibrary(v16);
	v17 = *(HMODULE*)(a1 + 8648);
	if (v17)
		FreeLibrary(v17);
	v18 = *(HMODULE*)(a1 + 8640);
	if (v18)
		FreeLibrary(v18);
	DestroyIcon(*(HICON*)(a1 + 8552));
	v19 = (__int64*)(a1 + 6584);
	v20 = 23i64;
	do
	{
		sub_14018B900(*v19++, 0);
		--v20;
	} while (v20);
	if (*(_DWORD*)(a1 + 6244))
		CoUninitialize();
	if (*(_QWORD*)(a1 + 8600))
		sub_1401A4A00((const void***)(a1 + 8600));
	if (*(_QWORD*)(a1 + 8592))
		sub_1401A4A00((const void***)(a1 + 8592));
	v21 = *(_QWORD*)(a1 + 8584);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	for (j = 0i64; j < *(_QWORD*)(a1 + 8576); ++j)
	{
		v23 = *(_QWORD*)(*(_QWORD*)(a1 + 8568) + 8 * j);
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
	}
	v24 = *(_QWORD*)(a1 + 8568);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	v25 = *(_QWORD*)(a1 + 8496);
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
	v26 = *(_QWORD*)(a1 + 8480);
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
	v27 = *(_QWORD*)(a1 + 8232);
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = *(_QWORD*)(a1 + 8216);
	if (v28)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
	v29 = *(_QWORD*)(a1 + 8200);
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	v30 = *(_QWORD*)(a1 + 8176);
	if (v30)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
	v31 = *(_QWORD*)(a1 + 8144);
	if (v31)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
	v32 = *(_QWORD*)(a1 + 8112);
	if (v32)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
	v33 = a1 + 8088;
	v34 = *(_QWORD*)(a1 + 8088);
	if (v34)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
	v35 = 15;
	for (k = 15; k >= 0; --k)
	{
		v37 = *(_QWORD*)(v33 - 8);
		v33 -= 8i64;
		if (v37)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
	}
	v38 = 3;
	v39 = a1 + 7960;
	for (m = 3; m >= 0; --m)
	{
		v41 = *(_QWORD*)(v39 - 8);
		v39 -= 8i64;
		if (v41)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
	}
	v42 = a1 + 7888;
	v43 = *(_QWORD*)(a1 + 7888);
	if (v43)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 8i64))(v43);
	do
	{
		v44 = *(_QWORD*)(v42 - 8);
		v42 -= 8i64;
		if (v44)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
		--v35;
	} while (v35 >= 0);
	v45 = a1 + 7760;
	for (n = 3; n >= 0; --n)
	{
		v47 = *(_QWORD*)(v45 - 8);
		v45 -= 8i64;
		if (v47)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
	}
	v48 = a1 + 7720;
	v49 = *(_QWORD*)(a1 + 7720);
	if (v49)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v49 + 16i64))(v49);
	do
	{
		v50 = *(_QWORD*)(v48 - 8);
		v48 -= 8i64;
		if (v50)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v50 + 16i64))(v50);
		--v3;
	} while (v3 >= 0);
	sub_140282C10((_QWORD*)(a1 + 7664));
	sub_14018B900(*(_QWORD*)(a1 + 7680), 0);
	*(_QWORD*)(a1 + 7680) = 0i64;
	v51 = a1 + 7400;
	do
	{
		v52 = *(_QWORD*)(v51 - 8);
		v51 -= 8i64;
		if (v52)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v52 + 16i64))(v52);
		--v38;
	} while (v38 >= 0);
	sub_140282E50((_QWORD*)(a1 + 7328));
	sub_14018B900(*(_QWORD*)(a1 + 7344), 0);
	*(_QWORD*)(a1 + 7344) = 0i64;
	v53 = *(_QWORD*)(a1 + 7264);
	if (v53)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 16i64))(v53);
	sub_140283040((_QWORD*)(a1 + 7224));
	sub_14018B900(*(_QWORD*)(a1 + 7240), 0);
	*(_QWORD*)(a1 + 7240) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7136));
	sub_14018B900(*(_QWORD*)(a1 + 7152), 0);
	*(_QWORD*)(a1 + 7152) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7096));
	sub_14018B900(*(_QWORD*)(a1 + 7112), 0);
	*(_QWORD*)(a1 + 7112) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7056));
	sub_14018B900(*(_QWORD*)(a1 + 7072), 0);
	*(_QWORD*)(a1 + 7072) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7016));
	sub_14018B900(*(_QWORD*)(a1 + 7032), 0);
	*(_QWORD*)(a1 + 7032) = 0i64;
	sub_140019490((_QWORD*)(a1 + 6976));
	sub_14018B900(*(_QWORD*)(a1 + 6992), 0);
	*(_QWORD*)(a1 + 6992) = 0i64;
	sub_140019490((_QWORD*)(a1 + 6936));
	sub_14018B900(*(_QWORD*)(a1 + 6952), 0);
	*(_QWORD*)(a1 + 6952) = 0i64;
	if (*(_QWORD*)(a1 + 6928))
		sub_1401A4A00((const void***)(a1 + 6928));
	if (*(_QWORD*)(a1 + 6920))
		sub_1401A4A00((const void***)(a1 + 6920));
	if (*(_QWORD*)(a1 + 6912))
		sub_1401A4A00((const void***)(a1 + 6912));
	if (*(_QWORD*)(a1 + 6904))
		sub_1401A4A00((const void***)(a1 + 6904));
	if (*(_QWORD*)(a1 + 6896))
		sub_1401A4A00((const void***)(a1 + 6896));
	if (*(_QWORD*)(a1 + 6888))
		sub_1401A4A00((const void***)(a1 + 6888));
	if (*(_QWORD*)(a1 + 6880))
		sub_1401A4A00((const void***)(a1 + 6880));
	if (*(_QWORD*)(a1 + 6872))
		sub_1401A4A00((const void***)(a1 + 6872));
	if (*(_QWORD*)(a1 + 6864))
		sub_1401A4A00((const void***)(a1 + 6864));
	if (*(_QWORD*)(a1 + 6856))
		sub_1401A4A00((const void***)(a1 + 6856));
	if (*(_QWORD*)(a1 + 6848))
		sub_1401A4A00((const void***)(a1 + 6848));
	if (*(_QWORD*)(a1 + 6840))
		sub_1401A4A00((const void***)(a1 + 6840));
	if (*(_QWORD*)(a1 + 6832))
		sub_1401A4A00((const void***)(a1 + 6832));
	if (*(_QWORD*)(a1 + 6824))
		sub_1401A4A00((const void***)(a1 + 6824));
	v54 = *(_QWORD*)(a1 + 6816);
	if (v54)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v54 + 8i64))(v54);
	if (*(_QWORD*)(a1 + 6808))
		CloseHandle(*(HANDLE*)(a1 + 6808));
	v55 = *(_QWORD*)(a1 + 6776);
	if (v55)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v55 + 8i64))(v55);
	if (*(_QWORD*)(a1 + 6392))
		CloseHandle(*(HANDLE*)(a1 + 6392));
	v56 = *(_QWORD*)(a1 + 6360);
	if (v56)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v56 + 16i64))(v56);
	v57 = *(_QWORD*)(a1 + 6352);
	if (v57)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v57 + 16i64))(v57);
	v58 = *(_QWORD*)(a1 + 6344);
	if (v58)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v58 + 16i64))(v58);
	v59 = *(_QWORD*)(a1 + 6336);
	if (v59)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v59 + 16i64))(v59);
	v60 = *(_QWORD*)(a1 + 6328);
	if (v60)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v60 + 16i64))(v60);
	v61 = *(_QWORD*)(a1 + 6320);
	if (v61)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v61 + 16i64))(v61);
	v62 = *(_QWORD*)(a1 + 6312);
	if (v62)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 16i64))(v62);
	v63 = *(_QWORD*)(a1 + 6304);
	if (v63)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 16i64))(v63);
	if (*(_QWORD*)(a1 + 6296))
	{
		do
		{
			v64 = *(_QWORD*)(*(_QWORD*)(a1 + 6288) + 8 * v5);
			if (v64)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v64 + 16i64))(v64);
			++v5;
		} while (v5 < *(_QWORD*)(a1 + 6296));
	}
	v65 = *(_QWORD*)(a1 + 6288);
	if (v65)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v65 - 16) + 8i64))(v65 - 16);
	v66 = *(_QWORD*)(a1 + 6280);
	if (v66)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v66 + 16i64))(v66);
	v67 = *(_QWORD*)(a1 + 6272);
	if (v67)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v67 + 16i64))(v67);
	v68 = *(_QWORD*)(a1 + 6264);
	if (v68)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v68 + 16i64))(v68);
	sub_1401981B0((__int64**)(a1 + 6256));
	if (*(_QWORD*)(a1 + 6256))
		sub_1401A4A00((const void***)(a1 + 6256));
	return sub_1402632F0(a1);
}
// 140B61270: using guessed type __int64 (__fastcall *off_140B61270[8])();


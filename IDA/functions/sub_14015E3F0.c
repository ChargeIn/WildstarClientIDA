//----- (000000014015E3F0) ----------------------------------------------------
__int64 __fastcall sub_14015E3F0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, __int64 a5, _QWORD* a6)
{
	int* v9; // rax
	int v10; // r9d
	int v11; // ecx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__m128 v16; // xmm1
	int v17; // ecx
	__int64 v18; // rdx
	__m128i* v19; // r8
	__int64 v20; // rdx
	unsigned int v21; // edx
	int v22; // eax
	__int64 v23; // rcx
	unsigned int v24; // edx
	int v25; // eax
	__int64 v26; // rcx
	unsigned int v27; // edx
	int v28; // eax
	__int64 v29; // rcx
	unsigned int v30; // edx
	int v31; // eax
	__int64 v32; // rcx
	unsigned int v33; // edx
	int v34; // eax
	__int64 v35; // rcx
	unsigned int v36; // edx
	int v37; // eax
	__int64 v38; // rcx
	unsigned int v39; // edx
	int v40; // eax
	__int64 v41; // rcx
	unsigned int v42; // edx
	int v43; // eax
	__int64 v44; // rcx
	unsigned int v45; // edx
	unsigned int v46; // edx
	int v47; // r14d
	__int64 v48; // rbx
	__int64 v49; // rsi
	__int64 v50; // rax
	__m128i* v51; // r8
	__m128i* v52; // rax
	__int64 v53; // rax
	__int64 v54; // rax
	void(__fastcall * **v55)(_QWORD); // rcx
	__m128 v57; // [rsp+40h] [rbp-C0h] BYREF
	int v58[4]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v59; // [rsp+60h] [rbp-A0h] BYREF
	char v60; // [rsp+68h] [rbp-98h]
	__int128 v61; // [rsp+70h] [rbp-90h]
	__int128 v62; // [rsp+80h] [rbp-80h]
	__int128 v63; // [rsp+90h] [rbp-70h]
	__int64 v64; // [rsp+A0h] [rbp-60h]
	char v65[8]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v66; // [rsp+B8h] [rbp-48h]
	__int64 v67; // [rsp+D8h] [rbp-28h]
	unsigned int v68; // [rsp+104h] [rbp+4h]

	sub_1400C5920(a1, a2, 0i64, a6, &xmmword_140C67280, 0i64, 0i64);
	*(_DWORD*)(a1 + 1056) = 0;
	*(_DWORD*)(a1 + 1084) = 2;
	*(_DWORD*)(a1 + 1088) = 2;
	*(_DWORD*)(a1 + 1092) = 2;
	*(_DWORD*)(a1 + 1096) = 2;
	*(_BYTE*)(a1 + 1100) = 1;
	*(_QWORD*)(a1 + 1112) = a3;
	*(_QWORD*)a1 = off_140B5CAF0;
	*(_QWORD*)(a1 + 1104) = a5;
	*(_QWORD*)(a1 + 1128) = 0i64;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1144) = 0i64;
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	v9 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1176) = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 16i64) = *(_QWORD*)(a1 + 1176);
	*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 24i64) = *(_QWORD*)(a1 + 1176);
	*(_QWORD*)(a1 + 1200) = 0i64;
	sub_1400C35F0(a1 + 1208);
	sub_1400C35F0(a1 + 1624);
	sub_1401095E0(a1 + 2040);
	sub_1401095E0(a1 + 2088);
	sub_1401095E0(a1 + 2136);
	*(_QWORD*)(a1 + 2184) = 0i64;
	*(_QWORD*)(a1 + 2192) = 0i64;
	*(_QWORD*)(a1 + 2200) = 0i64;
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 0i64;
	*(_DWORD*)(a1 + 2224) = 0;
	*(_QWORD*)(a1 + 432) |= 0x40ui64;
	sub_1400D2C30(a1, (int*)L"PopupMenuGridWindow");
	sub_14015CBE0((__int64)v65);
	sub_14015F870((_QWORD*)a1, (__int64)v65);
	*(_QWORD*)(a1 + 656) |= 0x30008ui64;
	*(_QWORD*)(a1 + 664) |= 0xE8ui64;
	*(_DWORD*)(a1 + 672) = 2;
	v57.m128_u64[0] = qword_140C77760;
	v57.m128_u64[1] = 0x6400000064i64;
	v10 = *a4 + 100;
	v11 = a4[1];
	v58[0] = *a4 + qword_140C77760;
	v58[1] = HIDWORD(qword_140C77760) + v11;
	v58[2] = v10;
	v58[3] = v11 + 100;
	sub_1400CC7C0(a1, v58);
	v12 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 1032) = -1i64;
	*(_QWORD*)(a1 + 1040) = -1i64;
	*(_QWORD*)(a1 + 1048) = -1i64;
	v13 = sub_1400E58C0(v12, *(int**)(a3 + 168));
	if (v13)
	{
		v14 = *(_QWORD*)(a1 + 688);
		*(_QWORD*)(a1 + 696) = v13;
		if (v14)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 40i64))(v14, *(_QWORD*)(v13 + 96));
	}
	v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v16 = (__m128) * (unsigned int*)(v15 + 16);
	v16.m128_f32[0] = v16.m128_f32[0] + *(float*)v15;
	v17 = (int)v16.m128_f32[0];
	if ((int)v16.m128_f32[0] != 0x80000000 && (float)v17 != v16.m128_f32[0])
		v16.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1) + v17);
	v18 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 1028) = (int)v16.m128_f32[0];
	*(_DWORD*)(a1 + 1024) = (int)v16.m128_f32[0];
	v19 = *(__m128i**)(a3 + 104);
	v61 = 0i64;
	v63 = 0i64;
	v62 = 0i64;
	v59 = 0i64;
	v60 = 0;
	v64 = 0i64;
	sub_14010B330(&v59, v18, v19, 0i64);
	sub_1400C3730(a1 + 1624, (__int64)&v59);
	v20 = *(_QWORD*)(a1 + 32);
	if (v20)
		sub_140109710((__int64*)(a1 + 2040), v20 + 240, *(__m128i**)(a3 + 136), 0);
	v21 = *(_DWORD*)(a1 + 2188);
	v57 = *(__m128*)(a3 + 192);
	sub_1401429A0(qword_140C63678, v21);
	v22 = sub_140141F10(qword_140C63678, &v57);
	v23 = qword_140C63678;
	*(_DWORD*)(a1 + 2188) = v22;
	v24 = *(_DWORD*)(a1 + 2208);
	v57 = *(__m128*)(a3 + 272);
	sub_1401429A0(v23, v24);
	v25 = sub_140141F10(qword_140C63678, &v57);
	v26 = qword_140C63678;
	*(_DWORD*)(a1 + 2208) = v25;
	v27 = *(_DWORD*)(a1 + 2196);
	v57 = *(__m128*)(a3 + 208);
	sub_1401429A0(v26, v27);
	v28 = sub_140141F10(qword_140C63678, &v57);
	v29 = qword_140C63678;
	*(_DWORD*)(a1 + 2196) = v28;
	v30 = *(_DWORD*)(a1 + 2212);
	v57 = *(__m128*)(a3 + 288);
	sub_1401429A0(v29, v30);
	v31 = sub_140141F10(qword_140C63678, &v57);
	v32 = qword_140C63678;
	*(_DWORD*)(a1 + 2212) = v31;
	v33 = *(_DWORD*)(a1 + 2192);
	v57 = *(__m128*)(a3 + 224);
	sub_1401429A0(v32, v33);
	v34 = sub_140141F10(qword_140C63678, &v57);
	v35 = qword_140C63678;
	*(_DWORD*)(a1 + 2192) = v34;
	v36 = *(_DWORD*)(a1 + 2216);
	v57 = *(__m128*)(a3 + 304);
	sub_1401429A0(v35, v36);
	v37 = sub_140141F10(qword_140C63678, &v57);
	v38 = qword_140C63678;
	*(_DWORD*)(a1 + 2216) = v37;
	v39 = *(_DWORD*)(a1 + 2200);
	v57 = *(__m128*)(a3 + 240);
	sub_1401429A0(v38, v39);
	v40 = sub_140141F10(qword_140C63678, &v57);
	v41 = qword_140C63678;
	*(_DWORD*)(a1 + 2200) = v40;
	v42 = *(_DWORD*)(a1 + 2220);
	v57 = *(__m128*)(a3 + 320);
	sub_1401429A0(v41, v42);
	v43 = sub_140141F10(qword_140C63678, &v57);
	v44 = qword_140C63678;
	*(_DWORD*)(a1 + 2220) = v43;
	v45 = *(_DWORD*)(a1 + 2204);
	v57 = *(__m128*)(a3 + 256);
	sub_1401429A0(v44, v45);
	*(_DWORD*)(a1 + 2204) = sub_140141F10(qword_140C63678, &v57);
	v46 = *(_DWORD*)(a1 + 2224);
	v57 = *(__m128*)(a3 + 336);
	sub_1401429A0(qword_140C63678, v46);
	v47 = 0;
	*(_DWORD*)(a1 + 2224) = sub_140141F10(qword_140C63678, &v57);
	if ((int)((__int64)(*(_QWORD*)(a3 + 48) - *(_QWORD*)(a3 + 40)) >> 3) > 0)
	{
		v48 = 0i64;
		do
		{
			v49 = *(_QWORD*)(v48 + *(_QWORD*)(a3 + 40));
			v50 = *(_QWORD*)(v49 + 48);
			if (v50)
			{
				v52 = *(__m128i**)(v50 + 32);
				v51 = (__m128i*) & word_140B7B704;
				if (v52)
					v51 = v52;
			}
			else
			{
				v51 = 0i64;
			}
			sub_14015FD10(a1, *(void**)(v49 + 24), v51, v47, 0xFFFFFFFE);
			v53 = *(_QWORD*)(v48 + *(_QWORD*)(a1 + 1152));
			if (*(int*)(v53 + 24) > 0)
				v54 = **(_QWORD**)(v53 + 16);
			else
				v54 = 0i64;
			*(_BYTE*)(v54 + 8) = *(_BYTE*)(v49 + 10);
			++v47;
			v48 += 8i64;
		} while (v47 < (int)((__int64)(*(_QWORD*)(a3 + 48) - *(_QWORD*)(a3 + 40)) >> 3));
	}
	v55 = *(void(__fastcall****)(_QWORD))(a1 + 1112);
	if (v55)
		(**v55)(v55);
	sub_1401429A0(qword_140C63678, v68);
	if (v67)
		sub_14018B900(v67, 0);
	if (v66)
		sub_14018B900(v66, 0);
	return a1;
}
// 140A36348: using guessed type wchar_t aPopupmenugridw[20];
// 140B5CAF0: using guessed type __int64 (__fastcall *off_140B5CAF0[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C67280: using guessed type __int128 xmmword_140C67280;
// 140C77760: using guessed type __int64 qword_140C77760;
// 14015E3F0: using guessed type char var_70[8];


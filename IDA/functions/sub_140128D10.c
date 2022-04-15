//----- (0000000140128D10) ----------------------------------------------------
void __fastcall sub_140128D10(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // r13
	__int64 v6; // rcx
	WCHAR* v7; // r12
	__int64 v8; // rax
	WCHAR* v9; // rcx
	float v10; // xmm7_4
	__int64 v11; // rax
	WCHAR* v12; // rcx
	float v13; // xmm8_4
	__int64 v14; // rax
	WCHAR* v15; // rcx
	float v16; // xmm9_4
	int v17; // eax
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rax
	WCHAR* v23; // rcx
	int v24; // esi
	__int64 v25; // rax
	WCHAR* v26; // rcx
	int v27; // edi
	__int64 v28; // rax
	WCHAR* v29; // rcx
	int v30; // ebx
	__int64 v31; // rax
	double v32; // xmm0_8
	char* v33; // r9
	__int64 v34; // rcx
	bool v35; // al
	__int64 v36; // rax
	WCHAR* v37; // r12
	WCHAR* v38; // rcx
	int v39; // esi
	__int64 v40; // rax
	WCHAR* v41; // rcx
	int v42; // edi
	__int64 v43; // rax
	WCHAR* v44; // rcx
	int v45; // ebx
	__int64 v46; // rax
	double v47; // xmm0_8
	int v48; // ebx
	__int64(__fastcall * **v49)(); // rdi
	int v50; // edx
	int v51; // edi
	__int64 i; // rbx
	__int64(__fastcall * *v53)(); // rcx
	bool v54; // dl
	__int64 v55; // rcx
	_QWORD* v56; // rdi
	__int64 v57; // rax
	__int64 v58; // r8
	_QWORD* v59; // rax
	__int64 v60; // rcx
	__int64 v61; // r10
	int v62; // ecx
	__int64 v63; // r9
	_DWORD* v64; // rcx
	double v65; // xmm0_8
	unsigned __int64* v66; // r12
	unsigned __int64 v67; // rsi
	__int64 v68; // rbx
	__int64 v69; // rax
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // rbx
	__int64 v73; // rax
	unsigned __int64* v74; // rax
	unsigned __int64* v75; // r12
	unsigned __int64 v76; // rsi
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // rbx
	__int64 v81; // rax
	__m128 v82; // xmm6
	__int64 v83; // rax
	__int64 v84; // r8
	__int64 v85; // rax
	__int64 v86; // rcx
	__int64 v87; // rbx
	__int64 v88; // rax
	__int64 v89; // r9
	int v90; // ecx
	__int64 v91; // r9
	_DWORD* v92; // rdx
	__int64 v93; // rcx
	char* v94; // rax
	__int64 v95; // r9
	__int64 v96; // rax
	_DWORD* v97; // rax
	__int64 v98; // rcx
	const char* v99; // r9
	const char* v100; // rax
	int v101; // ebx
	__int64 v102; // rcx
	__int64 v103; // r8
	unsigned __int64 v104; // rdx
	__int64 v105; // r10
	__int64 v106; // r9
	int v107; // r11d
	__m128* v108; // rcx
	__m128i v109; // xmm1
	__m128i v110; // xmm1
	__int64 v111; // [rsp+28h] [rbp-81h]
	__int64 v112; // [rsp+38h] [rbp-71h]
	__int64 v113; // [rsp+40h] [rbp-69h] BYREF
	int v114; // [rsp+48h] [rbp-61h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-59h] BYREF
	__int64 v116; // [rsp+58h] [rbp-51h]
	LPVOID lpTlsValue; // [rsp+60h] [rbp-49h]
	__int64(__fastcall * *v118)(); // [rsp+68h] [rbp-41h] BYREF
	__int64 v119; // [rsp+70h] [rbp-39h]
	LPVOID v120; // [rsp+78h] [rbp-31h]
	__int64 v121; // [rsp+80h] [rbp-29h]
	__int64 v122; // [rsp+88h] [rbp-21h]
	__int128 v123; // [rsp+90h] [rbp-19h]
	double v124; // [rsp+108h] [rbp+5Fh] BYREF

	v3 = a2;
	if (a2 == 71)
	{
		v6 = *(_QWORD*)(a1 + 1264);
		v7 = (WCHAR*)&unk_1409DD974;
		if (a3 == v6 || a3 == *(_QWORD*)(a1 + 1272) || a3 == *(_QWORD*)(a1 + 1280))
		{
			v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 1040) + 112i64))(*(_QWORD*)(v6 + 1040));
			v9 = (WCHAR*)&unk_1409DD974;
			if (v8)
				v9 = (WCHAR*)v8;
			v10 = *(double*)sub_1407DFD50(v9, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1272) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1272) + 1040i64));
			v12 = (WCHAR*)&unk_1409DD974;
			if (v11)
				v12 = (WCHAR*)v11;
			v13 = *(double*)sub_1407DFD50(v12, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1280) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1280) + 1040i64));
			v15 = (WCHAR*)&unk_1409DD974;
			if (v14)
				v15 = (WCHAR*)v14;
			v16 = *(double*)sub_1407DFD50(v15, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v17 = sub_1401280F0(v10, v13 * 0.0099999998, v16 * 0.0099999998);
			sub_140127B20(a1, v17);
			v18 = *(_QWORD*)(a1 + 1264);
			if (a3 == v18)
				sub_140173980(v18, v10);
			v19 = *(_QWORD*)(a1 + 1272);
			if (a3 == v19)
				sub_140173980(v19, v13);
			v20 = *(_QWORD*)(a1 + 1280);
			if (a3 == v20)
				sub_140173980(v20, v16);
			sub_1400D4070(a1, 0x4Au, (char*)a1, "c", *(_DWORD*)(a1 + 1040));
		}
		v21 = *(_QWORD*)(a1 + 1240);
		if (a3 == v21 || a3 == *(_QWORD*)(a1 + 1248) || a3 == *(_QWORD*)(a1 + 1256) || a3 == *(_QWORD*)(a1 + 1288))
		{
			v22 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v21 + 1040) + 112i64))(*(_QWORD*)(v21 + 1040));
			v23 = (WCHAR*)&unk_1409DD974;
			if (v22)
				v23 = (WCHAR*)v22;
			v24 = (int)*(double*)sub_1407DFD50(v23, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v25 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1248) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1248) + 1040i64));
			v26 = (WCHAR*)&unk_1409DD974;
			if (v25)
				v26 = (WCHAR*)v25;
			v27 = (int)*(double*)sub_1407DFD50(v26, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v28 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1256) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 1040i64));
			v29 = (WCHAR*)&unk_1409DD974;
			if (v28)
				v29 = (WCHAR*)v28;
			v30 = (int)*(double*)sub_1407DFD50(v29, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v31 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1288) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1288) + 1040i64));
			if (v31)
				v7 = (WCHAR*)v31;
			v32 = *(double*)sub_1407DFD50(v7, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			sub_140127B20(
				a1,
				(unsigned __int8)v30 | (((unsigned __int8)v27 | (((unsigned __int8)v24 | ((unsigned __int8)(int)v32 << 8)) << 8)) << 8));
			v33 = "c";
		LABEL_44:
			LODWORD(v111) = *(_DWORD*)(a1 + 1040);
			sub_1400D4070(a1, 0x4Au, (char*)a1, v33, v111);
		}
	}
	else if ((unsigned int)(a2 - 36) <= 1)
	{
		v34 = *(_QWORD*)(a1 + 1216);
		if (a3 == v34)
		{
			v35 = sub_1401301F0(v34);
			sub_1400D42F0(*(_QWORD*)(a1 + 1288), v35, 0, 4.0);
			if (!sub_1401301F0(*(_QWORD*)(a1 + 1216)))
				sub_140173980(*(_QWORD*)(a1 + 1288), 255.0);
			v36 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1240) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1240) + 1040i64));
			v37 = (WCHAR*)&unk_1409DD974;
			v38 = (WCHAR*)&unk_1409DD974;
			if (v36)
				v38 = (WCHAR*)v36;
			v39 = (int)*(double*)sub_1407DFD50(v38, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v40 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1248) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1248) + 1040i64));
			v41 = (WCHAR*)&unk_1409DD974;
			if (v40)
				v41 = (WCHAR*)v40;
			v42 = (int)*(double*)sub_1407DFD50(v41, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v43 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1256) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 1040i64));
			v44 = (WCHAR*)&unk_1409DD974;
			if (v43)
				v44 = (WCHAR*)v43;
			v45 = (int)*(double*)sub_1407DFD50(v44, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			v46 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1288) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1288) + 1040i64));
			if (v46)
				v37 = (WCHAR*)v46;
			v47 = *(double*)sub_1407DFD50(v37, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			sub_140127B20(
				a1,
				(unsigned __int8)v45 | (((unsigned __int8)v42 | (((unsigned __int8)v39 | ((unsigned __int8)(int)v47 << 8)) << 8)) << 8));
			v33 = "c";
			goto LABEL_44;
		}
	}
	v118 = *(__int64(__fastcall***)())(a1 + 1168);
	v119 = *(_QWORD*)(a1 + 1176);
	v120 = *(LPVOID*)(a1 + 1184);
	v121 = *(_QWORD*)(a1 + 1192);
	v122 = *(_QWORD*)(a1 + 1200);
	*(_QWORD*)&v123 = *(_QWORD*)(a1 + 1208);
	if ((_DWORD)v3 == 36)
	{
		v48 = 0;
		v49 = &v118;
		do
		{
			if (*v49 == (__int64(__fastcall**)())a3)
			{
				v50 = *(_DWORD*)(a1 + 1040);
				*(_DWORD*)(a1 + 1044) = v48;
				sub_140127B20(a1, v50);
				sub_140128250(a1);
			}
			++v48;
			++v49;
		} while (v48 < 6);
		v51 = 0;
		for (i = 0i64; i < 6; ++i)
		{
			v53 = (&v118)[i];
			v54 = *(_DWORD*)(a1 + 1044) == v51;
			*((_BYTE*)v53 + 1436) &= ~0x40u;
			*((_BYTE*)v53 + 1436) |= v54 << 6;
			v55 = (__int64)v53[195];
			if (v55 && (*(_BYTE*)(v55 + 28) & 1) != 0)
				sub_1400D42F0(v55, v54, 0, 4.0);
			++v51;
		}
	}
	if (*(_DWORD*)(a1 + 1032) == -2)
		goto LABEL_127;
	v56 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 400i64);
	if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
		sub_14005E2C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 400i64));
	v57 = v56[5];
	if (v57 == v56[10])
		v58 = v56[15];
	else
		v58 = *(_QWORD*)(**(_QWORD**)(v57 + 8) + 24i64);
	v59 = sub_140060AB0((__int64)v56, 0, v58);
	v59[4] = sub_1400F3FF0;
	v60 = v56[2];
	*(_QWORD*)v60 = v59;
	*(_DWORD*)(v60 + 8) = 6;
	v56[2] += 16i64;
	v61 = v56[2];
	v62 = *(_DWORD*)(a1 + 1032);
	v112 = (v61 - v56[3]) >> 4;
	v63 = *(_QWORD*)(v56[4] + 160i64);
	if ((unsigned int)(v62 - 1) >= *(_DWORD*)(v63 + 56))
	{
		v65 = (double)v62;
		v124 = (double)v62;
		if ((double)v62 == 0.0)
			v64 = *(_DWORD**)(v63 + 32);
		else
			v64 = (_DWORD*)(*(_QWORD*)(v63 + 32)
				+ 40 * ((unsigned int)(LODWORD(v124) + HIDWORD(v124)) % (((1i64 << *(_BYTE*)(v63 + 11)) - 1) | 1)));
		while (v64[6] != 3 || v65 != *((double*)v64 + 2))
		{
			v64 = (_DWORD*)*((_QWORD*)v64 + 4);
			if (!v64)
			{
				v64 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v64 = (_DWORD*)(*(_QWORD*)(v63 + 24) + 16i64 * (v62 - 1));
	}
	*(_QWORD*)v61 = *(_QWORD*)v64;
	*(_DWORD*)(v61 + 8) = v64[2];
	v56[2] += 16i64;
	sub_1400D62A0(v56, a1);
	v66 = (unsigned __int64*)off_140C2C4D0[v3];
	if (v66)
	{
		v67 = -1i64;
		do
			++v67;
		while (*((_BYTE*)v66 + v67));
		if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
			sub_14005E2C0((__int64)v56);
		v68 = v56[2];
		v69 = sub_140062650((__int64)v56, v66, v67);
		*(_DWORD*)(v68 + 8) = 4;
		*(_QWORD*)v68 = v69;
		v56[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(v56[2] + 8i64) = 0;
		v56[2] += 16i64;
	}
	if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
		sub_14005E2C0((__int64)v56);
	v70 = v56[2];
	v71 = sub_14005C1B0((__int64)v56, 0, 0);
	*(_DWORD*)(v70 + 8) = 5;
	*(_QWORD*)v70 = v71;
	v56[2] += 16i64;
	if ((_DWORD)v3 == 32)
	{
		if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
			sub_14005E2C0((__int64)v56);
		v72 = v56[2];
		v73 = sub_140062650((__int64)v56, (unsigned __int64*)"Button", 6ui64);
		*(_DWORD*)(v72 + 8) = 4;
		*(_QWORD*)v72 = v73;
		v56[2] += 16i64;
		v74 = (unsigned __int64*)sub_1401299A0(a1, a3);
		v75 = v74;
		if (v74)
		{
			v76 = -1i64;
			do
				++v76;
			while (*((_BYTE*)v74 + v76));
			if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
				sub_14005E2C0((__int64)v56);
			v77 = v56[2];
			v78 = sub_140062650((__int64)v56, v75, v76);
			*(_DWORD*)(v77 + 8) = 4;
			*(_QWORD*)v77 = v78;
			v56[2] += 16i64;
		}
		else
		{
			*(_DWORD*)(v56[2] + 8i64) = 0;
			v56[2] += 16i64;
		}
		sub_14005EA50((__int64)v56, (__int64*)(v56[2] - 48i64), (int*)(v56[2] - 32i64), (unsigned int*)(v56[2] - 16i64));
		v79 = v56[4];
		v56[2] -= 32i64;
		if (*(_QWORD*)(v79 + 120) >= *(_QWORD*)(v79 + 112))
			sub_14005E2C0((__int64)v56);
		v80 = v56[2];
		v81 = sub_140062650((__int64)v56, (unsigned __int64*)"Value", 5ui64);
		*(_DWORD*)(v80 + 8) = 4;
		*(_QWORD*)v80 = v81;
		v56[2] += 16i64;
		goto LABEL_94;
	}
	if ((_DWORD)v3 == 74)
	{
		sub_140058710((__int64)v56, (unsigned __int64*)"Value", 5ui64);
	LABEL_94:
		v82 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
			sub_14005E2C0((__int64)v56);
		v83 = v56[5];
		if (v83 == v56[10])
			v84 = v56[15];
		else
			v84 = *(_QWORD*)(**(_QWORD**)(v83 + 8) + 24i64);
		v85 = sub_1400627D0((__int64)v56, 0x10ui64, v84);
		v86 = v56[2];
		*(_QWORD*)v86 = v85;
		*(_DWORD*)(v86 + 8) = 7;
		v56[2] += 16i64;
		*(__m128*)(v85 + 48) = v82;
		v87 = v56[4];
		v88 = sub_140062650((__int64)v56, (unsigned __int64*)"CColor", 6ui64);
		v89 = v56[2];
		v113 = v88;
		v114 = 4;
		sub_14005E8E0((__int64)v56, v87 + 160, (int*)&v113, v89);
		v56[2] += 16i64;
		sub_140058BF0((__int64)v56, -2);
		sub_14005EA50((__int64)v56, (__int64*)(v56[2] - 48i64), (int*)(v56[2] - 32i64), (unsigned int*)(v56[2] - 16i64));
		v56[2] -= 32i64;
	}
	v90 = *(_DWORD*)(a1 + 1036);
	v91 = *(_QWORD*)(v56[4] + 160i64);
	if ((unsigned int)(v90 - 1) >= *(_DWORD*)(v91 + 56))
	{
		v124 = (double)v90;
		if ((double)v90 == 0.0)
			v92 = *(_DWORD**)(v91 + 32);
		else
			v92 = (_DWORD*)(*(_QWORD*)(v91 + 32)
				+ 40 * ((unsigned int)(LODWORD(v124) + HIDWORD(v124)) % (((1i64 << *(_BYTE*)(v91 + 11)) - 1) | 1)));
		while (v92[6] != 3 || (double)v90 != *((double*)v92 + 2))
		{
			v92 = (_DWORD*)*((_QWORD*)v92 + 4);
			if (!v92)
			{
				v92 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v92 = (_DWORD*)(*(_QWORD*)(v91 + 24) + 16i64 * (v90 - 1));
	}
	v93 = v56[2];
	*(_QWORD*)v93 = *(_QWORD*)v92;
	*(_DWORD*)(v93 + 8) = v92[2];
	v56[2] += 16i64;
	if ((_DWORD)v112)
		v94 = (char*)sub_1400580E0((__int64)v56, v112) - v56[8];
	else
		v94 = 0i64;
	v95 = v56[2] - 80i64;
	v114 = 0;
	v113 = v95;
	if ((unsigned int)sub_140061FB0(
		(__int64)v56,
		(void(__fastcall*)(__int64, __int64))sub_140058DB0,
		(__int64)&v113,
		v95 - v56[8],
		(__int64)v94))
	{
		v116 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v96 = v56[2] - 16i64;
		v118 = TlsValue;
		v119 = v116;
		v120 = lpTlsValue;
		if (*(_DWORD*)(v96 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)v56, v96))
			{
			LABEL_119:
				v97 = (_DWORD*)(v56[2] - 16i64);
				if (v97 == dword_140A12138 || (v98 = (int)v97[2], (_DWORD)v98 == -1))
					v99 = aNoValue;
				else
					v99 = off_140A123B0[v98];
				v100 = (const char*)sub_140058780((__int64)v56, (unsigned __int64*)"%s expected, got %s", aString_0, v99);
				sub_140056570(v56, 0xFFFFFFFF, v100);
			}
			if (*(_QWORD*)(v56[4] + 120i64) >= *(_QWORD*)(v56[4] + 112i64))
				sub_14005E2C0((__int64)v56);
			v96 = v56[2] - 16i64;
		}
		if (*(_QWORD*)v96 == -32i64)
			goto LABEL_119;
		*(_QWORD*)&v124 = *(_QWORD*)v96 + 19900000i64;
		v101 = sub_140196F30(&dword_140C8A120, 13, &v124, &v118);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v101)
			DebugBreak();
	}
	v56[2] -= 16i64;
LABEL_127:
	v102 = *(_QWORD*)(a1 + 1024);
	if (v102)
	{
		if ((_DWORD)v3 != 32)
			return;
		if (a3 == *(_QWORD*)(a1 + 1224))
			sub_1400D4070(v102, 0x1Eu, (char*)a1, "i", 0i64);
		if (a3 == *(_QWORD*)(a1 + 1232))
		{
			v103 = qword_140C63678;
			v104 = *(unsigned int*)(*(_QWORD*)(a1 + 1080) + 712i64);
			if (v104 >= *(_QWORD*)(qword_140C63678 + 48))
				goto LABEL_137;
			v105 = *(_QWORD*)(qword_140C63678 + 40);
			v106 = 32i64 * (unsigned int)v104;
			v107 = *(_DWORD*)(v106 + v105 + 16);
			if ((unsigned int)(v107 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v106 + v105 + 16) = v107 + 1;
			if (v104 >= *(_QWORD*)(v103 + 48))
				LABEL_137:
			v108 = *(__m128**)(v103 + 40);
			else
				v108 = (__m128*)(*(_QWORD*)(v103 + 40) + 32 * v104);
			v109 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, *v108), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v110 = _mm_packus_epi16(v109, v109);
			*(_DWORD*)(a1 + 1040) = _mm_cvtsi128_si32(_mm_packus_epi16(v110, v110));
			sub_1401429A0(v103, v104);
			LODWORD(v111) = 1;
			sub_1400D4070(*(_QWORD*)(a1 + 1024), 0x1Eu, (char*)a1, "i", v111);
		}
	}
	else if ((_DWORD)v3 != 32)
	{
		return;
	}
	if (a3 == *(_QWORD*)(a1 + 1224) || a3 == *(_QWORD*)(a1 + 1232))
		sub_1400C6B20(a1);
}
// 140129143: variable 'v111' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;
// 140C8A120: using guessed type _DWORD dword_140C8A120;


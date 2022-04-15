#include "../winhttp.h"

//----- (000000014016CE10) ----------------------------------------------------
__int64 __fastcall sub_14016CE10(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	int a5,
	_QWORD* a6,
	_OWORD* a7,
	__int64 a8,
	__int64 a9)
{
	_QWORD* v11; // r14
	_QWORD* v12; // r13
	_QWORD* v13; // rbx
	__int64 v14; // r9
	__int64 v15; // rdx
	__int64 v16; // rcx
	__m128i v17; // xmm0
	_QWORD** v18; // r12
	__int64 v19; // rax
	int v20; // esi
	int v21; // ebx
	int* v22; // rdx
	void(__fastcall * **v23)(_QWORD); // rbx
	__int64 v24; // rcx
	bool v25; // zf
	void(__fastcall * **v26)(_QWORD); // rbx
	__int64 v27; // rcx
	_QWORD* v28; // rsi
	void(__fastcall * **v29)(_QWORD); // rbx
	__int64 v30; // rcx
	void(__fastcall * **v31)(_QWORD); // rbx
	__int64 v32; // rcx
	__int64 v33; // rcx
	void(__fastcall * **v34)(_QWORD); // rbx
	__int64 v35; // rcx
	__int64 v36; // rcx
	void(__fastcall * **v37)(_QWORD); // rbx
	__int64 v38; // r8
	void(__fastcall * **v39)(_QWORD); // rbx
	__int64 v40; // r8
	void(__fastcall * **v41)(_QWORD); // rbx
	__int64 v42; // r8
	void(__fastcall * **v43)(_QWORD); // rsi
	__int64 v44; // r8
	void(__fastcall * **v45)(_QWORD); // rsi
	__int64 v46; // r8
	_QWORD* v47; // rsi
	void(__fastcall * **v48)(_QWORD); // rbx
	__int64 v49; // rcx
	int v50; // r11d
	int v51; // r10d
	__int64 v52; // rbx
	_QWORD* v53; // r9
	int v54; // ecx
	__int64* v55; // rax
	int v56; // ecx
	__int64* v57; // rax
	int v58; // ecx
	__int64 v59; // r14
	__m128i** v60; // rdi
	__int64* v61; // rsi
	__int64 v62; // rbx
	__int64 result; // rax
	int v64; // [rsp+38h] [rbp-C9h]
	_QWORD v65[3]; // [rsp+40h] [rbp-C1h] BYREF
	__int64 v66[6]; // [rsp+58h] [rbp-A9h] BYREF
	char v67[8]; // [rsp+88h] [rbp-79h] BYREF
	__int64 v68; // [rsp+90h] [rbp-71h]
	__int64 v69; // [rsp+B0h] [rbp-51h]
	unsigned int v70; // [rsp+DCh] [rbp-25h]
	int v71; // [rsp+148h] [rbp+47h] BYREF
	int v72; // [rsp+14Ch] [rbp+4Bh]
	int v73; // [rsp+150h] [rbp+4Fh] BYREF
	int v74; // [rsp+154h] [rbp+53h]
	__int64 v75; // [rsp+160h] [rbp+5Fh] BYREF

	v75 = a4;
	sub_1400C5920(a1, a2, a3, a6, a7, a8, a9);
	*(_QWORD*)a1 = off_140B5CF80;
	sub_1401095E0(a1 + 1024);
	sub_1401095E0(a1 + 1072);
	sub_1401095E0(a1 + 1120);
	v11 = (_QWORD*)(a1 + 1168);
	sub_1401095E0(a1 + 1168);
	v12 = (_QWORD*)(a1 + 1216);
	sub_1401095E0(a1 + 1216);
	sub_1401095E0(a1 + 1264);
	sub_1401095E0(a1 + 1312);
	v13 = (_QWORD*)(a1 + 1408);
	*(_QWORD*)(a1 + 1360) = 0i64;
	*(_BYTE*)(a1 + 1368) = 0;
	*(_QWORD*)(a1 + 1400) = 0i64;
	*(_QWORD*)(a1 + 1392) = 0i64;
	*(_QWORD*)(a1 + 1416) = 0i64;
	*(_QWORD*)(a1 + 1424) = 0i64;
	*(_QWORD*)(a1 + 1432) = 0i64;
	v14 = *(_QWORD*)(a1 + 696);
	v15 = *(_QWORD*)(a1 + 32);
	v71 = -1;
	sub_14016C9A0(a1 + 1440, v15, &v71, v14, (__int64)&unk_1409DD354, (__m128i*) & unk_1409DD3EC, v64, -2);
	v16 = qword_140C63678;
	*(_QWORD*)(a1 + 1568) = -1i64;
	v17 = _mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64);
	*(_QWORD*)(a1 + 1584) = 0i64;
	*(_QWORD*)(a1 + 1576) = 0i64;
	*(_QWORD*)(a1 + 1600) = 0i64;
	*(_QWORD*)(a1 + 1592) = 0i64;
	*(__m128*)& v65[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(v17, (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v18 = (_QWORD**)(a1 + 1624);
	*(_DWORD*)(a1 + 1612) = sub_140141F10(v16, (__m128*) & v65[1]);
	*(_QWORD*)(a1 + 1616) = 0i64;
	sub_1400C35F0(a1 + 1624);
	v19 = v75;
	*(_QWORD*)(a1 + 432) |= 0x200ui64;
	if (v19 && (v20 = a5, a5 > 0))
	{
		v21 = 0;
		do
		{
			if (v21 >= 32)
				break;
			sub_140170BA0((_QWORD*)a1, v19 + 88i64 * v21);
			v19 = v75;
			++v21;
		} while (v21 < v20);
		v13 = (_QWORD*)(a1 + 1408);
	}
	else
	{
		sub_14016C730((__int64)v67);
		sub_140170BA0((_QWORD*)a1, (__int64)v67);
		sub_1401429A0(qword_140C63678, v70);
		if (v69)
			sub_14018B900(v69, 0);
		if (v68)
			sub_14018B900(v68, 0);
	}
	v22 = (int*)v13[2];
	v75 = a1 + 1440;
	if (v22 == (int*)v13[3])
	{
		sub_1400B9430(v13, v22, &v75);
	}
	else
	{
		if (v22)
			*(_QWORD*)v22 = a1 + 1440;
		v13[2] += 8i64;
	}
	if (a2)
	{
		if (!*v12 || !sub_14002C740(a1 + 1232, L"CRB_TreeControlCollapse"))
		{
			v23 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"CRB_TreeControlCollapse");
			if (v23)
			{
				v24 = 0i64;
				do
					v25 = aCrbTreecontrol[++v24] == 0;
				while (!v25);
				sub_14001C480(a1 + 1232, (int*)L"CRB_TreeControlCollapse", (int*)&aCrbTreecontrol[v24]);
			}
			if (v23 != (void(__fastcall***)(_QWORD)) * v12)
			{
				if (v23)
					(**v23)(v23);
				if (*v12)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
					*v12 = 0i64;
				}
				*v12 = v23;
			}
		}
		if (!*v11 || !sub_14002C740(a1 + 1184, L"CRB_TreeControlExpand"))
		{
			v26 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"CRB_TreeControlExpand");
			if (v26)
			{
				v27 = 0i64;
				do
					v25 = aCrbTreecontrol_0[++v27] == 0;
				while (!v25);
				sub_14001C480(a1 + 1184, (int*)L"CRB_TreeControlExpand", (int*)&aCrbTreecontrol_0[v27]);
			}
			if (v26 != (void(__fastcall***)(_QWORD)) * v11)
			{
				if (v26)
					(**v26)(v26);
				if (*v11)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
					*v11 = 0i64;
				}
				*v11 = v26;
			}
		}
		v28 = (_QWORD*)(a1 + 1024);
		if (!*(_QWORD*)(a1 + 1024) || !sub_14002C740(a1 + 1040, L"CRB_TreeControlVLine"))
		{
			v29 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"CRB_TreeControlVLine");
			if (v29)
			{
				v30 = 0i64;
				do
					v25 = aCrbTreecontrol_1[++v30] == 0;
				while (!v25);
				sub_14001C480(a1 + 1040, (int*)L"CRB_TreeControlVLine", (int*)&aCrbTreecontrol_1[v30]);
			}
			if (v29 != (void(__fastcall***)(_QWORD)) * v28)
			{
				if (v29)
					(**v29)(v29);
				if (*v28)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v28 + 8i64))(*v28);
					*v28 = 0i64;
				}
				*v28 = v29;
			}
		}
	}
	else
	{
		v28 = (_QWORD*)(a1 + 1024);
	}
	if (a2)
	{
		if (!*(_QWORD*)(a1 + 1072) || !sub_14002C740(a1 + 1088, L"CRB_TreeControlLastNodeLine"))
		{
			v31 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"CRB_TreeControlLastNodeLine");
			if (v31)
			{
				v32 = 0i64;
				do
					v25 = aCrbTreecontrol_2[++v32] == 0;
				while (!v25);
				sub_14001C480(a1 + 1088, (int*)L"CRB_TreeControlLastNodeLine", (int*)&aCrbTreecontrol_2[v32]);
			}
			if (v31 != *(void(__fastcall****)(_QWORD))(a1 + 1072))
			{
				if (v31)
					(**v31)(v31);
				v33 = *(_QWORD*)(a1 + 1072);
				if (v33)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
					*(_QWORD*)(a1 + 1072) = 0i64;
				}
				*(_QWORD*)(a1 + 1072) = v31;
			}
		}
		if (!*(_QWORD*)(a1 + 1120) || !sub_14002C740(a1 + 1136, L"CRB_TreeControlNodeLine"))
		{
			v34 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"CRB_TreeControlNodeLine");
			if (v34)
			{
				v35 = 0i64;
				do
					v25 = aCrbTreecontrol_3[++v35] == 0;
				while (!v25);
				sub_14001C480(a1 + 1136, (int*)L"CRB_TreeControlNodeLine", (int*)&aCrbTreecontrol_3[v35]);
			}
			if (v34 != *(void(__fastcall****)(_QWORD))(a1 + 1120))
			{
				if (v34)
					(**v34)(v34);
				v36 = *(_QWORD*)(a1 + 1120);
				if (v36)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
					*(_QWORD*)(a1 + 1120) = 0i64;
				}
				*(_QWORD*)(a1 + 1120) = v34;
			}
		}
	}
	if (!*v12)
	{
		if (!a2)
			goto LABEL_126;
		v37 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"TreeControlCollapse");
		if (v37)
		{
			v38 = 0i64;
			do
				v25 = aTreecontrolcol[++v38] == 0;
			while (!v25);
			sub_14001C480(a1 + 1232, (int*)L"TreeControlCollapse", (int*)&aTreecontrolcol[v38]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1216), v37);
		if (!*v11 || !sub_14002C740(a1 + 1184, L"TreeControlExpand"))
		{
			v39 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"TreeControlExpand");
			if (v39)
			{
				v40 = 0i64;
				do
					v25 = aTreecontrolexp[++v40] == 0;
				while (!v25);
				sub_14001C480(a1 + 1184, (int*)L"TreeControlExpand", (int*)&aTreecontrolexp[v40]);
			}
			sub_1401097F0((_QWORD*)(a1 + 1168), v39);
		}
		if (!*v28 || !sub_14002C740((__int64)(v28 + 2), L"TreeControlVLine"))
		{
			v41 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"TreeControlVLine");
			if (v41)
			{
				v42 = 0i64;
				do
					v25 = aTreecontrolvli[++v42] == 0;
				while (!v25);
				sub_14001C480((__int64)(v28 + 2), (int*)L"TreeControlVLine", (int*)&aTreecontrolvli[v42]);
			}
			sub_1401097F0(v28, v41);
		}
		if (!*(_QWORD*)(a1 + 1072) || !sub_14002C740(a1 + 1088, L"TreeControlLastNodeLine"))
		{
			v43 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"TreeControlLastNodeLine");
			if (v43)
			{
				v44 = 0i64;
				do
					v25 = aTreecontrollas[++v44] == 0;
				while (!v25);
				sub_14001C480(a1 + 1088, (int*)L"TreeControlLastNodeLine", (int*)&aTreecontrollas[v44]);
			}
			sub_1401097F0((_QWORD*)(a1 + 1072), v43);
		}
		if (!*(_QWORD*)(a1 + 1120) || !sub_14002C740(a1 + 1136, L"TreeControlNodeLine"))
		{
			v45 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"TreeControlNodeLine");
			if (v45)
			{
				v46 = 0i64;
				do
					v25 = aTreecontrolnod[++v46] == 0;
				while (!v25);
				sub_14001C480(a1 + 1136, (int*)L"TreeControlNodeLine", (int*)&aTreecontrolnod[v46]);
			}
			sub_1401097F0((_QWORD*)(a1 + 1120), v45);
		}
	}
	if (a2)
	{
		v47 = (_QWORD*)(a1 + 1312);
		if (!*(_QWORD*)(a1 + 1312) || !sub_14002C740(a1 + 1328, L"WhiteFill"))
		{
			v48 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"WhiteFill");
			if (v48)
			{
				v49 = 0i64;
				do
					v25 = aWhitefill_22[++v49] == 0;
				while (!v25);
				sub_14001C480(a1 + 1328, (int*)L"WhiteFill", (int*)&aWhitefill_22[v49]);
			}
			if (v48 != (void(__fastcall***)(_QWORD)) * v47)
			{
				if (v48)
					(**v48)(v48);
				if (*v47)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v47 + 8i64))(*v47);
					*v47 = 0i64;
				}
				*v47 = v48;
			}
		}
	}
LABEL_126:
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1364));
	*(__m128*)& v65[1] = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6C0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)(a1 + 1364) = sub_140141F10(qword_140C63678, (__m128*) & v65[1]);
	*(_DWORD*)(a1 + 1376) = 16;
	v66[0] = (__int64)L"WhiteFill";
	*(_DWORD*)(a1 + 1380) = -1;
	v66[1] = (__int64)L"WhiteFill";
	*(_DWORD*)(a1 + 1608) = 0;
	v66[2] = (__int64)L"WhiteFill";
	v66[3] = (__int64)L"WhiteFill";
	v66[4] = (__int64)L"WhiteFill";
	if (a6)
	{
		sub_1400C3730(a1 + 1624, (__int64)(a6 + 81));
		v50 = 0;
		a6 = 0i64;
		v51 = 0;
		v52 = 6i64;
		do
		{
			v53 = *v18;
			if (*v18)
			{
				sub_140101470(*v18, &v71);
				v54 = v71;
			}
			else
			{
				v54 = 0;
				v72 = 0;
				v71 = 0;
			}
			v55 = &v75;
			if (v50 >= v54)
				v55 = (__int64*)&a6;
			LODWORD(v75) = v54;
			v50 = *(_DWORD*)v55;
			LODWORD(a6) = *(_DWORD*)v55;
			if (v53)
			{
				sub_140101470(v53, &v73);
				v56 = v74;
			}
			else
			{
				v56 = 0;
				v73 = 0;
				v74 = 0;
			}
			v57 = &v75;
			if (v51 >= v56)
				v57 = (__int64*)((char*)&a6 + 4);
			LODWORD(v75) = v56;
			v18 += 6;
			v51 = *(_DWORD*)v57;
			HIDWORD(a6) = *(_DWORD*)v57;
			--v52;
		} while (v52);
		v58 = (int)*(float*)(*(_QWORD*)(a1 + 696) + 92i64) + 4;
		if (v58 < v51)
			v58 = v51;
	}
	else
	{
		v59 = *(_QWORD*)(a1 + 32);
		v60 = (__m128i**)v66;
		v61 = (__int64*)(a1 + 1624);
		v62 = 6i64;
		do
		{
			if (v59)
				sub_140109710(v61, v59 + 240, *v60, 0);
			v61 += 6;
			++v60;
			--v62;
		} while (v62);
		sub_1400C3AD0(a1 + 1624, (_DWORD*)(a1 + 1960));
		v58 = (int)*(float*)(*(_QWORD*)(a1 + 696) + 92i64) + 4;
	}
	result = a1;
	*(_DWORD*)(a1 + 1372) = v58;
	return result;
}
// 14016D10D: conditional instruction was optimized away because rdi.8!=0
// 14016D199: conditional instruction was optimized away because rdi.8!=0
// 14016D2D9: conditional instruction was optimized away because rdi.8!=0
// 14016D3EB: conditional instruction was optimized away because rdi.8!=0
// 14016D462: conditional instruction was optimized away because rdi.8!=0
// 14016D4CB: conditional instruction was optimized away because rdi.8!=0
// 14016D542: conditional instruction was optimized away because rdi.8!=0
// 14016CFDB: conditional instruction was optimized away because %arg_20.4>=1
// 14016CF38: variable 'v64' is possibly undefined
// 14016D753: variable 'v50' is possibly undefined
// 14016D764: variable 'v53' is possibly undefined
// 14016D78A: variable 'v51' is possibly undefined
// 140A37EF8: using guessed type wchar_t aCrbTreecontrol_0[22];
// 140A37F28: using guessed type wchar_t aCrbTreecontrol[24];
// 140A37F58: using guessed type wchar_t aTreecontrolvli[17];
// 140A37F80: using guessed type wchar_t aTreecontrolexp[18];
// 140A37FA8: using guessed type wchar_t aTreecontrolnod[20];
// 140A37FD0: using guessed type wchar_t aTreecontrollas[24];
// 140A38000: using guessed type wchar_t aCrbTreecontrol_2[28];
// 140A38038: using guessed type wchar_t aCrbTreecontrol_1[21];
// 140A38068: using guessed type wchar_t aTreecontrolcol[20];
// 140A38090: using guessed type wchar_t aCrbTreecontrol_3[24];
// 140A380C0: using guessed type wchar_t aWhitefill_27[10];
// 140A380D8: using guessed type wchar_t aWhitefill_26[10];
// 140A380F0: using guessed type wchar_t aWhitefill_23[10];
// 140A38108: using guessed type wchar_t aWhitefill_22[10];
// 140A38120: using guessed type wchar_t aWhitefill_25[10];
// 140A38138: using guessed type wchar_t aWhitefill_24[10];
// 140B5CF80: using guessed type __int64 (__fastcall *off_140B5CF80[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6C0: using guessed type __int128 xmmword_140B7B6C0;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 14016CE10: using guessed type char var_B0[8];


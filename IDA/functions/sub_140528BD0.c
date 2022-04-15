//----- (0000000140528BD0) ----------------------------------------------------
__int64 __fastcall sub_140528BD0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	_QWORD* v8; // r13
	_QWORD* v9; // rsi
	int* v10; // rax
	unsigned __int64 v11; // rbp
	int* v12; // rax
	_QWORD* v13; // r14
	int* v14; // rax
	__int64 v15; // rbx
	unsigned __int64 v16; // r12
	__int64 v17; // r14
	__int64 v18; // rbx
	__int64(__fastcall * **v19)(_QWORD); // rbx
	unsigned int v20; // eax
	__int64 v21; // r8
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64* v24; // rcx
	int* v25; // rax
	__int64 v26; // rsi
	unsigned int v27; // eax
	__int64 v28; // r8
	__int64 v29; // rdx
	int* v30; // rcx
	__int64 v31; // rbx
	void(__fastcall * **v32)(_QWORD); // rbx
	__int64 v33; // rcx
	bool v34; // zf
	__int64 v35; // rbx
	void(__fastcall * **v36)(_QWORD); // rbx
	__int64 v37; // rcx
	__int64 v38; // rbx
	void(__fastcall * **v39)(_QWORD); // rbx
	__int64 v40; // rcx
	__int64 v41; // rbx
	_QWORD* v42; // rsi
	void(__fastcall * **v43)(_QWORD); // rbx
	__int64 v44; // rcx
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64 v47; // rcx
	unsigned __int64 v48; // rdx
	unsigned int i; // ebp
	unsigned int v50; // eax
	__int64 v51; // rax
	__int64 v52; // rsi
	unsigned int v53; // ebx
	__int64 v54; // rax
	__int64 v55; // rdx
	unsigned int v56; // ecx
	__int64 v57; // rax
	__int64 v58; // rbx
	int* v59; // rcx
	__int64 v60; // rax
	__int64 v61; // rax
	__int64 v63; // [rsp+50h] [rbp-58h] BYREF
	int* v64; // [rsp+58h] [rbp-50h] BYREF
	int* v65; // [rsp+60h] [rbp-48h] BYREF
	__int64 v66[3]; // [rsp+68h] [rbp-40h] BYREF
	__int64 v67; // [rsp+B0h] [rbp+8h] BYREF

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	v8 = (_QWORD*)(a1 + 1032);
	*(_QWORD*)a1 = off_140B6C3C0;
	sub_1401095E0(a1 + 1032);
	v9 = (_QWORD*)(a1 + 1080);
	sub_1401095E0(a1 + 1080);
	*(__m128*)(a1 + 1136) = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v10 = sub_14018B280(48i64, 0);
	v11 = 0i64;
	*(_QWORD*)(a1 + 1168) = v10;
	*(_QWORD*)(a1 + 1176) = 0i64;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1168) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1168) + 16i64) = *(_QWORD*)(a1 + 1168);
	*(_QWORD*)(*(_QWORD*)(a1 + 1168) + 24i64) = *(_QWORD*)(a1 + 1168);
	*(_QWORD*)(a1 + 1208) = 0i64;
	*(_QWORD*)(a1 + 1200) = 0i64;
	*(_DWORD*)(a1 + 1216) = 0;
	*(_OWORD*)(a1 + 1248) = 0i64;
	*(_DWORD*)(a1 + 1268) = 1;
	*(_DWORD*)(a1 + 1272) = 5;
	*(_DWORD*)(a1 + 1344) = -1;
	v12 = sub_14018B280(896i64, 0);
	*(_QWORD*)(a1 + 1392) = 0i64;
	*(_QWORD*)(a1 + 1384) = v12;
	*(_BYTE*)v12 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1384) + 8i64) = 0i64;
	v13 = (_QWORD*)(a1 + 1472);
	*(_QWORD*)(*(_QWORD*)(a1 + 1384) + 16i64) = *(_QWORD*)(a1 + 1384);
	*(_QWORD*)(*(_QWORD*)(a1 + 1384) + 24i64) = *(_QWORD*)(a1 + 1384);
	*(_QWORD*)(a1 + 1416) = 0i64;
	*(_QWORD*)(a1 + 1424) = 0i64;
	*(_QWORD*)(a1 + 1432) = 0i64;
	*(_QWORD*)(a1 + 1440) = 0i64;
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	*(_QWORD*)(a1 + 1464) = 0i64;
	sub_1401095E0(a1 + 1472);
	sub_1401095E0(a1 + 1520);
	*(_DWORD*)(a1 + 1568) = 1;
	*(_QWORD*)(a1 + 1584) = 0i64;
	*(_QWORD*)(a1 + 1576) = 0i64;
	v14 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1608) = 0i64;
	*(_QWORD*)(a1 + 1600) = v14;
	*(_BYTE*)v14 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1600) + 8i64) = 0i64;
	v15 = qword_140C658F8;
	*(_QWORD*)(*(_QWORD*)(a1 + 1600) + 16i64) = *(_QWORD*)(a1 + 1600);
	*(_QWORD*)(*(_QWORD*)(a1 + 1600) + 24i64) = *(_QWORD*)(a1 + 1600);
	*(_QWORD*)(a1 + 432) |= 0x80000000ui64;
	if (v15)
		v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v15 + 104) + 16i64))(*(_QWORD*)(v15 + 104)) / 0xCui64;
	else
		v16 = 0i64;
	if (v16)
	{
		v17 = 0i64;
		do
		{
			v18 = qword_140C658F8;
			if (qword_140C658F8
				&& *(_QWORD*)(qword_140C658F8 + 16)
				&& v11 < (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 104) + 16i64))(*(_QWORD*)(qword_140C658F8 + 104))
				/ 0xCui64)
			{
				v19 = (__int64(__fastcall***)(_QWORD))(v17 + *(_QWORD*)(v18 + 16));
			}
			else
			{
				v19 = 0i64;
			}
			if (v19)
			{
				v20 = (**v19)(v19);
				v21 = *(_QWORD*)(a1 + 1168);
				v22 = *(_QWORD*)(v21 + 8);
				v23 = v21;
				while (v22)
				{
					if (*(_DWORD*)(v22 + 32) < v20)
					{
						v22 = *(_QWORD*)(v22 + 24);
					}
					else
					{
						v23 = v22;
						v22 = *(_QWORD*)(v22 + 16);
					}
				}
				if (v23 == v21 || v20 < *(_DWORD*)(v23 + 32))
				{
					v63 = *(_QWORD*)(a1 + 1168);
					v24 = &v63;
				}
				else
				{
					v67 = v23;
					v24 = &v67;
				}
				if (*v24 == *(_QWORD*)(a1 + 1168))
				{
					v25 = sub_14018B280(72i64, 0);
					if (v25)
						v26 = sub_140527F50((__int64)v25, (__int64)v19);
					else
						v26 = 0i64;
					v27 = (**v19)(v19);
					v28 = *(_QWORD*)(a1 + 1168);
					v29 = *(_QWORD*)(v28 + 8);
					v30 = (int*)v28;
					while (v29)
					{
						if (*(_DWORD*)(v29 + 32) < v27)
						{
							v29 = *(_QWORD*)(v29 + 24);
						}
						else
						{
							v30 = (int*)v29;
							v29 = *(_QWORD*)(v29 + 16);
						}
					}
					if (v30 == (int*)v28 || v27 < v30[8])
					{
						v64 = v30;
						LODWORD(v66[0]) = v27;
						v66[1] = 0i64;
						sub_140055C60(a1 + 1160, &v65, (__int64*)&v64, v66);
						v30 = v65;
					}
					*((_QWORD*)v30 + 5) = v26;
				}
			}
			++v11;
			v17 += 24i64;
		} while (v11 < v16);
		v8 = (_QWORD*)(a1 + 1032);
		v9 = (_QWORD*)(a1 + 1080);
		v13 = (_QWORD*)(a1 + 1472);
	}
	v31 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 1264) = 3;
	*(_QWORD*)(a1 + 1152) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	*(_QWORD*)(a1 + 1352) = 0i64;
	*(_QWORD*)(a1 + 1220) = 0i64;
	if (v31 && (!*v8 || !sub_14002C740((__int64)(v8 + 2), L"sprMap_PlayerArrow")))
	{
		v32 = (void(__fastcall***)(_QWORD))sub_140108E80(v31 + 240, (const __m128i*)L"sprMap_PlayerArrow");
		if (v32)
		{
			v33 = 0i64;
			do
				v34 = aSprmapPlayerar[++v33] == 0;
			while (!v34);
			sub_14001C480((__int64)(v8 + 2), (int*)L"sprMap_PlayerArrow", (int*)&aSprmapPlayerar[v33]);
		}
		if (v32 != (void(__fastcall***)(_QWORD)) * v8)
		{
			if (v32)
				(**v32)(v32);
			if (*v8)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
				*v8 = 0i64;
			}
			*v8 = v32;
		}
	}
	v35 = *(_QWORD*)(a1 + 32);
	if (v35 && (!*v9 || !sub_14002C740((__int64)(v9 + 2), L"sprMap_LabelBacker")))
	{
		v36 = (void(__fastcall***)(_QWORD))sub_140108E80(v35 + 240, (const __m128i*)L"sprMap_LabelBacker");
		if (v36)
		{
			v37 = 0i64;
			do
				v34 = aSprmapLabelbac[++v37] == 0;
			while (!v34);
			sub_14001C480((__int64)(v9 + 2), (int*)L"sprMap_LabelBacker", (int*)&aSprmapLabelbac[v37]);
		}
		if (v36 != (void(__fastcall***)(_QWORD)) * v9)
		{
			if (v36)
				(**v36)(v36);
			if (*v9)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v9 + 8i64))(*v9);
				*v9 = 0i64;
			}
			*v9 = v36;
		}
	}
	v38 = *(_QWORD*)(a1 + 32);
	if (v38 && (!*v13 || !sub_14002C740((__int64)(v13 + 2), L"sprMap_SuperMapEdgeLeft")))
	{
		v39 = (void(__fastcall***)(_QWORD))sub_140108E80(v38 + 240, (const __m128i*)L"sprMap_SuperMapEdgeLeft");
		if (v39)
		{
			v40 = 0i64;
			do
				v34 = aSprmapSupermap[++v40] == 0;
			while (!v34);
			sub_14001C480((__int64)(v13 + 2), (int*)L"sprMap_SuperMapEdgeLeft", (int*)&aSprmapSupermap[v40]);
		}
		if (v39 != (void(__fastcall***)(_QWORD)) * v13)
		{
			if (v39)
				(**v39)(v39);
			if (*v13)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v13 + 8i64))(*v13);
				*v13 = 0i64;
			}
			*v13 = v39;
		}
	}
	v41 = *(_QWORD*)(a1 + 32);
	if (v41)
	{
		v42 = (_QWORD*)(a1 + 1520);
		if (!*(_QWORD*)(a1 + 1520) || !sub_14002C740(a1 + 1536, L"sprMap_SuperMapEdgeRight"))
		{
			v43 = (void(__fastcall***)(_QWORD))sub_140108E80(v41 + 240, (const __m128i*)L"sprMap_SuperMapEdgeRight");
			if (v43)
			{
				v44 = 0i64;
				do
					v34 = aSprmapSupermap_0[++v44] == 0;
				while (!v34);
				sub_14001C480(a1 + 1536, (int*)L"sprMap_SuperMapEdgeRight", (int*)&aSprmapSupermap_0[v44]);
			}
			if (v43 != (void(__fastcall***)(_QWORD)) * v42)
			{
				if (v43)
					(**v43)(v43);
				if (*v42)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v42 + 8i64))(*v42);
					*v42 = 0i64;
				}
				*v42 = v43;
			}
		}
	}
	v45 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 1328) = 0;
	*(_QWORD*)(a1 + 1332) = 1i64;
	*(_DWORD*)(a1 + 1340) = 1;
	*(_QWORD*)(a1 + 1408) = 5i64;
	v46 = sub_1400E58C0(v45, (int*)L"Default");
	v47 = *(_QWORD*)(a1 + 688);
	*(_QWORD*)(a1 + 696) = v46;
	if (v47)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v47 + 40i64))(v47, *(_QWORD*)(v46 + 96));
	v48 = *(unsigned int*)(a1 + 1408);
	*(_DWORD*)(a1 + 1280) = 1145569280;
	*(_DWORD*)(a1 + 1284) = 1140457472;
	*(_DWORD*)(a1 + 1296) = 1156005888;
	*(_DWORD*)(a1 + 1300) = 1150681088;
	*(_DWORD*)(a1 + 676) = 1;
	sub_140538AB0((__int64*)(a1 + 1576), v48);
	(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 1456);
	(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\ZoneMapPS.sho",
		a1 + 1464);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		2i64,
		(unsigned int)(*(_DWORD*)(a1 + 1408) + 3),
		1i64,
		0,
		1,
		0,
		0,
		0,
		a1 + 1432,
		v63);
	(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		L"UI\\Textures\\ZoneMapHexes.tex",
		0i64,
		1i64,
		2,
		0,
		0,
		0,
		a1 + 1440);
	sub_14052A510(a1);
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v50 = qword_140C63838(off_140A6B400, qword_140C63858);
			goto LABEL_96;
		}
		if (dword_140C651F8 || (int)sub_140213660() < 0)
			break;
		v50 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63890 + 40i64))(qword_140C63890);
	LABEL_96:
		if (i >= v50)
			return a1;
		if (qword_140C63848)
		{
			v51 = qword_140C63848(off_140A6B400, i, qword_140C63858);
		}
		else
		{
			if (dword_140C651F8)
			{
				v52 = 0i64;
				goto LABEL_105;
			}
			if ((int)sub_140213660() < 0)
			{
				v52 = 0i64;
				goto LABEL_105;
			}
			v51 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63890 + 32i64))(qword_140C63890, i);
		}
		v52 = v51;
	LABEL_105:
		v53 = *(_DWORD*)(v52 + 4);
		if (qword_140C63840)
		{
			v54 = qword_140C63840(off_140A6B390, v53, qword_140C63858);
		}
		else
		{
			if (dword_140C63A98 || (int)sub_140212DE0() < 0)
				continue;
			v54 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64888 + 24i64))(qword_140C64888, v53);
		}
		if (v54)
		{
			v55 = *(_QWORD*)(a1 + 1600);
			v56 = *(_DWORD*)(v54 + 4);
			v57 = *(_QWORD*)(v55 + 8);
			LODWORD(v66[0]) = v56;
			v58 = v55;
			while (v57)
			{
				v58 = v57;
				if (v56 >= *(_DWORD*)(v57 + 32))
					v57 = *(_QWORD*)(v57 + 24);
				else
					v57 = *(_QWORD*)(v57 + 16);
			}
			if (v58 == v55 || v56 < *(_DWORD*)(v58 + 32))
			{
				v59 = sub_14018B280(48i64, 0);
				if (v59 != (int*)-32i64)
				{
					*((_QWORD*)v59 + 4) = v66[0];
					*((_QWORD*)v59 + 5) = v52;
				}
				*(_QWORD*)(v58 + 16) = v59;
				v61 = *(_QWORD*)(a1 + 1600);
				if (v58 == v61)
				{
					*(_QWORD*)(v61 + 8) = v59;
					*(_QWORD*)(*(_QWORD*)(a1 + 1600) + 24i64) = v59;
				}
				else if (v58 == *(_QWORD*)(v61 + 16))
				{
					*(_QWORD*)(v61 + 16) = v59;
				}
			}
			else
			{
				v59 = sub_14018B280(48i64, 0);
				if (v59 != (int*)-32i64)
				{
					*((_QWORD*)v59 + 4) = v66[0];
					*((_QWORD*)v59 + 5) = v52;
				}
				*(_QWORD*)(v58 + 24) = v59;
				v60 = *(_QWORD*)(a1 + 1600);
				if (v58 == *(_QWORD*)(v60 + 24))
					*(_QWORD*)(v60 + 24) = v59;
			}
			*((_QWORD*)v59 + 1) = v58;
			*((_QWORD*)v59 + 2) = 0i64;
			*((_QWORD*)v59 + 3) = 0i64;
			sub_1400081C0((__int64)v59, (_QWORD*)(*(_QWORD*)(a1 + 1600) + 8i64));
			++* (_QWORD*)(a1 + 1608);
		}
	}
	return a1;
}
// 14052946F: conditional instruction was optimized away because rax.8==0
// 140A6B390: using guessed type wchar_t *off_140A6B390[2];
// 140A6B400: using guessed type wchar_t *off_140A6B400[2];
// 140B12FC0: using guessed type wchar_t aShadersZonemap[22];
// 140B12FF0: using guessed type wchar_t aShadersSimplep_10[21];
// 140B13060: using guessed type wchar_t aUiTexturesZone[29];
// 140B130A0: using guessed type wchar_t aSprmapSupermap[24];
// 140B130D0: using guessed type wchar_t aSprmapLabelbac[19];
// 140B130F8: using guessed type wchar_t aDefault_15[8];
// 140B13108: using guessed type wchar_t aSprmapSupermap_0[25];
// 140B131B0: using guessed type wchar_t aSprmapPlayerar[19];
// 140B6C3C0: using guessed type __int64 (__fastcall *off_140B6C3C0[25])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63890: using guessed type __int64 qword_140C63890;
// 140C63A98: using guessed type int dword_140C63A98;
// 140C64888: using guessed type __int64 qword_140C64888;
// 140C651F8: using guessed type int dword_140C651F8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C658F8: using guessed type __int64 qword_140C658F8;


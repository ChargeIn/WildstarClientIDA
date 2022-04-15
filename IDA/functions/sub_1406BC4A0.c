//----- (00000001406BC4A0) ----------------------------------------------------
__int64 __fastcall sub_1406BC4A0(__int64 a1, __int64 a2, __int64 a3, _OWORD* a4, __int64 a5, __int64 a6)
{
	__int64 v8; // r14
	void(__fastcall * **v9)(_QWORD); // r14
	__int64 v10; // r8
	bool v11; // zf
	__int64 v12; // rbx
	void(__fastcall * **v13)(_QWORD); // rbx
	__int64 v14; // r8
	__int64 v15; // rbx
	void(__fastcall * **v16)(_QWORD); // rbx
	__int64 v17; // r8
	__int64 v18; // rbx
	void(__fastcall * **v19)(_QWORD); // rbx
	__int64 v20; // r8
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rcx
	__int64 v33; // rax
	_WORD* v34; // rax
	__int64 v35; // rax
	_WORD* v36; // rax
	int v37; // r8d
	int v38; // r9d
	__int64 v39; // rax
	_WORD* v40; // rax
	__int64 v41; // rax
	__int64 v42; // rsi
	int v43; // ebx
	int v44; // ebx
	int v45; // ebx
	int v46; // ebx
	__int64 v48; // [rsp+50h] [rbp-19h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-11h] BYREF
	__int128 v50; // [rsp+60h] [rbp-9h]
	__int64(__fastcall * *v51)(); // [rsp+70h] [rbp+7h] BYREF
	__int128 v52; // [rsp+78h] [rbp+Fh]
	int v53; // [rsp+C0h] [rbp+57h] BYREF

	sub_1400C5920(a1, a2, a3, 0i64, a4, a5, 0i64);
	*(_QWORD*)a1 = off_140B70300;
	sub_140771790((__int64*)(a1 + 1024), a2);
	*(_QWORD*)(a1 + 1872) = 1065353216i64;
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 0i64;
	*(_QWORD*)(a1 + 2224) = 0i64;
	*(_QWORD*)(a1 + 2232) = 0i64;
	*(_QWORD*)(a1 + 2240) = 0i64;
	*(_QWORD*)(a1 + 2248) = 0i64;
	*(_QWORD*)(a1 + 2256) = 0i64;
	*(_QWORD*)(a1 + 2264) = 0i64;
	*(_QWORD*)(a1 + 2272) = 0i64;
	*(_QWORD*)(a1 + 2320) = 0i64;
	*(_QWORD*)(a1 + 2328) = 0i64;
	*(_QWORD*)(a1 + 2336) = 0i64;
	*(_QWORD*)(a1 + 2344) = 0i64;
	*(_QWORD*)(a1 + 2352) = 0i64;
	*(_QWORD*)(a1 + 2416) = 0i64;
	*(_QWORD*)(a1 + 2312) = 0i64;
	*(_QWORD*)(a1 + 2424) = 0i64;
	*(_QWORD*)(a1 + 2432) = 0i64;
	*(_QWORD*)(a1 + 2440) = 0i64;
	sub_1401095E0(a1 + 2448);
	sub_1401095E0(a1 + 2496);
	sub_1401095E0(a1 + 2544);
	sub_1401095E0(a1 + 2592);
	v8 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 0x40000000ui64;
	if (v8 && (!*(_QWORD*)(a1 + 2448) || !sub_14002C740(a1 + 2464, L"sprMM_PlayerMarker")))
	{
		v9 = (void(__fastcall***)(_QWORD))sub_140108E80(v8 + 240, (const __m128i*)L"sprMM_PlayerMarker");
		if (v9)
		{
			v10 = 0i64;
			do
				v11 = aSprmmPlayermar[++v10] == 0;
			while (!v11);
			sub_14001C480(a1 + 2464, (int*)L"sprMM_PlayerMarker", (int*)&aSprmmPlayermar[v10]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2448), v9);
	}
	v12 = *(_QWORD*)(a1 + 32);
	if (v12 && (!*(_QWORD*)(a1 + 2496) || !sub_14002C740(a1 + 2512, L"MiniMapCameraCone")))
	{
		v13 = (void(__fastcall***)(_QWORD))sub_140108E80(v12 + 240, (const __m128i*)L"MiniMapCameraCone");
		if (v13)
		{
			v14 = 0i64;
			do
				v11 = aMinimapcamerac[++v14] == 0;
			while (!v11);
			sub_14001C480(a1 + 2512, (int*)L"MiniMapCameraCone", (int*)&aMinimapcamerac[v14]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2496), v13);
	}
	v15 = *(_QWORD*)(a1 + 32);
	if (v15 && (!*(_QWORD*)(a1 + 2544) || !sub_14002C740(a1 + 2560, L"MiniMapCompass")))
	{
		v16 = (void(__fastcall***)(_QWORD))sub_140108E80(v15 + 240, (const __m128i*)L"MiniMapCompass");
		if (v16)
		{
			v17 = 0i64;
			do
				v11 = aMinimapcompass[++v17] == 0;
			while (!v11);
			sub_14001C480(a1 + 2560, (int*)L"MiniMapCompass", (int*)&aMinimapcompass[v17]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2544), v16);
	}
	v18 = *(_QWORD*)(a1 + 32);
	if (v18 && (!*(_QWORD*)(a1 + 2592) || !sub_14002C740(a1 + 2608, L"MiniMapCompassOverlay")))
	{
		v19 = (void(__fastcall***)(_QWORD))sub_140108E80(v18 + 240, (const __m128i*)L"MiniMapCompassOverlay");
		if (v19)
		{
			v20 = 0i64;
			do
				v11 = aMinimapcompass_0[++v20] == 0;
			while (!v11);
			sub_14001C480(a1 + 2608, (int*)L"MiniMapCompassOverlay", (int*)&aMinimapcompass_0[v20]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2592), v19);
	}
	*(_DWORD*)(a1 + 2640) = 5;
	*(_QWORD*)(a1 + 2280) = 0i64;
	*(_QWORD*)(a1 + 2288) = 0i64;
	*(_QWORD*)(a1 + 2296) = 0i64;
	*(_DWORD*)(a1 + 2304) = 0;
	if (!*(_QWORD*)(a1 + 608))
	{
		v21 = (__int64)sub_14018B280(112i64, 0);
		if (v21)
			v21 = sub_1400C5690(v21);
		*(_QWORD*)(a1 + 608) = v21;
	}
	v22 = *(_QWORD*)(a1 + 608);
	if (v22)
		*(_DWORD*)(v22 + 40) = 1048576000;
	if (!*(_QWORD*)(a1 + 608))
	{
		v23 = (__int64)sub_14018B280(112i64, 0);
		if (v23)
			v23 = sub_1400C5690(v23);
		*(_QWORD*)(a1 + 608) = v23;
	}
	v24 = *(_QWORD*)(a1 + 608);
	if (v24)
		*(_DWORD*)(v24 + 36) = 1048576000;
	v25 = *(_QWORD*)(a1 + 16);
	if (v25)
	{
		if (!*(_QWORD*)(v25 + 608))
		{
			v26 = (__int64)sub_14018B280(112i64, 0);
			if (v26)
				v26 = sub_1400C5690(v26);
			*(_QWORD*)(v25 + 608) = v26;
		}
		v27 = *(_QWORD*)(v25 + 608);
		if (v27)
			*(_DWORD*)(v27 + 40) = 1048576000;
		v28 = *(_QWORD*)(a1 + 16);
		if (!*(_QWORD*)(v28 + 608))
		{
			v29 = (__int64)sub_14018B280(112i64, 0);
			if (v29)
				v29 = sub_1400C5690(v29);
			*(_QWORD*)(v28 + 608) = v29;
		}
		v30 = *(_QWORD*)(v28 + 608);
		if (v30)
			*(_DWORD*)(v30 + 36) = 1048576000;
	}
	v31 = a6;
	v32 = a6;
	*(_QWORD*)(a1 + 1904) = -1i64;
	v53 = 0;
	v33 = sub_1401A6B80(v32, L"CircularItems");
	if (v33)
	{
		v34 = (_WORD*)sub_1401A4F40(v33 + 32);
		sub_1407DF428(v34, (__int64)L"%d", &v53);
	}
	v11 = v53 == 0;
	*(_DWORD*)(a1 + 1880) = 1065353216;
	*(_DWORD*)(a1 + 2280) = !v11;
	v35 = sub_1401A6B80(v31, L"ItemRadius");
	if (v35)
	{
		v36 = (_WORD*)sub_1401A4F40(v35 + 32);
		sub_1407DF428(v36, (__int64)L"%f", a1 + 1880);
	}
	*(_DWORD*)(a1 + 2304) = *(_DWORD*)(a1 + 1880);
	v37 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
	v38 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
	*(_QWORD*)(a1 + 2284) = qword_140C77760;
	*(_DWORD*)(a1 + 2292) = v37;
	*(_DWORD*)(a1 + 2296) = v38;
	v39 = sub_1401A6B80(v31, L"MapOrientation");
	if (v39)
	{
		v40 = (_WORD*)sub_1401A4F40(v39 + 32);
		sub_1407DF428(v40, (__int64)L"%d", a1 + 2300);
	}
	v41 = sub_1401A6B80(v31, L"Mask");
	if (v41)
		v42 = sub_1401A4F40(v41 + 32);
	else
		v42 = 0i64;
	if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1i64,
		1i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 2336) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v50 = 0i64;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v51 = TlsValue;
		v48 = 0x141E32B40i64;
		v52 = v50;
		v43 = sub_140197770(13, &v48, &v51);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v43)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		v42,
		0i64,
		1i64,
		1,
		256,
		0,
		0,
		a1 + 2312) < 0
		&& (*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			1i64,
			1i64,
			1i64,
			0,
			1,
			0,
			256,
			0,
			a1 + 2312) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v50 = 0i64;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v51 = TlsValue;
		v48 = 0x141E32B90i64;
		v52 = v50;
		v44 = sub_140197770(13, &v48, &v51);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v44)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimpleCbPS.sho",
		a1 + 2424) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v50 = 0i64;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v51 = TlsValue;
		v48 = 0x141E32AF0i64;
		v52 = v50;
		v45 = sub_140197770(13, &v48, &v51);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v45)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\UIOverlayMaskPS.sho",
		a1 + 2432) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v50 = 0i64;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v51 = TlsValue;
		v48 = 0x141E32A70i64;
		v52 = v50;
		v46 = sub_140197770(13, &v48, &v51);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v46)
			DebugBreak();
	}
	sub_1406BFC00(a1);
	sub_1406BD0D0(a1);
	return a1;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140B383F8: using guessed type wchar_t aShadersUioverl_3[28];
// 140B38480: using guessed type wchar_t aShadersSimplec_0[23];
// 140B38598: using guessed type wchar_t aMaporientation[15];
// 140B385B8: using guessed type wchar_t aMask_3[5];
// 140B385C8: using guessed type wchar_t aCircularitems[14];
// 140B385E8: using guessed type wchar_t aItemradius[11];
// 140B38600: using guessed type wchar_t aMinimapcompass[15];
// 140B38620: using guessed type wchar_t aMinimapcompass_0[22];
// 140B38650: using guessed type wchar_t aSprmmPlayermar[19];
// 140B38678: using guessed type wchar_t aMinimapcamerac[18];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B70300: using guessed type __int64 (__fastcall *off_140B70300[25])();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;


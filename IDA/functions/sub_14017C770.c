//----- (000000014017C770) ----------------------------------------------------
__int64 __fastcall sub_14017C770(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	bool v8; // zf
	_DWORD* v9; // rax
	__int64 v10; // rax
	int v11; // eax
	int v12; // edx
	int v13; // eax
	__int128 v14; // xmm1
	int v15; // eax
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	int v18; // eax
	__int128 v19; // xmm0
	int v20; // eax
	__int128 v21; // xmm1
	__m128 v22; // xmm0
	int v23; // ebx
	int v24; // ebx
	int v25; // ebx
	int v26; // ebx
	__int128* TlsValue; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v29; // [rsp+60h] [rbp-A8h]
	__int128* v30; // [rsp+78h] [rbp-90h] BYREF
	__int128 v31; // [rsp+80h] [rbp-88h]
	__int64 v32[2]; // [rsp+98h] [rbp-70h] BYREF
	__int64(__fastcall * *v33)(); // [rsp+A8h] [rbp-60h] BYREF
	const wchar_t* v34; // [rsp+B0h] [rbp-58h]
	LPVOID lpTlsValue; // [rsp+B8h] [rbp-50h]
	const wchar_t* v36; // [rsp+C0h] [rbp-48h]
	__int64 v37[4]; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v38; // [rsp+E8h] [rbp-20h] BYREF
	__int128 v39; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v40; // [rsp+108h] [rbp+0h] BYREF
	__int128 v41[2]; // [rsp+118h] [rbp+10h] BYREF
	int v42; // [rsp+138h] [rbp+30h]
	__int128 v43; // [rsp+148h] [rbp+40h]
	__int128 v44; // [rsp+158h] [rbp+50h]
	int v45; // [rsp+168h] [rbp+60h]
	__int128 v46; // [rsp+178h] [rbp+70h]
	__int128 v47; // [rsp+188h] [rbp+80h]
	int v48; // [rsp+198h] [rbp+90h]
	__int64 v49[22]; // [rsp+1A8h] [rbp+A0h] BYREF

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	*(_QWORD*)(a1 + 1024) = 1i64;
	*(_DWORD*)(a1 + 1040) = 1065353216;
	*(_QWORD*)(a1 + 1044) = 1065353216i64;
	*(_QWORD*)a1 = off_140B5DD10;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_DWORD*)(a1 + 1052) = 0;
	*(_OWORD*)(a1 + 1072) = xmmword_140C78390;
	*(_OWORD*)(a1 + 1088) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 1104) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1120) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 1200) = xmmword_140C78390;
	*(_OWORD*)(a1 + 1216) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 1232) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1248) = xmmword_140C783C0;
	sub_1407E4830((int*)(a1 + 1264), 0i64, 0x310ui64);
	*(_QWORD*)(a1 + 432) |= 0x2000ui64;
	v8 = *(_BYTE*)(a1 + 29) >= 0;
	*(_DWORD*)(a1 + 2048) = 1;
	*(_DWORD*)(a1 + 2052) = 61;
	*(_QWORD*)(a1 + 2056) = 0i64;
	*(_QWORD*)(a1 + 2088) = 0i64;
	*(_QWORD*)(a1 + 2104) = 0i64;
	*(_QWORD*)(a1 + 2120) = 0i64;
	*(_QWORD*)(a1 + 2064) = 0i64;
	*(_DWORD*)(a1 + 2072) = 1;
	*(_DWORD*)(a1 + 2076) = 1;
	*(_DWORD*)(a1 + 2080) = 1;
	*(_QWORD*)(a1 + 2096) = 0i64;
	*(_QWORD*)(a1 + 2112) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	*(_QWORD*)(a1 + 2136) = 0i64;
	*(_QWORD*)(a1 + 2144) = 0i64;
	*(_WORD*)(a1 + 2152) = 0;
	*(_QWORD*)(a1 + 2156) = 0i64;
	*(_QWORD*)(a1 + 2172) = 0i64;
	*(_DWORD*)(a1 + 2180) = 0;
	if (v8)
	{
		v9 = sub_1400CB0E0(a1, v32, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v9;
		*(_DWORD*)(a1 + 400) = v9[1];
		*(_DWORD*)(a1 + 404) = v9[2];
		*(_DWORD*)(a1 + 408) = v9[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v10 = a1;
		do
		{
			if (!*(_DWORD*)(v10 + 392))
				break;
			*(_DWORD*)(v10 + 392) = 0;
			v10 = *(_QWORD*)(v10 + 16);
		} while (v10);
	}
	v11 = *(_DWORD*)(a1 + 408);
	v12 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	*(_DWORD*)(a1 + 1048) = v12;
	v13 = v11 - *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 1052) = v13;
	TlsValue = &v38;
	*(_QWORD*)&v29 = &v39;
	v38 = xmmword_140B7B070;
	*((_QWORD*)&v29 + 1) = &v40;
	v49[0] = (__int64)&v38;
	v49[2] = (__int64)&v40;
	*(float*)(a1 + 1056) = (float)v12 / (float)v13;
	v40 = xmmword_140B7A4B0;
	v39 = xmmword_140B7AFE0;
	v49[1] = v29;
	sub_1401AEFA0((__int64)v49, (__int64)v41);
	v14 = v41[1];
	v15 = v42;
	*(_OWORD*)(a1 + 1264) = v41[0];
	v16 = v43;
	*(_OWORD*)(a1 + 1280) = v14;
	v17 = v44;
	*(_DWORD*)(a1 + 1296) = v15;
	v18 = v45;
	*(_OWORD*)(a1 + 1312) = v16;
	v19 = v46;
	*(_OWORD*)(a1 + 1328) = v17;
	*(_DWORD*)(a1 + 1344) = v18;
	v20 = v48;
	v21 = v47;
	*(_OWORD*)(a1 + 1360) = v19;
	v22 = (__m128)(unsigned int)dword_140C3B438;
	*(_OWORD*)(a1 + 1376) = v21;
	*(_DWORD*)(a1 + 1392) = v20;
	*(_OWORD*)(a1 + 1408) = xmmword_140B7B180;
	*(_OWORD*)(a1 + 1424) = xmmword_140B7B1A0;
	*(_DWORD*)(a1 + 1952) = 1098907648;
	v22.m128_f32[0] = (float)(v22.m128_f32[0] * 0.0055555557) * 24.75;
	v22.m128_f32[0] = sub_1408FE3D0(*(double*)v22.m128_u64);
	*(__m128*)(a1 + 1440) = _mm_unpacklo_ps((__m128)xmmword_140B7A490, _mm_unpacklo_ps(v22, (__m128)0i64));
	*(_DWORD*)(a1 + 1960) = 1120403456;
	*(_DWORD*)(a1 + 1964) = 1125515264;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\UIOverlayMaskPS.sho",
		a1 + 2144) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v29 = 0i64;
		*((_QWORD*)&v29 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30 = TlsValue;
		v31 = v29;
		v33 = &off_140B5E648;
		v34 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v33);
		v37[1] = (__int64)v34;
		v36 = L"Shaders\\UIOverlayMaskPS.sho";
		v37[3] = (__int64)L"Shaders\\UIOverlayMaskPS.sho";
		v33 = &off_140B5E638;
		v37[0] = (__int64)&off_140B5E638;
		v32[0] = 0x141D36918i64;
		v37[2] = (__int64)lpTlsValue;
		v23 = sub_140197770(13, v32, v37, &v30);
		v33 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v29 + 1));
		if (v23)
			DebugBreak();
	}
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
		a1 + 2088) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v29 = 0i64;
		*((_QWORD*)&v29 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30 = TlsValue;
		v32[0] = 0x141D368D0i64;
		v31 = v29;
		v24 = sub_140197770(13, v32, &v30);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v29 + 1));
		if (v24)
			DebugBreak();
	}
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
		a1 + 2104) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v29 = 0i64;
		*((_QWORD*)&v29 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30 = TlsValue;
		v32[0] = 0x141D36A40i64;
		v31 = v29;
		v25 = sub_140197770(13, v32, &v30);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v29 + 1));
		if (v25)
			DebugBreak();
	}
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
		a1 + 2120) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v29 = 0i64;
		*((_QWORD*)&v29 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30 = TlsValue;
		v32[0] = 0x141D36A00i64;
		v31 = v29;
		v26 = sub_140197770(13, v32, &v30);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v29 + 1));
		if (v26)
			DebugBreak();
	}
	sub_1401807E0(a1);
	return a1;
}
// 140A3C1F8: using guessed type wchar_t aShadersUioverl_0[28];
// 140A3C230: using guessed type wchar_t aShadersUioverl[28];
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5DD10: using guessed type __int64 (__fastcall *off_140B5DD10[25])();
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AFE0: using guessed type __int128 xmmword_140B7AFE0;
// 140B7B070: using guessed type __int128 xmmword_140B7B070;
// 140B7B180: using guessed type __int128 xmmword_140B7B180;
// 140B7B1A0: using guessed type __int128 xmmword_140B7B1A0;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;


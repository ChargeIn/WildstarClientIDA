//----- (00000001404F4BC0) ----------------------------------------------------
__int64 __fastcall sub_1404F4BC0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	int* v8; // rax
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
	int v27; // ebx
	__int128* TlsValue; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v30; // [rsp+60h] [rbp-A8h]
	__int64 v31[3]; // [rsp+70h] [rbp-98h] BYREF
	__int64 v32; // [rsp+88h] [rbp-80h] BYREF
	__int128 v33; // [rsp+90h] [rbp-78h]
	__int64 v34; // [rsp+A0h] [rbp-68h]
	int v35; // [rsp+A8h] [rbp-60h]
	__int128 v36; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v37; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v38; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v39[2]; // [rsp+E8h] [rbp-20h] BYREF
	int v40; // [rsp+108h] [rbp+0h]
	__int128 v41; // [rsp+118h] [rbp+10h]
	__int128 v42; // [rsp+128h] [rbp+20h]
	int v43; // [rsp+138h] [rbp+30h]
	__int128 v44; // [rsp+148h] [rbp+40h]
	__int128 v45; // [rsp+158h] [rbp+50h]
	int v46; // [rsp+168h] [rbp+60h]
	__int64 v47[22]; // [rsp+178h] [rbp+70h] BYREF

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	*(_QWORD*)a1 = off_140B69F70;
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1040) = 1i64;
	*(_QWORD*)(a1 + 1048) = 7864i64;
	*(_DWORD*)(a1 + 1056) = 1065353216;
	*(_QWORD*)(a1 + 1060) = 1065353216i64;
	*(_DWORD*)(a1 + 1068) = 0;
	*(__m256*)(a1 + 1088) = ymmword_140C78390;
	*(_OWORD*)(a1 + 1120) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1136) = xmmword_140C783C0;
	*(__m256*)(a1 + 1152) = ymmword_140C78390;
	*(_OWORD*)(a1 + 1184) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1200) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 1216) = qword_140C79888;
	*(__m256*)(a1 + 1232) = ymmword_140C78390;
	*(_OWORD*)(a1 + 1264) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1280) = xmmword_140C783C0;
	sub_1407E4830((int*)(a1 + 1296), 0i64, 0x310ui64);
	*(_DWORD*)(a1 + 2080) = 1;
	*(_QWORD*)(a1 + 2088) = 0i64;
	*(_QWORD*)(a1 + 2096) = 0i64;
	*(_DWORD*)(a1 + 2104) = 1;
	*(_DWORD*)(a1 + 2108) = 1;
	*(_DWORD*)(a1 + 2112) = 1;
	*(_QWORD*)(a1 + 2120) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	*(_QWORD*)(a1 + 2136) = 0i64;
	*(_QWORD*)(a1 + 2144) = 0i64;
	*(_QWORD*)(a1 + 2152) = 0i64;
	*(_QWORD*)(a1 + 2160) = 0i64;
	*(_QWORD*)(a1 + 2168) = 0i64;
	*(_QWORD*)(a1 + 2176) = 0i64;
	*(_QWORD*)(a1 + 2184) = 0i64;
	*(_QWORD*)(a1 + 2192) = 0i64;
	*(_DWORD*)(a1 + 2200) = 0;
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 0i64;
	*(_DWORD*)(a1 + 2224) = 0;
	sub_1400522F0((_QWORD*)(a1 + 2232));
	*(_QWORD*)(a1 + 2272) = 0i64;
	*(_QWORD*)(a1 + 2280) = 0i64;
	*(_DWORD*)(a1 + 2288) = 0;
	*(_QWORD*)(a1 + 2300) = 0i64;
	*(_QWORD*)(a1 + 2328) = 0i64;
	sub_14002E3F0(a1 + 2336);
	*(_QWORD*)(a1 + 7216) = 0i64;
	*(_QWORD*)(a1 + 7224) = 0i64;
	*(_QWORD*)(a1 + 7232) = 0i64;
	v8 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 7248) = v8;
	*(_QWORD*)(a1 + 7256) = 0i64;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 7248) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 7248) + 16i64) = *(_QWORD*)(a1 + 7248);
	*(_QWORD*)(*(_QWORD*)(a1 + 7248) + 24i64) = *(_QWORD*)(a1 + 7248);
	*(_QWORD*)(a1 + 7280) = 0i64;
	*(_QWORD*)(a1 + 7288) = 0i64;
	*(_QWORD*)(a1 + 7296) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x2000000ui64;
	if (*(char*)(a1 + 29) >= 0)
	{
		v9 = sub_1400CB0E0(a1, v31, a1 + 64);
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
	*(_DWORD*)(a1 + 1064) = v12;
	v13 = v11 - *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 1068) = v13;
	TlsValue = &v37;
	*(_QWORD*)&v30 = &v38;
	v37 = xmmword_140B7B070;
	*((_QWORD*)&v30 + 1) = &v36;
	v47[0] = (__int64)&v37;
	v47[2] = (__int64)&v36;
	*(float*)(a1 + 1072) = (float)v12 / (float)v13;
	v36 = xmmword_140B7A4B0;
	v38 = xmmword_140B7AFE0;
	v47[1] = v30;
	sub_1401AEFA0((__int64)v47, (__int64)v39);
	v14 = v39[1];
	v15 = v40;
	*(_OWORD*)(a1 + 1296) = v39[0];
	v16 = v41;
	*(_OWORD*)(a1 + 1312) = v14;
	v17 = v42;
	*(_DWORD*)(a1 + 1328) = v15;
	v18 = v43;
	*(_OWORD*)(a1 + 1344) = v16;
	v19 = v44;
	*(_OWORD*)(a1 + 1360) = v17;
	*(_DWORD*)(a1 + 1376) = v18;
	v20 = v46;
	v21 = v45;
	*(_OWORD*)(a1 + 1392) = v19;
	v22 = (__m128)(unsigned int)dword_140C3B438;
	*(_OWORD*)(a1 + 1408) = v21;
	*(_DWORD*)(a1 + 1424) = v20;
	*(_OWORD*)(a1 + 1440) = xmmword_140B7B180;
	*(_OWORD*)(a1 + 1456) = xmmword_140B7B1A0;
	*(_DWORD*)(a1 + 1984) = 1098907648;
	v22.m128_f32[0] = (float)(v22.m128_f32[0] * 0.0055555557) * 24.75;
	v22.m128_f32[0] = sub_1408FE3D0(*(double*)v22.m128_u64);
	*(__m128*)(a1 + 1472) = _mm_unpacklo_ps((__m128)xmmword_140B7A490, _mm_unpacklo_ps(v22, (__m128)0i64));
	*(_DWORD*)(a1 + 1992) = 1120403456;
	*(_DWORD*)(a1 + 1996) = 1125515264;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 2208) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v32 = (__int64)TlsValue;
		v31[0] = 0x141E08F10i64;
		v33 = v30;
		v23 = sub_140197770(13, v31, &v32);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v23)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\UIOverlayMaskPS.sho",
		a1 + 2216) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v32 = (__int64)TlsValue;
		v31[0] = 0x141E09150i64;
		v33 = v30;
		v24 = sub_140197770(13, v31, &v32);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
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
		a1 + 2120) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v32 = (__int64)TlsValue;
		v31[0] = 0x141E09210i64;
		v33 = v30;
		v25 = sub_140197770(13, v31, &v32);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
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
		a1 + 2136) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v32 = (__int64)TlsValue;
		v31[0] = 0x141E091B0i64;
		v33 = v30;
		v26 = sub_140197770(13, v31, &v32);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v26)
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
		a1 + 2152) < 0)
	{
		TlsValue = (__int128*)&off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v32 = (__int64)TlsValue;
		v31[0] = 0x141E09020i64;
		v33 = v30;
		v27 = sub_140197770(13, v31, &v32);
		TlsValue = (__int128*)&off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v27)
			DebugBreak();
	}
	v32 = 0x500000014i64;
	*(_QWORD*)&v33 = a1;
	*((_QWORD*)&v33 + 1) = sub_1404F5AA0;
	v34 = 0i64;
	v35 = 1;
	sub_14019DCA0((__int64)&v32, 1, 0i64, (int**)(a1 + 2328));
	sub_1404F5840(a1);
	sub_1404FFA00(a1);
	return a1;
}
// 140B0E888: using guessed type wchar_t aShadersSimplep_9[21];
// 140B0E9A8: using guessed type wchar_t aShadersUioverl_2[28];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B69F70: using guessed type __int64 (__fastcall *off_140B69F70[25])();
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AFE0: using guessed type __int128 xmmword_140B7AFE0;
// 140B7B070: using guessed type __int128 xmmword_140B7B070;
// 140B7B180: using guessed type __int128 xmmword_140B7B180;
// 140B7B1A0: using guessed type __int128 xmmword_140B7B1A0;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C79888: using guessed type __int64 qword_140C79888;


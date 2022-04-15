//----- (00000001400E2EF0) ----------------------------------------------------
__int64 __fastcall sub_1400E2EF0(__int64 a1, __m128i* a2, __m128i* a3, __int64 a4, __int64 a5)
{
	_QWORD* v5; // rbx
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	__int64 v17; // rax
	int* v18; // rax
	int* v19; // rax
	int* v20; // rax
	int* v21; // rax
	int* v22; // rax
	int* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rdx
	_DWORD* v26; // rcx
	__int64 v27; // r8
	int v28; // eax
	int* v29; // rax
	int* v30; // rax
	int* v31; // rax
	int* v32; // rax
	int* v33; // rax
	int* v34; // rax
	int* v35; // rax
	_QWORD* v36; // rax
	__int64 v37; // rcx
	_QWORD* v38; // rax
	HDC CompatibleDC; // rax
	HDC v40; // rbx
	int* v41; // rax
	_QWORD* v42; // rax
	__int64* v43; // rax
	__int64 v44; // rdx
	__int64* v45; // rax
	int v46; // eax
	int v47; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-69h] BYREF
	__int128 v50; // [rsp+28h] [rbp-61h]
	__int64 v51[3]; // [rsp+38h] [rbp-51h] BYREF
	__int64(__fastcall * *v52)(); // [rsp+50h] [rbp-39h] BYREF
	__int128 v53; // [rsp+58h] [rbp-31h]
	_QWORD v54[4]; // [rsp+70h] [rbp-19h] BYREF
	_QWORD v55[4]; // [rsp+90h] [rbp+7h] BYREF
	__int64 v56; // [rsp+E0h] [rbp+57h] BYREF

	v5 = (_QWORD*)(a1 + 8);
	*(_QWORD*)a1 = off_140B567D0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	v5[1] = v10;
	v5[2] = v10;
	v5[3] = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	v11 = sub_14018B280(24i64, 0);
	if (v11)
	{
		*(_QWORD*)v11 = off_140B55048;
		v11[2] = 1;
		*((_QWORD*)v11 + 2) = a1;
		*(_QWORD*)v11 = off_140B55048;
	}
	else
	{
		v11 = 0i64;
	}
	*(_QWORD*)(a1 + 40) = v11;
	*(_DWORD*)(a1 + 48) = 0;
	*(_WORD*)(a1 + 52) = 0;
	*(_DWORD*)(a1 + 60) = 0x2000;
	*(_DWORD*)(a1 + 56) = 1366;
	*(_DWORD*)(a1 + 64) = 768;
	*(_QWORD*)(a1 + 68) = 0x2000i64;
	*(_DWORD*)(a1 + 76) = 0;
	*(_DWORD*)(a1 + 92) = 1065353216;
	*(_QWORD*)(a1 + 96) = -1i64;
	*(_WORD*)(a1 + 104) = 0;
	*(_DWORD*)(a1 + 108) = 2;
	v12 = sub_14018B280(32i64, 0);
	*(_QWORD*)(a1 + 120) = v12;
	*(_QWORD*)v12 = v12;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = *(_QWORD*)(a1 + 120);
	v13 = sub_14018B280(32i64, 0);
	*(_QWORD*)(a1 + 136) = v13;
	*(_QWORD*)v13 = v13;
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = *(_QWORD*)(a1 + 136);
	v14 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 152) = v14;
	*(_BYTE*)v14 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 152) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 152) + 16i64) = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(*(_QWORD*)(a1 + 152) + 24i64) = *(_QWORD*)(a1 + 152);
	v15 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 184) = v15;
	*(_BYTE*)v15 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 184) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 184) + 16i64) = *(_QWORD*)(a1 + 184);
	*(_QWORD*)(*(_QWORD*)(a1 + 184) + 24i64) = *(_QWORD*)(a1 + 184);
	v16 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 216) = v16;
	*(_BYTE*)v16 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 16i64) = *(_QWORD*)(a1 + 216);
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 24i64) = *(_QWORD*)(a1 + 216);
	sub_140108BC0((_QWORD*)(a1 + 240));
	v17 = qword_140C63650 + 152;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 376) = v17;
	*(_QWORD*)(a1 + 368) = 0i64;
	sub_1400F16E0(a1 + 384);
	*(_QWORD*)(a1 + 2488) = 0i64;
	*(_BYTE*)(a1 + 2496) = 0;
	*(_QWORD*)(a1 + 2504) = 0i64;
	*(_QWORD*)(a1 + 2520) = 0i64;
	*(_QWORD*)(a1 + 2512) = 0i64;
	*(_QWORD*)(a1 + 2528) = 0i64;
	v18 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 2544) = v18;
	*(_QWORD*)(a1 + 2552) = 0i64;
	*(_BYTE*)v18 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 16i64) = *(_QWORD*)(a1 + 2544);
	*(_QWORD*)(*(_QWORD*)(a1 + 2544) + 24i64) = *(_QWORD*)(a1 + 2544);
	*(_DWORD*)(a1 + 2572) = 0;
	*(_BYTE*)(a1 + 2576) = 0;
	*(_QWORD*)(a1 + 2592) = 0i64;
	*(_QWORD*)(a1 + 2584) = off_140B5C6B0;
	v19 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 2616) = 0i64;
	*(_QWORD*)(a1 + 2608) = v19;
	*(_BYTE*)v19 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 16i64) = *(_QWORD*)(a1 + 2608);
	*(_QWORD*)(*(_QWORD*)(a1 + 2608) + 24i64) = *(_QWORD*)(a1 + 2608);
	v20 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 2640) = v20;
	*(_QWORD*)v20 = v20;
	*(_QWORD*)(*(_QWORD*)(a1 + 2640) + 8i64) = *(_QWORD*)(a1 + 2640);
	v21 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 2672) = 0i64;
	*(_QWORD*)(a1 + 2664) = v21;
	*(_BYTE*)v21 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 16i64) = *(_QWORD*)(a1 + 2664);
	*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 24i64) = *(_QWORD*)(a1 + 2664);
	*(_QWORD*)(a1 + 2648) = 0i64;
	*(_QWORD*)(a1 + 2688) = &off_140B569E0;
	*(_QWORD*)(a1 + 2696) = 0i64;
	v22 = sub_14018B280(80i64, 0);
	*(_QWORD*)(a1 + 2712) = v22;
	*(_QWORD*)(a1 + 2720) = 0i64;
	*(_BYTE*)v22 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2712) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2712) + 16i64) = *(_QWORD*)(a1 + 2712);
	*(_QWORD*)(*(_QWORD*)(a1 + 2712) + 24i64) = *(_QWORD*)(a1 + 2712);
	sub_1400ED8F0((_QWORD*)(a1 + 2736), 0i64);
	*(_QWORD*)(a1 + 2784) = 0i64;
	*(_QWORD*)(a1 + 2776) = 0i64;
	v23 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 2808) = 0i64;
	*(_QWORD*)(a1 + 2800) = v23;
	*(_BYTE*)v23 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 16i64) = *(_QWORD*)(a1 + 2800);
	*(_QWORD*)(*(_QWORD*)(a1 + 2800) + 24i64) = *(_QWORD*)(a1 + 2800);
	v24 = qword_140C63650;
	*(_WORD*)(a1 + 2825) = 0;
	*(_BYTE*)(a1 + 2841) = 0;
	*(_QWORD*)(a1 + 2848) = 0i64;
	*(_QWORD*)(a1 + 2880) = 0i64;
	*(_QWORD*)(a1 + 2832) = v24 + 716;
	*(_QWORD*)(a1 + 2888) = 0i64;
	*(_DWORD*)(a1 + 2904) = 0;
	*(_BYTE*)(a1 + 2908) = 0;
	*(_QWORD*)(a1 + 2928) = 0i64;
	v25 = a1 + 2960;
	*(_DWORD*)(a1 + 3024) = 0;
	v26 = (_DWORD*)(a1 + 3008);
	v27 = 4i64;
	do
	{
		v28 = *(_DWORD*)((char*)v26 + (_QWORD)((char*)&unk_140A14E90 - a1 - 2944) - 64);
		*v26 = 0;
		v25 += 8i64;
		*(v26 - 4) = v28;
		*(_QWORD*)(v25 - 8) = 0i64;
		++v26;
		--v27;
	} while (v27);
	*(_DWORD*)(a1 + 3024) |= 0x300u;
	*(_DWORD*)(a1 + 3040) = 1065353216;
	*(_QWORD*)(a1 + 3044) = 1065353216i64;
	*(_QWORD*)(a1 + 3052) = 0i64;
	*(_DWORD*)(a1 + 3060) = 0;
	*(_QWORD*)(a1 + 3208) = 0i64;
	*(_QWORD*)(a1 + 3200) = 0i64;
	*(_BYTE*)(a1 + 3216) = 0;
	v29 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 3232) = v29;
	*(_QWORD*)v29 = v29;
	*(_QWORD*)(*(_QWORD*)(a1 + 3232) + 8i64) = *(_QWORD*)(a1 + 3232);
	v30 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 3248) = v30;
	*(_QWORD*)v30 = v30;
	*(_QWORD*)(*(_QWORD*)(a1 + 3248) + 8i64) = *(_QWORD*)(a1 + 3248);
	v31 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 3272) = 0i64;
	*(_QWORD*)(a1 + 3264) = v31;
	*(_BYTE*)v31 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 16i64) = *(_QWORD*)(a1 + 3264);
	*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 24i64) = *(_QWORD*)(a1 + 3264);
	v32 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 3304) = 0i64;
	*(_QWORD*)(a1 + 3296) = v32;
	*(_BYTE*)v32 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 3296) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 3296) + 16i64) = *(_QWORD*)(a1 + 3296);
	*(_QWORD*)(*(_QWORD*)(a1 + 3296) + 24i64) = *(_QWORD*)(a1 + 3296);
	*(_QWORD*)(a1 + 3320) = a5;
	v33 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 3344) = 0i64;
	*(_QWORD*)(a1 + 3336) = v33;
	*(_BYTE*)v33 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 16i64) = *(_QWORD*)(a1 + 3336);
	*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 24i64) = *(_QWORD*)(a1 + 3336);
	sub_1400E14F0(a1 + 3368);
	v34 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 3560) = v34;
	*(_QWORD*)(a1 + 3568) = 0i64;
	*(_BYTE*)v34 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 3560) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 3560) + 16i64) = *(_QWORD*)(a1 + 3560);
	*(_QWORD*)(*(_QWORD*)(a1 + 3560) + 24i64) = *(_QWORD*)(a1 + 3560);
	*(_QWORD*)(a1 + 3584) = 0i64;
	v35 = sub_14018B280(80i64, 0);
	*(_QWORD*)(a1 + 3600) = v35;
	*(_QWORD*)(a1 + 3608) = 0i64;
	*(_BYTE*)v35 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 16i64) = *(_QWORD*)(a1 + 3600);
	*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 24i64) = *(_QWORD*)(a1 + 3600);
	if (a4)
	{
		v38 = sub_14018EFA0(v55, (__int64)L"%s #%d", a4, (unsigned int)dword_140C8A0BC);
		if (v38 != v5)
			sub_14001C480((__int64)v5, (int*)v38[1], (int*)v38[2]);
		v37 = v55[1];
	}
	else
	{
		v36 = sub_14018EFA0(v54, (__int64)L"ApolloMgr #%d", (unsigned int)dword_140C8A0BC);
		if (v36 != v5)
			sub_14001C480((__int64)v5, (int*)v36[1], (int*)v36[2]);
		v37 = v54[1];
	}
	if (v37)
		sub_14018B900(v37, 0);
	++dword_140C8A0BC;
	CompatibleDC = CreateCompatibleDC(0i64);
	v40 = CompatibleDC;
	if (CompatibleDC)
	{
		*(float*)(a1 + 3040) = (float)GetDeviceCaps(CompatibleDC, 90) * 0.010416667;
		DeleteDC(v40);
	}
	v41 = sub_14018B280(88i64, 0);
	if (v41)
		v42 = sub_140154210(v41, a1);
	else
		v42 = 0i64;
	*(_QWORD*)(a1 + 360) = v42;
	sub_1401549C0((__int64)v42, a3);
	v43 = (__int64*)sub_14018B280(464i64, 0);
	if (v43)
		v45 = sub_14010D990(v43, a1);
	else
		v45 = 0i64;
	*(_QWORD*)(a1 + 368) = v45;
	*(_QWORD*)(a1 + 2648) = a1;
	*(_QWORD*)(a1 + 3368) = a1;
	v51[0] = 0i64;
	v51[1] = 0i64;
	sub_1400F1A80(a1 + 384, v44, v51);
	*(_BYTE*)(a1 + 2840) = 1;
	*(_DWORD*)(a1 + 2876) = 0;
	*(_DWORD*)(a1 + 2920) = 0;
	*(_QWORD*)(a1 + 2912) = 0i64;
	*(_QWORD*)(a1 + 2896) = 0i64;
	*(_OWORD*)(a1 + 3136) = xmmword_140C78390;
	*(_OWORD*)(a1 + 3152) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 3168) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 3184) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 3072) = *(_OWORD*)(a1 + 3136);
	*(_OWORD*)(a1 + 3088) = *(_OWORD*)(a1 + 3152);
	*(_OWORD*)(a1 + 3104) = *(_OWORD*)(a1 + 3168);
	*(_OWORD*)(a1 + 3120) = *(_OWORD*)(a1 + 3184);
	if (*(_BYTE*)(a1 + 2825))
	{
		v46 = *(_DWORD*)(a1 + 60);
		*(_DWORD*)(a1 + 3048) = 1112014848;
		*(_DWORD*)(a1 + 3052) = 1112014848;
		*(_DWORD*)(a1 + 3056) = 1112014848;
		if (v46 > 1366)
			v46 = 1366;
		*(_DWORD*)(a1 + 3060) = 1112014848;
		*(_DWORD*)(a1 + 56) = v46;
	}
	*(_DWORD*)(a1 + 2856) = 0;
	*(_DWORD*)(a1 + 2860) = 1;
	*(_DWORD*)(a1 + 2864) = 2;
	*(_DWORD*)(a1 + 2868) = 3;
	*(_DWORD*)(a1 + 2872) = 4;
	*(_QWORD*)(a1 + 2936) = 0i64;
	sub_1400F4850(a1 + 2688, a1);
	*(_QWORD*)(*(_QWORD*)(a1 + 376) + 8i64) = a1;
	*(_QWORD*)(a1 + 240) = a1;
	*(_QWORD*)(a1 + 2592) = a1;
	*(_BYTE*)(a1 + 2824) = 0;
	sub_1400E4200(a1, a2);
	if (!*(_QWORD*)(a1 + 2784))
	{
		*(_QWORD*)&v50 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v52 = TlsValue;
		v56 = 0x141D11870i64;
		v53 = v50;
		v47 = sub_1401971E0(&dword_140C8A0B8, 13, &v56, &v52);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v47)
			DebugBreak();
	}
	sub_140119860(a1);
	(**(void(__fastcall***)(__int64))a1)(a1);
	sub_14015AF00(*(_QWORD**)(a1 + 400));
	sub_140142F50(*(_QWORD**)(a1 + 400));
	sub_1400E63A0(a1);
	sub_1400EB040(a1, (int*)"OneSecTimer", 1000, 1);
	sub_1400EB040(a1, (int*)"TenSecTimer", 10000, 1);
	sub_1400E2170(qword_140C63650, a1);
	sub_1400E63A0(a1);
	return a1;
}
// 1400E365D: variable 'v44' is possibly undefined
// 140A17220: using guessed type wchar_t aSD_1[7];
// 140A17288: using guessed type wchar_t aApollomgrD[14];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B567D0: using guessed type __int64 (__fastcall *off_140B567D0[7])();
// 140B569E0: using guessed type __int64 (__fastcall *off_140B569E0)(int, int, int, int, char, int);
// 140B5C6B0: using guessed type __int64 (__fastcall *off_140B5C6B0[10])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8A0B8: using guessed type _DWORD dword_140C8A0B8;
// 140C8A0BC: using guessed type int dword_140C8A0BC;


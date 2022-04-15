#include "../winhttp.h"

//----- (00000001403E70D0) ----------------------------------------------------
__int64 __fastcall sub_1403E70D0(__int64 a1, unsigned int a2, _OWORD* a3)
{
	__int64 v5; // rax
	unsigned __int64 v7; // rcx
	int* v8; // rsi
	const __m128i* v9; // rax
	const __m128i* v10; // rax
	__int64 v11; // r15
	int v12; // edi
	int v13; // ebx
	int* v14; // rbx
	__m128i* v15; // r14
	void(__fastcall * **v16)(_QWORD); // r12
	int* v17; // rdi
	int v18; // eax
	const __m128i* v19; // r15
	int v20; // eax
	int v21; // r10d
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	const __m128i* v36; // rax
	__int64 v37; // rax
	int* v38; // rax
	__int64 v39; // rax
	int v40; // xmm0_4
	__int64 v41; // rax
	int v42; // xmm0_4
	__int64 v43; // rax
	__m128 v44; // xmm0
	__m128 v45; // xmm1
	__int64 v46; // rax
	int v47; // xmm0_4
	__int64 v48; // rax
	int v49; // xmm0_4
	__int64 v50; // rax
	int v51; // xmm0_4
	__int64 v52; // rax
	__m128 v53; // xmm0
	void(__fastcall * **v54)(_QWORD); // rcx
	void(__fastcall * **v55)(_QWORD); // rcx
	void(__fastcall * **v56)(_QWORD); // rcx
	void(__fastcall * **v57)(_QWORD); // rcx
	void(__fastcall * **v58)(_QWORD); // rcx
	void(__fastcall * **v59)(_QWORD); // rcx
	void(__fastcall * **v60)(_QWORD); // rcx
	void(__fastcall * **v61)(_QWORD); // rcx
	__int64 v62; // rcx
	__int64 v63; // rcx
	unsigned int v64; // r13d
	__int64 v65; // [rsp+30h] [rbp-D0h]
	void(__fastcall * **v66)(_QWORD); // [rsp+30h] [rbp-D0h]
	const __m128i* v67; // [rsp+38h] [rbp-C8h] BYREF
	__m128i* v68; // [rsp+40h] [rbp-C0h] BYREF
	__m128i* v69; // [rsp+48h] [rbp-B8h] BYREF
	int* v70; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v71; // [rsp+58h] [rbp-A8h] BYREF
	const __m128i* v72; // [rsp+60h] [rbp-A0h] BYREF
	int* v73; // [rsp+68h] [rbp-98h] BYREF
	int* v74; // [rsp+70h] [rbp-90h] BYREF
	int* v75; // [rsp+78h] [rbp-88h] BYREF
	int* v76; // [rsp+80h] [rbp-80h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+88h] [rbp-78h] BYREF
	__int64 v78; // [rsp+90h] [rbp-70h]
	LPVOID Value; // [rsp+98h] [rbp-68h]
	__int128 v80; // [rsp+A0h] [rbp-60h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+B0h] [rbp-50h]
	_OWORD* v82; // [rsp+C0h] [rbp-40h]
	__int128 v83; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v84; // [rsp+E0h] [rbp-20h]
	__int64 v85; // [rsp+F0h] [rbp-10h]
	__int64 v86; // [rsp+F8h] [rbp-8h]
	int v87; // [rsp+100h] [rbp+0h]
	__int64 v88[4]; // [rsp+110h] [rbp+10h] BYREF
	char v89[528]; // [rsp+130h] [rbp+30h] BYREF

	v82 = a3;
	v5 = sub_14024ACC0(a2);
	v71 = v5;
	if (!v5)
		return 2147500037i64;
	v7 = *(_QWORD*)(v5 + 8);
	v8 = 0i64;
	if (v7)
	{
		if (v7 <= qword_140C3FE70)
			v9 = (const __m128i*)(v7 + qword_140C3FE68);
		else
			v9 = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v65 = (__int64)v9;
	v10 = sub_1407DD8D8(v9, 0x5Cu);
	v11 = (__int64)v10;
	v67 = v10;
	if (v10)
	{
		v11 = (__int64)v10->m128i_i64 + 2;
		v67 = (const __m128i*) & v10->m128i_i8[2];
	}
	v12 = sub_140633380(a1, a2);
	if (v12 < 0)
	{
		v78 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v88[0] = (__int64)TlsValue;
		v88[1] = v78;
		*(_QWORD*)&v80 = &off_140B5E648;
		*((_QWORD*)&v80 + 1) = L"Result";
		v88[2] = (__int64)Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v80);
		LODWORD(lpTlsValue[1]) = v12;
		*(_QWORD*)&v80 = &off_140B5E640;
		v84 = *(_OWORD*)lpTlsValue;
		v71 = 0x141DF2710i64;
		v83 = v80;
		v13 = sub_1401971E0(&dword_140C8A778, 5, &v71, &v83, v88);
		*(_QWORD*)&v80 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v13)
			DebugBreak();
		return (unsigned int)v12;
	}
	v14 = 0i64;
	v69 = 0i64;
	v15 = 0i64;
	v68 = 0i64;
	v72 = 0i64;
	v16 = 0i64;
	v74 = 0i64;
	v75 = 0i64;
	v70 = 0i64;
	v17 = 0i64;
	v73 = 0i64;
	v76 = 0i64;
	v18 = sub_1402D9AB0(v65, v11, (const __m128i**) & v69);
	v19 = v69;
	if (v18 < 0)
		goto LABEL_106;
	if ((*(_BYTE*)(v71 + 16) & 1) == 0)
	{
		sub_14001B370(v89, 260i64, L"%s_Low", v67);
		v20 = sub_1402D9AB0(v65, (__int64)v89, (const __m128i**) & v68);
		v15 = v68;
		v21 = v20;
		if (v20 < 0)
			goto LABEL_107;
	}
	v21 = (*(__int64(__fastcall**)(const __m128i*, const __m128i**))(v19->m128i_i64[0] + 200))(v19, &v72);
	if (v21 < 0)
		goto LABEL_107;
	v83 = xmmword_140C42A08;
	v84 = xmmword_140C42A18;
	v85 = qword_140C42A28;
	v86 = qword_140C42A30;
	v87 = dword_140C42A38;
	sub_14043DDB0(a1, &v83);
	v69 = (__m128i*)qword_140C65878;
	v68 = (__m128i*)v72;
	if (!qword_140C65878 || !v72)
		goto LABEL_106;
	v22 = (__int64)sub_14018B280(6240i64, 0);
	if (v22)
		v22 = sub_140351A20(v22, v69);
	v66 = (void(__fastcall***)(_QWORD))v22;
	LODWORD(v68) = sub_140353720(v22, v68, v15, (__int64)&v83, 0i64);
	if ((int)v68 < 0)
	{
		if (v66)
		{
			sub_1403522C0((__int64)v66);
			sub_14018B900((__int64)v66, 0);
		}
		goto LABEL_106;
	}
	v16 = v66;
	((void(__fastcall*)(void(__fastcall***)(_QWORD), void(__fastcall*)(int, __int64), __int64))(*v66)[41])(
		v66,
		sub_14043E900,
		a1);
	((void(__fastcall*)(void(__fastcall***)(_QWORD), void(__fastcall*)(__int64, int), __int64))(*v16)[42])(
		v16,
		sub_14043E960,
		a1);
	((void(__fastcall*)(void(__fastcall***)(_QWORD), _QWORD, __int64))(*v16)[43])(v16, sub_1406134B0, a1);
	((void(__fastcall*)(void(__fastcall***)(_QWORD), _QWORD * (__fastcall*)(__int64), __int64))(*v16)[44])(
		v16,
		sub_14043ECB0,
		a1);
	if ((int)sub_1407B6140(v66, &v74) < 0 || (int)sub_1407B6140(v66, &v75) < 0)
	{
	LABEL_106:
		sub_1400035B0();
		goto LABEL_107;
	}
	if ((int)sub_1407B6140(v66, &v70) < 0)
	{
		sub_1400035B0();
		v14 = v70;
	LABEL_107:
		v64 = v21;
		goto LABEL_108;
	}
	if ((int)sub_1407B6140(v66, &v73) < 0)
	{
		sub_1400035B0();
		v14 = v70;
		v17 = v73;
		goto LABEL_107;
	}
	if ((int)sub_1407B6140(v66, &v76) < 0)
	{
		sub_1400035B0();
		v14 = v70;
		v17 = v73;
		v8 = v76;
		goto LABEL_107;
	}
	sub_140559130(a1 + 28848);
	sub_1405A7700(a1 + 27976);
	sub_140019490((_QWORD*)(a1 + 27976));
	sub_14062B990((_QWORD*)(a1 + 29088));
	while (*(_QWORD*)(a1 + 25408))
	{
		v23 = *(_QWORD*)(a1 + 25408);
		if (v23)
		{
			sub_14054A080(*(_QWORD*)(a1 + 25408));
			sub_14018B900(v23, 0);
		}
	}
	while (*(_QWORD*)(a1 + 25416))
	{
		v24 = *(_QWORD*)(a1 + 25416);
		if (v24)
		{
			sub_14054A080(*(_QWORD*)(a1 + 25416));
			sub_14018B900(v24, 0);
		}
	}
	v25 = *(_QWORD*)(a1 + 29248);
	if (v25)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		*(_QWORD*)(a1 + 29248) = 0i64;
	}
	v26 = *(_QWORD*)(a1 + 29256);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		*(_QWORD*)(a1 + 29256) = 0i64;
	}
	v27 = *(_QWORD*)(a1 + 28608);
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		*(_QWORD*)(a1 + 28608) = 0i64;
	}
	v28 = *(_QWORD*)(a1 + 28616);
	if (v28)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		*(_QWORD*)(a1 + 28616) = 0i64;
	}
	v29 = *(_QWORD*)(a1 + 28624);
	if (v29)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
		*(_QWORD*)(a1 + 28624) = 0i64;
	}
	v30 = *(_QWORD*)(a1 + 28632);
	if (v30)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
		*(_QWORD*)(a1 + 28632) = 0i64;
	}
	v31 = *(_QWORD*)(a1 + 28640);
	if (v31)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
		*(_QWORD*)(a1 + 28640) = 0i64;
	}
	v32 = *(_QWORD*)(a1 + 25832);
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		*(_QWORD*)(a1 + 25832) = 0i64;
	}
	v33 = *(_QWORD*)(a1 + 26160);
	if (v33)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
		*(_QWORD*)(a1 + 26160) = 0i64;
	}
	v34 = *(_QWORD*)(a1 + 26168);
	if (v34)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		*(_QWORD*)(a1 + 26168) = 0i64;
	}
	v35 = *(_QWORD*)(a1 + 29264);
	if (v35)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
		*(_QWORD*)(a1 + 29264) = 0i64;
	}
	v69 = *(__m128i**)(a1 + 29304);
	v67 = (const __m128i*)v69[1].m128i_i64[0];
	sub_1403FC3F0((__int64*)&v67, &v69);
	sub_140008410(a1 + 29296);
	v36 = v72;
	*(_QWORD*)(a1 + 29256) = v66;
	*(_QWORD*)(a1 + 29248) = v36;
	v37 = ((__int64(__fastcall*)(_QWORD))(*v66)[4])(v66);
	v14 = v70;
	v17 = v73;
	v8 = v76;
	*(_QWORD*)(a1 + 29264) = v37;
	*(_QWORD*)(a1 + 28608) = v74;
	v38 = v75;
	*(_QWORD*)(a1 + 28624) = v14;
	*(_QWORD*)(a1 + 28632) = v17;
	*(_QWORD*)(a1 + 28640) = v8;
	*(_QWORD*)(a1 + 28616) = v38;
	v39 = sub_140200220(0x423u);
	if (v39)
		v40 = *(_DWORD*)(v39 + 24);
	else
		v40 = 1048693441;
	*(_DWORD*)(a1 + 28672) = v40;
	v41 = sub_140200220(0x423u);
	if (v41)
		v42 = *(_DWORD*)(v41 + 28);
	else
		v42 = 1073142877;
	*(_DWORD*)(a1 + 28676) = v42;
	v43 = sub_140200220(0x423u);
	if (v43)
		v44 = (__m128) * (unsigned int*)(v43 + 32);
	else
		v44 = (__m128)0x3E460AA6u;
	v45 = (__m128) * (unsigned int*)(a1 + 28672);
	*(_DWORD*)(a1 + 28680) = v44.m128_i32[0];
	*(__m128*)(a1 + 28656) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(
			_mm_xor_ps(v45, (__m128)xmmword_140B7B530),
			_mm_xor_ps(v44, (__m128)xmmword_140B7B530)),
		(__m128)0i64);
	v46 = sub_140200220(0x424u);
	if (v46)
		v47 = *(_DWORD*)(v46 + 24);
	else
		v47 = 1061158912;
	*(_DWORD*)(a1 + 28704) = v47;
	v48 = sub_140200220(0x424u);
	if (v48)
		v49 = *(_DWORD*)(v48 + 28);
	else
		v49 = 1077936128;
	*(_DWORD*)(a1 + 28708) = v49;
	v50 = sub_140200220(0x424u);
	if (v50)
		v51 = *(_DWORD*)(v50 + 36);
	else
		v51 = 1075838976;
	*(_DWORD*)(a1 + 28712) = v51;
	v52 = sub_140200220(0x424u);
	if (v52)
		v53 = (__m128) * (unsigned int*)(v52 + 32);
	else
		v53 = (__m128)0xBF800000;
	*(__m128*)(a1 + 28688) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128) * (unsigned int*)(a1 + 28704), (__m128)xmmword_140B7B530),
			v53),
		(__m128)0i64);
	sub_1403A0980(a1);
	v54 = *(void(__fastcall****)(_QWORD))(a1 + 29248);
	if (v54)
		(**v54)(v54);
	v55 = *(void(__fastcall****)(_QWORD))(a1 + 29256);
	if (v55)
		(**v55)(v55);
	v56 = *(void(__fastcall****)(_QWORD))(a1 + 29264);
	if (v56)
		(**v56)(v56);
	v57 = *(void(__fastcall****)(_QWORD))(a1 + 28608);
	if (v57)
		(**v57)(v57);
	v58 = *(void(__fastcall****)(_QWORD))(a1 + 28616);
	if (v58)
		(**v58)(v58);
	v59 = *(void(__fastcall****)(_QWORD))(a1 + 28624);
	if (v59)
		(**v59)(v59);
	v60 = *(void(__fastcall****)(_QWORD))(a1 + 28632);
	if (v60)
		(**v60)(v60);
	v61 = *(void(__fastcall****)(_QWORD))(a1 + 28640);
	if (v61)
		(**v61)(v61);
	*(_QWORD*)(a1 + 29272) = v71;
	*(_OWORD*)(a1 + 29280) = *v82;
	dword_140C89AA0 = 0;
	v62 = *(_QWORD*)(a1 + 28792);
	if (v62)
		sub_1403B7290(v62);
	v63 = *(_QWORD*)(a1 + 28800);
	*(_QWORD*)(a1 + 28792) = 0i64;
	if (v63)
		sub_1403B7290(v63);
	*(_QWORD*)(a1 + 28800) = 0i64;
	v21 = sub_1403E5C80(a1);
	if (v21 < 0)
		goto LABEL_107;
	sub_1405A6880((_QWORD*)a1);
	*(_DWORD*)(a1 + 31560) = 0;
	sub_1405DF340(a1 + 26680);
	v64 = 0;
LABEL_108:
	if (v8)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v8 + 8i64))(v8);
	if (v17)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v17 + 8i64))(v17);
	if (v14)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v14 + 8i64))(v14);
	if (v75)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v75 + 8i64))(v75);
	if (v74)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v74 + 8i64))(v74);
	if (v16)
		(*v16)[1](v16);
	if (v72)
		(*(void(__fastcall**)(const __m128i*))(v72->m128i_i64[0] + 8))(v72);
	if (v15)
		(*(void(__fastcall**)(__m128i*))(v15->m128i_i64[0] + 8))(v15);
	if (v19)
		(*(void(__fastcall**)(const __m128i*))(v19->m128i_i64[0] + 8))(v19);
	return v64;
}
// 1403E7A4D: variable 'v21' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AF8100: using guessed type wchar_t aSLow[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C42A08: using guessed type __int128 xmmword_140C42A08;
// 140C42A18: using guessed type __int128 xmmword_140C42A18;
// 140C42A28: using guessed type __int64 qword_140C42A28;
// 140C42A30: using guessed type __int64 qword_140C42A30;
// 140C42A38: using guessed type int dword_140C42A38;
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C89AA0: using guessed type int dword_140C89AA0;
// 140C8A778: using guessed type _DWORD dword_140C8A778;


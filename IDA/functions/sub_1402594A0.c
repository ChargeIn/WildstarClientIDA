#include "../winhttp.h"

//----- (00000001402594A0) ----------------------------------------------------
__int64 __fastcall sub_1402594A0(__int64 a1, unsigned __int64 a2, _OWORD* a3, _QWORD* a4, float a5, int a6, _DWORD* a7)
{
	bool v7; // zf
	int v10; // ebx
	__int64 result; // rax
	__int64 v12; // rax
	_DWORD* v13; // rax
	int* v14; // r14
	int v15; // edx
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx
	__int64 v20; // rax
	int v21; // r12d
	int v22; // ebx
	signed int v23; // edx
	signed int v24; // ecx
	__m128i v25; // xmm0
	__m128i v26; // xmm3
	int v27; // xmm1_4
	int v28; // eax
	int v29; // eax
	int v30; // xmm0_4
	__int64 v31; // rdx
	__int64 v32; // r8
	__int128* v33; // rax
	__int64 v34; // rcx
	__int128 v35; // xmm0
	__int128* v36; // rax
	__int128 v37; // xmm0
	__int64 v38; // rax
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rax
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // rax
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v51; // rax
	_OWORD* v52; // rax
	__int64 v53; // rdx
	__m128* v54; // rax
	unsigned __int64 v55; // rcx
	__int64 v56; // rdx
	__int64 v57; // r8
	__int64 v58; // r9
	__m128 v59; // xmm0
	__m128 v60; // xmm0
	__m128 v61; // xmm1
	__m128 v62; // xmm5
	__m128 v63; // xmm4
	__m128 v64; // xmm5
	__m128 v65; // xmm0
	__m128 v66; // xmm2
	__m128 v67; // xmm0
	__m128 v68; // xmm7
	__m128 v69; // xmm4
	__m128 v70; // xmm6
	__m128 v71; // xmm5
	float* v72; // rax
	__m128 v73; // xmm2
	__m128* v74; // rax
	__int64 v75; // rcx
	__m128 v76; // xmm3
	__m128 v77; // xmm2
	__m128* v78; // rax
	__m128 v79; // xmm0
	__m128i v80; // xmm3
	__m128i v81; // xmm4
	float v82; // xmm2_4
	float v83; // xmm1_4
	float v84; // xmm0_4
	float v85; // xmm0_4
	float v86; // xmm0_4
	__m128 v87; // xmm2
	__m128 v88; // xmm3
	__m128 v89; // xmm0
	__int64 v90; // rax
	__int64* v91; // rcx
	__int64 v92; // rax
	_OWORD* v93; // rax
	__int64 v94; // rcx
	__int128 v95; // xmm1
	__int128 v96; // xmm1
	__int128 v97; // xmm1
	int v98; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v99; // [rsp+38h] [rbp-C8h]
	int v100; // [rsp+44h] [rbp-BCh]
	int v101; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v102; // [rsp+50h] [rbp-B0h]
	int v103; // [rsp+5Ch] [rbp-A4h]
	_OWORD TlsValue[2]; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v105; // [rsp+80h] [rbp-80h] BYREF
	__int64 v106; // [rsp+88h] [rbp-78h] BYREF
	__int64 v107; // [rsp+90h] [rbp-70h] BYREF
	__int128 v108; // [rsp+98h] [rbp-68h]
	_OWORD* v109; // [rsp+B0h] [rbp-50h]
	__int128 v110; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v111; // [rsp+D0h] [rbp-30h]
	__int128 v112; // [rsp+E0h] [rbp-20h]
	__int128 v113; // [rsp+F0h] [rbp-10h]
	__int128 v114; // [rsp+100h] [rbp+0h]
	__int128 v115; // [rsp+110h] [rbp+10h]
	__m128 v116[6]; // [rsp+120h] [rbp+20h] BYREF

	v7 = *(_DWORD*)(a1 + 44) == 0;
	v109 = a3;
	v105 = a2;
	if (!v7)
	{
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		*((_QWORD*)&TlsValue[0] + 1) = 0i64;
		*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v107 = *(_QWORD*)&TlsValue[0];
		v105 = 0x141DDEF20i64;
		v108 = *(_OWORD*)((char*)TlsValue + 8);
		v10 = sub_1401971E0(dword_140C8A2A8, 14, &v105, &v107);
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
		if (v10)
			DebugBreak();
		return 2147500037i64;
	}
	v12 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 44) = 1;
	LODWORD(TlsValue[0]) = -1;
	(*(void(__fastcall**)(__int64, _OWORD*))(v12 + 32))(a1, TlsValue);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v13 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v14 = (int*)(a1 + 1608);
	*(_DWORD*)(a1 + 2304) = *v13;
	*(_DWORD*)(a1 + 2308) = v13[1];
	*(_DWORD*)(a1 + 2312) = v13[2];
	*(_DWORD*)(a1 + 2316) = v13[3];
	*(_DWORD*)(a1 + 2320) = v13[4];
	*(_DWORD*)(a1 + 2324) = v13[5];
	LODWORD(v13) = *(_DWORD*)(a1 + 2316);
	v15 = (int)(float)((float)*(int*)(a1 + 2312) * a5);
	*(_DWORD*)(a1 + 1616) = v15;
	v16 = (int)(float)((float)(int)v13 * a5);
	*(_DWORD*)(a1 + 1620) = v16;
	if (v15 < (int)qword_140C77768)
		v15 = qword_140C77768;
	*(_DWORD*)(a1 + 1616) = v15;
	if (v16 < SHIDWORD(qword_140C77768))
		v16 = HIDWORD(qword_140C77768);
	*(_DWORD*)(a1 + 1620) = v16;
	if (v15 < *v14)
		v15 = *v14;
	*v14 = v15;
	v17 = *(_DWORD*)(a1 + 1620);
	if (v17 < *(_DWORD*)(a1 + 1612))
		v17 = *(_DWORD*)(a1 + 1612);
	*(_DWORD*)(a1 + 1612) = v17;
	v18 = *v14;
	if (*v14 < *(_DWORD*)(a1 + 1600))
		v18 = *(_DWORD*)(a1 + 1600);
	LODWORD(v106) = v18;
	v19 = *(_DWORD*)(a1 + 1612);
	if (v19 < *(_DWORD*)(a1 + 1604))
		v19 = *(_DWORD*)(a1 + 1604);
	v20 = *(_QWORD*)(a1 + 1600);
	HIDWORD(v106) = v19;
	if (v20 != v106)
	{
		result = sub_140254810(a1, (int*)&v106);
		if ((int)result < 0)
		{
			*(_DWORD*)(a1 + 44) = 0;
			return result;
		}
		*(_QWORD*)(a1 + 1600) = v106;
		*(_DWORD*)(a1 + 1632) = 0;
	}
	v21 = *(_DWORD*)(*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 720i64))();
	if (*(_DWORD*)(a1 + 1624) != v21)
	{
		if (*(_QWORD*)v14 != *(_QWORD*)(a1 + 1600))
		{
			if (!*(_DWORD*)(a1 + 1632))
			{
				*(_DWORD*)(a1 + 1632) = 1;
				*(_DWORD*)(a1 + 1628) = sub_14018CDF0() + 5000;
				goto LABEL_28;
			}
			v22 = *(_DWORD*)(a1 + 1628);
			if ((int)(sub_14018CDF0() - v22) < 0)
			{
			LABEL_28:
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1800) + 56i64))(*(_QWORD*)(a1 + 1800));
				*(_DWORD*)(a1 + 1624) = v21;
				*v14 = *(_DWORD*)(a1 + 1616);
				*(_DWORD*)(a1 + 1612) = *(_DWORD*)(a1 + 1620);
				goto LABEL_29;
			}
			result = sub_140254810(a1, (int*)(a1 + 1608));
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 1600) = *v14;
			*(_DWORD*)(a1 + 1604) = *(_DWORD*)(a1 + 1612);
		}
		*(_DWORD*)(a1 + 1632) = 0;
		goto LABEL_28;
	}
LABEL_29:
	v23 = *(_DWORD*)(a1 + 1616);
	LODWORD(TlsValue[0]) = v23;
	v24 = *(_DWORD*)(a1 + 1620);
	v25 = _mm_cvtsi32_si128(0);
	if (v23 < (int)qword_140C77768)
		v23 = qword_140C77768;
	v26 = _mm_cvtsi32_si128(v23);
	if (v24 < SHIDWORD(qword_140C77768))
		v24 = HIDWORD(qword_140C77768);
	*(_QWORD*)&TlsValue[0] = 0i64;
	*(_OWORD*)(a1 + 1744) = 0i64;
	v27 = DWORD1(TlsValue[0]);
	*(__m128*)(a1 + 1760) = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(v26, v25),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v25)));
	v28 = *(_DWORD*)(a1 + 1616);
	if (v28 < 1)
		v28 = 1;
	DWORD2(TlsValue[0]) = v28;
	v29 = *(_DWORD*)(a1 + 1620);
	*(_DWORD*)(a1 + 2328) = TlsValue[0];
	v30 = DWORD2(TlsValue[0]);
	*(_DWORD*)(a1 + 2332) = v27;
	if (v29 < 1)
		v29 = 1;
	HIDWORD(TlsValue[0]) = v29;
	*(_DWORD*)(a1 + 2336) = v30;
	*(_DWORD*)(a1 + 2340) = HIDWORD(TlsValue[0]);
	*(_DWORD*)(a1 + 2344) = 0;
	*(_DWORD*)(a1 + 2348) = 1065353216;
	if (a7)
	{
		v31 = 12i64;
		*(_DWORD*)(a1 + 608) = *a7;
		v32 = 12i64;
		*(_DWORD*)(a1 + 612) = a7[1];
		v33 = (__int128*)(a7 + 4);
		v34 = a1 + 608 - (_QWORD)a7;
		do
		{
			v35 = *v33++;
			*(__int128*)((char*)v33 + v34 - 16) = v35;
			--v32;
		} while (v32);
		v36 = (__int128*)(a7 + 52);
		do
		{
			v37 = *v36++;
			*(__int128*)((char*)v36 + v34 - 16) = v37;
			--v31;
		} while (v31);
	}
	*(_QWORD*)&v108 = *(_QWORD*)(a1 + 1696);
	v38 = *(_QWORD*)(a1 + 1688);
	LODWORD(v107) = 1;
	*((_QWORD*)&TlsValue[0] + 1) = v38;
	v39 = *(_QWORD*)(a1 + 1680);
	HIDWORD(v108) = 0;
	v102 = v39;
	v40 = *(_QWORD*)(a1 + 1672);
	LODWORD(TlsValue[0]) = 1;
	DWORD1(TlsValue[1]) = 0;
	v101 = 1;
	v103 = 0;
	v99 = v40;
	v98 = 1;
	v100 = 0;
	(*(void(__fastcall**)(__int64, int*, int*, _OWORD*, __int64*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v98,
		&v101,
		TlsValue,
		&v107);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 1936);
	v98 = 1;
	v100 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 1960);
	v41 = *(_QWORD*)(a1 + 1952);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v41;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 2048);
	v42 = *(_QWORD*)(a1 + 1976);
	v98 = 1;
	v102 = v42;
	v43 = *(_QWORD*)(a1 + 1968);
	v100 = 0;
	v101 = 1;
	v103 = 0;
	LODWORD(v107) = 1;
	*(_QWORD*)&v108 = v43;
	HIDWORD(v108) = 0;
	(*(void(__fastcall**)(__int64, __int64*, int*, int*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v107,
		&v101,
		&v98,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 1992);
	v44 = *(_QWORD*)(a1 + 1984);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v44;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 2008);
	v45 = *(_QWORD*)(a1 + 2000);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v45;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 2024);
	v46 = *(_QWORD*)(a1 + 2016);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v46;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v99 = *(_QWORD*)(a1 + 2040);
	v47 = *(_QWORD*)(a1 + 2032);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v47;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	v48 = *(_QWORD*)(a1 + 1664);
	v98 = 1;
	v99 = v48;
	v49 = *(_QWORD*)(a1 + 1656);
	v100 = 0;
	v102 = v49;
	v50 = *(_QWORD*)(a1 + 1648);
	v101 = 1;
	v103 = 0;
	LODWORD(v107) = 1;
	HIDWORD(v108) = 0;
	*(_QWORD*)&v108 = v50;
	(*(void(__fastcall**)(__int64, __int64*, int*, int*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v107,
		&v101,
		&v98,
		&unk_140C3FE88);
	v99 = *(_QWORD*)(a1 + 1720);
	v98 = 1;
	v100 = 0;
	(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v98, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
	TlsValue[0] = 0i64;
	(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		7i64,
		TlsValue);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v99 = *(_QWORD*)(a1 + 1704);
	v98 = 1;
	v100 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
	TlsValue[0] = _mm_unpacklo_ps(
		(__m128)xmmword_140B7A390,
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 612), (__m128)0i64));
	(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		TlsValue);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v99 = *(_QWORD*)(a1 + 1728);
	v98 = 1;
	v100 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
	TlsValue[0] = xmmword_140B7A390;
	(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		TlsValue);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v99 = *(_QWORD*)(a1 + 1944);
	v51 = *(_QWORD*)(a1 + 1712);
	v98 = 1;
	v100 = 0;
	v101 = 1;
	v103 = 0;
	v102 = v51;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v101,
		&v98,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
	TlsValue[0] = 0i64;
	(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		TlsValue);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v52 = (_OWORD*)v105;
	v116[0].m128_u64[0] = v105;
	*(_OWORD*)(a1 + 160) = *(_OWORD*)v105;
	*(_OWORD*)(a1 + 176) = v52[1];
	*(_OWORD*)(a1 + 192) = v52[2];
	*(_OWORD*)(a1 + 208) = v52[3];
	sub_1401AFC20((__int64*)v116, (double*)(a1 + 224));
	v53 = (__int64)v109;
	*(_OWORD*)(a1 + 288) = *v109;
	*(_OWORD*)(a1 + 304) = *(_OWORD*)(v53 + 16);
	*(_OWORD*)(a1 + 320) = *(_OWORD*)(v53 + 32);
	*(_OWORD*)(a1 + 336) = *(_OWORD*)(v53 + 48);
	v54 = sub_1401B20F0(v116, (__m128*)v53);
	v55 = a1 + 448;
	v56 = 6i64;
	v57 = 6i64;
	v58 = a1 + 448 - (_QWORD)v54;
	do
	{
		v59 = *v54++;
		*(__m128*)((char*)v54 + v58 - 16) = v59;
		--v57;
	} while (v57);
	v60 = *(__m128*)(a1 + 176);
	v61 = *(__m128*)(a1 + 208);
	v62 = *(__m128*)(a1 + 160);
	v63 = _mm_unpackhi_ps(v62, v60);
	v64 = _mm_unpacklo_ps(v62, v60);
	v65 = *(__m128*)(a1 + 192);
	v66 = _mm_unpackhi_ps(v65, v61);
	v67 = _mm_unpacklo_ps(v65, v61);
	v68 = _mm_shuffle_ps(v63, v66, 68);
	v69 = _mm_shuffle_ps(v63, v66, 238);
	v70 = _mm_shuffle_ps(v64, v67, 68);
	v71 = _mm_shuffle_ps(v64, v67, 238);
	if (a1 + 448 < (unsigned __int64)(a1 + 544))
	{
		do
		{
			v72 = (float*)((char*)v116[0].m128_f32 + v55 - a1);
			_mm_prefetch((const char*)(v55 + 24), 0);
			v73 = *(__m128*)v55;
			v55 += 16i64;
			_mm_stream_ps(
				v72 - 112,
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v73, v73, 85), v71), _mm_mul_ps(_mm_shuffle_ps(v73, v73, 0), v70)),
						_mm_mul_ps(_mm_shuffle_ps(v73, v73, 170), v68)),
					_mm_mul_ps(_mm_shuffle_ps(v73, v73, 255), v69)));
		} while (v55 < a1 + 544);
	}
	_mm_sfence();
	v74 = v116;
	v75 = 6i64;
	do
	{
		v76 = *v74++;
		v77 = _mm_mul_ps(v76, v76);
		v77.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v77.m128_f32[0] + _mm_shuffle_ps(v77, v77, 85).m128_f32[0])
				+ _mm_shuffle_ps(v77, v77, 170).m128_f32[0]);
		v74[-1] = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v76);
		--v75;
	} while (v75);
	v78 = v116;
	do
	{
		v79 = *v78++;
		*(__m128*)((char*)v78 + a1 + 352 - (_QWORD)v116 - 16) = v79;
		--v56;
	} while (v56);
	v80 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1736));
	v81 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1740));
	*(_QWORD*)(a1 + 576) = *a4;
	*(float*)v81.m128i_i32 = _mm_cvtepi32_ps(v81).m128_f32[0];
	*(float*)v80.m128i_i32 = _mm_cvtepi32_ps(v80).m128_f32[0];
	*(float*)(a1 + 544) = 1.0 / *(float*)v80.m128i_i32;
	*(float*)(a1 + 548) = 1.0 / *(float*)v81.m128i_i32;
	*(float*)(a1 + 552) = (float)(1.0 / *(float*)v80.m128i_i32) * 0.5;
	v82 = *(float*)(a1 + 288);
	*(float*)(a1 + 556) = (float)(1.0 / *(float*)v81.m128i_i32) * 0.5;
	v83 = *(float*)(a1 + 308);
	v84 = v82 * *(float*)(a1 + 1760);
	*(float*)(a1 + 572) = 1.0 / v83;
	*(float*)v80.m128i_i32 = (float)(*(float*)v80.m128i_i32 * 2.0) / v84;
	v85 = v83 * *(float*)(a1 + 1764);
	*(_DWORD*)(a1 + 560) = v80.m128i_i32[0];
	*(float*)v81.m128i_i32 = (float)(*(float*)v81.m128i_i32 * -2.0) / v85;
	v86 = -1.0 / v82;
	v87 = (__m128) * (unsigned int*)(a1 + 576);
	*(_DWORD*)(a1 + 564) = v81.m128i_i32[0];
	v88 = v87;
	*(float*)(a1 + 568) = v86;
	v89 = (__m128) * (unsigned int*)(a1 + 580);
	v87.m128_f32[0] = v87.m128_f32[0] - v89.m128_f32[0];
	v88.m128_f32[0] = v88.m128_f32[0] * v89.m128_f32[0];
	*(__m128*)(a1 + 592) = _mm_unpacklo_ps(_mm_unpacklo_ps(v88, v89), _mm_unpacklo_ps(v87, (__m128)0i64));
	*(_DWORD*)(a1 + 40) = a6;
	sub_1402564A0((__m128*)a1, (__int64)&v110);
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1800) + 48i64))(*(_QWORD*)(a1 + 1800))
		|| (unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 1008), (__int64)&v110, 0x60ui64))
	{
		v90 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1800) + 24i64))(*(_QWORD*)(a1 + 1800));
		v91 = *(__int64**)(a1 + 1800);
		v7 = *(_DWORD*)(v90 + 28) == 4;
		v92 = *v91;
		if (v7)
		{
			v93 = (_OWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD, unsigned __int64*, __int64))(v92 + 72))(
				v91,
				0i64,
				&v105,
				2i64);
			if (v93)
			{
				*v93 = v110;
				v93[1] = v111;
				v93[2] = v112;
				v94 = (unsigned int)v105;
				*(_OWORD*)((char*)v93 + (unsigned int)v105) = v113;
				*(_OWORD*)((char*)v93 + v94 + 16) = v114;
				*(_OWORD*)((char*)v93 + v94 + 32) = v115;
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1800) + 80i64))(*(_QWORD*)(a1 + 1800), 0i64);
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, __int128*, int, _QWORD))(v92 + 96))(
				v91,
				0i64,
				0i64,
				&v110,
				48,
				0i64);
		}
		v95 = v111;
		*(_OWORD*)(a1 + 1008) = v110;
		*(_OWORD*)(a1 + 1024) = v95;
		v96 = v113;
		*(_OWORD*)(a1 + 1040) = v112;
		*(_OWORD*)(a1 + 1056) = v96;
		v97 = v115;
		*(_OWORD*)(a1 + 1072) = v114;
		*(_OWORD*)(a1 + 1088) = v97;
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A390: using guessed type __int128 xmmword_140B7A390;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C8A2A8: using guessed type _DWORD dword_140C8A2A8[2];
// 1402594A0: using guessed type __m128 var_E0[6];


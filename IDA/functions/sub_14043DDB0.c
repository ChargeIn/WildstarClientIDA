//----- (000000014043DDB0) ----------------------------------------------------
__int64 __fastcall sub_14043DDB0(__int64 a1, _DWORD* a2)
{
	int* v2; // rax
	int v5; // ecx
	int v6; // eax
	int v7; // esi
	int v8; // eax
	DWORDLONG v9; // rsi
	int v10; // r15d
	int v11; // eax
	DWORDLONG v12; // r15
	int v13; // r14d
	__int64 v14; // rax
	int v15; // edx
	__int64 v16; // rbp
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // r8d
	int* v21; // r10
	float v22; // xmm3_4
	int v23; // edx
	int v24; // eax
	int v25; // eax
	DWORDLONG ullAvailVirtual; // r9
	int v27; // eax
	__int64 v28; // rcx
	signed __int64 v29; // rax
	float v30; // xmm1_4
	int v31; // eax
	int v32; // ecx
	unsigned int v33; // ecx
	int v34; // ecx
	int v35; // ecx
	int v36; // eax
	int v37; // ecx
	int v38; // eax
	float v39; // xmm0_4
	int v40; // eax
	int v41; // eax
	int v42; // eax
	int v43; // ecx
	int v44; // eax
	int v45; // eax
	int v46; // eax
	int v47; // eax
	int v48; // ecx
	int v49; // eax
	float v50; // xmm7_4
	int v51; // r9d
	int v52; // r8d
	int v53; // eax
	__int64 v54; // rcx
	int v55; // eax
	int v56; // edx
	__int64 v57; // rcx
	unsigned int v58; // eax
	__m128i v59; // xmm0
	int v60; // eax
	int v61; // ecx
	int v62; // ecx
	int v63; // ecx
	int v64; // ecx
	int v65; // ecx
	int v66; // ecx
	int v67; // eax
	int v68; // ecx
	__int64 result; // rax
	int v70[4]; // [rsp+20h] [rbp-D8h] BYREF
	int v71[4]; // [rsp+30h] [rbp-C8h] BYREF
	struct _MEMORYSTATUSEX Buffer; // [rsp+40h] [rbp-B8h] BYREF

	v2 = (int*)qword_140C63750;
	*a2 = dword_140C44CE8;
	a2[1] = dword_140C44CEC;
	a2[2] = dword_140C44CF0;
	a2[3] = dword_140C44CF4;
	Buffer.dwLength = 64;
	a2[4] = dword_140C44CF8;
	a2[5] = dword_140C44CFC;
	a2[6] = dword_140C44D00;
	a2[7] = dword_140C44D04;
	a2[8] = dword_140C44D08;
	a2[9] = dword_140C44D0C;
	a2[10] = dword_140C44D10;
	a2[11] = dword_140C44D14;
	a2[12] = dword_140C44D18;
	v5 = *v2;
	v6 = dword_140C46000;
	if (v5 < dword_140C46000)
		v6 = v5;
	v7 = dword_140C46010[v6];
	v8 = dword_140C46060;
	v9 = (unsigned int)(1000000 * v7);
	if (v5 < dword_140C46060)
		v8 = v5;
	v10 = dword_140C46070[v8];
	v11 = dword_140C46540;
	v12 = (unsigned int)(1000000 * v10);
	if (v5 < dword_140C46540)
		v11 = v5;
	v13 = dword_140C46550[v11];
	GlobalMemoryStatusEx(&Buffer);
	v14 = *(_QWORD*)(a1 + 25744);
	if (v14 && (v15 = *(_DWORD*)(v14 + 264)) != 0)
		v16 = sub_1403D90D0(a1, v15);
	else
		v16 = 0i64;
	if (*(_DWORD*)(a1 + 31560) != 127)
		goto LABEL_76;
	v17 = *(_QWORD*)(a1 + 25744);
	if (v17
		&& (v18 = *(_QWORD*)(v17 + 5872)) != 0
		&& (v71[0] = 0, !(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v18 + 40i64))(v18, v71))
		|| v16
		&& (v19 = *(_QWORD*)(v16 + 5872)) != 0
		&& (v70[0] = 0, !(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v19 + 40i64))(v19, v70)))
	{
		if (*(_DWORD*)(a1 + 31560) == 127)
		{
			v21 = (int*)qword_140C63750;
		LABEL_85:
			v20 = dword_140C46420;
			goto LABEL_86;
		}
	LABEL_76:
		v46 = dword_140C460C0;
		v21 = (int*)qword_140C63750;
		if (*(_DWORD*)qword_140C63750 < dword_140C460C0)
			v46 = *(_DWORD*)qword_140C63750;
		if (Buffer.ullAvailVirtual > (unsigned int)(1000000 * dword_140C460D0[v46]))
		{
			v47 = dword_140C46420;
			if (*(_DWORD*)qword_140C63750 < dword_140C46420)
				v47 = *(_DWORD*)qword_140C63750;
			*(_DWORD*)(a1 + 29424) = *((_DWORD*)&xmmword_140C46430 + v47);
			v48 = dword_140C46480;
			if (*v21 < dword_140C46480)
				v48 = *v21;
			*(_DWORD*)(a1 + 29428) = *((_DWORD*)&xmmword_140C46490 + v48);
		}
		goto LABEL_85;
	}
	v20 = dword_140C46420;
	v21 = (int*)qword_140C63750;
	v22 = *(float*)(a1 + 29424);
	v23 = *(_DWORD*)qword_140C63750;
	v24 = dword_140C46420;
	if (*(_DWORD*)qword_140C63750 < dword_140C46420)
		v24 = *(_DWORD*)qword_140C63750;
	if (v22 == *((float*)&xmmword_140C46430 + v24))
	{
		v25 = dword_140C46480;
		if (v23 < dword_140C46480)
			v25 = *(_DWORD*)qword_140C63750;
		if (*((float*)&xmmword_140C46490 + v25) == *(float*)(a1 + 29428))
		{
			ullAvailVirtual = Buffer.ullAvailVirtual;
			if (Buffer.ullAvailVirtual >= v9)
				goto LABEL_59;
			goto LABEL_27;
		}
	}
	ullAvailVirtual = Buffer.ullAvailVirtual;
	if (Buffer.ullAvailVirtual < v9)
	{
	LABEL_27:
		v27 = dword_140C46360;
		if (v23 < dword_140C46360)
			v27 = *(_DWORD*)qword_140C63750;
		v28 = v27;
		v29 = 25 * (v9 - ullAvailVirtual) / v9 + 1;
		v30 = (float)(int)v29;
		if (v29 < 0)
			v30 = v30 + 1.8446744e19;
		*(float*)(a1 + 29424) = v22 - (float)(v30 * flt_140C46370[v28]);
		v31 = dword_140C46240;
		if (*v21 < dword_140C46240)
			v31 = *v21;
		*(float*)(a1 + 29428) = (float)(dword_140C46250[v31] * 0.0099999998) + *(float*)(a1 + 29428);
		v32 = dword_140C464E0;
		if (*v21 < dword_140C464E0)
			v32 = *v21;
		v33 = dword_140C464F0[v32];
		if (dword_140C44C88 < v33)
			v33 = dword_140C44C88;
		*(_DWORD*)(a1 + 29432) = v33;
		v34 = v13;
		if (dword_140C44D00 < v13)
			v34 = dword_140C44D00;
		*(_DWORD*)(a1 + 29436) = v34;
		v35 = dword_140C465D0;
		if (*v21 < dword_140C465D0)
			v35 = *v21;
		*(float*)(a1 + 29440) = fminf(*((float*)&xmmword_140C465E0 + v35), *(float*)&dword_140C44CFC);
		goto LABEL_58;
	}
	v36 = dword_140C460C0;
	if (v23 < dword_140C460C0)
		v36 = *(_DWORD*)qword_140C63750;
	if (Buffer.ullAvailVirtual <= (unsigned int)(1000000 * dword_140C460D0[v36]))
	{
		if (Buffer.ullAvailVirtual <= v12)
			goto LABEL_59;
		if (v23 < dword_140C46420)
			v20 = *(_DWORD*)qword_140C63750;
		v38 = dword_140C46300;
		if (v23 < dword_140C46300)
			v38 = *(_DWORD*)qword_140C63750;
		v39 = *(float*)(a1 + 29428);
		*(float*)(a1 + 29424) = (float)(fmaxf(1.0, (float)(*((float*)&xmmword_140C46430 + v20) - v22) * 0.0099999998)
			* dword_140C46310[v38])
			+ v22;
		v40 = dword_140C462A0;
		if (*v21 < dword_140C462A0)
			v40 = *v21;
		*(float*)(a1 + 29428) = v39 - (float)(dword_140C462B0[v40] * 0.0040000002);
	}
	else
	{
		if (v23 < dword_140C46420)
			v20 = *(_DWORD*)qword_140C63750;
		*(_DWORD*)(a1 + 29424) = *((_DWORD*)&xmmword_140C46430 + v20);
		v37 = dword_140C46480;
		if (*v21 < dword_140C46480)
			v37 = *v21;
		*(_DWORD*)(a1 + 29428) = *((_DWORD*)&xmmword_140C46490 + v37);
	}
LABEL_58:
	v20 = dword_140C46420;
LABEL_59:
	v41 = dword_140C46180;
	if (*v21 < dword_140C46180)
		v41 = *v21;
	if (ullAvailVirtual > (unsigned int)(1000000 * dword_140C46190[v41]))
	{
		v42 = dword_140C465D0;
		if (*v21 < dword_140C465D0)
			v42 = *v21;
		*(_DWORD*)(a1 + 29440) = *((_DWORD*)&xmmword_140C465E0 + v42);
		v20 = dword_140C46420;
	}
	v43 = dword_140C46120;
	if (*v21 < dword_140C46120)
		v43 = *v21;
	if (ullAvailVirtual > (unsigned int)(1000000 * dword_140C46130[v43]))
	{
		*(_DWORD*)(a1 + 29436) = v13;
		v20 = dword_140C46420;
	}
	v44 = dword_140C461E0;
	if (*v21 < dword_140C461E0)
		v44 = *v21;
	if (ullAvailVirtual > (unsigned int)(1000000 * dword_140C461F0[v44]))
	{
		v45 = dword_140C464E0;
		if (*v21 < dword_140C464E0)
			v45 = *v21;
		*(_DWORD*)(a1 + 29432) = dword_140C464F0[v45];
		goto LABEL_85;
	}
LABEL_86:
	v49 = v20;
	if (*v21 < v20)
		v49 = *v21;
	if (*v21 < v20)
		v20 = *v21;
	v50 = *(float*)(a1 + 29428);
	*(float*)(a1 + 29424) = fmaxf(
		fminf(*(float*)&dword_140C44C60, *((float*)&xmmword_140C46430 + v49)),
		fminf(*(float*)(a1 + 29424), *((float*)&xmmword_140C46430 + v20)));
	v51 = *v21;
	v52 = dword_140C46480;
	v53 = dword_140C46660;
	if (*v21 < dword_140C46660)
		v53 = *v21;
	v54 = v53;
	v55 = dword_140C46480;
	v56 = dword_140C44C78 - dword_140C46670[v54];
	if (v51 < dword_140C46480)
		v55 = *v21;
	v57 = v55;
	v58 = 0;
	if (v56 > 0)
		v58 = v56;
	if (v51 < dword_140C46480)
		v52 = *v21;
	v59 = _mm_cvtsi32_si128(v58);
	v60 = *(_DWORD*)(a1 + 29424);
	*(float*)(a1 + 29428) = fmaxf(
		*((float*)&xmmword_140C46490 + v52),
		fminf(
			v50,
			fmaxf(
				*((float*)&xmmword_140C46490 + v57),
				_mm_cvtepi32_ps(v59).m128_f32[0] + *(float*)&dword_140C44C7C)));
	a2[2] = v60;
	v61 = dword_140C46750;
	if (*v21 < dword_140C46750)
		v61 = *v21;
	a2[3] = *((_DWORD*)&xmmword_140C46760 + v61);
	v62 = dword_140C46850;
	if (*v21 < dword_140C46850)
		v62 = *v21;
	a2[4] = dword_140C46860[v62];
	a2[5] = *(_DWORD*)(a1 + 29440);
	a2[6] = *(_DWORD*)(a1 + 29436);
	v63 = dword_140C468B0;
	if (*v21 < dword_140C468B0)
		v63 = *v21;
	a2[7] = dword_140C468C0[v63];
	v64 = dword_140C46660;
	if (*v21 < dword_140C46660)
		v64 = *v21;
	a2[8] = dword_140C46670[v64];
	a2[9] = *(_DWORD*)(a1 + 29428);
	v65 = dword_140C466C0;
	if (*v21 < dword_140C466C0)
		v65 = *v21;
	a2[10] = dword_140C466D0[v65];
	v66 = dword_140C467B0;
	if (*v21 < dword_140C467B0)
		v66 = *v21;
	a2[11] = dword_140C467C0[v66];
	v67 = *(_DWORD*)(a1 + 29432);
	*(_QWORD*)a2 = 192544765i64;
	a2[12] = v67;
	v68 = dword_140C46810;
	if (*v21 < dword_140C46810)
		v68 = *v21;
	if (*((_BYTE*)&dword_140C46820 + v68))
		*a2 = 192675837;
	result = *(_QWORD*)(a1 + 29096);
	if (result && *(_DWORD*)(result + 696))
	{
		result = *(_QWORD*)(a1 + 29080);
		if (result)
		{
			result = *(unsigned int*)(result + 88);
			*a2 -= result;
		}
	}
	return result;
}
// 140C44C60: using guessed type int dword_140C44C60;
// 140C44C78: using guessed type int dword_140C44C78;
// 140C44C7C: using guessed type int dword_140C44C7C;
// 140C44C88: using guessed type int dword_140C44C88;
// 140C44CE8: using guessed type int dword_140C44CE8;
// 140C44CEC: using guessed type int dword_140C44CEC;
// 140C44CF0: using guessed type int dword_140C44CF0;
// 140C44CF4: using guessed type int dword_140C44CF4;
// 140C44CF8: using guessed type int dword_140C44CF8;
// 140C44CFC: using guessed type int dword_140C44CFC;
// 140C44D00: using guessed type int dword_140C44D00;
// 140C44D04: using guessed type int dword_140C44D04;
// 140C44D08: using guessed type int dword_140C44D08;
// 140C44D0C: using guessed type int dword_140C44D0C;
// 140C44D10: using guessed type int dword_140C44D10;
// 140C44D14: using guessed type int dword_140C44D14;
// 140C44D18: using guessed type int dword_140C44D18;
// 140C46000: using guessed type int dword_140C46000;
// 140C46010: using guessed type int dword_140C46010[];
// 140C46060: using guessed type int dword_140C46060;
// 140C46070: using guessed type int dword_140C46070[];
// 140C460C0: using guessed type int dword_140C460C0;
// 140C460D0: using guessed type int dword_140C460D0[];
// 140C46120: using guessed type int dword_140C46120;
// 140C46130: using guessed type int dword_140C46130[];
// 140C46180: using guessed type int dword_140C46180;
// 140C46190: using guessed type int dword_140C46190[];
// 140C461E0: using guessed type int dword_140C461E0;
// 140C461F0: using guessed type int dword_140C461F0[];
// 140C46240: using guessed type int dword_140C46240;
// 140C46250: using guessed type float dword_140C46250[14];
// 140C462A0: using guessed type int dword_140C462A0;
// 140C462B0: using guessed type float dword_140C462B0[14];
// 140C46300: using guessed type int dword_140C46300;
// 140C46310: using guessed type float dword_140C46310[14];
// 140C46360: using guessed type int dword_140C46360;
// 140C46370: using guessed type float flt_140C46370[14];
// 140C46420: using guessed type int dword_140C46420;
// 140C46430: using guessed type __int128 xmmword_140C46430;
// 140C46480: using guessed type int dword_140C46480;
// 140C46490: using guessed type __int128 xmmword_140C46490;
// 140C464E0: using guessed type int dword_140C464E0;
// 140C464F0: using guessed type int dword_140C464F0[];
// 140C46540: using guessed type int dword_140C46540;
// 140C46550: using guessed type int dword_140C46550[];
// 140C465D0: using guessed type int dword_140C465D0;
// 140C465E0: using guessed type __int128 xmmword_140C465E0;
// 140C46660: using guessed type int dword_140C46660;
// 140C46670: using guessed type int dword_140C46670[];
// 140C466C0: using guessed type int dword_140C466C0;
// 140C466D0: using guessed type int dword_140C466D0[];
// 140C46750: using guessed type int dword_140C46750;
// 140C46760: using guessed type __int128 xmmword_140C46760;
// 140C467B0: using guessed type int dword_140C467B0;
// 140C467C0: using guessed type int dword_140C467C0[];
// 140C46810: using guessed type int dword_140C46810;
// 140C46820: using guessed type int dword_140C46820;
// 140C46850: using guessed type int dword_140C46850;
// 140C46860: using guessed type int dword_140C46860[];
// 140C468B0: using guessed type int dword_140C468B0;
// 140C468C0: using guessed type int dword_140C468C0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 14043DDB0: using guessed type int var_C8[4];
// 14043DDB0: using guessed type int var_D8[4];


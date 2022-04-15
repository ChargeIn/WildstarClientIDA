//----- (0000000140034860) ----------------------------------------------------
__int64 __fastcall sub_140034860(__int64 a1, float a2)
{
	__int64 result; // rax
	int v5; // edx
	int v6; // r8d
	int v7; // r9d
	__int64 v8; // rcx
	__int64 v9; // rcx
	int* v10; // rax
	int v11; // ecx
	float v12; // xmm13_4
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // r8
	__int64* v17; // rcx
	bool v18; // zf
	__int64 v19; // rax
	__m128 v20; // xmm9
	__int64 v21; // r14
	__m128 v22; // xmm11
	float v23; // xmm6_4
	float v24; // xmm0_4
	float v25; // xmm2_4
	float v26; // xmm6_4
	float v27; // xmm1_4
	__m128 v28; // xmm6
	__m128 v29; // xmm11
	__m128* v30; // rax
	__int64 v31; // r8
	float* v32; // r15
	float v33; // xmm1_4
	__int64 v34; // rdx
	__m128 v35; // xmm0
	float v36; // xmm1_4
	float v37; // xmm7_4
	float v38; // xmm8_4
	float v39; // xmm9_4
	__m128 v40; // xmm3
	__int64 v41; // r8
	float v42; // xmm2_4
	__int64 v43; // rdx
	__m128 v44; // xmm0
	float v45; // xmm1_4
	float v46; // xmm4_4
	float v47; // xmm5_4
	float v48; // xmm6_4
	__m128 v49; // xmm10
	__int64 v50; // r8
	__m128 v51; // xmm2
	__m128 v52; // xmm1
	__m128 v53; // xmm10
	__m128 v54; // xmm0
	__m128 v55; // xmm3
	__m128 v56; // xmm2
	__m128 v57; // xmm2
	bool v58; // cc
	float v59; // xmm10_4
	__int64 v60; // rdx
	float v61; // xmm0_4
	__int64 v62; // r8
	float v63; // xmm2_4
	__int64 v64; // rdx
	float v65; // xmm0_4
	__int64 v66; // r8
	float v67; // xmm3_4
	__int64 v68; // rdx
	__int64 v69; // r12
	__int64 v70; // rax
	__m128 v71; // xmm1
	__m128 v72; // xmm4
	__m128 v73; // xmm5
	float v74; // xmm1_4
	__int64 v75; // rcx
	__int64 v76; // rax
	__int64 v77; // rax
	struct tagPOINT v78; // rcx
	__m128 v79; // [rsp+60h] [rbp-A0h]
	__int64 v80[2]; // [rsp+70h] [rbp-90h] BYREF
	_BYTE v81[24]; // [rsp+80h] [rbp-80h] BYREF
	int v82; // [rsp+98h] [rbp-68h]
	__int128 v83[2]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v84[10]; // [rsp+C0h] [rbp-40h] BYREF

	if (*(float*)(a1 + 16) < 0.1)
	{
		*(_OWORD*)v81 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, _BYTE*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			v81);
		return 1i64;
	}
	if (!*(_DWORD*)(a1 + 76))
	{
		sub_140035C80(a1);
		return 1i64;
	}
	v5 = 0;
	v6 = 0;
	v7 = 0;
	*(_QWORD*)&v81[12] = 0i64;
	if (!*(_DWORD*)(a1 + 20))
	{
		v6 = 1;
		v7 = 1;
	LABEL_11:
		v5 = 1;
		goto LABEL_12;
	}
	v8 = *(_QWORD*)(a1 + 96);
	if (!v8)
		goto LABEL_11;
	v9 = *(_QWORD*)(v8 + 29256);
	if (v9)
	{
		v10 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v9 + 168i64))(
			v9,
			0i64,
			0i64,
			0i64);
		v5 = *v10;
		v11 = v10[3];
		v6 = v10[1];
		v7 = v10[2];
		LODWORD(v10) = v10[4];
		*(_DWORD*)&v81[12] = v11;
		*(_DWORD*)&v81[16] = (_DWORD)v10;
		if (!v5)
		{
			v6 = 0;
			v7 = 0;
			goto LABEL_11;
		}
	}
LABEL_12:
	v12 = (float)(v7 + v6) / (float)(2 * v5);
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 1264) + 48i64))(
		*(_QWORD*)(a1 + 1264),
		(unsigned int)dword_140C636A8,
		0i64);
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1272) + 448i64))(
		*(_QWORD*)(a1 + 1272),
		231i64))
	{
		v13 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 1272) + 456i64))(
			*(_QWORD*)(a1 + 1272),
			231i64,
			0i64);
		v14 = *(_QWORD*)(a1 + 1272);
		LODWORD(v13) = *(_DWORD*)(v13 + 8);
		*(_QWORD*)v81 = 231i64;
		*(_DWORD*)&v81[8] = 0;
		*(_QWORD*)&v81[16] = 1065353216i64;
		v82 = 0;
		*(_DWORD*)&v81[12] = (int)(float)((float)(int)v13 * v12);
		(*(void(__fastcall**)(__int64, _QWORD, _BYTE*))(*(_QWORD*)v14 + 600i64))(v14, 0i64, v81);
	}
	v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1272) + 1056i64))(
		*(_QWORD*)(a1 + 1272),
		*(unsigned int*)(a1 + 1056));
	v17 = *(__int64**)(a1 + 1272);
	v18 = v15 == 0;
	v19 = *v17;
	if (v18)
	{
		v20 = (__m128) * (unsigned int*)((*(__int64 (**)(void))(v19 + 1208))() + 48);
		v20.m128_f32[0] = fmaxf(v20.m128_f32[0], 2.0);
		v80[0] = __PAIR64__(
			(float)(v20.m128_f32[0] * 50.0) + 25.0,
			(float)((float)(v20.m128_f32[0] * 50.0) + 25.0) * 0.000099999997);
		v21 = a1 + 1200;
		v20.m128_f32[0] = v20.m128_f32[0] / sub_140934E10(0.39269909);
		v22 = v20;
		v22.m128_f32[0] = fmaxf(v20.m128_f32[0], *(float*)v80);
		v23 = sub_1408FC950(COERCE_DOUBLE(1053364187i64));
		v24 = sub_1408FE3D0(COERCE_DOUBLE(1053364187i64));
		v25 = *(float*)v80;
		*(_QWORD*)(a1 + 1204) = 0i64;
		*(_QWORD*)(a1 + 1212) = 0i64;
		*(_QWORD*)(a1 + 1224) = 0i64;
		*(_QWORD*)(a1 + 1232) = 0i64;
		v26 = v23 / v24;
		*(_DWORD*)(a1 + 1244) = -1082130432;
		*(_QWORD*)(a1 + 1248) = 0i64;
		*(_DWORD*)(a1 + 1260) = 0;
		*(float*)(a1 + 1220) = v26;
		*(float*)(a1 + 1200) = v26 / a2;
		v27 = *((float*)v80 + 1) / (float)(v25 - *((float*)v80 + 1));
		*(float*)(a1 + 1240) = v27;
		*(float*)(a1 + 1256) = v25 * v27;
		v28 = (__m128)xmmword_140C77870;
		v29 = _mm_add_ps((__m128)xmmword_140C77870, _mm_mul_ps((__m128)xmmword_140C77880, _mm_shuffle_ps(v22, v22, 0)));
		v30 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1272) + 1208i64))(*(_QWORD*)(a1 + 1272));
		v31 = 0i64;
		v32 = (float*)(a1 + 1072);
		*(__m128*)v81 = _mm_sub_ps(v29, v30[2]);
		v79 = _mm_mul_ps(*(__m128*)v81, *(__m128*)v81);
		LODWORD(v33) = _mm_shuffle_ps(v79, v79, 170).m128_u32[0];
		if (_mm_shuffle_ps(v79, v79, 85).m128_f32[0] > v79.m128_f32[0])
			v31 = 1i64;
		v34 = 1 - v31;
		if (v33 > v79.m128_f32[v31])
			v31 = 2i64;
		v35 = (__m128)v79.m128_u32[-v34 + 3 - v31];
		v35.m128_f32[0] = (float)(v35.m128_f32[0] + v79.m128_f32[v34]) + v79.m128_f32[v31];
		if (v35.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v40 = 0i64;
			v79 = 0i64;
			v39 = 0.0;
			v38 = 0.0;
			v37 = 0.0;
		}
		else
		{
			v36 = 1.0 / _mm_sqrt_ps(v35).m128_f32[0];
			v37 = *(float*)v81 * v36;
			v38 = *(float*)&v81[4] * v36;
			v39 = *(float*)&v81[8] * v36;
			v79.m128_f32[0] = *(float*)v81 * v36;
			v79.m128_f32[1] = *(float*)&v81[4] * v36;
			v79.m128_f32[2] = *(float*)&v81[8] * v36;
			v40 = v79;
		}
		v41 = 0i64;
		*(__m128*)v81 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v40, v40, 210), _mm_shuffle_ps(v28, v28, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v40, v40, 201), _mm_shuffle_ps(v28, v28, 210)));
		v79 = _mm_mul_ps(*(__m128*)v81, *(__m128*)v81);
		LODWORD(v42) = _mm_shuffle_ps(v79, v79, 170).m128_u32[0];
		if (_mm_shuffle_ps(v79, v79, 85).m128_f32[0] > v79.m128_f32[0])
			v41 = 1i64;
		v43 = 1 - v41;
		if (v42 > v79.m128_f32[v41])
			v41 = 2i64;
		v44 = (__m128)v79.m128_u32[-v43 + 3 - v41];
		v44.m128_f32[0] = (float)(v44.m128_f32[0] + v79.m128_f32[v43]) + v79.m128_f32[v41];
		if (v44.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v49 = 0i64;
			v79 = 0i64;
			v48 = 0.0;
			v47 = 0.0;
			v46 = 0.0;
		}
		else
		{
			v45 = 1.0 / _mm_sqrt_ps(v44).m128_f32[0];
			v46 = *(float*)v81 * v45;
			v47 = *(float*)&v81[4] * v45;
			v48 = *(float*)&v81[8] * v45;
			v79.m128_f32[0] = *(float*)v81 * v45;
			v79.m128_f32[1] = *(float*)&v81[4] * v45;
			v79.m128_f32[2] = *(float*)&v81[8] * v45;
			v49 = v79;
		}
		v50 = 0i64;
		*v32 = v46;
		*(float*)(a1 + 1080) = v37;
		*(float*)(a1 + 1088) = v47;
		v51 = _mm_shuffle_ps(v49, v49, 210);
		*(_DWORD*)(a1 + 1084) = 0;
		*(_DWORD*)(a1 + 1100) = 0;
		*(_DWORD*)(a1 + 1116) = 0;
		*(float*)(a1 + 1096) = v38;
		*(float*)(a1 + 1104) = v48;
		*(float*)(a1 + 1112) = v39;
		v52 = _mm_mul_ps(_mm_shuffle_ps(v49, v49, 201), _mm_shuffle_ps(v40, v40, 210));
		v53 = _mm_mul_ps(v49, v29);
		v79 = v53;
		v54 = _mm_shuffle_ps(v40, v40, 201);
		v55 = _mm_mul_ps(v40, v29);
		v56 = _mm_sub_ps(_mm_mul_ps(v51, v54), v52);
		*(_DWORD*)(a1 + 1076) = v56.m128_i32[0];
		*(_DWORD*)(a1 + 1092) = _mm_shuffle_ps(v56, v56, 85).m128_u32[0];
		v54.m128_i32[0] = _mm_shuffle_ps(v56, v56, 170).m128_u32[0];
		v57 = _mm_mul_ps(v56, v29);
		*(_DWORD*)(a1 + 1108) = v54.m128_i32[0];
		v58 = _mm_shuffle_ps(v53, v53, 85).m128_f32[0] <= v53.m128_f32[0];
		LODWORD(v59) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
		if (!v58)
			v50 = 1i64;
		v60 = 1 - v50;
		if (v59 > v79.m128_f32[v50])
			v50 = 2i64;
		v61 = (float)(v79.m128_f32[-v60 + 3 - v50] + v79.m128_f32[v60]) + v79.m128_f32[v50];
		v79 = v57;
		v62 = 0i64;
		*(float*)(a1 + 1120) = -v61;
		v58 = _mm_shuffle_ps(v57, v57, 85).m128_f32[0] <= v57.m128_f32[0];
		LODWORD(v63) = _mm_shuffle_ps(v57, v57, 170).m128_u32[0];
		if (!v58)
			v62 = 1i64;
		v64 = 1 - v62;
		if (v63 > v79.m128_f32[v62])
			v62 = 2i64;
		v65 = (float)(v79.m128_f32[-v64 + 3 - v62] + v79.m128_f32[v64]) + v79.m128_f32[v62];
		v79 = v55;
		v66 = 0i64;
		*(float*)(a1 + 1124) = -v65;
		v58 = _mm_shuffle_ps(v55, v55, 85).m128_f32[0] <= v55.m128_f32[0];
		LODWORD(v67) = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
		if (!v58)
			v66 = 1i64;
		v68 = 1 - v66;
		if (v67 > v79.m128_f32[v66])
			v66 = 2i64;
		v69 = a1 + 1136;
		*(_DWORD*)(a1 + 1132) = 1065353216;
		v84[0] = a1 + 1072;
		*(float*)(a1 + 1128) = -(float)((float)(v79.m128_f32[-v68 + 3 - v66] + v79.m128_f32[v68]) + v79.m128_f32[v66]);
		sub_1401AFC20(v84, (double*)(a1 + 1136));
	}
	else
	{
		v21 = a1 + 1200;
		v69 = a1 + 1136;
		v32 = (float*)(a1 + 1072);
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, __int64*, __int64, __int64, __int64))(v19 + 1064))(
			v17,
			*(unsigned int*)(a1 + 1056),
			v16,
			0i64,
			v80,
			a1 + 1072,
			a1 + 1136,
			a1 + 1200);
		if ((int)result < 0)
			return result;
	}
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1272) + 296i64))(*(_QWORD*)(a1 + 1272), 1i64);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1272) + 320i64))(*(_QWORD*)(a1 + 1272), 1i64);
	(*(void(__fastcall**)(_QWORD, float*, __int64, __int64*, _DWORD))(**(_QWORD**)(a1 + 1264) + 80i64))(
		*(_QWORD*)(a1 + 1264),
		v32,
		v69,
		v80,
		0);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	v70 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 240) + 24i64))(*(_QWORD*)(a1 + 240));
	v71 = 0i64;
	v72 = 0i64;
	v71.m128_f32[0] = (float)*(int*)(v70 + 8) * 0.5;
	v72.m128_f32[0] = (float)*(int*)(v70 + 4) * 0.5;
	v73 = _mm_unpacklo_ps(_mm_unpacklo_ps(v72, (__m128)0i64), _mm_unpacklo_ps(v71, (__m128)0i64));
	*(__m128*)v81 = v73;
	v74 = _mm_shuffle_ps(v73, v73, 85).m128_f32[0];
	if (a2 <= (float)(v73.m128_f32[0] / v74))
		*(float*)v81 = a2 * v74;
	else
		*(float*)&v81[4] = v73.m128_f32[0] / a2;
	v75 = *(_QWORD*)(a1 + 1264);
	v76 = *(_QWORD*)(a1 + 240);
	v83[1] = (__int128)_mm_add_ps(v73, *(__m128*)v81);
	v83[0] = (__int128)_mm_sub_ps(v73, *(__m128*)v81);
	(*(void(__fastcall**)(__int64, __int64, __int64*, __int64, int, int, int, __int64, __int128*, int, _DWORD))(*(_QWORD*)v75 + 128i64))(
		v75,
		v21,
		v80,
		a1 + 272,
		2,
		3,
		-1,
		v76,
		v83,
		1065353216,
		0);
	sub_140035190(a1, v12);
	sub_1400355A0(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	if (*(_DWORD*)(a1 + 40) != 4)
	{
		v77 = *(_QWORD*)(a1 + 32);
		if (v77)
		{
			while (*(_DWORD*)(v77 + 40) == 4)
			{
				v77 = *(_QWORD*)(v77 + 32);
				if (!v77)
					goto LABEL_50;
			}
		}
		else
		{
		LABEL_50:
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 216),
				(unsigned int)qword_140C77760,
				HIDWORD(qword_140C77760));
			sub_140252260(v78, 1);
		}
	}
	return 0i64;
}
// 140034F69: variable 'v16' is possibly undefined
// 140035136: variable 'v78' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140034860: using guessed type __int64 var_120[10];


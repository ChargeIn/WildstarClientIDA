//----- (000000014025B9C0) ----------------------------------------------------
void __fastcall sub_14025B9C0(__int64 a1, __m128* a2)
{
	int v4; // eax
	__int32 v5; // r14d
	unsigned int v6; // r13d
	unsigned __int64 v7; // rcx
	int v8; // edi
	BOOL v9; // r12d
	_DWORD* v10; // r15
	bool v11; // zf
	int* v12; // r8
	__m128* v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__m128** v16; // r9
	__int64 v17; // r8
	__int64 v18; // rdx
	__m128* v19; // rax
	__m128 v20; // xmm0
	__m128 v21; // xmm1
	__m128 v22; // xmm3
	__m128 v23; // xmm5
	__m128 v24; // xmm3
	__m128 v25; // xmm2
	__m128 v26; // xmm4
	_OWORD* v27; // rax
	__m128 v28; // xmm8
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128 v31; // xmm1
	__m128 v32; // xmm3
	__int64 v33; // rdx
	__int64 v34; // r8
	__m128 v35; // xmm2
	__m128 v36; // xmm1
	__m128 v37; // xmm6
	__m128* v38; // r8
	__int64 v39; // rdx
	int v40; // edx
	int v41; // r12d
	_DWORD* v42; // rax
	__int64 v43; // r8
	int v44; // r14d
	int v45; // eax
	__int64 v46; // r8
	__int64 v47; // r8
	__m128 v48; // xmm6
	__m128 v49; // xmm5
	__m128 v50; // xmm2
	__m128 v51; // xmm1
	__m128 v52; // xmm0
	__m128 v53; // xmm2
	__m128 v54; // xmm1
	__m128 v55; // xmm2
	__m128 v56; // xmm1
	__m128 v57; // xmm6
	__m128 v58; // xmm5
	__int32 v59; // ecx
	float v60; // xmm1_4
	float v61; // xmm0_4
	float v62; // xmm1_4
	__int32 v63; // eax
	__m128 v64; // xmm0
	__m128 v65; // xmm2
	__m128 v66; // xmm2
	__m128 v67; // xmm2
	__m128 v68; // xmm2
	__m128* v69; // [rsp+48h] [rbp-C0h] BYREF
	__m128* v70; // [rsp+50h] [rbp-B8h]
	int v71; // [rsp+5Ch] [rbp-ACh]
	__int64 v72; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v73; // [rsp+68h] [rbp-A0h]
	_QWORD v74[3]; // [rsp+70h] [rbp-98h] BYREF
	__m128 v75; // [rsp+88h] [rbp-80h]
	__m128 v76; // [rsp+98h] [rbp-70h]
	__m128 v77; // [rsp+A8h] [rbp-60h]
	int v78; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v79; // [rsp+C0h] [rbp-48h]
	int v80; // [rsp+CCh] [rbp-3Ch]
	__m128 v81; // [rsp+D8h] [rbp-30h] BYREF
	__m128 v82; // [rsp+E8h] [rbp-20h]
	__m128 v83; // [rsp+F8h] [rbp-10h]
	__m128 v84; // [rsp+118h] [rbp+10h] BYREF
	__m128 v85; // [rsp+128h] [rbp+20h]
	__m128 v86; // [rsp+138h] [rbp+30h]
	__m128 v87; // [rsp+148h] [rbp+40h]
	__m128* v88; // [rsp+168h] [rbp+60h] BYREF
	__m128* v89; // [rsp+170h] [rbp+68h]

	if (a2[15].m128_f32[0] >= 0.0000099999997)
	{
		v4 = *(_DWORD*)(a1 + 48);
		v5 = a2[16].m128_i32[3];
		v6 = 64;
		switch (v4)
		{
		case 5:
			if ((v5 & 0x3A0) == 0)
				return;
			LOWORD(v5) = v5 & 0xFFBF;
			v6 = 2;
			break;
		case 11:
			if ((v5 & 0x20) == 0)
				return;
			LOWORD(v5) = v5 & 0xFC3F | 0x180;
			break;
		case 16:
			if ((v5 & 0x40) == 0)
				return;
			LOWORD(v5) = v5 & 0xFC5F;
			break;
		}
		v7 = a2[18].m128_u64[0];
		v8 = 0;
		v9 = v4 == 16;
		if (v7)
		{
			LODWORD(v69) = 0;
			if ((*(unsigned int(__fastcall**)(unsigned __int64, __m128**))(*(_QWORD*)v7 + 32i64))(v7, &v69))
			{
				v10 = (_DWORD*)((char*)&unk_140AE4F80 + 28 * a2[17].m128_i32[0]);
				if (*(_DWORD*)(a1 + 148) != *v10)
				{
					*(_DWORD*)(a1 + 148) = *v10;
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
					v11 = *v10 == 1;
					v12 = (int*)&unk_140C3FE88;
					LODWORD(v72) = 1;
					HIDWORD(v74[0]) = 0;
					if (v11)
					{
						v13 = *(__m128**)(a1 + 1680);
						LODWORD(v69) = 1;
						v71 = 0;
						v70 = v13;
						v14 = *(_QWORD*)(a1 + 1672);
						v78 = 1;
						v79 = v14;
						v15 = *(_QWORD*)(a1 + 2352);
						v80 = 0;
						v16 = &v69;
						v12 = &v78;
					}
					else
					{
						v15 = *(_QWORD*)(a1 + 1688);
						v16 = (__m128**) & unk_140C3FE88;
					}
					v73 = v15;
					(*(void(__fastcall**)(__int64, __int64*, int*, __m128**, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						&v72,
						v12,
						v16,
						&unk_140C3FE88);
					v17 = *(unsigned int*)(a1 + 2396);
					v73 = *(_QWORD*)(a1 + 2384);
					LODWORD(v72) = 1;
					HIDWORD(v74[0]) = 0;
					(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
						qword_140C65670,
						&v72,
						v17);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2064));
					v18 = *(_QWORD*)(a1 + 2080);
					*(_QWORD*)(a1 + 2472) = 36i64;
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
						qword_140C65670,
						v18,
						1i64);
					*(_QWORD*)(a1 + 2480) = 8i64;
					v19 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
						qword_140C65670,
						64i64,
						0i64);
					if (v19)
					{
						v20 = *(__m128*)(a1 + 304);
						v21 = *(__m128*)(a1 + 336);
						v22 = *(__m128*)(a1 + 288);
						v23 = _mm_unpackhi_ps(v22, v20);
						v24 = _mm_unpacklo_ps(v22, v20);
						v25 = _mm_unpacklo_ps(*(__m128*)(a1 + 320), v21);
						v26 = _mm_unpackhi_ps(*(__m128*)(a1 + 320), v21);
						*v19 = _mm_shuffle_ps(v24, v25, 68);
						v19[1] = _mm_shuffle_ps(v24, v25, 238);
						v19[2] = _mm_shuffle_ps(v23, v26, 68);
						v19[3] = _mm_shuffle_ps(v23, v26, 238);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
					}
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2136),
						(unsigned int)v9 + 1);
					v27 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
						qword_140C65670,
						48i64,
						0i64);
					if (v27)
					{
						*v27 = *(_OWORD*)(a1 + 544);
						v27[1] = *(_OWORD*)(a1 + 560);
						v27[2] = *(_OWORD*)(a1 + 592);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					}
				}
				v69 = a2 + 2;
				v70 = (__m128*)(a1 + 160);
				v84.m128_u64[0] = (unsigned __int64)&a2[2];
				v84.m128_u64[1] = a1 + 160;
				sub_1401AFB10((__m128**) & v84, &v81);
				v28 = (__m128)0x3F800000u;
				v29 = _mm_sub_ps(a2[1], *a2);
				v30 = _mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps(v29, v29, 170));
				*(__m128*)& v74[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128)0i64), (__m128)0i64);
				v31 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_shuffle_ps(v29, v29, 85), (__m128)0i64));
				v32 = _mm_unpacklo_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[2]);
				v75 = v31;
				v76 = _mm_unpacklo_ps(v30, (__m128)0i64);
				v77 = _mm_unpacklo_ps(v32, _mm_unpacklo_ps((__m128)a2->m128_u32[1], (__m128)0x3F800000u));
				v34 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
					qword_140C65670,
					48i64,
					1i64,
					4i64,
					0);
				if (v34)
				{
					v69 = (__m128*) & v74[1];
					v70 = &v81;
					v88 = (__m128*) & v74[1];
					v89 = &v81;
					sub_1401AFB10(&v88, &v84);
					v35 = _mm_unpacklo_ps(v84, v85);
					v36 = _mm_unpacklo_ps(v86, v87);
					v37 = _mm_shuffle_ps(_mm_unpackhi_ps(v84, v85), _mm_unpackhi_ps(v86, v87), 68);
					*v38 = _mm_shuffle_ps(v35, v36, 68);
					v38[1] = _mm_shuffle_ps(v35, v36, 238);
					v38[2] = v37;
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
				}
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 2096) + 24i64))(
					*(_QWORD*)(a1 + 2096),
					v33,
					v34);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
					qword_140C65670,
					1i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
				v39 = 4i64;
				if (v9)
					v39 = 7i64;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v39);
				v40 = 0;
				v41 = 2;
				if ((v5 & 0x1A0) != 0)
				{
					if ((v5 & 0x20) != 0)
						v40 = 8;
					if ((v5 & 0x100) != 0)
						v40 |= 0x20u;
					if ((v5 & 0x80u) != 0)
						v40 |= 0x10u;
					v41 = 1;
				}
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
					qword_140C65670,
					*(unsigned int*)(a1 + 2408),
					(unsigned int)v40 | *(_DWORD*)(a1 + 2412),
					v6);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					5i64,
					v41);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(a1 + 1720),
					0i64,
					*(_QWORD*)(a1 + 2056));
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					1i64,
					*(_QWORD*)(a1 + 1704));
				v42 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
					qword_140C65670,
					16i64,
					1i64);
				if (v42)
				{
					*v42 = a2[16].m128_i32[2];
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
				}
				v43 = 0i64;
				if ((v5 & 0x200) != 0)
					v43 = 16i64;
				if ((v5 & 0x20) != 0)
					v43 = (unsigned int)v43 | 8;
				if ((v5 & 0x80u) != 0)
					v43 = (unsigned int)v43 | 4;
				if ((v5 & 0x100) != 0)
					v43 = (unsigned int)v43 | 2;
				if ((v5 & 0x40) != 0)
					v43 = (unsigned int)v43 | 1;
				(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2144),
					v43);
				sub_140260520(a1);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 32i64))(*(_QWORD*)(a1 + 2096));
				v44 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2096),
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(
					qword_140C65670,
					(unsigned int)v10[2]);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670
					+ 456i64))(
						qword_140C65670,
						(unsigned int)v10[3],
						(unsigned int)v10[4],
						0i64,
						(unsigned int)v10[5],
						v10[6],
						0);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
					qword_140C65670,
					v6,
					v6,
					v6);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					1i64,
					2);
				v45 = *(_DWORD*)(a1 + 48);
				if (v45 == 5 || v45 == 11)
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1720),
						0i64,
						*(_QWORD*)(a1 + 2056));
					v44 = 1;
				}
				else if (v45 == 16)
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1704),
						0i64,
						0i64);
				}
				if (*v10 == 1)
					v46 = *(_QWORD*)(a1 + 1688);
				else
					v46 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					1i64,
					v46);
				(*(void(__fastcall**)(__int64, __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					2i64,
					a2[18].m128_u64[0]);
				(*(void(__fastcall**)(__int64, __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					4i64,
					a2[18].m128_u64[0]);
				(*(void(__fastcall**)(__int64, __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					6i64,
					a2[18].m128_u64[1]);
				if ((*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
					qword_140C65670,
					448i64,
					1i64))
				{
					v69 = (__m128*)(a1 + 224);
					v70 = a2 + 6;
					v88 = (__m128*)(a1 + 224);
					v89 = a2 + 6;
					sub_1401AFB10(&v88, (__m128*) & v74[1]);
					v69 = (__m128*) & v74[1];
					v88 = (__m128*) & v74[1];
					v70 = a2 + 10;
					v89 = a2 + 10;
					sub_1401AFB10(&v88, &v84);
					v48 = *(__m128*) & v74[1];
					v49 = v76;
					v50 = _mm_unpacklo_ps(v84, v85);
					v51 = _mm_unpacklo_ps(v86, v87);
					v52 = _mm_shuffle_ps(v50, v51, 68);
					v53 = _mm_shuffle_ps(v50, v51, 238);
					v54 = v76;
					*(__m128*)v47 = v52;
					*(__m128*)(v47 + 16) = v53;
					v55 = _mm_unpacklo_ps(v48, v75);
					v56 = _mm_unpacklo_ps(v54, v77);
					v57 = _mm_unpackhi_ps(v48, v75);
					v58 = _mm_unpackhi_ps(v49, v77);
					*(__m128*)(v47 + 32) = _mm_shuffle_ps(v55, v56, 68);
					*(__m128*)(v47 + 48) = _mm_shuffle_ps(v55, v56, 238);
					*(__m128*)(v47 + 64) = _mm_shuffle_ps(v57, v58, 68);
					*(_OWORD*)(v47 + 128) = xmmword_140C78410;
					*(_OWORD*)(v47 + 160) = xmmword_140C78430;
					*(_OWORD*)(v47 + 192) = 0i64;
					*(_OWORD*)(v47 + 224) = 0i64;
					*(_OWORD*)(v47 + 256) = xmmword_140B7B240;
					*(_DWORD*)(v47 + 288) = a2[14].m128_i32[0];
					*(_DWORD*)(v47 + 292) = a2[14].m128_i32[1];
					*(_DWORD*)(v47 + 296) = a2[14].m128_i32[2];
					*(_DWORD*)(v47 + 300) = a2[15].m128_i32[0];
					*(_DWORD*)(v47 + 304) = _mm_cvtsi128_si32((__m128i)0i64);
					*(_DWORD*)(v47 + 308) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 4));
					*(_DWORD*)(v47 + 312) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
					*(_DWORD*)(v47 + 316) = a2[15].m128_i32[1];
					v59 = a2[17].m128_i32[0];
					if (v59)
					{
						if (v59 == 1)
						{
							*(_DWORD*)(v47 + 320) = 1065353216;
							*(_DWORD*)(v47 + 324) = 1056964608;
						}
						else
						{
							*(_QWORD*)(v47 + 320) = 0i64;
						}
					}
					else
					{
						*(_QWORD*)(v47 + 320) = 1065353216i64;
					}
					*(float*)(v47 + 328) = (float)a2[17].m128_i32[1];
					*(float*)(v47 + 332) = (float)a2[17].m128_i32[2];
					switch (a2[17].m128_i32[0])
					{
					case 5:
					case 8:
					case 0xA:
					case 0xD:
					case 0xE:
						*(_OWORD*)(v47 + 336) = xmmword_140B7B240;
						break;
					case 6:
					case 9:
					case 0xB:
						*(_OWORD*)(v47 + 336) = xmmword_140B7AC50;
						break;
					default:
						*(_OWORD*)(v47 + 336) = 0i64;
						break;
					}
					v60 = a2[16].m128_f32[1];
					v61 = a2[16].m128_f32[0];
					if (v60 <= v61)
					{
						*(_DWORD*)(v47 + 352) = 0;
						*(_DWORD*)(v47 + 356) = 1065353216;
					}
					else
					{
						v62 = v60 - v61;
						*(float*)(v47 + 352) = -1.0 / v62;
						*(float*)(v47 + 356) = -(float)((float)(-1.0 / v62) * a2[16].m128_f32[1]);
					}
					*(_DWORD*)(v47 + 360) = a2[15].m128_i32[3];
					*(_DWORD*)(v47 + 364) = a2[15].m128_i32[2];
					*(_OWORD*)(v47 + 368) = *(_OWORD*)(a1 + 176);
					v63 = a2[16].m128_i32[3];
					if ((v63 & 0x1000) != 0)
						v64 = (__m128)0x3F800000u;
					else
						v64 = 0i64;
					if ((v63 & 0x800) != 0)
						v65 = (__m128)0x3F800000u;
					else
						v65 = 0i64;
					if ((v63 & 0x400) == 0)
						v28 = 0i64;
					*(__m128*)(v47 + 384) = _mm_unpacklo_ps(_mm_unpacklo_ps(v28, v64), _mm_unpacklo_ps(v65, (__m128)0i64));
					v66 = _mm_mul_ps(v81, v81);
					v66.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v66.m128_f32[0] + _mm_shuffle_ps(v66, v66, 85).m128_f32[0])
							+ _mm_shuffle_ps(v66, v66, 170).m128_f32[0]);
					*(__m128*)(v47 + 400) = _mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v81);
					v67 = _mm_mul_ps(v82, v82);
					v67.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0])
							+ _mm_shuffle_ps(v67, v67, 170).m128_f32[0]);
					*(__m128*)(v47 + 416) = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v82);
					v68 = _mm_mul_ps(v83, v83);
					v68.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0])
							+ _mm_shuffle_ps(v68, v68, 170).m128_f32[0]);
					*(__m128*)(v47 + 432) = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v83);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
				}
				if (a2[15].m128_f32[3] != 0.0 && a2[18].m128_u64[1])
					v8 = 1;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2168),
					v10[1]
					+ 8
					* ((((unsigned __int32)a2[16].m128_i32[3] >> 4) & 1) + 12 * (v8 + 2 * ((*(float*)(a1 + 332) == 0.0) + 2 * v44))));
				sub_140260520(a1);
				if (a2[17].m128_i32[0] == 1)
				{
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
						qword_140C65670,
						1i64,
						0i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2128),
						0i64);
					sub_140260520(a1);
				}
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
					qword_140C65670,
					0i64,
					0i64);
			}
		}
	}
}
// 14025BE5B: variable 'v38' is possibly undefined
// 14025BE83: variable 'v33' is possibly undefined
// 14025BE83: variable 'v34' is possibly undefined
// 14025C2CA: variable 'v47' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;


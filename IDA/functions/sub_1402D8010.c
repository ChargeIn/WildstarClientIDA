//----- (00000001402D8010) ----------------------------------------------------
__int64 __fastcall sub_1402D8010(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE* a5)
{
	_BYTE* v5; // rsi
	__int64 v7; // rax
	__int64 v9; // r13
	int v11; // r14d
	int v12; // r15d
	__int64 v13; // rdx
	__int64 v14; // r8
	int v15; // r14d
	__int64 v16; // rdx
	__int64 v17; // rdx
	__m128 v18; // xmm7
	__int64 v19; // rdx
	unsigned int v20; // r15d
	unsigned int v21; // ebx
	_QWORD* v22; // rsi
	__m128* v23; // rax
	__m128* v24; // rbx
	__m128 v25; // xmm3
	__m128 v26; // xmm2
	__m128 v27; // xmm5
	__m128 v28; // xmm4
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128* v31; // rax
	__m128 v32; // xmm2
	__m128 v33; // xmm1
	__m128 v34; // xmm6
	int v35; // r15d
	int v36; // eax
	__int64 v37; // r12
	__int64 v38; // rax
	__int64 v39; // rbx
	__int64 v40; // r8
	int v41; // esi
	__int64 v42; // r10
	__int64 v43; // r9
	__int64 v44; // rdx
	__int64 v45; // r8
	int v46; // ecx
	int v47; // r11d
	__int64 v48; // r15
	__int64 v49; // r12
	__int64 v50; // r13
	_DWORD* v51; // rax
	_DWORD* v52; // rax
	_DWORD* v53; // rax
	_DWORD* v54; // rax
	_DWORD* v55; // rax
	__int128 v56; // xmm1
	__int128 v57; // xmm0
	__int128 v58; // xmm1
	unsigned int* v59; // rax
	int* v60; // rax
	int v61; // xmm1_4
	float* v62; // rax
	float v63; // xmm0_4
	int* v64; // rax
	int v65; // xmm0_4
	int* v66; // rax
	int v67; // xmm0_4
	__int64 v68; // rcx
	_DWORD* v69; // rdx
	_OWORD* v70; // rcx
	__int64 v71; // r9
	__int64 v72; // rcx
	__int128 v73; // xmm0
	__int64 v74; // rdx
	int v75; // xmm0_4
	__int64 v76; // r9
	int v77; // eax
	int v78; // eax
	__m128 v79; // xmm3
	__m128 v80; // xmm4
	_QWORD* v81; // rax
	__int64 v82; // rax
	int v83; // r8d
	unsigned __int8 v84; // al
	__int64 v85; // r8
	int v87; // [rsp+48h] [rbp-C0h]
	int v88; // [rsp+4Ch] [rbp-BCh]
	__int64 v90; // [rsp+58h] [rbp-B0h]
	__int64 v91; // [rsp+58h] [rbp-B0h]
	__int64 v92; // [rsp+60h] [rbp-A8h]
	__int64 v93; // [rsp+60h] [rbp-A8h]
	_QWORD v94[3]; // [rsp+70h] [rbp-98h] BYREF
	_BYTE* v95; // [rsp+88h] [rbp-80h]
	__int64 v96; // [rsp+90h] [rbp-78h]
	__int128 v97; // [rsp+98h] [rbp-70h]
	__int128 v98; // [rsp+A8h] [rbp-60h]
	__int128 v99; // [rsp+B8h] [rbp-50h]
	__int128 v100; // [rsp+C8h] [rbp-40h]
	__int128 v101; // [rsp+D8h] [rbp-30h]
	__m128 v102; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v103; // [rsp+F8h] [rbp-10h]
	__m128 v104; // [rsp+108h] [rbp+0h]
	__m128 v105; // [rsp+118h] [rbp+10h]
	__m128* v106[10]; // [rsp+128h] [rbp+20h] BYREF

	v5 = a5;
	v7 = *(_QWORD*)qword_140C65670;
	v9 = a3;
	v96 = a3;
	v95 = a5;
	(*(void(__fastcall**)(__int64))(v7 + 296))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a4 + 16i64))(a4);
	v11 = *(_DWORD*)(qword_140C657F0 + 1208);
	v90 = qword_140C657F0;
	v92 = qword_140C657F0 + 176;
	v87 = v11;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a4 + 24i64))(a4);
	v12 = v11 & 4;
	v88 = v12;
	if ((v11 & 4) != 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			1i64,
			3i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	}
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 4i64) & 4) != 0 || (v11 & 0x20000) != 0)
	{
		v13 = 0i64;
	}
	else
	{
		if ((v11 & 0x40000) == 0)
			goto LABEL_10;
		v13 = 2i64;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, v13);
LABEL_10:
	v14 = 0i64;
	v15 = 4;
	if (a2 == 5)
	{
		switch (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64))
		{
		case 3:
			v16 = 1i64;
			v14 = 1i64;
			break;
		case 4:
			v14 = 1i64;
			v16 = 4i64;
			break;
		case 5:
			v16 = 8i64;
			break;
		case 6:
			v16 = 8i64;
			v14 = 2i64;
			break;
		default:
			v14 = 5i64;
			v16 = 4i64;
			break;
		}
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, int, int, _DWORD))(*(_QWORD*)qword_140C65670 + 456i64))(
			qword_140C65670,
			v16,
			v14,
			0i64,
			7,
			1,
			0);
	}
	v17 = 7i64;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 4i64) & 1) == 0)
		v17 = 3i64;
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v17, v14);
	(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)qword_140C65670 + 408i64))(
		qword_140C65670,
		(*(_BYTE*)(*(_QWORD*)(a1 + 8) + 4i64) & 2) == 0);
	v18 = (__m128)0x3F800000u;
	if (v12)
	{
		v19 = 8i64;
	}
	else
	{
		if ((*a5 & 1) == 0)
			goto LABEL_28;
		v19 = 4294967288i64;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, v19);
LABEL_28:
	v20 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24i64);
	if (v20 > 4)
		v20 = 4;
	v21 = 0;
	if (v20)
	{
		v22 = (_QWORD*)(a1 + 72);
		do
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
				qword_140C65670,
				v21,
				*(v22 - 4),
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
				qword_140C65670,
				v21 + 4,
				*v22,
				0i64);
			++v21;
			++v22;
		} while (v21 < v20);
		v5 = v95;
	}
	v23 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			160i64,
			0i64,
			0i64,
			0);
	v24 = v23;
	if (v23)
	{
		v25 = *(__m128*)(v92 + 64);
		v26 = *(__m128*)(v92 + 96);
		v27 = _mm_unpackhi_ps(v25, *(__m128*)(v92 + 80));
		v28 = _mm_unpackhi_ps(v26, *(__m128*)(v92 + 112));
		v29 = _mm_unpacklo_ps(v25, *(__m128*)(v92 + 80));
		v30 = _mm_unpacklo_ps(v26, *(__m128*)(v92 + 112));
		*v23 = _mm_shuffle_ps(v29, v30, 68);
		v23[1] = _mm_shuffle_ps(v29, v30, 238);
		v23[2] = _mm_shuffle_ps(v27, v28, 68);
		v23[3] = _mm_shuffle_ps(v27, v28, 238);
		sub_140262750(v92 + 240, (__int64)&v23[4], (_DWORD*)v92);
		v31 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a4 + 40i64))(a4);
		v106[1] = (__m128*)v92;
		v106[0] = v31;
		sub_1401AFB10(v106, &v102);
		v32 = _mm_unpacklo_ps(v102, v103);
		v33 = _mm_unpacklo_ps(v104, v105);
		v34 = _mm_shuffle_ps(_mm_unpackhi_ps(v102, v103), _mm_unpackhi_ps(v104, v105), 68);
		v24[7] = _mm_shuffle_ps(v32, v33, 68);
		v24[8] = _mm_shuffle_ps(v32, v33, 238);
		v24[9] = v34;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v35 = a2;
	if (a2 != 5 || v88)
		v36 = 0;
	else
		v36 = a2 - 4;
	v37 = v90;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(qword_140C657F0 + 24),
		(v5[27] != 0)
		+ 2
		* ((v5[26] != 0)
			+ 2 * ((v5[25] != 0) + 2 * ((unsigned int)(v5[24] != 0) + 2 * (3 * v36 + dword_140B62CE8[*(int*)(v90 + 1348)])))));
	v38 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		720i64,
		0i64,
		0i64,
		0);
	v39 = v38;
	if (v38)
	{
		v40 = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 24i64);
		if ((unsigned int)v40 > 4)
			v40 = 4i64;
		LODWORD(v94[0]) = v40;
		if ((_DWORD)v40)
		{
			v41 = dword_140DC0C68;
			v42 = v38 + 400;
			v43 = v38 + 128;
			v44 = 0i64;
			v93 = (unsigned int)v40;
			do
			{
				if ((v41 & 1) == 0)
				{
					v41 |= 1u;
					xmmword_140DC0C70[0] = 0i64;
					xmmword_140DC0C80 = xmmword_140C78410;
					xmmword_140DC0C90 = xmmword_140B7AD60;
					xmmword_140DC0CB0 = xmmword_140B7AF20;
					xmmword_140DC0CA0 = xmmword_140C78420;
					xmmword_140DC0CD0 = xmmword_140B7B290;
					xmmword_140DC0CC0 = xmmword_140C78430;
				}
				v45 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32i64);
				v46 = *(_DWORD*)(v44 + v45 + 4);
				v47 = *(_DWORD*)(v44 + v45 + 8);
				v48 = *(int*)(v44 + v45 + 12);
				v49 = *(int*)(v44 + v45 + 16);
				v50 = *(int*)(v44 + v45 + 20);
				v99 = xmmword_140DC0C70[v46];
				v98 = xmmword_140DC0C70[v47];
				v101 = xmmword_140DC0C70[v48];
				v100 = xmmword_140DC0C70[v49];
				v97 = xmmword_140DC0C70[v50];
				if (!v46)
				{
					v51 = *(_DWORD**)(v44 + v45 + 40);
					if (v51)
						HIDWORD(v99) = *v51;
					else
						HIDWORD(v99) = 1065353216;
				}
				if (!v47)
				{
					v52 = *(_DWORD**)(v44 + v45 + 64);
					if (v52)
						HIDWORD(v98) = *v52;
					else
						HIDWORD(v98) = 1065353216;
				}
				if (!(_DWORD)v48)
				{
					v53 = *(_DWORD**)(v44 + v45 + 88);
					if (v53)
						HIDWORD(v101) = *v53;
					else
						HIDWORD(v101) = 1065353216;
				}
				if (!(_DWORD)v49)
				{
					v54 = *(_DWORD**)(v44 + v45 + 112);
					if (v54)
						HIDWORD(v100) = *v54;
					else
						HIDWORD(v100) = 0;
				}
				if (!(_DWORD)v50)
				{
					v55 = *(_DWORD**)(v44 + v45 + 136);
					if (v55)
						HIDWORD(v97) = *v55;
					else
						HIDWORD(v97) = 0;
				}
				v56 = v98;
				*(_OWORD*)(v43 - 128) = v99;
				v57 = v101;
				*(_OWORD*)(v43 - 64) = v56;
				v58 = v97;
				*(_OWORD*)v43 = v57;
				*(_OWORD*)(v43 + 64) = v100;
				*(_OWORD*)(v43 + 128) = v58;
				v59 = *(unsigned int**)(v44 + v45 + 280);
				if (!v59)
				{
					v59 = (unsigned int*)&v94[1];
					*(_OWORD*)&v94[1] = xmmword_140B7B240;
				}
				*(__m128*)(v43 + 192) = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * v59, (__m128)v59[2]),
					_mm_unpacklo_ps((__m128)v59[1], (__m128)0i64));
				v60 = *(int**)(v44 + v45 + 184);
				if (v60)
					v61 = *v60;
				else
					v61 = 1065353216;
				*(float*)(v42 - 16) = fmaxf(*(float*)&v61, 0.0);
				v62 = *(float**)(v44 + v45 + 208);
				if (v62)
					v63 = *v62;
				else
					v63 = 0.0;
				*(float*)v42 = v63 + 0.001;
				v64 = *(int**)(v44 + v45 + 232);
				if (v64)
					v65 = *v64;
				else
					v65 = 0;
				*(_DWORD*)(v42 + 16) = v65;
				v66 = *(int**)(v44 + v45 + 256);
				if (v66)
					v67 = *v66;
				else
					v67 = 0;
				*(_DWORD*)(v42 + 32) = v67;
				v42 += 4i64;
				v43 += 16i64;
				*(_DWORD*)(v42 + 44) = dword_140C58B38[*(unsigned int*)(v44 + v45 + 288)];
				v44 += 296i64;
				--v93;
			} while (v93);
			v40 = LODWORD(v94[0]);
			v9 = v96;
			v35 = a2;
			v37 = v90;
			dword_140DC0C68 = v41;
			v5 = v95;
			v15 = 4;
		}
		v68 = (unsigned int)v40;
		if ((unsigned int)v40 >= 4)
		{
			v71 = 0i64;
		}
		else
		{
			v69 = (_DWORD*)(v39 + 400 + 4i64 * (unsigned int)v40);
			v40 = (unsigned int)(4 - v40);
			v70 = (_OWORD*)(v39 + 16 * (v68 + 8));
			v71 = 0i64;
			do
			{
				*(v70 - 8) = 0i64;
				*(v70 - 4) = 0i64;
				*v70 = 0i64;
				++v69;
				v70[4] = 0i64;
				v70[8] = 0i64;
				v70[12] = 0i64;
				*(v69 - 5) = 0;
				*(v69 - 1) = 0;
				v69[3] = 0;
				v69[7] = 0;
				v69[11] = 0;
				++v70;
				--v40;
			} while (v40);
		}
		v72 = *(_QWORD*)(a1 + 8);
		*(float*)&v91 = (float)*(int*)(v72 + 16);
		*((float*)&v91 + 1) = (float)*(int*)(v72 + 20);
		*(_QWORD*)(v39 + 464) = v91;
		*(_DWORD*)(v39 + 472) = *(_DWORD*)(v9 + 44);
		if ((unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) - 3) > 3)
		{
			*(_OWORD*)(v39 + 480) = *(_OWORD*)v9;
			*(_OWORD*)(v39 + 496) = *(_OWORD*)(a1 + 144);
			v73 = *(_OWORD*)(a1 + 160);
		}
		else
		{
			v73 = 0i64;
			*(_OWORD*)(v39 + 480) = 0i64;
			*(_OWORD*)(v39 + 496) = 0i64;
		}
		*(_OWORD*)(v39 + 512) = v73;
		if ((unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) - 5) > 1)
		{
			*(__m128*)(v39 + 528) = _mm_mul_ps(*(__m128*)(a1 + 112), *(__m128*)(v9 + 16));
			*(__m128*)(v39 + 544) = _mm_mul_ps(*(__m128*)(a1 + 128), *(__m128*)(v9 + 16));
		}
		else
		{
			*(_OWORD*)(v39 + 528) = xmmword_140B7B240;
			*(_OWORD*)(v39 + 544) = xmmword_140B7B240;
		}
		*(_DWORD*)(v39 + 560) = *(_DWORD*)(v9 + 32);
		*(_DWORD*)(v39 + 476) = *(_DWORD*)(v9 + 36);
		*(_DWORD*)(v39 + 564) = *(_DWORD*)(v9 + 40);
		v74 = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 12i64);
		if ((_DWORD)v74)
		{
			v74 = (unsigned int)(v74 - 1);
			if ((_DWORD)v74)
			{
				*(_DWORD*)(v39 + 568) = 0;
				*(_DWORD*)(v39 + 572) = 998277249;
			}
			else
			{
				*(_DWORD*)(v39 + 568) = 1065353216;
				*(_DWORD*)(v39 + 572) = 1056964608;
			}
		}
		else
		{
			if ((*v5 & 1) != 0)
				v75 = 0;
			else
				v75 = 1065353216;
			*(_DWORD*)(v39 + 568) = v75;
			*(_DWORD*)(v39 + 572) = 0;
		}
		if (v35 != 5)
			goto LABEL_112;
		sub_140262D50((float*)(v37 + 416), (__m128*)(v39 + 576));
		v77 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64);
		if (v77 < 3)
			goto LABEL_111;
		if (v77 <= 4)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(qword_140C657F0 + 1264));
			*(_DWORD*)(v39 + 704) = dword_140C79700;
			*(_DWORD*)(v39 + 708) = dword_140C79704;
			v78 = dword_140C79708;
		}
		else
		{
			if (v77 != 5)
			{
				if (v77 == 6)
				{
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						11i64,
						*(_QWORD*)(qword_140C657F0 + 1280),
						0i64,
						v76);
					*(_DWORD*)(v39 + 704) = 1056964608;
					*(_DWORD*)(v39 + 708) = 1056964608;
					*(_QWORD*)(v39 + 712) = 1056964608i64;
				LABEL_112:
					v79 = (__m128)0x3F800000u;
					v79.m128_f32[0] = 1.0 / (float)*(int*)(qword_140C657F0 + 1220);
					v18.m128_f32[0] = 1.0 / (float)*(int*)(qword_140C657F0 + 1224);
					v80 = _mm_unpacklo_ps(_mm_unpacklo_ps(v79, (__m128)0i64), _mm_unpacklo_ps(v18, (__m128)0i64));
					*(_QWORD*)(v39 + 688) = v80.m128_u64[0];
					*(__m128*)& v94[1] = _mm_mul_ps(v80, (__m128)xmmword_140B7AC50);
					*(_QWORD*)(v39 + 696) = v94[1];
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 280i64))(
						qword_140C65670,
						v74,
						v40,
						v71);
					goto LABEL_113;
				}
			LABEL_111:
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					11i64,
					*(_QWORD*)(v37 + 1184));
				*(_DWORD*)(v39 + 704) = dword_140C79700;
				*(_DWORD*)(v39 + 708) = dword_140C79704;
				*(_DWORD*)(v39 + 712) = dword_140C79708;
				*(_DWORD*)(v39 + 716) = 1065353216;
				goto LABEL_112;
			}
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(qword_140C657F0 + 1272));
			*(_QWORD*)(v39 + 704) = qword_140C79710;
			v78 = dword_140C79718;
		}
		*(_DWORD*)(v39 + 712) = v78;
		*(_DWORD*)(v39 + 716) = 0;
		goto LABEL_112;
	}
LABEL_113:
	if (v35 == 1)
	{
		v81 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			12i64,
			*v81,
			0i64,
			0i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			12i64,
			0i64,
			0i64,
			0i64);
	}
	if (v88)
	{
		v15 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) == 1;
	}
	else if (v35)
	{
		if (v35 == 1)
		{
			v15 = (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) == 7) + 4;
		}
		else if (v35 == 5)
		{
			v15 = 6;
		}
		else
		{
			v15 = v87;
		}
	}
	else if ((v87 & 1) != 0)
	{
		v15 = (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) != 0) + 2;
	}
	v82 = *(int*)(*(_QWORD*)(a1 + 8) + 8i64);
	v83 = dword_140B62CB8[v82];
	if ((_DWORD)v82 == 6)
	{
		v84 = v5[21];
		if (v84)
			v83 = v84 - 1;
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(qword_140C657F0 + 32),
		(unsigned int)(*(_DWORD*)(a1 + 32)
			+ 2
			* (*(_DWORD*)(a1 + 28)
				+ 2
				* (*(_DWORD*)(a1 + 24)
					+ 2 * (*(_DWORD*)(a1 + 20) + 2 * (v83 + 12 * (dword_140B65808[*(int*)(v37 + 1348)] + 4 * v15)))))));
	if (!v35)
	{
		LOBYTE(v85) = 120;
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65688 + 264i64))(
			qword_140C65688,
			byte_140B62CB1[(*(float*)(v9 + 44) > 0.0) - (unsigned __int64)(*(float*)(v9 + 44) < 0.0)],
			v85);
	}
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, int))(*(_QWORD*)qword_140C65670
		+ 656i64))(
			qword_140C65670,
			3i64,
			*((unsigned int*)v5 + 1),
			(unsigned int)(*((_DWORD*)v5 + 2) - *((_DWORD*)v5 + 1) + 1),
			*((_DWORD*)v5 + 3),
			*((_DWORD*)v5 + 4) - *((_DWORD*)v5 + 3) + 1,
			0,
			1);
}
// 1402D81BF: variable 'v14' is possibly undefined
// 1402D897D: variable 'v76' is possibly undefined
// 1402D8B1E: variable 'v74' is possibly undefined
// 1402D8B1E: variable 'v40' is possibly undefined
// 1402D8B1E: variable 'v71' is possibly undefined
// 1402D8C99: variable 'v85' is possibly undefined
// 140B62CB1: using guessed type unsigned __int8[7];
// 140B62CB8: using guessed type int dword_140B62CB8[12];
// 140B62CE8: using guessed type int dword_140B62CE8[4];
// 140B65808: using guessed type int dword_140B65808[4];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD60: using guessed type __int128 xmmword_140B7AD60;
// 140B7AF20: using guessed type __int128 xmmword_140B7AF20;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B290: using guessed type __int128 xmmword_140B7B290;
// 140C58B38: using guessed type int dword_140C58B38[10];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C79700: using guessed type int dword_140C79700;
// 140C79704: using guessed type int dword_140C79704;
// 140C79708: using guessed type int dword_140C79708;
// 140C79710: using guessed type __int64 qword_140C79710;
// 140C79718: using guessed type int dword_140C79718;
// 140DC0C68: using guessed type int dword_140DC0C68;
// 140DC0C70: using guessed type __int128 xmmword_140DC0C70[];
// 140DC0C80: using guessed type __int128 xmmword_140DC0C80;
// 140DC0C90: using guessed type __int128 xmmword_140DC0C90;
// 140DC0CA0: using guessed type __int128 xmmword_140DC0CA0;
// 140DC0CB0: using guessed type __int128 xmmword_140DC0CB0;
// 140DC0CC0: using guessed type __int128 xmmword_140DC0CC0;
// 140DC0CD0: using guessed type __int128 xmmword_140DC0CD0;


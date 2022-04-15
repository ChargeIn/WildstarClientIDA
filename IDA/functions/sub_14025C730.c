#include "../winhttp.h"

//----- (000000014025C730) ----------------------------------------------------
void __fastcall sub_14025C730(__int64 a1, __m128* a2)
{
	__int64 v3; // rbx
	bool v4; // cc
	_DWORD* v5; // rcx
	unsigned int v6; // esi
	int v7; // eax
	__int64 v8; // r8
	unsigned __int64 v9; // r15
	BOOL v10; // r14d
	unsigned __int64 v11; // r12
	unsigned __int64* v12; // r14
	__int64 v13; // rcx
	unsigned __int64 v14; // rcx
	_DWORD* v15; // r13
	bool v16; // zf
	int* v17; // r8
	__m128* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	__int128** v21; // r9
	__int64 v22; // r8
	__int64 v23; // rdx
	__m128* v24; // rax
	__m128 v25; // xmm0
	__m128 v26; // xmm1
	__m128 v27; // xmm3
	__m128 v28; // xmm5
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128 v31; // xmm4
	_OWORD* v32; // rax
	__m128 v33; // xmm9
	unsigned int v34; // r14d
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	__m128 v37; // xmm1
	__m128 v38; // xmm3
	__int64 v39; // rdx
	__int64 v40; // r8
	__m128 v41; // xmm2
	__m128 v42; // xmm1
	__m128 v43; // xmm6
	__m128* v44; // r8
	int v45; // edx
	int v46; // r14d
	unsigned int v47; // r12d
	unsigned __int64 v48; // r14
	_DWORD* v49; // rax
	__int64 v50; // r8
	int v51; // eax
	__int64 v52; // r8
	unsigned __int64* v53; // r12
	__int128* v54; // r8
	__int64 v55; // r11
	__m128 v56; // xmm2
	__m128 v57; // xmm1
	int v58; // r13d
	__m128* v59; // xmm8_8
	unsigned __int32* v60; // r14
	__m128* v61; // r12
	__int64 v62; // r8
	__int64 v63; // r9
	__int64 v64; // r10
	__m128 v65; // xmm2
	__m128 v66; // xmm1
	__m128 v67; // xmm6
	__int64 v68; // rax
	__int64 v69; // rax
	__int64 v70; // rax
	__int64 v71; // rax
	__int128 v72; // xmm0
	int v73; // edx
	__int128 v74; // xmm0
	float v75; // xmm1_4
	float v76; // xmm0_4
	float v77; // xmm1_4
	__m128 v78; // xmm0
	__m128 v79; // xmm2
	__m128 v80; // xmm2
	__m128 v81; // xmm2
	__m128 v82; // xmm2
	int v83; // ecx
	BOOL v84; // [rsp+40h] [rbp-C0h]
	int v85; // [rsp+40h] [rbp-C0h]
	__int128* v86; // [rsp+48h] [rbp-B8h] BYREF
	__m128* v87; // [rsp+50h] [rbp-B0h]
	int v88; // [rsp+5Ch] [rbp-A4h]
	unsigned int v89; // [rsp+60h] [rbp-A0h]
	int v90; // [rsp+68h] [rbp-98h] BYREF
	__int64 v91; // [rsp+70h] [rbp-90h]
	int v92; // [rsp+7Ch] [rbp-84h]
	__int64 v93; // [rsp+80h] [rbp-80h]
	_DWORD* v94; // [rsp+88h] [rbp-78h] BYREF
	int v95; // [rsp+98h] [rbp-68h] BYREF
	__int64 v96; // [rsp+A0h] [rbp-60h]
	int v97; // [rsp+ACh] [rbp-54h]
	__m128 v98; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v99; // [rsp+C0h] [rbp-40h]
	__m128 v100; // [rsp+D0h] [rbp-30h]
	__int128 v101[4]; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v102; // [rsp+130h] [rbp+30h] BYREF
	__m128 v103; // [rsp+140h] [rbp+40h]
	__m128 v104; // [rsp+150h] [rbp+50h]
	__m128 v105; // [rsp+160h] [rbp+60h]
	__m128* v106; // [rsp+180h] [rbp+80h] BYREF
	__m128* v107; // [rsp+188h] [rbp+88h]

	v3 = a1;
	v4 = a2[12].m128_f32[0] >= 0.0000099999997;
	v93 = a1;
	if (v4)
	{
		v5 = (_DWORD*)a2[14].m128_u64[0];
		v89 = 64;
		if (*v5 == 2)
			v6 = v5[1];
		else
			v6 = 7328;
		v7 = *(_DWORD*)(v3 + 48);
		v8 = 2i64;
		switch (v7)
		{
		case 5:
			if ((v6 & 0x3A0) == 0)
				return;
			v6 &= ~0x40u;
			v89 = 2;
			break;
		case 11:
			if ((v6 & 0x20) == 0)
				return;
			v6 = v6 & 0xFFFFFC3F | 0x180;
			break;
		case 16:
			if ((v6 & 0x40) == 0)
				return;
			v6 &= 0xFFFFFC5F;
			break;
		}
		v9 = (unsigned int)v5[6];
		v10 = v7 == 16;
		v84 = v10;
		v11 = 0i64;
		if (v9 > 2)
			v9 = 2i64;
		if (v9)
		{
			v12 = &a2[20].m128_u64[1];
			while (1)
			{
				v13 = *(v12 - 1);
				if (!v13)
					break;
				LODWORD(v86) = 0;
				if (!(*(unsigned int(__fastcall**)(__int64, __int128**, __int64))(*(_QWORD*)v13 + 32i64))(v13, &v86, v8))
					break;
				v14 = *v12;
				if (!*v12)
					break;
				LODWORD(v94) = 0;
				if (!(*(unsigned int(__fastcall**)(unsigned __int64, _DWORD**))(*(_QWORD*)v14 + 32i64))(v14, &v94))
					break;
				++v11;
				v12 += 14;
				if (v11 >= v9)
				{
					v10 = v84;
					goto LABEL_24;
				}
			}
		}
		else
		{
		LABEL_24:
			v15 = (_DWORD*)((char*)&unk_140AE4F80 + 28 * *(int*)(a2[14].m128_u64[0] + 12));
			v94 = v15;
			if (*(_DWORD*)(v3 + 148) != *v15)
			{
				*(_DWORD*)(v3 + 148) = *v15;
				(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)qword_140C65670 + 672i64))(
					qword_140C65670,
					a2,
					v8);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 80i64))(v3);
				v16 = *v15 == 1;
				v17 = (int*)&unk_140C3FE88;
				v90 = 1;
				v92 = 0;
				if (v16)
				{
					v18 = *(__m128**)(v3 + 1680);
					LODWORD(v86) = 1;
					v88 = 0;
					v87 = v18;
					v19 = *(_QWORD*)(v3 + 1672);
					v95 = 1;
					v96 = v19;
					v20 = *(_QWORD*)(v3 + 2352);
					v97 = 0;
					v21 = &v86;
					v17 = &v95;
				}
				else
				{
					v20 = *(_QWORD*)(v3 + 1688);
					v21 = (__int128**)&unk_140C3FE88;
				}
				v91 = v20;
				(*(void(__fastcall**)(__int64, int*, int*, __int128**, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
					qword_140C65670,
					&v90,
					v17,
					v21,
					&unk_140C3FE88);
				v22 = *(unsigned int*)(v3 + 2396);
				v91 = *(_QWORD*)(v3 + 2384);
				v90 = 1;
				v92 = 0;
				(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
					qword_140C65670,
					&v90,
					v22);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v3 + 2328);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
					qword_140C65670,
					*(_QWORD*)(v3 + 2064));
				v23 = *(_QWORD*)(v3 + 2080);
				*(_QWORD*)(v3 + 2472) = 36i64;
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
					qword_140C65670,
					v23,
					1i64);
				*(_QWORD*)(v3 + 2480) = 8i64;
				v24 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
					qword_140C65670,
					64i64,
					0i64);
				if (v24)
				{
					v25 = *(__m128*)(v3 + 304);
					v26 = *(__m128*)(v3 + 336);
					v27 = *(__m128*)(v3 + 288);
					v28 = _mm_unpackhi_ps(v27, v25);
					v29 = _mm_unpacklo_ps(v27, v25);
					v30 = _mm_unpacklo_ps(*(__m128*)(v3 + 320), v26);
					v31 = _mm_unpackhi_ps(*(__m128*)(v3 + 320), v26);
					*v24 = _mm_shuffle_ps(v29, v30, 68);
					v24[1] = _mm_shuffle_ps(v29, v30, 238);
					v24[2] = _mm_shuffle_ps(v28, v31, 68);
					v24[3] = _mm_shuffle_ps(v28, v31, 238);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
				}
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
					qword_140C65670,
					*(_QWORD*)(v3 + 2136),
					(unsigned int)v10 + 1);
				v32 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
					qword_140C65670,
					48i64,
					0i64);
				if (v32)
				{
					*v32 = *(_OWORD*)(v3 + 544);
					v32[1] = *(_OWORD*)(v3 + 560);
					v32[2] = *(_OWORD*)(v3 + 592);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
				}
			}
			v86 = (__int128*)&a2[2];
			v87 = (__m128*)(v3 + 160);
			v102.m128_u64[0] = (unsigned __int64)&a2[2];
			v102.m128_u64[1] = v3 + 160;
			sub_1401AFB10((__m128**) & v102, &v98);
			v33 = (__m128)0x3F800000u;
			v34 = 4;
			v35 = _mm_sub_ps(a2[1], *a2);
			v36 = _mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps(v35, v35, 170));
			v101[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v35, (__m128)0i64), (__m128)0i64);
			v37 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_shuffle_ps(v35, v35, 85), (__m128)0i64));
			v38 = _mm_unpacklo_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[2]);
			v101[1] = (__int128)v37;
			v101[2] = (__int128)_mm_unpacklo_ps(v36, (__m128)0i64);
			v101[3] = (__int128)_mm_unpacklo_ps(v38, _mm_unpacklo_ps((__m128)a2->m128_u32[1], (__m128)0x3F800000u));
			v40 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
				qword_140C65670,
				48i64,
				1i64,
				4i64,
				0);
			if (v40)
			{
				v86 = v101;
				v87 = &v98;
				v106 = (__m128*)v101;
				v107 = &v98;
				sub_1401AFB10(&v106, &v102);
				v41 = _mm_unpacklo_ps(v102, v103);
				v42 = _mm_unpacklo_ps(v104, v105);
				v43 = _mm_shuffle_ps(_mm_unpackhi_ps(v102, v103), _mm_unpackhi_ps(v104, v105), 68);
				*v44 = _mm_shuffle_ps(v41, v42, 68);
				v44[1] = _mm_shuffle_ps(v41, v42, 238);
				v44[2] = v43;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v3 + 2096) + 24i64))(
				*(_QWORD*)(v3 + 2096),
				v39,
				v40);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
			if (v84)
				v34 = 7;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v34);
			v45 = 0;
			v46 = 2;
			if ((v6 & 0x1A0) != 0)
			{
				if ((v6 & 0x20) != 0)
					v45 = 8;
				if ((v6 & 0x100) != 0)
					v45 |= 0x20u;
				if ((v6 & 0x80u) != 0)
					v45 |= 0x10u;
				v46 = 1;
			}
			v47 = v89;
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				*(unsigned int*)(v3 + 2408),
				(unsigned int)v45 | *(_DWORD*)(v3 + 2412),
				v89);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
				qword_140C65670,
				0i64,
				0i64,
				5i64,
				v46);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				0i64,
				*(_QWORD*)(v3 + 1720),
				0i64,
				*(_QWORD*)(v3 + 2056));
			v48 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				*(_QWORD*)(v3 + 1704),
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				2i64,
				*(_QWORD*)(v3 + 1712),
				0i64,
				0i64);
			v49 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
				+ 272i64))(
					qword_140C65670,
					16i64,
					1i64,
					3i64,
					0);
			if (v49)
			{
				*v49 = a2[13].m128_i32[2];
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			v50 = 0i64;
			if ((v6 & 0x200) != 0)
				v50 = 16i64;
			if ((v6 & 0x20) != 0)
				v50 = (unsigned int)v50 | 8;
			if ((v6 & 0x80u) != 0)
				v50 = (unsigned int)v50 | 4;
			if ((v6 & 0x100) != 0)
				v50 = (unsigned int)v50 | 2;
			if ((v6 & 0x40) != 0)
				v50 = (unsigned int)v50 | 1;
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(v3 + 2144),
				v50);
			sub_140260520(v3);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2096) + 32i64))(*(_QWORD*)(v3 + 2096));
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
				qword_140C65670,
				*(_QWORD*)(v3 + 2096),
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(
				qword_140C65670,
				(unsigned int)v15[2]);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670
				+ 456i64))(
					qword_140C65670,
					(unsigned int)v15[3],
					(unsigned int)v15[4],
					0i64,
					v15[5],
					v15[6],
					0);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				v47,
				v47,
				v47);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
				qword_140C65670,
				0i64,
				0i64,
				1i64,
				2);
			v51 = *(_DWORD*)(v3 + 48);
			v85 = 0;
			if (v51 == 5 || v51 == 11)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(v3 + 1720),
					0i64,
					*(_QWORD*)(v3 + 2056));
				v85 = 1;
			}
			else if (v51 == 16)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(v3 + 1704),
					0i64,
					0i64);
			}
			if (*v15 == 1)
				v52 = *(_QWORD*)(v3 + 1688);
			else
				v52 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				v52);
			if (v9)
			{
				v53 = &a2[20].m128_u64[1];
				do
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						(unsigned int)(v48 + 2),
						*(v53 - 1),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						(unsigned int)(v48++ + 4),
						*v53,
						0i64,
						0i64);
					v53 += 14;
				} while (v48 < v9);
			}
			(*(void(__fastcall**)(__int64, __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				6i64,
				a2[29].m128_u64[0]);
			if ((*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
				qword_140C65670,
				448i64,
				1i64))
			{
				v87 = a2 + 6;
				v86 = (__int128*)(v3 + 224);
				v106 = (__m128*)(v3 + 224);
				v107 = a2 + 6;
				sub_1401AFB10(&v106, &v102);
				v56 = _mm_unpacklo_ps(v102, v103);
				v57 = _mm_unpacklo_ps(v104, v105);
				*(__m128*)v55 = _mm_shuffle_ps(v56, v57, 68);
				*(__m128*)(v55 + 16) = _mm_shuffle_ps(v56, v57, 238);
				if (v9)
				{
					v58 = dword_140DC0B90;
					v86 = v54;
					v59 = (__m128*)v54;
					v60 = &a2[21].m128_u32[1];
					v61 = (__m128*)(v55 + 64);
					do
					{
						v106 = v59;
						v87 = (__m128*)(v60 - 25);
						v107 = (__m128*)(v60 - 25);
						sub_1401AFB10(&v106, &v102);
						v65 = _mm_unpacklo_ps(v102, v103);
						v66 = _mm_unpacklo_ps(v104, v105);
						v67 = _mm_shuffle_ps(_mm_unpackhi_ps(v102, v103), _mm_unpackhi_ps(v104, v105), 68);
						v61[-2] = _mm_shuffle_ps(v65, v66, 68);
						v61[-1] = _mm_shuffle_ps(v65, v66, 238);
						*v61 = v67;
						if ((v58 & 1) == 0)
						{
							v58 |= 1u;
							xmmword_140DC0BA0[0] = xmmword_140B7AD00;
							xmmword_140DC0BB0 = xmmword_140B7A330;
							xmmword_140DC0BC0 = xmmword_140B7AD60;
							xmmword_140DC0BE0 = xmmword_140B7AF20;
							xmmword_140DC0BD0 = xmmword_140B7A4B0;
							xmmword_140DC0C00 = xmmword_140B7B290;
							xmmword_140DC0BF0 = xmmword_140B7A700;
						}
						v68 = *(int*)(v63 + v64 + 8);
						if (!(_DWORD)v68 || *(_DWORD*)(v63 + v64 + 148))
							*(__m128*)(v62 - 32) = _mm_mul_ps(
								(__m128)xmmword_140DC0BA0[v68],
								_mm_shuffle_ps((__m128) * (v60 - 1), (__m128) * (v60 - 1), 0));
						else
							*(_OWORD*)(v62 - 32) = xmmword_140DC0BA0[v68];
						v69 = *(int*)(v63 + v64 + 12);
						if (!(_DWORD)v69 || *(_DWORD*)(v63 + v64 + 152))
							*(__m128*)v62 = _mm_mul_ps((__m128)xmmword_140DC0BA0[v69], _mm_shuffle_ps((__m128) * v60, (__m128) * v60, 0));
						else
							*(_OWORD*)v62 = xmmword_140DC0BA0[v69];
						v70 = *(int*)(v63 + v64 + 16);
						if (!(_DWORD)v70 || *(_DWORD*)(v63 + v64 + 156))
							*(__m128*)(v62 + 32) = _mm_mul_ps(
								(__m128)xmmword_140DC0BA0[v70],
								_mm_shuffle_ps((__m128)v60[1], (__m128)v60[1], 0));
						else
							*(_OWORD*)(v62 + 32) = xmmword_140DC0BA0[v70];
						v71 = *(int*)(v63 + v64 + 20);
						if (!(_DWORD)v71 || *(_DWORD*)(v63 + v64 + 160))
							*(__m128*)(v62 + 64) = _mm_mul_ps(
								(__m128)xmmword_140DC0BA0[v71],
								_mm_shuffle_ps((__m128)v60[2], (__m128)v60[2], 0));
						else
							*(_OWORD*)(v62 + 64) = xmmword_140DC0BA0[v71];
						v72 = *(_OWORD*)(v60 - 9);
						v60 += 28;
						*(_OWORD*)(v62 + 96) = v72;
						v61 += 3;
						--v9;
					} while (v9);
					v3 = v93;
					dword_140DC0B90 = v58;
					v15 = v94;
				}
				*(_DWORD*)(v55 + 288) = a2[10].m128_i32[0];
				*(_DWORD*)(v55 + 292) = a2[10].m128_i32[1];
				*(_DWORD*)(v55 + 296) = a2[10].m128_i32[2];
				*(_DWORD*)(v55 + 300) = a2[12].m128_i32[0];
				*(_DWORD*)(v55 + 304) = a2[11].m128_i32[0];
				*(_DWORD*)(v55 + 308) = a2[11].m128_i32[1];
				*(_DWORD*)(v55 + 312) = a2[11].m128_i32[2];
				*(_DWORD*)(v55 + 316) = a2[12].m128_i32[1];
				v73 = *(_DWORD*)(a2[14].m128_u64[0] + 12);
				if (v73)
				{
					if (v73 == 1)
					{
						*(_DWORD*)(v55 + 320) = 1065353216;
						*(_DWORD*)(v55 + 324) = 1056964608;
					}
					else
					{
						*(_QWORD*)(v55 + 320) = 0i64;
					}
				}
				else
				{
					*(_QWORD*)(v55 + 320) = 1065353216i64;
				}
				*(float*)(v55 + 328) = (float)*(int*)(a2[14].m128_u64[0] + 16);
				*(float*)(v55 + 332) = (float)*(int*)(a2[14].m128_u64[0] + 20);
				switch (*(_DWORD*)(a2[14].m128_u64[0] + 12))
				{
				case 5:
				case 8:
				case 0xA:
				case 0xD:
				case 0xE:
					v74 = xmmword_140B7B240;
					break;
				case 6:
				case 9:
				case 0xB:
					v74 = xmmword_140B7AC50;
					break;
				default:
					v74 = 0i64;
					break;
				}
				*(_OWORD*)(v55 + 336) = v74;
				v75 = a2[13].m128_f32[1];
				v76 = a2[13].m128_f32[0];
				if (v75 <= v76)
				{
					*(_DWORD*)(v55 + 352) = 0;
					*(_DWORD*)(v55 + 356) = 1065353216;
				}
				else
				{
					v77 = v75 - v76;
					*(float*)(v55 + 352) = -1.0 / v77;
					*(float*)(v55 + 356) = -(float)((float)(-1.0 / v77) * a2[13].m128_f32[1]);
				}
				*(_DWORD*)(v55 + 360) = a2[12].m128_i32[3];
				*(_DWORD*)(v55 + 364) = a2[12].m128_i32[2];
				*(_OWORD*)(v55 + 368) = *(_OWORD*)(v3 + 176);
				if ((v6 & 0x1000) != 0)
					v78 = (__m128)0x3F800000u;
				else
					v78 = 0i64;
				if ((v6 & 0x800) != 0)
					v79 = (__m128)0x3F800000u;
				else
					v79 = 0i64;
				if ((v6 & 0x400) == 0)
					v33 = 0i64;
				*(__m128*)(v55 + 384) = _mm_unpacklo_ps(_mm_unpacklo_ps(v33, v78), _mm_unpacklo_ps(v79, (__m128)0i64));
				v80 = _mm_mul_ps(v98, v98);
				v80.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v80.m128_f32[0] + _mm_shuffle_ps(v80, v80, 85).m128_f32[0])
						+ _mm_shuffle_ps(v80, v80, 170).m128_f32[0]);
				*(__m128*)(v55 + 400) = _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0), v98);
				v81 = _mm_mul_ps(v99, v99);
				v81.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v81.m128_f32[0] + _mm_shuffle_ps(v81, v81, 85).m128_f32[0])
						+ _mm_shuffle_ps(v81, v81, 170).m128_f32[0]);
				*(__m128*)(v55 + 416) = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v99);
				v82 = _mm_mul_ps(v100, v100);
				v82.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v82.m128_f32[0] + _mm_shuffle_ps(v82, v82, 85).m128_f32[0])
						+ _mm_shuffle_ps(v82, v82, 170).m128_f32[0]);
				*(__m128*)(v55 + 432) = _mm_mul_ps(_mm_shuffle_ps(v82, v82, 0), v100);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
			if (a2[12].m128_f32[3] == 0.0 || (v83 = 1, !a2[29].m128_u64[0]))
				v83 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(v3 + 2168),
				v15[1]
				+ 8
				* (((v6 >> 4) & 1)
					+ 2
					* (dword_140B60450[*(int*)(a2[14].m128_u64[0] + 8)] + 6 * (v83 + 2 * ((*(float*)(v3 + 332) == 0.0) + 2 * v85)))));
			if (*(_QWORD*)(v3 + 2472))
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
					+ 656i64))(
						qword_140C65670,
						3i64,
						0i64,
						*(unsigned int*)(v3 + 2472),
						0i64,
						*(_DWORD*)(v3 + 2480),
						0,
						1);
			else
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 648i64))(
					qword_140C65670,
					3i64,
					0i64,
					*(unsigned int*)(v3 + 2480),
					1i64);
			if (*(_DWORD*)(a2[14].m128_u64[0] + 12) == 1)
			{
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
					qword_140C65670,
					1i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(v3 + 2128),
					0i64);
				if (*(_QWORD*)(v3 + 2472))
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
						+ 656i64))(
							qword_140C65670,
							3i64,
							0i64,
							*(unsigned int*)(v3 + 2472),
							0,
							*(_DWORD*)(v3 + 2480),
							0,
							1);
				else
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
						qword_140C65670,
						3i64,
						0i64,
						*(unsigned int*)(v3 + 2480),
						1);
			}
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
				qword_140C65670,
				0i64,
				0i64);
		}
	}
}
// 14025C85A: variable 'v8' is possibly undefined
// 14025C8E6: variable 'a2' is possibly undefined
// 14025CC62: variable 'v44' is possibly undefined
// 14025CC8A: variable 'v39' is possibly undefined
// 14025CC8A: variable 'v40' is possibly undefined
// 14025D0CF: variable 'v55' is possibly undefined
// 14025D0E8: variable 'v54' is possibly undefined
// 14025D205: variable 'v63' is possibly undefined
// 14025D205: variable 'v64' is possibly undefined
// 14025D220: variable 'v62' is possibly undefined
// 140B60450: using guessed type int dword_140B60450[12];
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7AD60: using guessed type __int128 xmmword_140B7AD60;
// 140B7AF20: using guessed type __int128 xmmword_140B7AF20;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B290: using guessed type __int128 xmmword_140B7B290;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140DC0B90: using guessed type int dword_140DC0B90;
// 140DC0BA0: using guessed type __int128 xmmword_140DC0BA0[];
// 140DC0BB0: using guessed type __int128 xmmword_140DC0BB0;
// 140DC0BC0: using guessed type __int128 xmmword_140DC0BC0;
// 140DC0BD0: using guessed type __int128 xmmword_140DC0BD0;
// 140DC0BE0: using guessed type __int128 xmmword_140DC0BE0;
// 140DC0BF0: using guessed type __int128 xmmword_140DC0BF0;
// 140DC0C00: using guessed type __int128 xmmword_140DC0C00;


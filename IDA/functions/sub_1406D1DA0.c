#include "../winhttp.h"

//----- (00000001406D1DA0) ----------------------------------------------------
void** __fastcall sub_1406D1DA0(__int64 a1, unsigned int* a2, unsigned int* a3)
{
	void** result; // rax
	unsigned __int64 v5; // rcx
	unsigned int* v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // r12
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // r15
	__int64 v12; // rdx
	int v13; // ecx
	_QWORD* v14; // rcx
	__int128 v15; // xmm6
	unsigned int* v16; // rax
	unsigned int v17; // esi
	__m128i v18; // xmm1
	__m128i v19; // xmm3
	__m128i v20; // xmm2
	__m128 v21; // xmm4
	__m128i v22; // xmm3
	__m128i v23; // xmm1
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rdi
	unsigned __int64* v28; // rcx
	float v29; // xmm7_4
	__int64 v30; // rax
	__int64 v31; // rdi
	_QWORD* v32; // rcx
	__int64 v33; // rdx
	int v34; // ecx
	int v35; // esi
	int* v36; // rax
	__int64 v37; // rcx
	int v38; // eax
	int v39; // ecx
	_QWORD* v40; // rcx
	__int64 v41; // rax
	int v42; // edx
	__int64 v43; // rax
	_QWORD* v44; // rcx
	int v45; // xmm0_4
	int v46; // edi
	int v47; // eax
	__int64 v48; // rcx
	__int64 v49; // rax
	unsigned int v50; // edx
	__int64 v51; // r8
	__int64 v52; // rdx
	BOOL v53; // eax
	int* v54; // rax
	__int64 v55; // rsi
	int v56; // ebx
	int* v57; // rdi
	__int64 v58; // rax
	__int64 v59; // rcx
	int v60; // ebx
	__int64 v61; // rax
	unsigned int v62; // edx
	__int64 v63; // r8
	__int64 v64; // rdx
	BOOL v65; // eax
	int* v66; // rax
	__int64 v67; // rsi
	int v68; // ebx
	int* v69; // rdi
	__int64 v70; // rax
	__int64 v71; // rcx
	int v72; // ebx
	_DWORD* v73; // rdx
	_DWORD* v74; // r8
	_DWORD* v75; // r8
	unsigned __int64 v76; // r8
	float v77; // xmm0_4
	__m128* v78; // r8
	_QWORD* v79; // rcx
	__m128 v80; // xmm1
	__int64 v81; // rbx
	__int64 v82; // rax
	__int64 v83; // rcx
	_QWORD* v84; // rcx
	__int64 v85; // rcx
	_QWORD* v86; // rcx
	int v87; // eax
	_QWORD* v88; // rcx
	int v89; // xmm0_4
	__m128 v90; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v91; // [rsp+58h] [rbp-B0h]
	__int128 v92; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v93[2]; // [rsp+78h] [rbp-90h] BYREF
	int v94; // [rsp+98h] [rbp-70h]
	__m128 v95; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v96; // [rsp+B8h] [rbp-50h]
	void* retaddr; // [rsp+130h] [rbp+28h] BYREF
	unsigned int v98; // [rsp+138h] [rbp+30h] BYREF
	unsigned int v99; // [rsp+13Ch] [rbp+34h]
	unsigned int* v100; // [rsp+140h] [rbp+38h] BYREF
	unsigned int* v101; // [rsp+148h] [rbp+40h]
	int v102; // [rsp+150h] [rbp+48h] BYREF

	result = &retaddr;
	v101 = a3;
	v100 = a2;
	v5 = a2[1];
	v6 = a3;
	v7 = (__int64)a2;
	if (*(_QWORD*)(a1 + 1120) <= v5)
		return result;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 1112) + 8 * v5);
	if (*(_DWORD*)(a1 + 2084))
	{
		v98 = *(_DWORD*)(v8 + 12);
		v99 = *(_DWORD*)(v8 + 16);
	}
	else
	{
		v9 = *a2;
		v99 = a2[1];
		v98 = v9;
	}
	v10 = sub_1403AC780(qword_140C65898 + 160, (int*)&v98);
	v11 = v10;
	if (v10)
	{
		if (*(_QWORD*)v8 != v10 || **(_DWORD**)(*(_QWORD*)v8 + 64i64) != **(_DWORD**)(v10 + 64))
		{
			*(_QWORD*)v8 = v10;
			v12 = *(_QWORD*)(a1 + 32);
			if (v12)
				sub_140109710((__int64*)(v8 + 40), v12 + 240, *(__m128i**)(*(_QWORD*)(v10 + 64) + 488i64), 0);
			sub_1405C7AD0(v8 + 96, **(_DWORD**)(v11 + 64), 0);
			*(_DWORD*)(a1 + 2080) = 1;
		}
		*(_DWORD*)(v8 + 8) = 2;
		v13 = 1;
		*(_DWORD*)(v8 + 20) = *v6;
		*(_DWORD*)(v8 + 24) = v6[1];
		*(_DWORD*)(v8 + 28) = v6[2];
		*(_DWORD*)(v8 + 32) = v6[3];
		if (*(_DWORD*)(v11 + 120))
			v13 = *(_DWORD*)(v11 + 120);
		*(_DWORD*)(v8 + 88) = v13;
		if (!*(_DWORD*)(a1 + 2084))
			*(_QWORD*)(v8 + 12) = *(_QWORD*)v7;
		v14 = *(_QWORD**)(a1 + 2120);
		v15 = xmmword_140B7B240;
		v93[0] = (__m128)xmmword_140B7B240;
		if (v14)
			sub_140103CF0(
				v14,
				v6,
				v93,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2128)) * *(float*)(a1 + 2132)));
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v93[0] = *(__m128*)v6;
		v16 = sub_140109900(a1 + 2120, &v90, (int*)v93, 2u);
		v17 = *(_DWORD*)(v8 + 88);
		v18 = _mm_cvtsi32_si128(v16[3]);
		v19 = _mm_cvtsi32_si128(v16[2]);
		v20 = _mm_cvtsi32_si128(0);
		v98 = v17;
		v21 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v19, v20), _mm_unpacklo_epi32(v18, v20)));
		v22 = _mm_cvtsi32_si128(*v16);
		v23 = _mm_cvtsi32_si128(v16[1]);
		v24 = *(_QWORD*)v11;
		v96 = v21;
		v92 = xmmword_140B7B240;
		v95 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v22, v20), _mm_unpacklo_epi32(v23, v20)));
		v25 = (*(__int64(__fastcall**)(__int64, int*))(v24 + 32))(v11, &v102);
		if (sub_14053BC30(v26, v25))
		{
			v27 = *(_QWORD*)(a1 + 32);
			v92 = xmmword_140C777F0;
			if (*(_QWORD*)(v27 + 3384) == a1 && *(_QWORD*)(a1 + 2096) == v8)
			{
				v28 = *(unsigned __int64**)(v27 + 3440);
				if (*(_QWORD*)(v27 + 3448) - (_QWORD)v28 == 16i64
					&& *v28 == 0x70536D6574494444i64
					&& v28[1] == 0x6B6361745374696Ci64
					|| *(_QWORD*)(v27 + 3448) - (_QWORD)v28 == 19i64
					&& !(unsigned int)sub_1407E6AF0(v28, (__int64)"DDSupplySatchelItem", 0x13ui64))
				{
					v17 -= *(unsigned __int16*)(v27 + 3490);
				LABEL_29:
					v98 = v17;
					goto LABEL_30;
				}
				v98 = 0;
			}
		LABEL_30:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 + 96) + 48i64))(v8 + 96);
			v29 = *(float*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 + 96) + 120i64))(v8 + 96) + 132);
			v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 + 96) + 120i64))(v8 + 96);
			v31 = v30;
			if (*(_DWORD*)(v30 + 144)
				|| *(_DWORD*)(v30 + 148)
				|| *(_DWORD*)(v30 + 160)
				|| *(_DWORD*)(v30 + 156)
				|| *(_DWORD*)(v30 + 152)
				|| *(_QWORD*)(v30 + 232))
			{
				v92 = xmmword_140B7B0C0;
			}
			v32 = *(_QWORD**)(v8 + 40);
			if (v32)
				sub_140103E60(
					v32,
					&v95,
					(__m128*) & v92,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v8 + 48)) * *(float*)(v8 + 52)));
			v33 = *(_QWORD*)(v11 + 64);
			v34 = 1;
			v35 = 7;
			if (*(int*)(v33 + 344) > 1)
				v34 = *(_DWORD*)(v33 + 344);
			v36 = *(int**)(v11 + 72);
			if (v34 < 7)
				v35 = v34;
			v37 = *(_QWORD*)(v11 + 72);
			if (!v36)
				v37 = v33 + 8;
			if (v37)
			{
				if (!v36)
					v36 = (int*)(v33 + 8);
				v38 = *v36;
				v39 = 1;
				v35 = 7;
				if (v38 > 1)
					v39 = v38;
				if (v39 < 7)
					v35 = v39;
			}
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			if ((unsigned int)(v35 - 1) <= 6)
			{
				v40 = *(_QWORD**)(a1 + 48i64 * v35 + 2560);
				v90 = _mm_sub_ps(v95, (__m128)xmmword_140B7B2F0);
				v91 = _mm_add_ps(v96, (__m128)xmmword_140B7B2F0);
				v93[0] = (__m128)xmmword_140B7B240;
				if (v40)
					sub_140103E60(
						v40,
						&v90,
						v93,
						0,
						COERCE_INT(
							(float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48i64 * v35 + 2568))
							* *(float*)(a1 + 48i64 * v35 + 2572)));
			}
			if (v29 > 0.0 && !*(_DWORD*)(v31 + 144) && !*(_DWORD*)(v31 + 148))
				sub_1406C5A40(a1, *(_QWORD*)(a1 + 696), v8 + 40, a1 + 2512, v8 + 96, (__int64)&v95, v29);
			v41 = *(_QWORD*)(v11 + 64);
			v42 = *(_DWORD*)(v41 + 432);
			if ((*(_DWORD*)(v41 + 340) & 0x200) != 0
				&& v42
				&& (v43 = sub_1405A8A40((__int64)v40, v42), !(unsigned int)sub_140552550(v43, -8193)))
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v44 = *(_QWORD**)(a1 + 2216);
				v93[0] = (__m128)xmmword_140B7B240;
				if (!v44)
					goto LABEL_68;
				*(float*)&v45 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2224)) * *(float*)(a1 + 2228);
			}
			else
			{
				if (!*(_DWORD*)(v11 + 140)
					|| ((*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64),
						v44 = *(_QWORD**)(a1 + 2264),
						v93[0] = (__m128)xmmword_140B7B240,
						!v44))
				{
				LABEL_68:
					v46 = 0;
					if ((unsigned int)sub_1406D7AB0(v11))
					{
						v47 = sub_14056A070(v11, 0i64, 0, 0i64);
						if (!v47)
							goto LABEL_105;
						if (v47 == 317)
							goto LABEL_105;
						v94 = 0;
						if (*(_DWORD*)(*(_QWORD*)(sub_14056A030(v11) + 112) + 124i64) == 6)
							goto LABEL_105;
						v48 = *(_QWORD*)(qword_140C65898 + 25744);
						if (v48)
						{
							v102 = *(_DWORD*)(v48 + 264);
							if (v102)
							{
								v49 = *(_QWORD*)(v11 + 80);
								if (!v49)
									v49 = *(_QWORD*)(v11 + 64) + 156i64;
								v50 = *(_DWORD*)(v49 + 128);
								if (!v50)
									goto LABEL_88;
								v51 = sub_1403ACD90(qword_140C65B70, v50, *(_QWORD*)(qword_140C65898 + 120));
								if (!v51)
									goto LABEL_88;
								v52 = *(_QWORD*)(v11 + 64);
								v53 = (*(_DWORD*)(v52 + 340) & 0x400) == 0 || !*(_DWORD*)(v52 + 384) || *(_DWORD*)(v11 + 32) == 0;
								if ((*(_DWORD*)(v52 + 340) & 0x200) == 0 && !v53)
									goto LABEL_88;
								v54 = *(int**)(v51 + 112);
								v90 = 0ui64;
								v55 = *(_QWORD*)(qword_140C65898 + 120);
								*(unsigned __int64*)((char*)v91.m128_u64 + 4) = 0i64;
								v91.m128_i32[0] = 0;
								v56 = *v54;
								v91.m128_i32[3] = 96;
								v57 = (int*)(qword_140C65898 + 27920);
								v58 = sub_14055BDC0(qword_140C65898, v55, v51, 1, v102);
								v60 = sub_1403986F0(v59, v56, v55, v58, v57, v11, (__int64)&v90, 0);
								if (v90.m128_u64[0])
									(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v90.m128_u64[0] - 16) + 8i64))(v90.m128_u64[0] - 16);
								if (v60 && v60 != 317)
								{
								LABEL_88:
									v46 = 0;
									goto LABEL_106;
								}
							LABEL_105:
								v46 = 1;
								goto LABEL_106;
							}
						}
						if (*(_DWORD*)(*(_QWORD*)(sub_14056A030(v11) + 112) + 124i64) == 1)
						{
							v61 = *(_QWORD*)(v11 + 80);
							if (!v61)
								v61 = *(_QWORD*)(v11 + 64) + 156i64;
							v62 = *(_DWORD*)(v61 + 128);
							if (v62)
							{
								v63 = sub_1403ACD90(qword_140C65B70, v62, *(_QWORD*)(qword_140C65898 + 120));
								if (v63)
								{
									v64 = *(_QWORD*)(v11 + 64);
									v65 = (*(_DWORD*)(v64 + 340) & 0x400) == 0 || !*(_DWORD*)(v64 + 384) || *(_DWORD*)(v11 + 32) == 0;
									if ((*(_DWORD*)(v64 + 340) & 0x200) != 0 || v65)
									{
										v66 = *(int**)(v63 + 112);
										v67 = *(_QWORD*)(qword_140C65898 + 120);
										v90 = 0ui64;
										*(unsigned __int64*)((char*)v91.m128_u64 + 4) = 0i64;
										v91.m128_i32[0] = 0;
										v68 = *v66;
										v91.m128_i32[3] = 96;
										v69 = (int*)(qword_140C65898 + 27920);
										v70 = sub_14055BDC0(qword_140C65898, v67, v63, 1, 0);
										v72 = sub_1403986F0(v71, v68, v67, v70, v69, v11, (__int64)&v90, 0);
										if (v90.m128_u64[0])
											(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v90.m128_u64[0] - 16) + 8i64))(v90.m128_u64[0] - 16);
										v46 = v94;
										if (v72 == 91)
											v46 = 1;
									}
								}
							}
						}
					}
				LABEL_106:
					v73 = *(_DWORD**)(v11 + 64);
					if ((v73[85] & 0x400) != 0 && v73[96])
					{
						v74 = *(_DWORD**)(v11 + 72);
						if (!v74)
							v74 = v73 + 2;
						if (v73 && (v73[85] & 0x400) != 0 && v73[96] && !(unsigned int)sub_1403B4710(qword_140C65898, v73, v74))
							goto LABEL_126;
					}
					else
					{
						if ((v73[85] & 0x4000) == 0)
							goto LABEL_120;
						v75 = *(_DWORD**)(v11 + 72);
						if (!v75)
							v75 = v73 + 2;
						if (!(unsigned int)sub_1403B4710(qword_140C65898, v73, v75))
						{
						LABEL_120:
							if (!(unsigned int)sub_1406D7AB0(v11) || v46)
								goto LABEL_126;
						}
					}
					(*(void(__fastcall**)(__int64, __int64, _DWORD*))(*(_QWORD*)qword_140C65680 + 144i64))(
						qword_140C65680,
						1i64,
						v74);
					v76 = *(unsigned int*)(a1 + 2504);
					v91.m128_u64[1] = v96.m128_u64[1];
					v91.m128_f32[0] = (float)((float)(v96.m128_f32[0] - v95.m128_f32[0]) * 0.5) + v95.m128_f32[0];
					v77 = _mm_shuffle_ps(v95, v95, 85).m128_f32[0];
					v90 = _mm_add_ps(v95, (__m128)xmmword_140B7A500);
					v91.m128_f32[1] = (float)((float)(v96.m128_f32[1] - v77) * 0.5) + v77;
					v91 = _mm_add_ps(v91, (__m128)xmmword_140B7A500);
					if (v76 >= *(_QWORD*)(qword_140C63678 + 48))
						v78 = *(__m128**)(qword_140C63678 + 40);
					else
						v78 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v76);
					v79 = *(_QWORD**)(a1 + 2312);
					if (v79)
						sub_140103E60(
							v79,
							&v90,
							v78,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2320)) * *(float*)(a1 + 2324)));
				LABEL_126:
					if (v98)
					{
						v80 = _mm_cvtepi32_ps((__m128i)xmmword_140B7A3F0);
						v90 = _mm_sub_ps(v95, v80);
						v91 = _mm_add_ps(v96, v80);
						sub_14018EFA0(v93, (__int64)L"%d", v98);
						v81 = v93[0].m128_i64[1];
						(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, __m128*, int, __int128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
							qword_140C65680,
							*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
							v93[0].m128_u64[1],
							-1i64,
							&v90,
							10,
							&xmmword_140C67350,
							1);
						if (v81)
							sub_14018B900(v81, 0);
					}
					v82 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v11 + 32i64))(v11, &v98);
					if (sub_14053BC30(v83, v82)
						&& *(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64) == a1
						&& *(_QWORD*)(a1 + 2096) == v8)
					{
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
						v84 = *(_QWORD**)(a1 + 2456);
						v6 = v101;
						v93[0] = (__m128)xmmword_140B7B240;
						if (v84)
							sub_140103CF0(
								v84,
								v101,
								v93,
								0,
								COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2464)) * *(float*)(a1 + 2468)));
					}
					else
					{
						v6 = v101;
					}
					v7 = (__int64)v100;
					goto LABEL_144;
				}
				*(float*)&v45 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2272)) * *(float*)(a1 + 2276);
			}
			sub_140103E60(v44, &v95, v93, 0, v45);
			goto LABEL_68;
		}
		if (v17 == 1)
			v17 = 0;
		goto LABEL_29;
	}
	if (*(_QWORD*)v8)
		*(_DWORD*)(a1 + 2080) = 1;
	*(_DWORD*)(v8 + 8) = 1;
	*(_QWORD*)v8 = 0i64;
	*(_DWORD*)(v8 + 20) = *v6;
	*(_DWORD*)(v8 + 24) = v6[1];
	*(_DWORD*)(v8 + 28) = v6[2];
	*(_DWORD*)(v8 + 32) = v6[3];
	*(_DWORD*)(v8 + 88) = 0;
	v85 = *(_QWORD*)(v8 + 40);
	if (v85)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 8i64))(v85);
		*(_QWORD*)(v8 + 40) = 0i64;
	}
	if (!*(_DWORD*)(a1 + 2084))
		*(_QWORD*)(v8 + 12) = *(_QWORD*)v7;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v86 = *(_QWORD**)(a1 + 2168);
	v15 = xmmword_140B7B240;
	v92 = xmmword_140B7B240;
	if (v86)
		sub_140103CF0(
			v86,
			v6,
			(__m128*) & v92,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2176)) * *(float*)(a1 + 2180)));
LABEL_144:
	result = *(void***)(a1 + 32);
	if (result[424] == (void*)a1)
	{
		result = *(void***)(a1 + 1112);
		if (*(void**)(a1 + 1104) == result[*(unsigned int*)(v7 + 4)])
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v90.m128_u64[0] = *(_QWORD*)(a1 + 1104) + 20i64;
			v90.m128_u64[1] = v90.m128_u64[0] + 8;
			v91.m128_i32[0] = *(_DWORD*)(v90.m128_u64[0] + 8) + *(_DWORD*)v90.m128_u64[0];
			v87 = *(_DWORD*)(v90.m128_u64[0] + 12) + *(_DWORD*)(v90.m128_u64[0] + 4);
			LODWORD(v100) = v91.m128_i32[0] >> 1;
			v91.m128_i32[1] = v87;
			HIDWORD(v100) = v87 >> 1;
			result = (void**)(*(__int64(__fastcall**)(__int64, unsigned int**))(*(_QWORD*)a1 + 352i64))(a1, &v100);
			v92 = v15;
			if ((_DWORD)result == 2)
			{
				v88 = *(_QWORD**)(a1 + 2360);
				if (!v88)
					return result;
				*(float*)&v89 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2368)) * *(float*)(a1 + 2372);
			}
			else
			{
				v88 = *(_QWORD**)(a1 + 2408);
				if (!v88)
					return result;
				*(float*)&v89 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2416)) * *(float*)(a1 + 2420);
			}
			return (void**)sub_140103CF0(v88, v6, (__m128*) & v92, 0, v89);
		}
	}
	return result;
}
// 1406D1FF7: variable 'v26' is possibly undefined
// 1406D2286: variable 'v40' is possibly undefined
// 1406D24A2: variable 'v59' is possibly undefined
// 1406D25DD: variable 'v71' is possibly undefined
// 1406D26AC: variable 'v74' is possibly undefined
// 1406D2817: variable 'v83' is possibly undefined
// 140B3B8F4: using guessed type wchar_t aD_62[3];
// 140B7A3F0: using guessed type __int128 xmmword_140B7A3F0;
// 140B7A500: using guessed type __int128 xmmword_140B7A500;
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C67350: using guessed type __int128 xmmword_140C67350;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;


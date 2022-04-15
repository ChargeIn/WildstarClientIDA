#include "../winhttp.h"

//----- (0000000140387910) ----------------------------------------------------
int __fastcall sub_140387910(__int64 a1, __m128* a2, __m128* a3, __int16 a4)
{
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__m128* v7; // rsi
	__m128* v8; // r12
	__int64 v9; // r13
	__int64 v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	bool v13; // zf
	HANDLE EventW; // rcx
	float v15; // xmm13_4
	__int64 v16; // rcx
	char* v17; // rdi
	__int64 v18; // r15
	unsigned int v19; // r15d
	_QWORD* v20; // rax
	__int64 v21; // r8
	_QWORD* v22; // r12
	char* v23; // rbx
	__int64 v24; // r8
	__m128 v25; // xmm7
	__m128 v26; // xmm4
	__m128 v27; // xmm6
	__m128 v28; // xmm4
	__m128 v29; // xmm2
	float v30; // xmm2_4
	__int128 v31; // xmm5
	__m128 v32; // xmm3
	__m128 v33; // xmm1
	__m128 v34; // xmm1
	float v35; // xmm4_4
	__int128* v36; // rdx
	__int64 v37; // r9
	__int64 v38; // rax
	__m128 v39; // xmm3
	unsigned int v40; // r12d
	__int64 v41; // rbx
	_DWORD* v42; // r15
	unsigned __int64 v43; // r9
	__int128* v44; // rdx
	__int64 v45; // r8
	__m128 v46; // xmm0
	__m128 v47; // xmm2
	float v48; // xmm4_4
	float v49; // xmm3_4
	float v50; // xmm2_4
	float v51; // xmm0_4
	float v52; // xmm1_4
	int v53; // eax
	float v54; // xmm0_4
	float v55; // xmm1_4
	int v56; // eax
	float v57; // xmm0_4
	float v58; // xmm1_4
	float v59; // xmm0_4
	float v60; // xmm0_4
	float v61; // xmm1_4
	unsigned int v62; // ebx
	unsigned int v63; // r11d
	unsigned int v64; // r10d
	unsigned int v65; // eax
	unsigned int v66; // eax
	__int64 v67; // rcx
	float v68; // xmm4_4
	float v69; // xmm3_4
	float v70; // xmm2_4
	__m128 v71; // xmm11
	__m128 v72; // xmm12
	unsigned int v73; // eax
	unsigned int v74; // eax
	unsigned int v75; // eax
	__int64 v76; // rcx
	__m128 v77; // xmm7
	__m128 v78; // xmm4
	float v79; // xmm9_4
	float v80; // xmm8_4
	__m128 v81; // xmm6
	__m128 v82; // xmm5
	float v83; // xmm2_4
	float v84; // xmm3_4
	float v85; // xmm1_4
	__m128 v86; // xmm6
	__m128* v87; // rbx
	__int64 v88; // rdi
	__int32 v89; // edx
	__int64 v90; // rcx
	__m128 v91; // xmm8
	__m128 v92; // xmm4
	__m128 v93; // xmm7
	float v94; // xmm1_4
	float v95; // xmm14_4
	__m128 v96; // xmm2
	__m128 v97; // xmm5
	__m128 v98; // xmm4
	__m128 v99; // xmm5
	__m128 v100; // xmm3
	__int32* v101; // rcx
	unsigned __int64* v102; // rdx
	__int64 v103; // r8
	__m128 v104; // xmm1
	__m128 v105; // xmm4
	unsigned int v106; // ecx
	__m128i v107; // xmm2
	float v108; // xmm0_4
	unsigned int v109; // eax
	__m128i v110; // xmm3
	__m128i v111; // xmm1
	__m128i v112; // xmm2
	__m128 v113; // xmm4
	unsigned int v114; // ecx
	signed int v115; // eax
	__m128i v116; // xmm3
	__int64* v117; // rcx
	__m128i v118; // xmm1
	__int64 v119; // rax
	__int64 v120; // rdi
	int v121; // ebx
	__int64 v122; // rax
	__int64 v123; // rcx
	unsigned __int8* v124; // rdx
	unsigned __int8* v125; // rcx
	__int64 v126; // rax
	float v127; // xmm3_4
	float v128; // xmm4_4
	float v129; // xmm5_4
	float v130; // xmm6_4
	__int64 v131; // rax
	__int64 v132; // rax
	__m128 v133; // xmm2
	__m128* v134; // rcx
	__m128 v135; // xmm0
	__int64 v137; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v138; // [rsp+28h] [rbp-D8h] BYREF
	__m128* v139; // [rsp+30h] [rbp-D0h] BYREF
	unsigned int v140; // [rsp+38h] [rbp-C8h]
	int v141; // [rsp+3Ch] [rbp-C4h]
	__int128 v142; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v143; // [rsp+50h] [rbp-B0h]
	__int128 v144; // [rsp+60h] [rbp-A0h] BYREF
	unsigned int v145; // [rsp+70h] [rbp-90h]
	unsigned int v146; // [rsp+74h] [rbp-8Ch]
	__m128 v147; // [rsp+80h] [rbp-80h]
	__m128 v148; // [rsp+90h] [rbp-70h]
	__m128 v149; // [rsp+A0h] [rbp-60h]
	int v150; // [rsp+B0h] [rbp-50h]
	__m128 v151; // [rsp+C0h] [rbp-40h] BYREF
	void* retaddr; // [rsp+1A8h] [rbp+A8h] BYREF

	v4 = (unsigned __int64)&retaddr;
	v5 = 0i64;
	v7 = a3;
	v8 = a2;
	v9 = a1;
	if (*(_DWORD*)(a1 + 32) != 15)
	{
		v10 = *(_QWORD*)a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v10 + 48) == CurrentThreadId)
		{
			++* (_QWORD*)(v10 + 56);
		}
		else
		{
			v12 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v12 >= 0x400)
				{
					sub_14019FB60(v10 + 48, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v10 + 48) = CurrentThreadId;
		}
	LABEL_9:
		v13 = *(_DWORD*)(v9 + 32) == 15;
		v150 = -1;
		if (!v13)
			sub_14037CB70(v9);
		v4 = *(_QWORD*)(v10 + 56);
		if (v4 <= 1)
		{
			*(_DWORD*)(v10 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v10 + 56), 0i64);
			v4 = *(_QWORD*)(v10 + 64);
			if (v4)
			{
				if (!*(_QWORD*)(v10 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				LODWORD(v4) = SetEvent(*(HANDLE*)(v10 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v10 + 56);
		}
		v5 = 0i64;
	}
	v15 = -3.4028235e38;
	if (*(float*)(v9 + 196) > v8->m128_f32[1])
		goto LABEL_125;
	v16 = *(_QWORD*)(v9 + 16);
	v138 = 0i64;
	v17 = 0i64;
	LODWORD(v4) = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v16 + 176i64))(v16, &v138);
	v18 = 4i64;
	if ((v4 & 0x80000000) != 0i64)
		goto LABEL_75;
	v19 = 0;
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v138 + 16i64))(v138);
	if (!v4)
		goto LABEL_74;
	do
	{
		v20 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v138 + 24i64))(v138, v5);
		v21 = *v20;
		v22 = v20;
		v151 = _mm_shuffle_ps(*a2, *a2, 136);
		v23 = (char*)(*(__int64(__fastcall**)(_QWORD*, __m128*))(v21 + 48))(v20, &v151);
		if (!v23)
			goto LABEL_31;
		v24 = (*(__int64(__fastcall**)(_QWORD*))(*v22 + 32i64))(v22);
		v25 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v24 + 72i64 * *(unsigned int*)v23),
				(__m128) * (unsigned int*)(v24 + 72i64 * *(unsigned int*)v23 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 72i64 * *(unsigned int*)v23 + 4), (__m128)0i64));
		v26 = _mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 2)),
					(__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 2) + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 2) + 4), (__m128)0i64)),
			v25);
		v27 = _mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 1)),
					(__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 1) + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 72i64 * *((unsigned int*)v23 + 1) + 4), (__m128)0i64)),
			v25);
		v28 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v26, v26, 210),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(v26, v26, 201),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
		v29 = _mm_mul_ps(v27, v28);
		v30 = (float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
			+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
		if (v30 <= -0.0000099999997 || v30 >= 0.0000099999997)
		{
			v32 = _mm_sub_ps(*a2, v25);
			v33 = _mm_mul_ps(v32, v28);
			*((float*)&v143 + 1) = (float)((float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
				+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0])
				* (float)(1.0 / v30);
			v34 = _mm_mul_ps(
				_mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v32, v32, 201), _mm_shuffle_ps(v27, v27, 210)),
					_mm_mul_ps(_mm_shuffle_ps(v32, v32, 210), _mm_shuffle_ps(v27, v27, 201))),
				(__m128)xmmword_140B7A4B0);
			*((float*)&v143 + 2) = (float)((float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
				+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0])
				* (float)(1.0 / v30);
			*(float*)&v143 = (float)(1.0 - *((float*)&v143 + 1)) - *((float*)&v143 + 2);
			v31 = v143;
		}
		else
		{
			v31 = xmmword_140B7A7E0;
		}
		v144 = v31;
		v35 = 0.0;
		v36 = &v144;
		v37 = 3i64;
		do
		{
			v38 = *(unsigned int*)((char*)v36 + v23 - (char*)&v144);
			v36 = (__int128*)((char*)v36 + 4);
			v39 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 72 * v38), (__m128) * (unsigned int*)(v24 + 72 * v38 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 72 * v38 + 4), (__m128)0i64));
			v35 = v35 + (float)(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] * *((float*)v36 - 1));
			--v37;
		} while (v37);
		if (v15 < v35)
		{
			v17 = v23;
			v15 = v35;
			v40 = v19;
			LODWORD(v137) = v19;
			v142 = v31;
		}
		else
		{
		LABEL_31:
			v40 = v137;
		}
		v5 = ++v19;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v138 + 16i64))(v138);
	} while (v19 < v4);
	v7 = a3;
	v9 = a1;
	if (!v17)
	{
		v8 = a2;
	LABEL_74:
		v18 = 4i64;
		goto LABEL_75;
	}
	v41 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v138 + 24i64))(v138, v40);
	v42 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 16i64))(v41);
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 32i64))(v41);
	v43 = v4;
	if ((a4 & 0x40) != 0)
		a3[9].m128_f32[0] = v15;
	if ((a4 & 0x1080) != 0)
	{
		v44 = &v142;
		v45 = 3i64;
		a3[4] = 0i64;
		do
		{
			v4 = *(unsigned int*)((char*)v44 + v17 - (char*)&v142);
			v44 = (__int128*)((char*)v44 + 4);
			v46 = _mm_add_ps(
				a3[4],
				_mm_mul_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v43 + 72 * v4 + 12),
							(__m128) * (unsigned int*)(v43 + 72 * v4 + 20)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v43 + 72 * v4 + 16), (__m128)0i64)),
					_mm_shuffle_ps((__m128) * ((unsigned int*)v44 - 1), (__m128) * ((unsigned int*)v44 - 1), 0)));
			a3[4] = v46;
			--v45;
		} while (v45);
		v47 = _mm_mul_ps(v46, v46);
		v47.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
				+ _mm_shuffle_ps(v47, v47, 170).m128_f32[0]);
		a3[4] = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v46);
	}
	if ((a4 & 0x100) != 0)
	{
		LODWORD(v4) = *v42;
		a3[9].m128_i32[1] = *v42;
	}
	if ((a4 & 0x1200) != 0)
	{
		a3[9].m128_i32[2] = v42[1];
		a3[9].m128_i32[3] = v42[2];
		a3[10].m128_i32[0] = v42[3];
		LODWORD(v4) = v42[4];
		a3[10].m128_i32[1] = v4;
	}
	if ((a4 & 0x1400) != 0)
	{
		v48 = *(float*)&v142;
		v49 = *((float*)&v142 + 1);
		v50 = *((float*)&v142 + 2);
		a3[5].m128_i32[0] = 0;
		v51 = (float)((float)*(unsigned __int8*)(v43 + 72i64 * *(unsigned int*)v17 + 68) * 0.0039215689) * v48;
		a3[5].m128_f32[0] = v51;
		v52 = (float)((float)((float)*(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 1) + 68) * 0.0039215689)
			* v49)
			+ v51;
		a3[5].m128_f32[0] = v52;
		v53 = *(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 2) + 68);
		a3[5].m128_i32[1] = 0;
		a3[5].m128_f32[0] = (float)((float)((float)v53 * 0.0039215689) * v50) + v52;
		v54 = (float)((float)*(unsigned __int8*)(v43 + 72i64 * *(unsigned int*)v17 + 69) * 0.0039215689) * v48;
		a3[5].m128_f32[1] = v54;
		v55 = (float)((float)((float)*(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 1) + 69) * 0.0039215689)
			* v49)
			+ v54;
		a3[5].m128_f32[1] = v55;
		v56 = *(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 2) + 69);
		a3[5].m128_i32[2] = 0;
		a3[5].m128_f32[1] = (float)((float)((float)v56 * 0.0039215689) * v50) + v55;
		v57 = (float)((float)*(unsigned __int8*)(v43 + 72i64 * *(unsigned int*)v17 + 70) * 0.0039215689) * v48;
		a3[5].m128_f32[2] = v57;
		v58 = (float)((float)((float)*(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 1) + 70) * 0.0039215689)
			* v49)
			+ v57;
		a3[5].m128_f32[2] = v58;
		v59 = (float)*(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 2) + 70);
		a3[5].m128_i32[3] = 0;
		a3[5].m128_f32[2] = (float)((float)(v59 * 0.0039215689) * v50) + v58;
		v60 = (float)((float)*(unsigned __int8*)(v43 + 72i64 * *(unsigned int*)v17 + 71) * 0.0039215689) * v48;
		a3[5].m128_f32[3] = v60;
		v61 = (float)((float)((float)*(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 1) + 71) * 0.0039215689)
			* v49)
			+ v60;
		a3[5].m128_f32[3] = v61;
		LODWORD(v4) = *(unsigned __int8*)(v43 + 72i64 * *((unsigned int*)v17 + 2) + 71);
		a3[5].m128_f32[3] = (float)((float)((float)(int)v4 * 0.0039215689) * v50) + v61;
	}
	if ((a4 & 0x1800) != 0)
	{
		v62 = 1;
		v63 = 0;
		v64 = 2;
		if (*(float*)(v43 + 72i64 * *((unsigned int*)v17 + 1)) < *(float*)(v43 + 72i64 * *(unsigned int*)v17))
		{
			v63 = 1;
			v62 = 0;
		}
		if (*(float*)(v43 + 72i64 * *((unsigned int*)v17 + 2)) < *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63]))
		{
			v65 = v63;
			v63 = 2;
			v64 = v65;
		}
		if (*(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v64]) < *(float*)(v43
			+ 72i64 * *(unsigned int*)&v17[4 * v62]))
		{
			v66 = v62;
			v62 = v64;
			v64 = v66;
		}
		v67 = *(unsigned int*)&v17[4 * v64];
		v68 = *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62])
			- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63]);
		v71 = (__m128) * (unsigned int*)(v43 + 72 * v67 + 48);
		v69 = 1.0 / (float)(*(float*)(v43 + 72 * v67) - *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63]));
		v72 = (__m128) * (unsigned int*)(v43 + 72 * v67 + 52);
		v70 = 1.0
			/ (float)((float)((float)((float)((float)(*(float*)(v43 + 72 * v67 + 8)
				- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 8))
				* v68)
				* v69)
				+ *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 8))
				- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 8));
		v71.m128_f32[0] = (float)((float)((float)((float)((float)(v71.m128_f32[0]
			- *(float*)(v43
				+ 72i64 * *(unsigned int*)&v17[4 * v63]
				+ 48))
			* v68)
			* v69)
			+ *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 48))
			- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 48))
			* v70;
		v72.m128_f32[0] = (float)((float)((float)((float)((float)(v72.m128_f32[0]
			- *(float*)(v43
				+ 72i64 * *(unsigned int*)&v17[4 * v63]
				+ 52))
			* v68)
			* v69)
			+ *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 52))
			- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 52))
			* v70;
		if (*(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 8) < *(float*)(v43
			+ 72i64
			* *(unsigned int*)&v17[4 * v63]
			+ 8))
		{
			v73 = v63;
			v63 = v62;
			v62 = v73;
		}
		if (*(float*)(v43 + 72 * v67 + 8) < *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 8))
		{
			v74 = v63;
			v63 = v64;
			v64 = v74;
		}
		if (*(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v64] + 8) < *(float*)(v43
			+ 72i64
			* *(unsigned int*)&v17[4 * v62]
			+ 8))
		{
			v75 = v62;
			v62 = v64;
			v64 = v75;
		}
		v76 = *(unsigned int*)&v17[4 * v64];
		v77 = (__m128) * (unsigned int*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 48);
		v78 = (__m128) * (unsigned int*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 52);
		v79 = *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63] + 8);
		LODWORD(v4) = 9 * v76;
		v80 = *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v63]);
		v81 = (__m128) * (unsigned int*)(v43 + 72 * v76 + 48);
		v82 = (__m128) * (unsigned int*)(v43 + 72 * v76 + 52);
		v83 = *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 8) - v79;
		v84 = 1.0 / (float)(*(float*)(v43 + 72 * v76 + 8) - v79);
		v85 = 1.0
			/ (float)((float)((float)((float)((float)(*(float*)(v43 + 72 * v76) - v80) * v83) * v84) + v80)
				- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62]));
		v81.m128_f32[0] = (float)((float)((float)((float)((float)(v81.m128_f32[0] - v77.m128_f32[0]) * v83) * v84)
			+ v77.m128_f32[0])
			- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 48))
			* v85;
		v82.m128_f32[0] = (float)((float)((float)((float)((float)(v82.m128_f32[0] - v78.m128_f32[0]) * v83) * v84)
			+ v78.m128_f32[0])
			- *(float*)(v43 + 72i64 * *(unsigned int*)&v17[4 * v62] + 52))
			* v85;
		v78.m128_f32[0] = (float)(v78.m128_f32[0] - (float)(v80 * v82.m128_f32[0])) - (float)(v79 * v72.m128_f32[0]);
		v77.m128_f32[0] = (float)(v77.m128_f32[0] - (float)(v80 * v81.m128_f32[0])) - (float)(v79 * v71.m128_f32[0]);
		a3[6] = _mm_unpacklo_ps(_mm_unpacklo_ps(v81, v77), _mm_unpacklo_ps(v71, (__m128)0i64));
		a3[7] = _mm_unpacklo_ps(_mm_unpacklo_ps(v82, v78), _mm_unpacklo_ps(v72, (__m128)0i64));
	}
	v18 = 4i64;
	if ((a4 & 0x1000) != 0)
	{
		v86 = 0i64;
		v87 = a3 + 5;
		v88 = 4i64;
		do
		{
			v89 = v87[4].m128_i32[2];
			if (v89 && v87->m128_f32[0] != 0.0)
			{
				v90 = *(_QWORD*)a1;
				v139 = 0i64;
				LODWORD(v4) = sub_140354AA0(v90, v89, &v139);
				if ((v4 & 0x80000000) == 0i64)
					v86 = _mm_add_ps(
						_mm_mul_ps(v139[6], _mm_shuffle_ps((__m128)v87->m128_u32[0], (__m128)v87->m128_u32[0], 0)),
						v86);
				if (v139)
					LODWORD(v4) = (*(__int64 (**)(void))(v139->m128_u64[0] + 8))();
			}
			v87 = (__m128*)((char*)v87 + 4);
			--v88;
		} while (v88);
		v91 = (__m128)a3[6].m128_u32[0];
		v92 = (__m128)a3[7].m128_u32[1];
		v93 = (__m128)a3[7].m128_u32[0];
		v94 = (float)(a3[6].m128_f32[0] * v92.m128_f32[0]) - (float)(a3[6].m128_f32[1] * v93.m128_f32[0]);
		if (fabs(v94) <= 0.0000099999997)
			v95 = 0.0;
		else
			v95 = 1.0 / v94;
		v96 = _mm_xor_ps((__m128)a3[6].m128_u32[1], (__m128)xmmword_140B7B530);
		v8 = a2;
		v97 = (__m128)a3[7].m128_u32[1];
		v92.m128_f32[0] = v95;
		a3[8].m128_i32[1] = 0;
		v98 = _mm_shuffle_ps(v92, v92, 0);
		v99 = _mm_mul_ps(
			_mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v97, (__m128)0i64), _mm_unpacklo_ps(v96, (__m128)0i64)), v98),
			v86);
		a3[8].m128_f32[0] = v99.m128_f32[0] + _mm_shuffle_ps(v99, v99, 85).m128_f32[0];
		v100 = _mm_mul_ps(
			_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(_mm_xor_ps(v93, (__m128)xmmword_140B7B530), (__m128)0i64),
					_mm_unpacklo_ps(v91, (__m128)0i64)),
				v98),
			v86);
		a3[8].m128_f32[2] = v100.m128_f32[0] + _mm_shuffle_ps(v100, v100, 85).m128_f32[0];
	}
	else
	{
		v8 = a2;
	}
LABEL_75:
	if ((*(_BYTE*)(v9 + 1120) & 1) != 0 && v15 < -1000.0)
	{
		v15 = -1000.0;
		if ((a4 & 0x40) != 0)
			v7[9].m128_i32[0] = -998637568;
		if ((a4 & 0x1080) != 0)
			v7[4] = (__m128)xmmword_140C77870;
		if ((a4 & 0x100) != 0)
		{
			LODWORD(v4) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v9 + 4808i64) + 24i64);
			v7[9].m128_i32[1] = v4;
		}
		if ((a4 & 0x1200) != 0)
		{
			v101 = &v7[9].m128_i32[2];
			v102 = (unsigned __int64*)(v9 + 1128);
			v103 = 4i64;
			do
			{
				v4 = *v102;
				if (*v102)
				{
					LODWORD(v4) = *(_DWORD*)(v4 + 24);
					*v101 = v4;
				}
				else
				{
					*v101 = 0;
				}
				++v102;
				++v101;
				--v103;
			} while (v103);
		}
		if ((a4 & 0x1400) != 0)
		{
			v104 = *v8;
			v137 = 0i64;
			v105 = _mm_max_ps(
				(__m128)0i64,
				_mm_min_ps(
					_mm_mul_ps(
						_mm_add_ps(
							(__m128)xmmword_140B7AC50,
							_mm_mul_ps(
								_mm_shuffle_ps(v104, v104, 136),
								_mm_shuffle_ps((__m128)(unsigned int)dword_140C44580, (__m128)(unsigned int)dword_140C44580, 0))),
						(__m128)xmmword_140B7B490),
					(__m128)xmmword_140B7B490));
			v106 = (int)v105.m128_f32[0];
			v107 = _mm_cvtsi32_si128(0);
			LODWORD(v108) = _mm_shuffle_ps(v105, v105, 85).m128_u32[0];
			if ((int)v105.m128_f32[0] > 2047)
				v106 = 2047;
			v145 = v106;
			v109 = (int)v108;
			v110 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(0));
			if ((int)v108 > 2047)
				v109 = 2047;
			v146 = v109;
			v111 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v109), v107);
			v112 = _mm_cvtsi32_si128(0);
			v113 = _mm_mul_ps(_mm_sub_ps(v105, _mm_cvtepi32_ps(_mm_unpacklo_epi32(v110, v111))), (__m128)xmmword_140B7B450);
			v114 = (int)v113.m128_f32[0];
			v115 = (int)_mm_shuffle_ps(v113, v113, 85).m128_f32[0];
			if ((int)v113.m128_f32[0] > 63)
				v114 = 63;
			v140 = v114;
			v116 = _mm_cvtsi32_si128(v114);
			v117 = *(__int64**)(v9 + 16);
			if (v115 > 63)
				v115 = 63;
			v141 = v115;
			v118 = _mm_cvtsi32_si128(v115);
			v119 = *v117;
			v148 = _mm_sub_ps(
				v113,
				_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v116, v112), _mm_unpacklo_epi32(v118, v112))));
			v149 = _mm_sub_ps((__m128)xmmword_140B7B240, v148);
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v119 + 72))(v117, 29i64, &v137);
			v120 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v137 + 16i64))(v137);
			v121 = v140 * *(_DWORD*)(v120 + 40) + v141 * *(_DWORD*)(v120 + 44);
			v122 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v137 + 24i64))(v137);
			v123 = *(int*)(v120 + 44);
			v7[5] = 0i64;
			v124 = (unsigned __int8*)(v122 + v121);
			v125 = &v124[v123];
			v126 = *(_QWORD*)(v9 + 1128);
			v127 = v148.m128_f32[1];
			v128 = v148.m128_f32[0];
			v129 = v149.m128_f32[1];
			v130 = v149.m128_f32[0];
			if (v126 && *(_DWORD*)(v126 + 24))
				v7[5].m128_f32[0] = (float)((float)((float)((float)((float)((float)v124[4] * v149.m128_f32[1]) * v148.m128_f32[0])
					+ (float)((float)((float)*v124 * v149.m128_f32[1]) * v149.m128_f32[0]))
					+ (float)((float)((float)*v125 * v148.m128_f32[1]) * v149.m128_f32[0]))
					+ (float)((float)((float)v125[4] * v148.m128_f32[1]) * v148.m128_f32[0]))
				* 0.0039215689;
			v131 = *(_QWORD*)(v9 + 1136);
			if (v131 && *(_DWORD*)(v131 + 24))
				v7[5].m128_f32[1] = (float)((float)((float)((float)((float)((float)v124[5] * v129) * v128)
					+ (float)((float)((float)v124[1] * v129) * v130))
					+ (float)((float)((float)v125[1] * v127) * v130))
					+ (float)((float)((float)v125[5] * v127) * v128))
				* 0.0039215689;
			v132 = *(_QWORD*)(v9 + 1144);
			if (v132 && *(_DWORD*)(v132 + 24))
				v7[5].m128_f32[2] = (float)((float)((float)((float)((float)((float)(unsigned __int8)*((_WORD*)v124 + 3) * v129)
					* v128)
					+ (float)((float)((float)(unsigned __int8)*((_WORD*)v124 + 1) * v129)
						* v130))
					+ (float)((float)((float)(unsigned __int8)*((_WORD*)v125 + 1) * v127) * v130))
					+ (float)((float)((float)(unsigned __int8)*((_WORD*)v125 + 3) * v127) * v128))
				* 0.0039215689;
			v4 = *(_QWORD*)(v9 + 1152);
			if (v4 && *(_DWORD*)(v4 + 24))
			{
				LODWORD(v4) = v125[7];
				v7[5].m128_f32[3] = (float)((float)((float)((float)((float)((float)v124[7] * v129) * v128)
					+ (float)((float)((float)v124[3] * v129) * v130))
					+ (float)((float)((float)v125[3] * v127) * v130))
					+ (float)((float)((float)(int)v4 * v127) * v128))
					* 0.0039215689;
			}
			if (v137)
				LODWORD(v4) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v137 + 8i64))(v137);
		}
		if ((a4 & 0x1800) != 0)
		{
			v7[6] = (__m128)xmmword_140C77860;
			v7[7] = (__m128)xmmword_140C77870;
		}
		if ((a4 & 0x1000) != 0)
		{
			v133 = 0i64;
			v134 = v7 + 5;
			v4 = v9 + 1128;
			v147 = 0i64;
			do
			{
				if (*(_QWORD*)v4)
				{
					v135 = (__m128)v134->m128_u32[0];
					if (v135.m128_f32[0] != 0.0)
					{
						v133 = _mm_add_ps(_mm_mul_ps(*(__m128*)(*(_QWORD*)v4 + 96i64), _mm_shuffle_ps(v135, v135, 0)), v133);
						v147 = v133;
					}
				}
				v4 += 8i64;
				v134 = (__m128*)((char*)v134 + 4);
				--v18;
			} while (v18);
			v7[8] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v147.m128_u32[0], (__m128)v147.m128_u32[1]), (__m128)0i64);
		}
	}
	if (v138)
		LODWORD(v4) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v138 + 8i64))(v138);
	if (v15 == -3.4028235e38)
	{
	LABEL_125:
		if ((a4 & 0x40) != 0)
			v7[9].m128_i32[0] = -8388609;
		if ((a4 & 0x80u) != 0)
			v7[4] = (__m128)xmmword_140C77870;
		if ((a4 & 0x100) != 0)
			v7[9].m128_i32[1] = 0;
		if ((a4 & 0x200) != 0)
		{
			LODWORD(v4) = 0;
			v7[9].m128_u64[1] = 0i64;
			v7[10].m128_u64[0] = 0i64;
		}
		if ((a4 & 0x400) != 0)
		{
			LODWORD(v4) = 0;
			v7[5].m128_u64[0] = 0i64;
			v7[5].m128_u64[1] = 0i64;
		}
		if ((a4 & 0x800) != 0)
		{
			LODWORD(v4) = 0;
			v7[6].m128_u64[0] = 0i64;
			v7[6].m128_u64[1] = 0i64;
			v7[7].m128_u64[0] = 0i64;
			v7[7].m128_u64[1] = 0i64;
		}
		if ((a4 & 0x1000) != 0)
			v7[8] = 0i64;
	}
	return v4;
}
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A7E0: using guessed type __int128 xmmword_140B7A7E0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B450: using guessed type __int128 xmmword_140B7B450;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44580: using guessed type int dword_140C44580;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;


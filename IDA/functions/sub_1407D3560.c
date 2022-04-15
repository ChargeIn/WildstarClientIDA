//----- (00000001407D3560) ----------------------------------------------------
__int64 __fastcall sub_1407D3560(__m128* a1, char a2)
{
	unsigned __int64 v2; // rax
	__int64 result; // rax
	float v6; // xmm0_4
	__int64 v7; // rax
	unsigned int v8; // esi
	float v9; // xmm2_4
	float v10; // xmm3_4
	__int64 v11; // rax
	float v12; // xmm1_4
	float v13; // xmm0_4
	__int64 v14; // rax
	__m128* v15; // rdi
	int v16; // eax
	__int64 v17; // rdx
	__int64 v18; // rdx
	float v19; // xmm1_4
	__int64 v20; // rdx
	__m128 v21; // xmm1
	__int64 v22; // r9
	_DWORD* v23; // rcx
	_DWORD* v24; // rcx
	_DWORD* v25; // rcx
	int* v26; // r14
	_DWORD* v27; // rcx
	int v28; // eax
	int v29; // ecx
	int v30; // ecx
	int v31; // ecx
	_DWORD* v32; // rcx
	_DWORD* v33; // rcx
	_DWORD* v34; // rcx
	_DWORD* v35; // rcx
	unsigned __int64 v36; // rsi
	__int64* v37; // rdi
	_DWORD* v38; // rdx
	_DWORD* v39; // rcx
	int v40; // eax
	int v41; // ecx
	int v42; // ecx
	int v43; // ecx
	int v44; // ecx
	int v45; // ecx
	int v46; // ecx
	int v47; // ecx
	int v48; // ecx
	int v49; // ecx
	int v50; // ecx
	int v51; // ecx
	_DWORD* v52; // rcx
	_DWORD* v53; // rcx
	_DWORD* v54; // rcx
	_DWORD* v55; // rcx
	_DWORD* v56; // rcx
	int v57; // eax
	unsigned __int64 v58; // r12
	__int64 v59; // rsi
	__int64 v60; // r15
	__int64 v61; // rax
	unsigned __int64 v62; // rdi
	unsigned __int64 v63; // r14
	__int64 v64; // rcx
	__int64 v65; // rdx
	__int64 v66; // r9
	bool v67; // sf
	__int64 v68; // rax
	int v69; // r8d
	int v70[4]; // [rsp+30h] [rbp-48h] BYREF
	int v71; // [rsp+A0h] [rbp+28h] BYREF
	__int64 v72; // [rsp+B0h] [rbp+38h] BYREF
	float v73; // [rsp+B8h] [rbp+40h] BYREF
	char v74; // [rsp+BCh] [rbp+44h] BYREF

	v2 = a1->m128_u64[0];
	v70[0] = 0;
	result = (*(__int64(__fastcall**)(__m128*, int*))(v2 + 16))(a1, v70);
	if ((_DWORD)result)
	{
		a1[5].m128_i32[3] = 0;
		v6 = *(float*)(a1[1].m128_u64[1] + 2968) * a1[5].m128_f32[2];
		a1[5].m128_f32[3] = v6;
		v7 = a1[1].m128_i64[1];
		v8 = 0;
		v9 = 1.0 - *(float*)(v7 + 2968);
		v10 = (float)((float)(*(float*)(v7 + 2964) * a1[5].m128_f32[1]) * v9) + v6;
		a1[5].m128_f32[3] = v10;
		v11 = a1[1].m128_i64[1];
		v12 = 1.0 - *(float*)(v11 + 2964);
		v13 = *(float*)(v11 + 2960);
		v14 = a1->m128_i64[1];
		a1[5].m128_f32[3] = (float)((float)(v12 * v9) * (float)(v13 * a1[5].m128_f32[0])) + v10;
		if (*(_DWORD*)(v14 + 744))
		{
			do
			{
				v15 = (__m128*)(a1[17].m128_u64[1] + 32i64 * v8);
				v16 = (*(__int64(__fastcall**)(__m128*, _QWORD, int*, __int64*, float*))(a1->m128_u64[0] + 128))(
					a1,
					v8,
					&v71,
					&v72,
					&v73);
				if (v16 == 2)
				{
					v17 = *(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40);
					v15->m128_f32[2] = (float)((float)(*(float*)(32i64 * (int)v72 + v17) - *(float*)(32i64 * v71 + v17)) * v73)
						+ *(float*)(32i64 * v71 + v17);
					v18 = *(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40);
					v19 = *(float*)(32i64 * v71 + v18 + 4);
					v15->m128_f32[3] = (float)((float)(*(float*)(32i64 * (int)v72 + v18 + 4) - v19) * v73) + v19;
					v20 = *(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40);
					v21 = *(__m128*)(32i64 * v71 + v20 + 16);
					v15[1] = _mm_add_ps(
						_mm_mul_ps(
							_mm_sub_ps(*(__m128*)(32i64 * (int)v72 + v20 + 16), v21),
							_mm_shuffle_ps((__m128)LODWORD(v73), (__m128)LODWORD(v73), 0)),
						v21);
				}
				else if (v16 == 1)
				{
					v15->m128_i32[2] = *(_DWORD*)(32i64 * v71 + *(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40));
					v15->m128_i32[3] = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40)
						+ 32i64 * v71
						+ 4);
					v15[1] = *(__m128*)(*(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 752) + 48i64 * v8 + 40) + 32i64 * v71 + 16);
				}
				++v8;
			} while (v8 < *(_DWORD*)(a1->m128_u64[1] + 744));
		}
		(*(void(__fastcall**)(__m128*, __m128*, unsigned __int64, __m128*))(a1->m128_u64[0] + 456))(
			a1,
			a1 + 203,
			a1->m128_u64[1] + 40,
			a1 + 31);
		(*(void(__fastcall**)(__m128*, __m128*, unsigned __int64, __m128*))(a1->m128_u64[0] + 456))(
			a1,
			a1 + 221,
			a1->m128_u64[1] + 344,
			a1 + 93);
		(*(void(__fastcall**)(__m128*, __m128*, unsigned __int64, __m128*))(a1->m128_u64[0] + 456))(
			a1,
			a1 + 212,
			a1->m128_u64[1] + 192,
			a1 + 62);
		(*(void(__fastcall**)(__m128*, __m128*, unsigned __int64, __m128*))(a1->m128_u64[0] + 456))(
			a1,
			a1 + 230,
			a1->m128_u64[1] + 496,
			a1 + 124);
		v23 = (_DWORD*)(a1->m128_u64[1] + 648);
		if (*v23)
			sub_1407D8350(
				(__int64)v23,
				*(_DWORD*)(a1[1].m128_u64[1] + 1312),
				(__m128*)a1[155].m128_f32,
				v22,
				(char*)&a1[156]);
		else
			a1[155] = (__m128)xmmword_140C777D0;
		v24 = (_DWORD*)(a1->m128_u64[1] + 672);
		if (*v24)
		{
			sub_1407D8590((__int64)v24, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[157], v22, (char*)&a1[159]);
		}
		else
		{
			a1[157].m128_u64[0] = 0i64;
			a1[158] = (__m128)xmmword_140C777D0;
		}
		v25 = (_DWORD*)(a1->m128_u64[1] + 696);
		if (*v25)
			sub_1407D88C0(
				(__int64)v25,
				*(_DWORD*)(a1[1].m128_u64[1] + 1312),
				(__m128*)a1[160].m128_f32,
				v22,
				(char*)&a1[161]);
		else
			a1[160] = (__m128)xmmword_140C777D0;
		v26 = (int*)qword_140C63750;
		v27 = (_DWORD*)(a1->m128_u64[1] + 720);
		if (*v27)
		{
			sub_1407D8B00((__int64)v27, *(_DWORD*)(a1[1].m128_u64[1] + 1312), a1[162].m128_f32, &a1[163].m128_i8[8]);
		}
		else
		{
			v28 = dword_140C55F70;
			if (*(_DWORD*)qword_140C63750 < dword_140C55F70)
				v28 = *(_DWORD*)qword_140C63750;
			a1[162].m128_f32[0] = dword_140C55F80[v28];
			v29 = dword_140C55FD0;
			if (*v26 < dword_140C55FD0)
				v29 = *v26;
			a1[162].m128_f32[1] = dword_140C55FE0[v29];
			v30 = dword_140C56030;
			if (*v26 < dword_140C56030)
				v30 = *v26;
			a1[163].m128_f32[0] = dword_140C56040[v30];
			v31 = dword_140C56090;
			if (*v26 < dword_140C56090)
				v31 = *v26;
			a1[163].m128_f32[1] = dword_140C560A0[v31];
		}
		v32 = (_DWORD*)(a1->m128_u64[1] + 864);
		if (*v32)
			sub_1407D88C0(
				(__int64)v32,
				*(_DWORD*)(a1[1].m128_u64[1] + 1312),
				(__m128*)a1[171].m128_f32,
				v22,
				(char*)&a1[172]);
		else
			a1[171] = (__m128)xmmword_140C777D0;
		v33 = (_DWORD*)(a1->m128_u64[1] + 920);
		if (*v33)
			sub_140309410((__int64)v33, *(_DWORD*)(a1[1].m128_u64[1] + 1312), a1[173].m128_f32, v22, &a1[173].m128_i8[4]);
		else
			a1[173].m128_i32[0] = 0;
		v34 = (_DWORD*)(a1->m128_u64[1] + 944);
		if (*v34)
			sub_1407D88C0(
				(__int64)v34,
				*(_DWORD*)(a1[1].m128_u64[1] + 1312),
				(__m128*)a1[174].m128_f32,
				v22,
				(char*)&a1[175]);
		else
			a1[174] = (__m128)xmmword_140C777D0;
		v35 = (_DWORD*)(a1->m128_u64[1] + 968);
		if (*v35)
			sub_1407D88C0(
				(__int64)v35,
				*(_DWORD*)(a1[1].m128_u64[1] + 1312),
				(__m128*)a1[201].m128_f32,
				v22,
				(char*)&a1[202]);
		else
			a1[201] = (__m128)xmmword_140C777F0;
		v36 = 0i64;
		v37 = (__int64*)&a1[176];
		do
		{
			v38 = (_DWORD*)(v36 + a1->m128_u64[1] + 992);
			if (*v38)
			{
				sub_1407D13D0(*(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)v38, (__m128*)v37);
			}
			else
			{
				*(_OWORD*)v37 = xmmword_140C777D0;
				*((_OWORD*)v37 + 1) = xmmword_140B7B240;
			}
			v36 += 24i64;
			v37 += 6;
		} while (v36 < 0xC0);
		v39 = (_DWORD*)(a1->m128_u64[1] + 760);
		if (*v39)
		{
			sub_1407D8F40((__int64)v39, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[164], v22, (char*)&a1[170]);
		}
		else
		{
			v40 = dword_140C55C10;
			if (*v26 < dword_140C55C10)
				v40 = *v26;
			a1[164] = stru_140C55C20[v40];
			v41 = dword_140C55CD0;
			if (*v26 < dword_140C55CD0)
				v41 = *v26;
			a1[165].m128_f32[2] = dword_140C55CE0[v41];
			v42 = dword_140C55D30;
			if (*v26 < dword_140C55D30)
				v42 = *v26;
			a1[165].m128_f32[3] = dword_140C55D40[v42];
			v43 = dword_140C55D90;
			if (*v26 < dword_140C55D90)
				v43 = *v26;
			a1[166].m128_f32[0] = dword_140C55DA0[v43];
			v44 = dword_140C40110;
			if (*v26 < dword_140C40110)
				v44 = *v26;
			a1[166].m128_i32[1] = *((_DWORD*)&xmmword_140C40120 + v44);
			v45 = dword_140C40170;
			if (*v26 < dword_140C40170)
				v45 = *v26;
			a1[167].m128_f32[3] = dword_140C40180[v45];
			v46 = dword_140C401D0;
			if (*v26 < dword_140C401D0)
				v46 = *v26;
			a1[168].m128_f32[0] = dword_140C401E0[v46];
			v47 = dword_140C40230;
			if (*v26 < dword_140C40230)
				v47 = *v26;
			a1[168].m128_f32[1] = dword_140C40240[v47];
			v48 = dword_140C55DF0;
			if (*v26 < dword_140C55DF0)
				v48 = *v26;
			a1[168].m128_f32[2] = dword_140C55E00[v48];
			v49 = dword_140C55E50;
			if (*v26 < dword_140C55E50)
				v49 = *v26;
			a1[168].m128_f32[3] = dword_140C55E60[v49];
			v50 = dword_140C55EB0;
			if (*v26 < dword_140C55EB0)
				v50 = *v26;
			a1[169].m128_f32[0] = dword_140C55EC0[v50];
			v51 = dword_140C55F10;
			if (*v26 < dword_140C55F10)
				v51 = *v26;
			a1[169].m128_f32[1] = dword_140C55F20[v51];
		}
		v52 = (_DWORD*)(a1->m128_u64[1] + 168);
		if (*v52)
			sub_1407D9700((__int64)v52, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[44], v22, (char*)&a1[61]);
		v53 = (_DWORD*)(a1->m128_u64[1] + 320);
		if (*v53)
			sub_1407D9700((__int64)v53, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[75], v22, (char*)&a1[92]);
		v54 = (_DWORD*)(a1->m128_u64[1] + 472);
		if (*v54)
			sub_1407D9700((__int64)v54, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[106], v22, (char*)&a1[123]);
		v55 = (_DWORD*)(a1->m128_u64[1] + 624);
		if (*v55)
			sub_1407D9700((__int64)v55, *(_DWORD*)(a1[1].m128_u64[1] + 1312), (__int64)&a1[137], v22, (char*)&a1[154]);
		v56 = (_DWORD*)(a1->m128_u64[1] + 808);
		if (*v56)
		{
			sub_140309410((__int64)v56, *(_DWORD*)(a1[1].m128_u64[1] + 1312), a1[200].m128_f32, v22, &a1[200].m128_i8[4]);
		}
		else
		{
			v57 = dword_140C560F0;
			if (*v26 < dword_140C560F0)
				v57 = *v26;
			a1[200].m128_f32[0] = dword_140C56100[v57];
		}
		result = (*(__int64(__fastcall**)(__m128*, _QWORD, _QWORD, __int64*, __int64, __m128*))(a1->m128_u64[0] + 136))(
			a1,
			*(_QWORD*)(a1->m128_u64[1] + 792),
			*(unsigned int*)(a1->m128_u64[1] + 784),
			&a1[19].m128_i64[1],
			(__int64)&a1[19].m128_i64[1] + 4,
			a1 + 20);
		a1[20].m128_i32[1] = result;
		if ((a2 & 1) != 0)
		{
			result = a1[1].m128_i64[1];
			if (*(_QWORD*)(result + 16))
			{
				if (a1[5].m128_f32[3] > 0.0)
				{
					LODWORD(result) = dword_140C55BD0;
					if (*(_DWORD*)qword_140C63750 < dword_140C55BD0)
						LODWORD(result) = *(_DWORD*)qword_140C63750;
					result = (int)result;
					if (byte_140C55BE0[(int)result])
					{
						v58 = 0i64;
						if (a1[30].m128_u64[0])
						{
							v59 = 0i64;
							v60 = 0i64;
							do
							{
								v61 = a1->m128_i64[1];
								v72 = 1065353216i64;
								result = (*(__int64(__fastcall**)(__m128*, _QWORD, _QWORD, float*, char*, char*))(a1->m128_u64[0] + 136))(
									a1,
									*(_QWORD*)(*(_QWORD*)(v61 + 1192) + v60 + 8),
									*(unsigned int*)(*(_QWORD*)(v61 + 1192) + v60),
									&v73,
									&v74,
									(char*)&v72 + 4);
								if ((_DWORD)result)
								{
									v62 = 0i64;
									v63 = (unsigned int)result;
									*(float*)&v72 = 1.0 - *((float*)&v72 + 1);
									do
									{
										v64 = a1[1].m128_i64[1];
										v66 = *(_QWORD*)(v59 + a1[29].m128_u64[1]);
										result = *(unsigned int*)(v64 + 1320);
										if ((int)result - *(_DWORD*)(v66 + 12i64 * *((int*)&v73 + v62) + 8) >= 0
											&& *((float*)&v72 + v62) > 0.0)
										{
											v65 = 3i64 * *((int*)&v73 + v62);
											v67 = (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v64 + 16) + 256i64))(
												*(_QWORD*)(v64 + 16),
												*(unsigned int*)(v66 + 4 * v65 + 4),
												*(unsigned int*)(v66 + 4 * v65)) < 0;
											v68 = a1[1].m128_i64[1];
											if (v67)
												v69 = *(_DWORD*)(v68 + 1320) + 0x7FFFFFFF;
											else
												v69 = *(_DWORD*)(v68 + 1320) + v71;
											result = a1[29].m128_i64[1];
											*(_DWORD*)(*(_QWORD*)(v59 + result) + 12i64 * *((int*)&v73 + v62) + 8) = v69;
										}
										++v62;
									} while (v62 < v63);
								}
								++v58;
								v60 += 24i64;
								v59 += 16i64;
							} while (v58 < a1[30].m128_u64[0]);
						}
					}
				}
			}
		}
	}
	return result;
}
// 1407D3887: variable 'v22' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C40110: using guessed type int dword_140C40110;
// 140C40120: using guessed type __int128 xmmword_140C40120;
// 140C40170: using guessed type int dword_140C40170;
// 140C40180: using guessed type float dword_140C40180[16];
// 140C401D0: using guessed type int dword_140C401D0;
// 140C401E0: using guessed type float dword_140C401E0[16];
// 140C40230: using guessed type int dword_140C40230;
// 140C40240: using guessed type float dword_140C40240[16];
// 140C55BD0: using guessed type int dword_140C55BD0;
// 140C55BE0: using guessed type _BYTE[32];
// 140C55C10: using guessed type int dword_140C55C10;
// 140C55C20: using guessed type __m128 stru_140C55C20[7];
// 140C55CD0: using guessed type int dword_140C55CD0;
// 140C55CE0: using guessed type float dword_140C55CE0[16];
// 140C55D30: using guessed type int dword_140C55D30;
// 140C55D40: using guessed type float dword_140C55D40[16];
// 140C55D90: using guessed type int dword_140C55D90;
// 140C55DA0: using guessed type float dword_140C55DA0[16];
// 140C55DF0: using guessed type int dword_140C55DF0;
// 140C55E00: using guessed type float dword_140C55E00[16];
// 140C55E50: using guessed type int dword_140C55E50;
// 140C55E60: using guessed type float dword_140C55E60[16];
// 140C55EB0: using guessed type int dword_140C55EB0;
// 140C55EC0: using guessed type float dword_140C55EC0[16];
// 140C55F10: using guessed type int dword_140C55F10;
// 140C55F20: using guessed type float dword_140C55F20[16];
// 140C55F70: using guessed type int dword_140C55F70;
// 140C55F80: using guessed type float dword_140C55F80[16];
// 140C55FD0: using guessed type int dword_140C55FD0;
// 140C55FE0: using guessed type float dword_140C55FE0[16];
// 140C56030: using guessed type int dword_140C56030;
// 140C56040: using guessed type float dword_140C56040[16];
// 140C56090: using guessed type int dword_140C56090;
// 140C560A0: using guessed type float dword_140C560A0[16];
// 140C560F0: using guessed type int dword_140C560F0;
// 140C56100: using guessed type float dword_140C56100[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;
// 1407D3560: using guessed type int var_48[4];


//----- (000000014047F210) ----------------------------------------------------
void __fastcall sub_14047F210(__int64 a1, __m128* a2, int a3, int a4)
{
	__m128* v4; // rdi
	int v6; // eax
	unsigned __int64 v7; // r13
	int v8; // ebx
	int* v9; // rax
	int* v10; // r8
	__int64 v11; // r12
	unsigned __int64 v12; // rdx
	int v13; // ecx
	int v14; // ecx
	__int64 v15; // rax
	float v16; // xmm0_4
	int v17; // ecx
	float v18; // xmm9_4
	__m128* v19; // rcx
	__m128 v20; // xmm5
	__m128 v21; // xmm1
	__m128 v22; // xmm4
	__m128 v23; // xmm3
	float v24; // xmm1_4
	__m128 v25; // xmm0
	float v26; // xmm8_4
	__int64* v27; // rbx
	__int64 v28; // r15
	__int64 v29; // rcx
	__int64 v30; // rbp
	__int64 v31; // rsi
	float v32; // xmm7_4
	float v33; // xmm7_4
	int v34; // eax
	float v35; // xmm6_4
	double v36; // xmm0_8
	int* v37; // rax
	int v38; // ecx
	int v39; // eax
	__int64 v40; // rdx
	__int64 v41; // rcx
	int v42; // eax
	int v43; // ebx
	int v44; // eax
	double v45; // xmm6_8
	int v46; // ebx
	int v47; // r8d
	unsigned int v48; // edx
	__int64* v49; // rbx
	__int64 v50; // rdi
	unsigned int v51; // eax
	bool v52; // cf
	__int64 v53; // [rsp+40h] [rbp-C8h] BYREF
	unsigned __int64 v54; // [rsp+48h] [rbp-C0h]
	__int64 v55; // [rsp+110h] [rbp+8h]

	v4 = a2;
	if (!a3 && !a4)
		*(_DWORD*)(a1 + 13900) = 1;
	if (*(_QWORD*)(a1 + 13872))
	{
		v6 = sub_14018CDF0();
		v7 = *(_QWORD*)(a1 + 13872);
		v8 = v6;
		v9 = sub_14018DB00(0i64, v7, 4i64);
		v10 = (int*)qword_140C63750;
		v11 = 0i64;
		v54 = v7;
		v12 = 0i64;
		if (v9)
			v11 = (__int64)v9;
		v53 = v11;
		if (v7)
		{
			do
			{
				v13 = dword_140C47FA0;
				if (*v10 < dword_140C47FA0)
					v13 = *v10;
				v14 = v12++ * dword_140C47FB0[v13];
				*(_DWORD*)(v11 + 4 * v12 - 4) = v8 + v14;
			} while (v12 < v7);
		}
		v15 = *(_QWORD*)(a1 + 13872);
		v16 = (float)(int)v15;
		if (v15 < 0)
			v16 = v16 + 1.8446744e19;
		v17 = dword_140C48000;
		if (*v10 < dword_140C48000)
			v17 = *v10;
		v18 = *(float*)&dword_140C45AF8 / v16;
		if (byte_140C48010[v17]
			|| (v19 = *(__m128**)(qword_140C65898 + 120)) == 0i64
			|| (v20 = _mm_sub_ps(v19[286], *v4),
				v21 = _mm_mul_ps(v20, v20),
				(float)((float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
					+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0]) <= *(float*)&dword_140C45A98))
		{
			v26 = (*(double(__fastcall**)(__int64*, unsigned __int64, int*, unsigned __int64))(qword_140C77890 + 40))(
				&qword_140C77890,
				v12,
				v10,
				0x140000000ui64)
				* 6.283185482025146;
		}
		else
		{
			v22 = (__m128)0x40400000u;
			v23 = _mm_mul_ps(v20, v20);
			v23.m128_f32[0] = (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
				+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
			v24 = 1.0 / fsqrt(v23.m128_f32[0]);
			v22.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v23.m128_f32[0] * v24) * v24)) * 0.5) * v24, 0.0);
			v25 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v20);
			v26 = sub_1408FD190(-v25.m128_f32[0], -_mm_shuffle_ps(v25, v25, 170).m128_f32[0]);
		}
		v55 = 0i64;
		if (*(_QWORD*)(a1 + 13872))
		{
			v27 = (__int64*)(a1 + 13880);
			v28 = 0i64;
			do
			{
				sub_140481120(v27, *(_QWORD*)(a1 + 13888) + 1i64);
				v29 = *(_QWORD*)(a1 + 13864);
				v30 = *v27;
				v31 = *(_QWORD*)(a1 + 13888) << 6;
				*(_DWORD*)(v31 + v30 - 64) = *(_DWORD*)(v29 + v28);
				*(_DWORD*)(v31 + v30 - 60) = *(_DWORD*)(v29 + v28 + 4);
				*(_DWORD*)(v31 + v30 - 56) = *(_DWORD*)(v29 + v28 + 8);
				*(_DWORD*)(v31 + v30 - 52) = *(_DWORD*)(v29 + v28 + 12);
				*(_DWORD*)(v31 + v30 - 48) = *(_DWORD*)(v29 + v28 + 16);
				if (*(_DWORD*)(a1 + 128) == 5)
				{
					v32 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890) * 3.769911251764384;
					v33 = v32 + 1.2566371;
				}
				else
				{
					v26 = v26 + v18;
					v33 = v26;
				}
				v34 = dword_140C48040;
				if (*(_DWORD*)qword_140C63750 < dword_140C48040)
					v34 = *(_DWORD*)qword_140C63750;
				v35 = dword_140C48050[v34];
				v36 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
				v37 = (int*)qword_140C63750;
				*(float*)&v36 = v36 * v35;
				*(float*)(v31 + v30 - 16) = *(float*)&v36 + v33;
				*(__m128*)(v31 + v30 - 32) = *v4;
				v38 = *v37;
				v39 = dword_140C47FA0;
				if (v38 < dword_140C47FA0)
					v39 = v38;
				if (dword_140C47FB0[v39])
				{
					v40 = (unsigned int)(int)((double)(*(int(__fastcall**)(__int64*, unsigned __int64))(qword_140C77890 + 24))(
						&qword_140C77890,
						0x140000000ui64)
						* 2.328306436538696e-10
						* ((double)((int)v7 - 1) + 1.0));
					*(_DWORD*)(v31 + v30 - 12) = *(_DWORD*)(v11 + 4 * v40);
					sub_1401C2F20((__int64)&v53, v40);
					LODWORD(v7) = v54;
					v11 = v53;
				}
				else
				{
					v42 = dword_140C47F40;
					if (v38 < dword_140C47F40)
						v42 = v38;
					v43 = dword_140C47F50[v42];
					v44 = dword_140C47EE0;
					if (v38 < dword_140C47EE0)
						v44 = v38;
					v45 = (double)dword_140C47EF0[v44];
					v46 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
						* 2.328306436538696e-10
						* ((double)v43 - v45 + 1.0)
						+ v45);
					*(_DWORD*)(v31 + v30 - 12) = v46 + sub_14018CDF0();
				}
				v47 = *(_DWORD*)(v31 + v30 - 52);
				v48 = *(_DWORD*)(v31 + v30 - 60);
				*(_DWORD*)(v31 + v30 - 8) = 0;
				v49 = *(__int64**)(a1 + 5512);
				v50 = *v49;
				v51 = sub_140615DD0(v41, v48, v47);
				(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v50 + 16))(
					v49,
					v51,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
				v4 = a2;
				v28 += 20i64;
				v52 = (unsigned __int64)++v55 < *(_QWORD*)(a1 + 13872);
				v27 = (__int64*)(a1 + 13880);
			} while (v52);
		}
		*(_QWORD*)(a1 + 13872) = 0i64;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
}
// 14047F683: variable 'v41' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C45A98: using guessed type int dword_140C45A98;
// 140C45AF8: using guessed type int dword_140C45AF8;
// 140C47EE0: using guessed type int dword_140C47EE0;
// 140C47EF0: using guessed type int dword_140C47EF0[16];
// 140C47F40: using guessed type int dword_140C47F40;
// 140C47F50: using guessed type int dword_140C47F50[16];
// 140C47FA0: using guessed type int dword_140C47FA0;
// 140C47FB0: using guessed type int dword_140C47FB0[14];
// 140C48000: using guessed type int dword_140C48000;
// 140C48010: using guessed type _BYTE[32];
// 140C48040: using guessed type int dword_140C48040;
// 140C48050: using guessed type float dword_140C48050[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77890: using guessed type __int64 qword_140C77890;


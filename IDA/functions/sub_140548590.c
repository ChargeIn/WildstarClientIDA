//----- (0000000140548590) ----------------------------------------------------
void __fastcall sub_140548590(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	__int64 mm; // rbx
	__int64 v23; // rax
	__m128 v24; // xmm0
	bool v25; // zf
	__m128 v26; // xmm3
	__m128 v27; // xmm2
	__int128 v28; // xmm0
	__int128 v29; // xmm1
	__int128 v30; // xmm0
	__int128 v31; // xmm1
	int v32; // [rsp+28h] [rbp-31h]
	__m128 v33; // [rsp+30h] [rbp-29h] BYREF
	__m128 v34; // [rsp+40h] [rbp-19h] BYREF
	__int128 v35; // [rsp+50h] [rbp-9h] BYREF
	__m256 v36; // [rsp+60h] [rbp+7h] BYREF
	__int128 v37; // [rsp+80h] [rbp+27h]
	__int128 v38; // [rsp+90h] [rbp+37h]

	if (*(_DWORD*)(a1 + 760))
	{
		sub_1405488C0(*(_QWORD*)(a1 + 608));
		sub_1405488C0(*(_QWORD*)(a1 + 616));
		v2 = *(_QWORD*)(a1 + 640);
		v3 = *(_QWORD*)(v2 + 16);
		if (v3 != v2)
		{
			do
			{
				sub_1405488C0(**(_QWORD**)(v3 + 40));
				v4 = *(_QWORD*)(v3 + 24);
				if (v4)
				{
					v3 = *(_QWORD*)(v3 + 24);
					for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
						v3 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v3 = j;
					if (*(_QWORD*)(v3 + 24) != j)
						v3 = j;
				}
			} while (v3 != *(_QWORD*)(a1 + 640));
		}
		v7 = *(_QWORD*)(a1 + 704);
		v8 = *(_QWORD*)(v7 + 16);
		if (v8 != v7)
		{
			do
			{
				sub_1405488C0(**(_QWORD**)(v8 + 40));
				v9 = *(_QWORD*)(v8 + 24);
				if (v9)
				{
					v8 = *(_QWORD*)(v8 + 24);
					for (k = *(_QWORD*)(v9 + 16); k; k = *(_QWORD*)(k + 16))
						v8 = k;
				}
				else
				{
					for (m = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						v8 = m;
					if (*(_QWORD*)(v8 + 24) != m)
						v8 = m;
				}
			} while (v8 != *(_QWORD*)(a1 + 704));
		}
		v12 = *(_QWORD*)(a1 + 672);
		v13 = *(_QWORD*)(v12 + 16);
		if (v13 != v12)
		{
			do
			{
				sub_1405488C0(**(_QWORD**)(v13 + 40));
				v14 = *(_QWORD*)(v13 + 24);
				if (v14)
				{
					v13 = *(_QWORD*)(v13 + 24);
					for (n = *(_QWORD*)(v14 + 16); n; n = *(_QWORD*)(n + 16))
						v13 = n;
				}
				else
				{
					for (ii = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
						v13 = ii;
					if (*(_QWORD*)(v13 + 24) != ii)
						v13 = ii;
				}
			} while (v13 != *(_QWORD*)(a1 + 672));
		}
		v17 = *(_QWORD*)(a1 + 736);
		v18 = *(_QWORD*)(v17 + 16);
		if (v18 != v17)
		{
			do
			{
				sub_1405488C0(**(_QWORD**)(v18 + 40));
				v19 = *(_QWORD*)(v18 + 24);
				if (v19)
				{
					v18 = *(_QWORD*)(v18 + 24);
					for (jj = *(_QWORD*)(v19 + 16); jj; jj = *(_QWORD*)(jj + 16))
						v18 = jj;
				}
				else
				{
					for (kk = *(_QWORD*)(v18 + 8); v18 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
						v18 = kk;
					if (*(_QWORD*)(v18 + 24) != kk)
						v18 = kk;
				}
			} while (v18 != *(_QWORD*)(a1 + 736));
		}
		for (mm = *(_QWORD*)(a1 + 624); mm; mm = *(_QWORD*)(mm + 8))
		{
			v23 = *(_QWORD*)(mm + 48);
			v35 = *(_OWORD*)(mm + 144);
			v24 = *(__m128*)(mm + 160);
			v34 = 0i64;
			v25 = *(_DWORD*)(v23 + 8) == 7;
			v34 = v24;
			v33 = *(__m128*)(mm + 176);
			if (!v25)
			{
				v26 = (__m128)v33.m128_u32[0];
				v27 = (__m128)v34.m128_u32[0];
				v26.m128_f32[0] = fmaxf(v33.m128_f32[0], v33.m128_f32[2]);
				v27.m128_f32[0] = fminf(v34.m128_f32[0], v34.m128_f32[2]);
				v34 = _mm_shuffle_ps(v27, v27, 0);
				v33 = _mm_shuffle_ps(v26, v26, 0);
			}
			v32 = *(_DWORD*)(mm + 72);
			v36 = ymmword_140C78390;
			v37 = xmmword_140C783B0;
			v28 = *(_OWORD*)(mm + 192);
			v38 = xmmword_140C783C0;
			v29 = *(_OWORD*)(mm + 208);
			*(_OWORD*)v36.m256_f32 = v28;
			v30 = *(_OWORD*)(mm + 224);
			*(_OWORD*)&v36.m256_f32[4] = v29;
			v31 = *(_OWORD*)(mm + 240);
			v37 = v30;
			v38 = v31;
			sub_14054CA10(mm, &v35, &v34, &v33, &v36, v32);
		}
	}
}
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;


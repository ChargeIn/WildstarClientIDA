//----- (00000001408E7920) ----------------------------------------------------
__int64 __fastcall sub_1408E7920(_BYTE* a1, __int64 a2, __m128* a3, __m128* a4, unsigned int a5)
{
	__m128* v5; // r11
	signed __int64 v7; // r10
	unsigned int v8; // ebx
	const char* v9; // rax
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rax
	__m128 v13; // xmm1
	__m128 v14; // xmm0
	__m128 v15; // xmm2
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	__m128 v18; // xmm0
	__m128 v19; // xmm2
	__m128 v20; // xmm1
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128 v23; // xmm0
	__m128 v24; // xmm2
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	__m128 v27; // xmm1
	__m128 v28; // xmm0
	__m128 v29; // xmm2
	__m128 v30; // xmm1
	__int64 v31; // rax
	__m128 v32; // xmm1
	__m128 v33; // xmm2
	__m128 v34; // xmm3
	__m128 v35; // xmm0
	__m128 v36; // xmm2
	__m128 v37; // xmm1
	__m128 v38; // xmm3
	__m128 v39; // xmm0
	__m128 v40; // xmm3
	__m128 v41; // xmm2
	__m128 v42; // xmm3
	__m128 v43; // xmm2
	__m128 v44; // xmm1
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	__m128 v47; // xmm3
	__m128 v48; // xmm2
	__m128 v49; // xmm3
	__m128 v50; // xmm2
	__m128 v51; // xmm1
	__m128 v52; // xmm3
	__m128 v53; // xmm2
	__int64 result; // rax
	char* v55; // r11
	__int64 v56; // rcx
	__m128 v57; // xmm2
	__m128 v58; // xmm1

	v5 = a3;
	v7 = (char*)a3 - (char*)a4;
	v8 = a5 >> 3;
	v9 = (const char*)a4;
	v10 = a2 - (_QWORD)a4;
	v11 = 4i64;
	do
	{
		_mm_prefetch(&v9[v7], 0);
		_mm_prefetch(v9, 0);
		_mm_prefetch(&v9[v10], 0);
		v9 += 64;
		--v11;
	} while (v11);
	if (*a1)
	{
		if (v8)
		{
			v12 = v8;
			do
			{
				_mm_prefetch((const char*)&a4[16] + v7, 0);
				_mm_prefetch((const char*)&a4[16], 0);
				_mm_prefetch((const char*)&a4[16] + v10, 0);
				v13 = *a4;
				v14 = _mm_movehdup_ps(*v5);
				v15 = _mm_moveldup_ps(*v5);
				a4 += 4;
				a2 += 64i64;
				v5 += 4;
				v16 = _mm_mul_ps(v15, v13);
				v17 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 177), v14);
				v18 = _mm_movehdup_ps(*(__m128*)((char*)a4 + v7 - 48));
				v19 = _mm_addsub_ps(v16, v17);
				v20 = a4[-3];
				*(__m128*)(a2 - 64) = _mm_add_ps(v19, *(__m128*)(a2 - 64));
				v21 = _mm_mul_ps(_mm_moveldup_ps(*(__m128*)((char*)a4 + v7 - 48)), v20);
				v22 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 177), v18);
				v23 = _mm_movehdup_ps(*(__m128*)((char*)a4 + v7 - 32));
				v24 = _mm_addsub_ps(v21, v22);
				v25 = a4[-2];
				*(__m128*)((char*)a4 + v10 - 48) = _mm_add_ps(v24, *(__m128*)((char*)a4 + v10 - 48));
				v26 = _mm_mul_ps(_mm_moveldup_ps(*(__m128*)((char*)a4 + v7 - 32)), v25);
				v27 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 177), v23);
				v28 = _mm_movehdup_ps(*(__m128*)((char*)a4 + v7 - 16));
				v29 = _mm_addsub_ps(v26, v27);
				v30 = a4[-1];
				*(__m128*)((char*)a4 + v10 - 32) = _mm_add_ps(v29, *(__m128*)((char*)a4 + v10 - 32));
				*(__m128*)((char*)a4 + v10 - 16) = _mm_add_ps(
					_mm_addsub_ps(
						_mm_mul_ps(_mm_moveldup_ps(*(__m128*)((char*)a4 + v7 - 16)), v30),
						_mm_mul_ps(_mm_shuffle_ps(v30, v30, 177), v28)),
					*(__m128*)((char*)a4 + v10 - 16));
				--v12;
			} while (v12);
		}
	}
	else if (v8)
	{
		v31 = v8;
		do
		{
			_mm_prefetch((const char*)&a4[16] + v7, 0);
			_mm_prefetch((const char*)&a4[16], 0);
			_mm_prefetch((const char*)&a4[16] + v10, 0);
			v32 = *a4;
			v33 = *v5;
			a4 += 4;
			a2 += 64i64;
			v5 += 4;
			v34 = _mm_shuffle_ps(v33, v33, 245);
			v35 = _mm_shuffle_ps(v32, v32, 177);
			v36 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 160), v32);
			v37 = a4[-3];
			v38 = _mm_mul_ps(_mm_mul_ps(v34, (__m128)xmmword_1409B44B0), v35);
			v39 = _mm_shuffle_ps(v37, v37, 177);
			v40 = _mm_add_ps(v38, v36);
			v41 = *(__m128*)((char*)a4 + v7 - 48);
			*(__m128*)(a2 - 64) = _mm_add_ps(v40, *(__m128*)(a2 - 64));
			v42 = _mm_shuffle_ps(v41, v41, 245);
			v43 = _mm_mul_ps(_mm_shuffle_ps(v41, v41, 160), v37);
			v44 = a4[-2];
			v45 = _mm_mul_ps(_mm_mul_ps(v42, (__m128)xmmword_1409B44B0), v39);
			v46 = _mm_shuffle_ps(v44, v44, 177);
			v47 = _mm_add_ps(v45, v43);
			v48 = *(__m128*)((char*)a4 + v7 - 32);
			*(__m128*)((char*)a4 + v10 - 48) = _mm_add_ps(v47, *(__m128*)((char*)a4 + v10 - 48));
			v49 = _mm_shuffle_ps(v48, v48, 245);
			v50 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 160), v44);
			v51 = a4[-1];
			v52 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v49, (__m128)xmmword_1409B44B0), v46), v50);
			v53 = *(__m128*)((char*)a4 + v7 - 16);
			*(__m128*)((char*)a4 + v10 - 32) = _mm_add_ps(v52, *(__m128*)((char*)a4 + v10 - 32));
			*(__m128*)((char*)a4 + v10 - 16) = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_mul_ps(_mm_shuffle_ps(v53, v53, 245), (__m128)xmmword_1409B44B0),
						_mm_shuffle_ps(v51, v51, 177)),
					_mm_mul_ps(_mm_shuffle_ps(v53, v53, 160), v51)),
				*(__m128*)((char*)a4 + v10 - 16));
			--v31;
		} while (v31);
	}
	result = 8 * v8;
	if (a5 != (_DWORD)result)
	{
		v55 = (char*)v5 - a2;
		v56 = ((a5 - (unsigned int)result - 1) >> 1) + 1;
		do
		{
			v57 = *(__m128*) & v55[a2];
			v58 = *a4;
			a2 += 16i64;
			++a4;
			*(__m128*)(a2 - 16) = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_mul_ps(_mm_shuffle_ps(v57, v57, 245), (__m128)xmmword_1409B44B0),
						_mm_shuffle_ps(v58, v58, 177)),
					_mm_mul_ps(_mm_shuffle_ps(v57, v57, 160), v58)),
				*(__m128*)(a2 - 16));
			--v56;
		} while (v56);
	}
	return result;
}
// 1409B44B0: using guessed type __int128 xmmword_1409B44B0;


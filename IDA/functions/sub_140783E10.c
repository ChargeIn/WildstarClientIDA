#include "../winhttp.h"

//----- (0000000140783E10) ----------------------------------------------------
_DWORD* __fastcall sub_140783E10(unsigned int* a1, _DWORD* a2, int a3, _DWORD* a4, _DWORD* a5, int a6, __int64 a7)
{
	int* v7; // r10
	int v8; // ebp
	int v9; // ebx
	int v11; // esi
	bool v14; // sf
	int v15; // eax
	int v16; // ecx
	int v17; // eax
	int v18; // ecx
	__int64 v19; // rdx
	int v20; // ebx
	__int64 v21; // r11
	__int64 v22; // r9
	int v23; // r8d
	int v24; // edx
	__int64 v25; // r8
	unsigned int v26; // r11d
	__int64 v27; // r10
	unsigned int v28; // r9d
	int v29; // r8d
	unsigned int i; // edx
	__int64 v31; // r8
	__int64 v32; // rcx
	unsigned int* v33; // rax
	__m128i v34; // xmm4
	_DWORD* v35; // rcx
	int v36; // eax
	unsigned int v37; // r9d
	__int64 v38; // rax
	__int64 v39; // r9
	__int64 v40; // r10
	int v41; // r11d
	int v42; // r8d
	__int64 v43; // rcx
	__m128i v44; // xmm4
	__int64 v45; // rdx
	__int64 v46; // rcx
	__m128 v47; // xmm2
	__m128 v48; // xmm3
	__m128 v49; // xmm2
	_DWORD* v50; // r8
	__int64 v51; // rdx
	__m128 v52; // xmm0
	__m128 v53; // xmm2
	__m128 v54; // xmm4
	__int64 v55; // rax
	unsigned int* v56; // rax
	__m128i v57; // xmm4
	__int64 v58; // r9
	__int64 v59; // rax
	__int64 v60; // r8
	__int64 v61; // r9
	int v62; // r11d
	int v63; // r10d
	__int64 v64; // rcx
	__m128i v65; // xmm4
	__m128 v66; // xmm11
	__int64 v67; // rax
	__m128 v68; // xmm6
	__m128 v69; // xmm3
	__m128 v70; // xmm4
	__m128 v71; // xmm0
	float v72; // xmm1_4
	__m128 v73; // xmm2
	__m128 v74; // xmm10
	__m128 v75; // xmm10
	__m128i v76; // xmm4
	__int64 v77; // rcx
	__int64 v78; // rdx

	v7 = (int*)*((_QWORD*)a1 + 1);
	v8 = *v7;
	v9 = a3 + a1[12] - *v7;
	v11 = v7[*a1 - 1] - *v7;
	if (v11 <= 0)
	{
		if (a7 && *(_QWORD*)(a7 + 24))
			sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
	LABEL_37:
		v9 = 0;
	}
	else
	{
		switch (a1[11])
		{
		case 0u:
		case 9u:
			if (a7 && v9 >= v11 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			if (v9 < 0)
				goto LABEL_37;
			if (v9 > v11)
				v9 = v11;
			break;
		case 1u:
		case 6u:
		case 8u:
			v16 = 2 * v11;
			if (v9 < 0)
			{
				v9 = v16 - (-1 - v9) % v16 - 1;
				goto LABEL_23;
			}
			v17 = v9;
			goto LABEL_22;
		case 2u:
			if (v9 >= 0)
				v9 %= v11;
			else
				v9 = v11 - (-1 - v9) % v11 - 1;
			break;
		case 3u:
		case 0xAu:
			if (a7 && v9 >= v11 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			v14 = v11 - v9 < 0;
			v15 = v11 - v9;
			v9 = v11 - v9;
			if (v14)
				goto LABEL_37;
			if (v15 > v11)
				v9 = v11;
			break;
		case 4u:
		case 7u:
			v16 = 2 * v11;
			if (v11 - v9 >= 0)
			{
				v17 = v11 - v9;
			LABEL_22:
				v9 = v17 % v16;
			}
			else
			{
				v9 = v16 - (-1 - (v11 - v9)) % v16 - 1;
			}
		LABEL_23:
			if (v9 >= v11)
				v9 = v16 - v9;
			break;
		case 5u:
			v18 = v11 - v9;
			if (v11 - v9 >= 0)
				v9 = v18 % v11;
			else
				v9 = v11 - (-1 - v18) % v11 - 1;
			break;
		default:
			break;
		}
	}
	v19 = a1[1];
	v20 = v8 + v9;
	if ((_DWORD)v19 && (v21 = *((_QWORD*)a1 + 1), v22 = (unsigned int)(v19 - 1), v20 - *(_DWORD*)(v21 + 4 * v22) < 0))
	{
		v23 = 1;
		v24 = v19 - 1;
		if ((int)v22 > 0)
		{
			do
			{
				if (v20 - *(_DWORD*)(v21 + 4i64 * (unsigned int)(v24 - 1)) >= 0)
					break;
				v23 *= 2;
				LODWORD(v22) = v24 - 1;
				v24 -= v23;
			} while (v24 > 0);
		}
		if (v24 < 0)
			v24 = 0;
		while (v24 < (unsigned int)v22)
		{
			v25 = (unsigned int)(v24 + v22) >> 1;
			if (v20 - *(_DWORD*)(v21 + 4 * v25) < 0)
				LODWORD(v22) = (unsigned int)(v24 + v22) >> 1;
			else
				v24 = v25 + 1;
		}
		a1[1] = v24;
	}
	else
	{
		v26 = *a1;
		if ((unsigned int)v19 < *a1)
		{
			v27 = *((_QWORD*)a1 + 1);
			if (v20 - *(_DWORD*)(v27 + 4 * v19) >= 0)
			{
				v28 = v19 + 1;
				v29 = 1;
				for (i = v28; i < v26; i += v29)
				{
					if (v20 - *(_DWORD*)(v27 + 4i64 * i) < 0)
						break;
					v29 *= 2;
					v28 = i + 1;
				}
				if (i > v26)
					i = *a1;
				while (v28 < i)
				{
					v31 = (i + v28) >> 1;
					if (v20 - *(_DWORD*)(v27 + 4 * v31) < 0)
						i = (i + v28) >> 1;
					else
						v28 = v31 + 1;
				}
				a1[1] = v28;
			}
		}
	}
	v32 = a1[1];
	if (!a1[10])
	{
		if (!(_DWORD)v32)
		{
			if (a4)
				*a4 = 0;
			if (a5)
			{
				if (*a1 <= 1)
				{
					*(_QWORD*)a5 = 0i64;
					a5[2] = 0;
				}
				else
				{
					v33 = (unsigned int*)*((_QWORD*)a1 + 3);
					v34 = (__m128i)_mm_sub_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v33[3], (__m128)v33[5]),
							_mm_unpacklo_ps((__m128)v33[4], (__m128)0i64)),
						_mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128) * v33, (__m128)v33[2]),
							_mm_unpacklo_ps((__m128)v33[1], (__m128)0i64)));
					*a5 = _mm_cvtsi128_si32(v34);
					a5[1] = _mm_cvtsi128_si32(_mm_srli_si128(v34, 4));
					a5[2] = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
				}
			}
		LABEL_72:
			v35 = (_DWORD*)*((_QWORD*)a1 + 3);
			*a2 = *v35;
			a2[1] = v35[1];
			v36 = v35[2];
		LABEL_102:
			a2[2] = v36;
			return a2;
		}
		v37 = *a1;
		if ((unsigned int)v32 < *a1)
		{
			v38 = *((_QWORD*)a1 + 1);
			v39 = (unsigned int)(v32 - 1);
			v40 = a1[1];
			v41 = *(_DWORD*)(v38 + 4 * v39);
			v42 = *(_DWORD*)(v38 + 4 * v32);
			if (a4)
				*a4 = v42 - v41;
			if (a5)
			{
				v43 = *((_QWORD*)a1 + 3);
				v44 = (__m128i)_mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v43 + 12 * v40),
							(__m128) * (unsigned int*)(v43 + 12 * v40 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v43 + 12 * v40 + 4), (__m128)0i64)),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v43 + 12 * v39),
							(__m128) * (unsigned int*)(v43 + 12 * v39 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v43 + 12 * v39 + 4), (__m128)0i64)));
				*a5 = _mm_cvtsi128_si32(v44);
				a5[1] = _mm_cvtsi128_si32(_mm_srli_si128(v44, 4));
				a5[2] = _mm_cvtsi128_si32(_mm_srli_si128(v44, 8));
			}
			v45 = *((_QWORD*)a1 + 3);
			v46 = a1[1];
			v47 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v45 + 12i64 * (unsigned int)(v46 - 1) + 4), (__m128)0i64);
			v48 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v45 + 12i64 * (unsigned int)(v46 - 1)),
					(__m128) * (unsigned int*)(v45 + 12i64 * (unsigned int)(v46 - 1) + 8)),
				v47);
			v47.m128_f32[0] = (float)(v20 - v41) / (float)(v42 - v41);
			v49 = _mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v47, v47, 0),
					_mm_sub_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v45 + 12 * v46),
								(__m128) * (unsigned int*)(v45 + 12 * v46 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v45 + 12 * v46 + 4), (__m128)0i64)),
						v48)),
				v48);
			*a2 = v49.m128_i32[0];
			a2[2] = _mm_shuffle_ps(v49, v49, 170).m128_u32[0];
			a2[1] = _mm_shuffle_ps(v49, v49, 85).m128_u32[0];
			return a2;
		}
		if (a4)
			*a4 = 0;
		v50 = a5;
		if (a5)
		{
			if (v37 > 1)
			{
				v51 = *((_QWORD*)a1 + 3);
				v52 = (__m128) * (unsigned int*)(v51 + 12i64 * (v37 - 1) + 8);
				v53 = (__m128) * (unsigned int*)(v51 + 12i64 * (v37 - 1) + 4);
				v54 = (__m128) * (unsigned int*)(v51 + 12i64 * (v37 - 1));
				v55 = v37 - 2;
			LABEL_100:
				v76 = (__m128i)_mm_sub_ps(
					_mm_unpacklo_ps(_mm_unpacklo_ps(v54, v52), _mm_unpacklo_ps(v53, (__m128)0i64)),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v51 + 12 * v55),
							(__m128) * (unsigned int*)(v51 + 12 * v55 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v51 + 12 * v55 + 4), (__m128)0i64)));
				*v50 = _mm_cvtsi128_si32(v76);
				v50[1] = _mm_cvtsi128_si32(_mm_srli_si128(v76, 4));
				v50[2] = _mm_cvtsi128_si32(_mm_srli_si128(v76, 8));
				goto LABEL_101;
			}
			*(_QWORD*)a5 = 0i64;
			a5[2] = 0;
		}
	LABEL_101:
		v77 = *((_QWORD*)a1 + 3);
		v78 = 3i64 * (*a1 - 1);
		*a2 = *(_DWORD*)(v77 + 12i64 * (*a1 - 1));
		a2[1] = *(_DWORD*)(v77 + 4 * v78 + 4);
		v36 = *(_DWORD*)(v77 + 4 * v78 + 8);
		goto LABEL_102;
	}
	if (!(_DWORD)v32)
	{
		if (a4)
			*a4 = 0;
		if (a5)
		{
			v56 = (unsigned int*)*((_QWORD*)a1 + 3);
			v57 = (__m128i)_mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * v56, (__m128)v56[2]),
					_mm_unpacklo_ps((__m128)v56[1], (__m128)0i64)),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (v56 - 3), (__m128) * (v56 - 1)),
					_mm_unpacklo_ps((__m128) * (v56 - 2), (__m128)0i64)));
			*a5 = _mm_cvtsi128_si32(v57);
			a5[1] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
			a5[2] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 8));
		}
		goto LABEL_72;
	}
	v58 = *a1;
	if ((unsigned int)v32 >= (unsigned int)v58)
	{
		if (a4)
			*a4 = 0;
		v50 = a5;
		if (!a5)
			goto LABEL_101;
		v51 = *((_QWORD*)a1 + 3);
		v55 = (unsigned int)(v58 - 1);
		v52 = (__m128) * (unsigned int*)(v51 + 12 * v58 + 8);
		v53 = (__m128) * (unsigned int*)(v51 + 12 * v58 + 4);
		v54 = (__m128) * (unsigned int*)(v51 + 12 * v58);
		goto LABEL_100;
	}
	v59 = *((_QWORD*)a1 + 1);
	v60 = (unsigned int)(v32 - 1);
	v61 = a1[1];
	v62 = *(_DWORD*)(v59 + 4 * v60);
	v63 = *(_DWORD*)(v59 + 4 * v32);
	if (a4)
		*a4 = v63 - v62;
	if (a5)
	{
		v64 = *((_QWORD*)a1 + 3);
		v65 = (__m128i)_mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v64 + 12 * v61),
					(__m128) * (unsigned int*)(v64 + 12 * v61 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v64 + 12 * v61 + 4), (__m128)0i64)),
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v64 + 12 * v60),
					(__m128) * (unsigned int*)(v64 + 12 * v60 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v64 + 12 * v60 + 4), (__m128)0i64)));
		*a5 = _mm_cvtsi128_si32(v65);
		a5[1] = _mm_cvtsi128_si32(_mm_srli_si128(v65, 4));
		a5[2] = _mm_cvtsi128_si32(_mm_srli_si128(v65, 8));
	}
	v66 = 0i64;
	v67 = *((_QWORD*)a1 + 3);
	v66.m128_f32[0] = (float)(v20 - v62) / (float)(v63 - v62);
	v68 = v66;
	v69 = v66;
	v68.m128_f32[0] = v66.m128_f32[0] * v66.m128_f32[0];
	v69.m128_f32[0] = v66.m128_f32[0] * (float)(v66.m128_f32[0] * v66.m128_f32[0]);
	v70 = v69;
	v69.m128_f32[0] = v69.m128_f32[0] * 1.5;
	v71 = v68;
	v71.m128_f32[0] = (float)((float)(v66.m128_f32[0] * v66.m128_f32[0]) * 2.0) - v69.m128_f32[0];
	v72 = (float)(v66.m128_f32[0] * v66.m128_f32[0]) * 0.5;
	v66.m128_f32[0] = v66.m128_f32[0] * 0.5;
	v71.m128_f32[0] = v71.m128_f32[0] + v66.m128_f32[0];
	v70.m128_f32[0] = v70.m128_f32[0] * 0.5;
	v73 = v71;
	v71.m128_f32[0] = v68.m128_f32[0] * 2.5;
	v74 = v70;
	v74.m128_f32[0] = v70.m128_f32[0] - v72;
	v68.m128_f32[0] = (float)(v68.m128_f32[0] - v70.m128_f32[0]) - v66.m128_f32[0];
	v69.m128_f32[0] = (float)(v69.m128_f32[0] - v71.m128_f32[0]) + 1.0;
	v75 = _mm_add_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v74, v74, 0),
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] + 12),
					(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] + 20)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v67 + 12i64 * a1[1] + 16), (__m128)0i64))),
		_mm_add_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v73, v73, 0),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v67 + 12i64 * a1[1]),
						(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v67 + 12i64 * a1[1] + 4), (__m128)0i64))),
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v69, v69, 0),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 12),
							(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 4)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 8), (__m128)0i64))),
				_mm_mul_ps(
					_mm_shuffle_ps(v68, v68, 0),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 24),
							(__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 16)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v67 + 12i64 * a1[1] - 20), (__m128)0i64))))));
	*a2 = v75.m128_i32[0];
	a2[2] = _mm_shuffle_ps(v75, v75, 170).m128_u32[0];
	a2[1] = _mm_shuffle_ps(v75, v75, 85).m128_u32[0];
	return a2;
}
// 140B79ED0: using guessed type int dword_140B79ED0;


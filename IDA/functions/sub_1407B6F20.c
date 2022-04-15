#include "../winhttp.h"

//----- (00000001407B6F20) ----------------------------------------------------
__int64 __fastcall sub_1407B6F20(__int64 a1)
{
	__m128* v1; // rax
	float v2; // xmm6_4
	int v4; // ecx
	unsigned int v5; // edx
	__m128 v6; // xmm9
	__m128 v7; // xmm7
	__m128 v8; // xmm8
	__m128 v9; // xmm2
	__m128 v10; // xmm4
	float v11; // xmm4_4
	__m128 v12; // xmm3
	float v13; // xmm3_4
	__m128 v14; // xmm5
	float v15; // xmm5_4
	float v16; // xmm0_4
	__m128 v17; // xmm7
	__m128 v18; // xmm8
	__m128 v19; // xmm1
	__m128* v20; // rax
	__m128 v21; // xmm3
	__m128 v22; // xmm1
	__m128 v23; // xmm1
	float v24; // xmm1_4
	__m128 v25; // xmm0
	__m128 v26; // xmm1
	__m128 v27; // xmm5
	__m128 v28; // xmm4
	__m128 v29; // xmm5
	__m128 v30; // xmm1
	__m128 v31; // xmm2
	__m128 v32; // xmm4
	__m128 v33; // xmm1
	__m128 v34; // xmm1
	__m128 v35; // xmm5
	__m128* v36; // rax
	__m128 v37; // xmm2
	__m128 v38; // xmm4
	__m128 v39; // xmm5
	__m128 v40; // xmm1
	__m128 v41; // xmm2
	__m128 v42; // xmm4
	__m128 v43; // xmm1
	__m128 v44; // xmm1
	__m128 v45; // xmm3
	__m128 v46; // xmm5
	__m128 v47; // xmm4
	__m128 v48; // xmm5
	__m128 v49; // xmm1
	__m128 v50; // xmm6
	__m128 v51; // xmm1
	__m128 v52; // xmm1
	__int64 result; // rax

	v1 = *(__m128**)(a1 + 976);
	v2 = *(float*)&dword_140DC4F34;
	v4 = dword_140DC4F30;
	v5 = 0;
	v6 = *v1;
	v7 = v1[1];
	v8 = v1[2];
	while (1)
	{
		v9 = *(__m128*)(a1 + 16 * (v5 + 58i64));
		v10 = _mm_mul_ps(v6, v9);
		v11 = (float)((float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0])
			+ _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
		v12 = _mm_mul_ps(v7, v9);
		v13 = (float)((float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0])
			+ _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
		v14 = _mm_mul_ps(v8, v9);
		v15 = (float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0])
			+ *(float*)(a1 + 16 * (v5 + 58i64) + 12);
		if ((v4 & 1) == 0)
		{
			v2 = 1.00001;
			v4 |= 1u;
			dword_140DC4F30 = v4;
			dword_140DC4F34 = 1065353300;
		}
		v16 = -v2;
		if (v11 < (float)-v2 && v13 < v16 && v15 < v16)
			break;
		if (v11 > v2 && v13 > v2 && v15 > v2)
			break;
		if (++v5 >= 3)
		{
			v17 = _mm_sub_ps(v7, v6);
			v18 = _mm_sub_ps(v8, v6);
			v19 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 210), _mm_shuffle_ps(v17, v17, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 201), _mm_shuffle_ps(v17, v17, 210)));
			*(__m128*)(a1 + 992) = v19;
			v20 = *(__m128**)(a1 + 976);
			v21 = v19;
			v22 = _mm_mul_ps(_mm_sub_ps(*(__m128*)(a1 + 368), *v20), v19);
			if ((float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]) >= 0.0)
			{
				v23 = _mm_mul_ps(v21, v21);
				v24 = (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
					+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
				if (v24 >= *(float*)&dword_140C54B18)
				{
					v25 = 0i64;
					v25.m128_f32[0] = fsqrt(v24);
					v26 = _mm_div_ps(*(__m128*)(a1 + 992), _mm_shuffle_ps(v25, v25, 0));
					*(__m128*)(a1 + 992) = v26;
					v27 = v26;
					v28 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v27, v27, 210), _mm_shuffle_ps(v17, v17, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v26, v26, 201), _mm_shuffle_ps(v17, v17, 210)));
					v29 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v27, v27, 210), _mm_shuffle_ps(v28, v28, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v27, v27, 201), _mm_shuffle_ps(v28, v28, 210)));
					v30 = _mm_mul_ps(*v20, v28);
					v30.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
						+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
					v31 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v28, _mm_shuffle_ps(v28, v28, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v28, v28, 85), _mm_xor_ps(v30, (__m128)0x80000000)));
					v32 = _mm_sub_ps((__m128)0i64, v29);
					*(__m128*)(a1 + 1008) = v31;
					v33 = _mm_mul_ps(*v20, v29);
					v33.m128_f32[0] = (float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
						+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
					*(__m128*)(a1 + 1024) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v29, _mm_shuffle_ps(v29, v29, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v29, v29, 85), _mm_xor_ps(v33, (__m128)0x80000000)));
					v34 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 976) + 16i64), v32);
					v34.m128_f32[0] = (float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
						+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
					*(__m128*)(a1 + 1040) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v32, _mm_shuffle_ps(v32, v32, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v32, v32, 85), _mm_xor_ps(v34, (__m128)0x80000000)));
					v35 = *(__m128*)(a1 + 992);
					v36 = *(__m128**)(a1 + 976);
					v37 = _mm_sub_ps(v36[2], v36[1]);
					v38 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v35, v35, 210), _mm_shuffle_ps(v37, v37, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v35, v35, 201), _mm_shuffle_ps(v37, v37, 210)));
					v39 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v35, v35, 210), _mm_shuffle_ps(v38, v38, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v35, v35, 201), _mm_shuffle_ps(v38, v38, 210)));
					v40 = _mm_mul_ps(v38, v36[1]);
					v40.m128_f32[0] = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
						+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
					v41 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v38, _mm_shuffle_ps(v38, v38, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v38, v38, 85), _mm_xor_ps(v40, (__m128)0x80000000)));
					v42 = _mm_sub_ps((__m128)0i64, v39);
					*(__m128*)(a1 + 1056) = v41;
					v43 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 976) + 16i64), v39);
					v43.m128_f32[0] = (float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
						+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0];
					*(__m128*)(a1 + 1072) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v39, _mm_shuffle_ps(v39, v39, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v39, v39, 85), _mm_xor_ps(v43, (__m128)0x80000000)));
					v44 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 976) + 32i64), v42);
					v44.m128_f32[0] = (float)(v44.m128_f32[0] + _mm_shuffle_ps(v44, v44, 85).m128_f32[0])
						+ _mm_shuffle_ps(v44, v44, 170).m128_f32[0];
					v45 = _mm_sub_ps((__m128)0i64, v18);
					*(__m128*)(a1 + 1088) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v42, _mm_shuffle_ps(v42, v42, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v42, v42, 85), _mm_xor_ps(v44, (__m128)0x80000000)));
					v46 = *(__m128*)(a1 + 992);
					v47 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 210), _mm_shuffle_ps(v45, v45, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 201), _mm_shuffle_ps(v45, v45, 210)));
					v48 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 210), _mm_shuffle_ps(v47, v47, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v46, v46, 201), _mm_shuffle_ps(v47, v47, 210)));
					v49 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 976) + 32i64), v47);
					v50 = _mm_sub_ps((__m128)0i64, v48);
					v49.m128_f32[0] = (float)(v49.m128_f32[0] + _mm_shuffle_ps(v49, v49, 85).m128_f32[0])
						+ _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
					*(__m128*)(a1 + 1104) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v47, _mm_shuffle_ps(v47, v47, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v47, v47, 85), _mm_xor_ps(v49, (__m128)0x80000000)));
					v51 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 976) + 32i64), v48);
					v51.m128_f32[0] = (float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
						+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0];
					*(__m128*)(a1 + 1120) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v48, _mm_shuffle_ps(v48, v48, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v48, v48, 85), _mm_xor_ps(v51, (__m128)0x80000000)));
					v52 = _mm_mul_ps(*(__m128*) * (_QWORD*)(a1 + 976), v50);
					result = 1i64;
					v52.m128_f32[0] = (float)(v52.m128_f32[0] + _mm_shuffle_ps(v52, v52, 85).m128_f32[0])
						+ _mm_shuffle_ps(v52, v52, 170).m128_f32[0];
					*(__m128*)(a1 + 1136) = _mm_unpacklo_ps(
						_mm_unpacklo_ps(v50, _mm_shuffle_ps(v50, v50, 170)),
						_mm_unpacklo_ps(_mm_shuffle_ps(v50, v50, 85), _mm_xor_ps(v52, (__m128)0x80000000)));
					return result;
				}
			}
			return 0i64;
		}
	}
	return 0i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54B18: using guessed type int dword_140C54B18;
// 140DC4F30: using guessed type int dword_140DC4F30;
// 140DC4F34: using guessed type int dword_140DC4F34;


//----- (00000001401D7E20) ----------------------------------------------------
__int64 __fastcall sub_1401D7E20(
	_QWORD* a1,
	__int64 a2,
	__m128* a3,
	__m128* a4,
	__int64 a5,
	unsigned int a6,
	unsigned int a7)
{
	int v7; // r10d
	int v9; // r11d
	unsigned int v10; // r8d
	_QWORD* v11; // rdi
	__int64 v12; // rbp
	__int64 v13; // rsi
	unsigned int v14; // eax
	unsigned __int64 v15; // rbx
	__int64 v16; // rax
	unsigned __int64 v17; // kr00_8
	int* v18; // rax
	__int64 v19; // r9
	unsigned __int64 v20; // r11
	unsigned __int64 v21; // rdx
	__int64 v22; // r10
	int* v23; // r8
	__int64 v24; // rax
	unsigned __int64 v25; // rbx
	__m128* v26; // rax
	unsigned __int64 v27; // rdi
	unsigned __int64 v28; // rbx
	__m128 v29; // xmm3
	__m128 v30; // xmm4
	__m128 v31; // xmm5
	__m128 v32; // xmm6
	__m128 v33; // xmm1
	__m128* v34; // rcx
	__m128* v35; // rbx
	__m128 v36; // xmm4
	int v37; // ecx
	__int64 result; // rax
	__int64 v39; // rdx
	unsigned int v40; // ebx
	int* v41; // [rsp+48h] [rbp-40h]

	v7 = (int)a4;
	v9 = (int)a3;
	v10 = a7;
	v11 = a1;
	while (1)
	{
		v12 = v11[7];
		v13 = 5i64 * a6;
		v14 = *(_DWORD*)(v12 + 20i64 * a6 + 8);
		if (v14)
		{
			v15 = v14;
			v17 = v14;
			v16 = 16i64 * v14;
			if (!is_mul_ok(v17, 0x10ui64))
				v16 = -1i64;
			v18 = sub_14018B280(v16, 8u);
			v19 = v11[3];
			v20 = (unsigned __int64)v18;
			v41 = v18;
			v21 = 0i64;
			v22 = v11[5] + 4i64 * *(unsigned int*)(v12 + 4 * v13 + 4);
			v23 = v18;
			do
			{
				v24 = *(unsigned int*)(v22 + 4 * v21++);
				v23 += 4;
				*((__m128*)v23 - 1) = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v19 + 12 * v24),
						(__m128) * (unsigned int*)(v19 + 12 * v24 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v19 + 12 * v24 + 4), (__m128)0i64));
			} while (v21 < v15);
			v25 = 16 * v15;
			v26 = (__m128*)v20;
			v27 = v25 + v20;
			v28 = v25 >> 2;
			if (v28 > 0x400)
				v28 = 1024i64;
			v29 = *a3;
			v30 = a3[1];
			v31 = a3[2];
			v32 = a3[3];
			if (v20 < v27)
			{
				do
				{
					_mm_prefetch((const char*)v26 + v28, 0);
					v33 = *v26++;
					_mm_stream_ps(
						v26[-1].m128_f32,
						_mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v30), _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v29)),
								_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), v31)),
							v32));
				} while ((unsigned __int64)v26 < v27);
			}
			_mm_sfence();
			if (v20 < v27)
			{
				v34 = a4;
				v35 = (__m128*)(v20 + 16);
				do
				{
					v36 = v35[1];
					if ((_mm_movemask_ps(_mm_sub_ps(v34[1], _mm_min_ps(_mm_min_ps(v35[-1], *v35), v36))) & 7) == 0
						&& (_mm_movemask_ps(_mm_sub_ps(_mm_max_ps(_mm_max_ps(v35[-1], *v35), v36), *v34)) & 7) == 0)
					{
						sub_1401D8AF0(a5, (__m128*)v35[-1].m128_f32, v35, (__m128*)v35[1].m128_f32);
						v34 = a4;
					}
					v35 += 3;
				} while ((unsigned __int64)&v35[-1] < v27);
				v20 = (unsigned __int64)v41;
			}
			sub_14018B900(v20, 0);
			v7 = (int)a4;
			v10 = a7;
			v11 = a1;
			v9 = (int)a3;
		}
		v37 = *(_DWORD*)(v12 + 4 * v13 + 12);
		result = 3 * ((v10 + 1) / 3);
		v39 = a2;
		v40 = (v10 + 1) % 3;
		if (v37)
		{
			result = v10;
			if (*(float*)(v12 + 4 * v13) > *(float*)(a2 + 4i64 * v10))
			{
				result = sub_1401D7E20((_DWORD)v11, a2, v9, v7, a5, v37, (v10 + 1) % 3);
				v10 = a7;
				v39 = a2;
			}
		}
		a6 = *(_DWORD*)(v12 + 4 * v13 + 16);
		if (!a6)
			break;
		result = v10;
		if (*(float*)(v12 + 4 * v13) >= *(float*)(v39 + 4i64 * v10 + 16))
			break;
		v7 = (int)a4;
		v9 = (int)a3;
		v10 = v40;
		a7 = v40;
	}
	return result;
}
// 1401D7EB0: conditional instruction was optimized away because rbx.8 is in (1..FFFFFFFF)


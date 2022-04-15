//----- (00000001408AEE70) ----------------------------------------------------
_QWORD* __fastcall sub_1408AEE70(int a1, int a2, _QWORD* a3, unsigned __int64* a4)
{
	__int64 v4; // rbx
	int v9; // esi
	_QWORD* v10; // rdi
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rax
	bool v13; // cf
	int v14; // eax
	bool v15; // zf
	__int64 v16; // rbp
	__m128i v17; // xmm0
	int v18; // esi
	double v19; // xmm7_8
	double v20; // xmm6_8
	float v21; // xmm1_4
	float v22; // xmm1_4
	__m128i v23; // xmm0
	int v24; // esi
	double v25; // xmm7_8
	double v26; // xmm6_8
	float v27; // xmm1_4
	float v28; // xmm1_4
	unsigned __int64 v29[2]; // [rsp+20h] [rbp-68h] BYREF

	v4 = 0i64;
	if ((a1 & 1) != 0)
		return 0i64;
	v9 = a1 >> 1;
	sub_1408B1620(a1 >> 1, a2, 0i64, v29);
	v10 = 0i64;
	v11 = v29[0];
	v12 = v29[0] + 8 * (3 * v9 / 2 + 4i64);
	v13 = *a4 < v12;
	*a4 = v12;
	if (!v13)
		v10 = a3;
	if (!v10)
		return 0i64;
	v10[1] = (char*)v10 + v11 + 32;
	v10[2] = (char*)&v10[v9 + 4] + v11;
	*v10 = v10 + 4;
	sub_1408B1620(v9, a2, (__int64)(v10 + 4), v29);
	v14 = v9 / 2;
	v15 = a2 == 0;
	v16 = v9 / 2;
	if (v15)
	{
		if (v14 > 0)
		{
			v23 = _mm_cvtsi32_si128(v9);
			v24 = 1;
			v25 = 1.0 / _mm_cvtepi32_pd(v23).m128d_f64[0];
			do
			{
				v26 = ((double)v24 * v25 + 0.5) * -3.141592653589793;
				v27 = sub_1408FE750(v26);
				*(float*)(v10[2] + 8 * v4++) = v27;
				++v24;
				v28 = sub_1408FEBE0(v26);
				*(float*)(v10[2] + 8 * v4 - 4) = v28;
			} while (v4 < v16);
		}
	}
	else if (v14 > 0)
	{
		v17 = _mm_cvtsi32_si128(v9);
		v18 = 1;
		v19 = 1.0 / _mm_cvtepi32_pd(v17).m128d_f64[0];
		do
		{
			v20 = ((double)v18 * v19 + 0.5) * 3.141592653589793;
			v21 = sub_1408FE750(v20);
			*(float*)(v10[2] + 8 * v4++) = v21;
			++v18;
			v22 = sub_1408FEBE0(v20);
			*(float*)(v10[2] + 8 * v4 - 4) = v22;
		} while (v4 < v16);
	}
	return v10;
}


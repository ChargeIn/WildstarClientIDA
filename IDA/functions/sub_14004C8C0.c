//----- (000000014004C8C0) ----------------------------------------------------
__int64 __fastcall sub_14004C8C0(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v3; // rdi
	unsigned int v4; // eax
	unsigned int v5; // ebx
	unsigned int v6; // eax
	unsigned int v7; // r14d
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r8
	float v12; // xmm1_4
	__int64 v13; // rdx
	__m128 v14; // xmm0
	float v15; // xmm0_4
	float v16; // xmm3_4
	float v17; // xmm9_4
	float v18; // xmm10_4
	__m128 v19; // xmm5
	__int64 v20; // r8
	float v21; // xmm2_4
	__int64 v22; // rdx
	__m128 v23; // xmm0
	float v24; // xmm4_4
	float v25; // xmm6_4
	float v26; // xmm7_4
	float v27; // xmm8_4
	__m128 v28; // xmm4
	__int64 v29; // r8
	__m128 v30; // xmm1
	__m128 v31; // xmm0
	__m128 v32; // xmm5
	__m128 v33; // xmm2
	__m128 v34; // xmm1
	__m128 v35; // xmm2
	bool v36; // cc
	float v37; // xmm1_4
	__int64 v38; // rdx
	float v39; // xmm0_4
	__int64 v40; // r8
	float v41; // xmm2_4
	__int64 v42; // rdx
	float v43; // xmm0_4
	float v44; // xmm5_4
	__int64 v45; // r13
	__m128 v47; // [rsp+28h] [rbp-E0h]
	__m128 v48; // [rsp+38h] [rbp-D0h]
	__int64 v49[10]; // [rsp+48h] [rbp-C0h] BYREF

	v1 = *(float*)&dword_140C3B438;
	v3 = 0i64;
	*(_DWORD*)(a1 + 368) = 0;
	v47.m128_i32[1] = 1133903872;
	*(_QWORD*)(a1 + 372) = 1i64;
	*(float*)(a1 + 36) = (float)(v1 * 0.0055555557) * 65.0;
	v47.m128_i32[0] = 1036831949;
	*(_QWORD*)(a1 + 40) = v47.m128_u64[0];
	(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 16);
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A697C8, qword_140C63858);
	}
	else if (dword_140C64FA4)
	{
		v4 = 0;
	}
	else if ((int)sub_1401F11C0() >= 0)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64FD0 + 40i64))(qword_140C64FD0);
	}
	else
	{
		v4 = 0;
	}
	sub_14004EED0((__int64*)(a1 + 440), v4);
	v5 = 0;
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A697C8, qword_140C63858);
	}
	else
	{
		if (dword_140C64FA4)
		{
			v7 = 0;
			goto LABEL_16;
		}
		if ((int)sub_1401F11C0() < 0)
		{
			v7 = 0;
			goto LABEL_16;
		}
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64FD0 + 40i64))(qword_140C64FD0);
	}
	v7 = v6;
LABEL_16:
	if (v7)
	{
		v8 = 0i64;
		while (!qword_140C63848)
		{
			if (dword_140C64FA4)
			{
				v10 = 0i64;
			}
			else
			{
				if ((int)sub_1401F11C0() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FD0 + 32i64))(qword_140C64FD0, v5);
					goto LABEL_25;
				}
				v10 = 0i64;
			}
		LABEL_26:
			++v5;
			v8 += 8i64;
			*(_QWORD*)(v8 + *(_QWORD*)(a1 + 440) - 8) = v10;
			if (v5 >= v7)
				goto LABEL_27;
		}
		v9 = qword_140C63848(off_140A697C8, v5, qword_140C63858);
	LABEL_25:
		v10 = v9;
		goto LABEL_26;
	}
LABEL_27:
	sub_14004EF50((__int64*)(a1 + 440));
	v11 = 0i64;
	v48 = _mm_sub_ps((__m128)xmmword_140B7A7D0, (__m128)0i64);
	v47 = _mm_mul_ps(v48, v48);
	LODWORD(v12) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
	if (_mm_shuffle_ps(v47, v47, 85).m128_f32[0] > v47.m128_f32[0])
		v11 = 1i64;
	v13 = 1 - v11;
	if (v12 > v47.m128_f32[v11])
		v11 = 2i64;
	v14 = (__m128)v47.m128_u32[-v13 + 3 - v11];
	v14.m128_f32[0] = (float)(v14.m128_f32[0] + v47.m128_f32[v13]) + v47.m128_f32[v11];
	if (v14.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		v19 = 0i64;
		v47 = 0i64;
		v16 = 0.0;
		v18 = 0.0;
		v17 = 0.0;
	}
	else
	{
		v15 = _mm_sqrt_ps(v14).m128_f32[0];
		v16 = (float)(1.0 / v15) * v48.m128_f32[2];
		v17 = (float)(1.0 / v15) * v48.m128_f32[0];
		v18 = (float)(1.0 / v15) * v48.m128_f32[1];
		v47.m128_f32[2] = v16;
		v47.m128_f32[0] = v17;
		v47.m128_f32[1] = v18;
		v19 = v47;
	}
	v20 = 0i64;
	v48 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v19, v19, 210),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps(v19, v19, 201),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
	v47 = _mm_mul_ps(v48, v48);
	LODWORD(v21) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
	if (_mm_shuffle_ps(v47, v47, 85).m128_f32[0] > v47.m128_f32[0])
		v20 = 1i64;
	v22 = 1 - v20;
	if (v21 > v47.m128_f32[v20])
		v20 = 2i64;
	v23 = (__m128)v47.m128_u32[-v22 + 3 - v20];
	v23.m128_f32[0] = (float)(v23.m128_f32[0] + v47.m128_f32[v22]) + v47.m128_f32[v20];
	if (v23.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		v28 = 0i64;
		v47 = 0i64;
		v27 = 0.0;
		v26 = 0.0;
		v25 = 0.0;
	}
	else
	{
		v24 = 1.0 / _mm_sqrt_ps(v23).m128_f32[0];
		v25 = v48.m128_f32[0] * v24;
		v26 = v48.m128_f32[1] * v24;
		v27 = v48.m128_f32[2] * v24;
		v47.m128_f32[0] = v48.m128_f32[0] * v24;
		v47.m128_f32[1] = v48.m128_f32[1] * v24;
		v47.m128_f32[2] = v48.m128_f32[2] * v24;
		v28 = v47;
	}
	v29 = 0i64;
	*(_DWORD*)(a1 + 60) = 0;
	*(float*)(a1 + 48) = v25;
	*(float*)(a1 + 56) = v17;
	*(_DWORD*)(a1 + 76) = 0;
	*(float*)(a1 + 64) = v26;
	*(float*)(a1 + 72) = v18;
	*(float*)(a1 + 80) = v27;
	*(_DWORD*)(a1 + 92) = 0;
	v30 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 201), _mm_shuffle_ps(v19, v19, 210));
	*(float*)(a1 + 88) = v16;
	v31 = _mm_shuffle_ps(v19, v19, 201);
	v32 = _mm_mul_ps(v19, (__m128)xmmword_140B7A7D0);
	v33 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 210), v31), v30);
	*(_DWORD*)(a1 + 52) = v33.m128_i32[0];
	v34 = _mm_mul_ps((__m128)xmmword_140B7A7D0, v28);
	v47 = v34;
	*(_DWORD*)(a1 + 68) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
	v31.m128_i32[0] = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
	v35 = _mm_mul_ps(v33, (__m128)xmmword_140B7A7D0);
	*(_DWORD*)(a1 + 84) = v31.m128_i32[0];
	v36 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0] <= v34.m128_f32[0];
	LODWORD(v37) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
	if (!v36)
		v29 = 1i64;
	v38 = 1 - v29;
	if (v37 > v47.m128_f32[v29])
		v29 = 2i64;
	v39 = (float)(v47.m128_f32[-v38 + 3 - v29] + v47.m128_f32[v38]) + v47.m128_f32[v29];
	v47 = v35;
	v40 = 0i64;
	*(float*)(a1 + 96) = -v39;
	v36 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0] <= v35.m128_f32[0];
	LODWORD(v41) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
	if (!v36)
		v40 = 1i64;
	v42 = 1 - v40;
	if (v41 > v47.m128_f32[v40])
		v40 = 2i64;
	v43 = (float)(v47.m128_f32[-v42 + 3 - v40] + v47.m128_f32[v42]) + v47.m128_f32[v40];
	v47 = v32;
	*(float*)(a1 + 100) = -v43;
	v36 = _mm_shuffle_ps(v32, v32, 85).m128_f32[0] <= v32.m128_f32[0];
	LODWORD(v44) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
	if (!v36)
		v3 = 1i64;
	v45 = 1 - v3;
	if (v44 > v47.m128_f32[v3])
		v3 = 2i64;
	*(_DWORD*)(a1 + 108) = 1065353216;
	v49[0] = a1 + 48;
	*(float*)(a1 + 104) = -(float)((float)(v47.m128_f32[-v3 + 3 - v45] + v47.m128_f32[v45]) + v47.m128_f32[v3]);
	sub_1401AFC20(v49, (double*)(a1 + 112));
	return 0i64;
}
// 1409FF1F0: using guessed type wchar_t aShadersSimplep_0[21];
// 140A697C8: using guessed type wchar_t *off_140A697C8[2];
// 140B7A7D0: using guessed type __int128 xmmword_140B7A7D0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FA4: using guessed type int dword_140C64FA4;
// 140C64FD0: using guessed type __int64 qword_140C64FD0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 14004C8C0: using guessed type __int64 var_E0[10];


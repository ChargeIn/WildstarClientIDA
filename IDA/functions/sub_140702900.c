//----- (0000000140702900) ----------------------------------------------------
__int64 __fastcall sub_140702900(__int64 a1)
{
	__int64 result; // rax
	__m128* v3; // rbx
	__int64 v4; // rcx
	__m128* v5; // rsi
	int v6; // eax
	__int32 v7; // edx
	int v8; // ecx
	__m128 v9; // xmm1
	__int64 v10; // rdx
	__m128* v11; // rax
	float v12; // xmm4_4
	int v13; // ebx
	__m128 v14; // xmm2
	__m128 v15; // xmm0
	__m128 v16; // xmm2
	float v17; // xmm7_4
	float v18; // xmm6_4
	__int64 v19; // rdx
	float v20; // xmm4_4
	int v21; // r8d
	__int64 v22; // rdx
	float v23; // xmm3_4
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	unsigned __int64 v27; // [rsp+28h] [rbp-40h]

	result = sub_1406622C0(a1, 1);
	v3 = (__m128*)result;
	if (!result)
		return result;
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)result);
	v5 = (__m128*)result;
	if (!result)
		return result;
	v6 = sub_1403D2400(v4, (__m128*)result);
	v7 = v3[2].m128_i32[0];
	v8 = dword_140C636A8;
	if (v6 == v7)
	{
		v3[2].m128_i32[1] = 0;
	}
	else
	{
		v3[2].m128_i32[1] = 1;
		v3[2].m128_i32[2] = v8;
	}
	if (v3[2].m128_i32[1] && (unsigned int)(v8 - v3[2].m128_i32[2]) < 0x64)
	{
		v3[2].m128_i32[1] = 0;
		v3[2].m128_i32[0] = v7 == 0;
	}
	if (v3[2].m128_i32[0])
	{
		v9 = v3[1];
	}
	else
	{
		v9 = v5[286];
		v3[1] = v9;
	}
	v10 = *(_QWORD*)(qword_140C65898 + 29096);
	if (!v10)
		v10 = *(_QWORD*)(qword_140C65898 + 29088);
	v11 = *(__m128**)(qword_140C65898 + 29096);
	if (!v11)
		v11 = *(__m128**)(qword_140C65898 + 29088);
	v12 = *(float*)(v10 + 500);
	v13 = 1;
	v14 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v11[23]), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v11[22])),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v11[24])),
		v11[25]);
	v15 = _mm_and_ps(_mm_shuffle_ps(v14, v14, 255), (__m128)xmmword_140B7B500);
	v16 = _mm_div_ps(v14, _mm_shuffle_ps(v15, v15, 0));
	v17 = (float)((float)((float)(v16.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v10 + 488)) + (float)*(int*)(v10 + 480);
	v15.m128_i32[0] = *(_DWORD*)(v10 + 496);
	v18 = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] * 0.5)) * (float)*(int*)(v10 + 492))
		+ (float)*(int*)(v10 + 484);
	v19 = *(_QWORD*)(qword_140C65898 + 29096);
	v20 = (float)((float)(v12 - v15.m128_f32[0]) * _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) + v15.m128_f32[0];
	if (!v19)
		v19 = *(_QWORD*)(qword_140C65898 + 29088);
	v21 = *(_DWORD*)(v19 + 488);
	v27 = *(_QWORD*)(v19 + 488);
	if (v17 > 0.0)
	{
		if (v17 < (float)v21)
			goto LABEL_23;
		v17 = (float)v21;
	}
	else
	{
		v17 = 0.0;
	}
	v13 = 0;
LABEL_23:
	v22 = *(_QWORD*)(v19 + 488);
	if (v18 <= 0.0)
	{
		v18 = 0.0;
	LABEL_27:
		v13 = 0;
		goto LABEL_28;
	}
	if (v18 >= (float)SHIDWORD(v27))
	{
		v18 = (float)SHIDWORD(v27);
		goto LABEL_27;
	}
LABEL_28:
	if (v20 <= 0.0)
	{
		v22 = HIDWORD(v27);
		if (v18 >= (float)((float)SHIDWORD(v27) * 0.5))
			v18 = (float)SHIDWORD(v27);
		else
			v18 = 0.0;
		v13 = 0;
	}
	v23 = 1.0 / *(float*)(*(_QWORD*)(qword_140C65898 + 29504) + 88i64);
	sub_140058900(a1, v22, 0);
	sub_1400EFF50(a1, v24, (unsigned __int64*)&unk_1409F84BC, (int)(float)(v17 * v23));
	sub_1400EFF50(a1, v25, (unsigned __int64*)&unk_1409F8484, (int)(float)(v18 * v23));
	sub_1400EFEB0(a1, v26, (unsigned __int64*)"bOnScreen", v13);
	return 1i64;
}
// 140702962: variable 'v4' is possibly undefined
// 140702BBB: variable 'v24' is possibly undefined
// 140702BCF: variable 'v25' is possibly undefined
// 140702BE1: variable 'v26' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;


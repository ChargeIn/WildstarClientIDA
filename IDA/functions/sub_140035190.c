#include "../winhttp.h"

//----- (0000000140035190) ----------------------------------------------------
__int64 __fastcall sub_140035190(__int64 a1, float a2)
{
	__int64 v4; // rbx
	__m128 v5; // xmm6
	__m128 v6; // xmm3
	int v7; // ecx
	__m128 v8; // xmm3
	float v9; // xmm4_4
	float v10; // xmm1_4
	int v11; // eax
	float v12; // xmm0_4
	_QWORD v14[3]; // [rsp+30h] [rbp-D8h] BYREF
	int v15[8]; // [rsp+48h] [rbp-C0h] BYREF
	int v16[4]; // [rsp+68h] [rbp-A0h] BYREF
	float v17; // [rsp+78h] [rbp-90h]
	int v18; // [rsp+7Ch] [rbp-8Ch]
	int v19[8]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v20; // [rsp+A8h] [rbp-60h] BYREF
	int v21; // [rsp+B8h] [rbp-50h]
	int v22; // [rsp+BCh] [rbp-4Ch]
	__int64 v23; // [rsp+C8h] [rbp-40h] BYREF
	float v24; // [rsp+D8h] [rbp-30h]
	int v25; // [rsp+DCh] [rbp-2Ch]
	int v26[8]; // [rsp+E8h] [rbp-20h] BYREF
	int v27[8]; // [rsp+108h] [rbp+0h] BYREF
	__int64 v28; // [rsp+128h] [rbp+20h] BYREF
	int v29; // [rsp+138h] [rbp+30h]
	int v30; // [rsp+13Ch] [rbp+34h]
	int v31[4]; // [rsp+148h] [rbp+40h] BYREF
	float v32; // [rsp+158h] [rbp+50h]
	int v33; // [rsp+15Ch] [rbp+54h]
	int v34[8]; // [rsp+168h] [rbp+60h] BYREF
	float v35; // [rsp+188h] [rbp+80h] BYREF
	int v36; // [rsp+18Ch] [rbp+84h]
	float v37; // [rsp+198h] [rbp+90h]
	int v38; // [rsp+19Ch] [rbp+94h]
	__int64 v39; // [rsp+1A8h] [rbp+A0h] BYREF
	int v40; // [rsp+1B8h] [rbp+B0h]
	int v41; // [rsp+1BCh] [rbp+B4h]

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v5 = 0i64;
	v5.m128_f32[0] = (float)*(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 248) + 24i64))(*(_QWORD*)(a1 + 248))
		+ 8);
	v6 = 0i64;
	v7 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 248) + 24i64))(*(_QWORD*)(a1 + 248)) + 4);
	v23 = 1090519040i64;
	v19[1] = 0;
	v6.m128_f32[0] = (float)v7;
	v15[1] = 0;
	v28 = 0i64;
	v29 = 1077936128;
	v20 = 1077936128i64;
	v21 = 1084227584;
	v39 = 1084227584i64;
	v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0i64), _mm_unpacklo_ps(v5, (__m128)0i64));
	v40 = 1090519040;
	v15[4] = v8.m128_i32[0];
	COERCE_FLOAT(v25 = _mm_shuffle_ps(v8, v8, 85).m128_i32[0]);
	v19[5] = v25;
	v15[5] = v25;
	v30 = v25;
	v24 = *(float*)&v25 + 8.0;
	v22 = v25;
	v41 = v25;
	*(float*)v19 = (float)((float)(*(float*)&v25 + 8.0) - 8.0) + 8.0;
	*(float*)&v19[4] = v8.m128_f32[0] - *(float*)&v25;
	*(float*)v15 = v8.m128_f32[0] - *(float*)&v25;
	v9 = (float)*(int*)(v4 + 8) * 0.00073206442;
	v10 = (float)*(int*)(v4 + 12);
	v35 = v9 * 100.0;
	*(float*)&v38 = v10 - (float)((float)(v10 * 0.0013020834) * 50.0);
	*(float*)&v36 = v10 - (float)((float)(v10 * 0.0013020834) * 83.0);
	v37 = (float)(v9 * *(float*)&v25) + (float)(v9 * 100.0);
	v11 = *(_DWORD*)(v4 + 8);
	v31[1] = v36;
	v33 = v38;
	*(float*)v27 = v37;
	v27[1] = v36;
	v27[5] = v38;
	v32 = (float)v11 - (float)(v9 * 100.0);
	*(float*)v31 = v32 - (float)(v9 * *(float*)&v25);
	v27[4] = v31[0];
	v12 = (float)*(int*)(v4 + 8);
	*(float*)v26 = (float)(v9 * 100.0) + (float)(v9 * 10.0);
	v26[1] = v36;
	v26[5] = v38;
	*(float*)&v26[4] = *(float*)v26 + 3.0;
	*(float*)v16 = *(float*)v26 + 3.0;
	v16[1] = v36;
	v18 = v38;
	v17 = (float)((float)(v12 - *(float*)v26) - 3.0) - (float)((float)(*(float*)v31 - v37) * a2);
	*(float*)v34 = v17;
	*(float*)&v34[4] = v17 + 3.0;
	v34[1] = v36;
	v34[5] = v38;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		v19,
		v27,
		&v14[1],
		1);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, float*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		&v23,
		&v35,
		&v14[1],
		1);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		v15,
		v31,
		&v14[1],
		1);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		&v20,
		v16,
		&v14[1],
		1);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		&v28,
		v26,
		&v14[1],
		1);
	*(_OWORD*)&v14[1] = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, _QWORD*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 248),
		&v39,
		v34,
		&v14[1],
		1);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;


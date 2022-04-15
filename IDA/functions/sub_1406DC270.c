//----- (00000001406DC270) ----------------------------------------------------
__int64 __fastcall sub_1406DC270(__m128* a1, float a2)
{
	float v2; // xmm4_4
	float v4; // xmm4_4
	float v5; // xmm3_4
	unsigned __int64 v6; // rax
	__m128 v8; // [rsp+38h] [rbp-19h] BYREF
	__int64 v9; // [rsp+48h] [rbp-9h]
	__m128 v10; // [rsp+58h] [rbp+7h] BYREF
	__m128 v11; // [rsp+68h] [rbp+17h]
	__m128 v12; // [rsp+78h] [rbp+27h] BYREF
	__m128 v13; // [rsp+88h] [rbp+37h]

	v2 = a1[74].m128_f32[0];
	v11.m128_u64[0] = 0x4400000044000000i64;
	v10.m128_u64[0] = 0i64;
	v13 = v11;
	v12 = v10;
	v8 = _mm_mul_ps(_mm_add_ps(v11, v10), (__m128)xmmword_140B7AC50);
	if (a2 <= v2)
	{
		v5 = (float)(a2 / v2) * 512.0;
		v10.m128_f32[0] = v8.m128_f32[0] - (float)(v5 * 0.5);
		v11.m128_f32[0] = v10.m128_f32[0] + v5;
		v10.m128_f32[1] = v8.m128_f32[1] - (float)(v5 * 0.5);
		v11.m128_f32[1] = v10.m128_f32[1] + v5;
	}
	else
	{
		v4 = (float)(v2 / a2) * 512.0;
		v12.m128_f32[0] = v8.m128_f32[0] - (float)(v4 * 0.5);
		v13.m128_f32[0] = v12.m128_f32[0] + v4;
		v12.m128_f32[1] = v8.m128_f32[1] - (float)(v4 * 0.5);
		v13.m128_f32[1] = v12.m128_f32[1] + v4;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	v8.m128_u64[1] = a1[130].m128_u64[0];
	v8.m128_i32[0] = 1;
	HIDWORD(v9) = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v8,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v8 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(qword_140C65670, 1i64, &v8);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	v8 = (__m128)xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, unsigned __int64, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680
		+ 240i64))(
			qword_140C65680,
			a1[129].m128_u64[1],
			&v10,
			&v12,
			&v8,
			1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	v6 = a1[130].m128_u64[0];
	a1[130].m128_u64[0] = a1[129].m128_u64[1];
	a1[129].m128_u64[1] = v6;
	v8.m128_u64[0] = 0i64;
	v9 = 0i64;
	return sub_1406DB9D0((__int64)a1, a1 + 73, a2, (__int64)&v8);
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 1406DC270: using guessed type __m128 var_20;


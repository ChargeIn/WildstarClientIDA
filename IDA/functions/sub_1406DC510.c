#include "../winhttp.h"

//----- (00000001406DC510) ----------------------------------------------------
__int64 __fastcall sub_1406DC510(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm0
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	__m128 v6; // xmm1
	__m128 v7; // xmm2
	unsigned __int64 v8; // rax
	__int128 v10; // [rsp+30h] [rbp-19h] BYREF
	__int64 v11; // [rsp+40h] [rbp-9h]
	__m128 v12; // [rsp+50h] [rbp+7h] BYREF
	__m128 v13; // [rsp+60h] [rbp+17h] BYREF
	__m128 v14; // [rsp+70h] [rbp+27h]
	__int128 v15[2]; // [rsp+80h] [rbp+37h] BYREF

	v2 = (__m128)a1[74].m128_u32[0];
	v13.m128_u64[0] = 0i64;
	v14.m128_u64[0] = 0x4400000044000000i64;
	v4 = v2;
	v2.m128_f32[0] = v2.m128_f32[0] * a2->m128_f32[1];
	v4.m128_f32[0] = v4.m128_f32[0] * a2->m128_f32[0];
	v5 = _mm_unpacklo_ps(v4, v2);
	v6 = _mm_sub_ps(v14, *a2);
	v12 = _mm_add_ps(a1[73], _mm_unpacklo_ps(v5, (__m128)0i64));
	v7 = _mm_sub_ps(v13, *a2);
	v15[1] = (__int128)v6;
	v15[0] = (__int128)v7;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	*((_QWORD*)&v10 + 1) = a1[130].m128_u64[0];
	LODWORD(v10) = 1;
	HIDWORD(v11) = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v10,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v10 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v10);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	v10 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, unsigned __int64, __m128*, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680
		+ 240i64))(
			qword_140C65680,
			a1[129].m128_u64[1],
			&v13,
			v15,
			&v10,
			1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	v8 = a1[130].m128_u64[0];
	v7.m128_i32[0] = a1[74].m128_i32[0];
	a1[130].m128_u64[0] = a1[129].m128_u64[1];
	a1[129].m128_u64[1] = v8;
	*(_QWORD*)&v10 = 0i64;
	v11 = 0i64;
	return sub_1406DB9D0((__int64)a1, &v12, v7.m128_f32[0], (__int64)&v10);
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;


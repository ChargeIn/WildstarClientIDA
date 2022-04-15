//----- (000000014035FA80) ----------------------------------------------------
__int64 __fastcall sub_14035FA80(__m128* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rsi
	__m128 v5; // xmm0
	__m128 v6; // xmm1
	__m128 v7; // xmm3
	__m128 v8; // xmm5
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128 v11; // xmm4
	__m128 v12; // xmm2

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 72i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 8i64, 0i64);
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(v2 + 72),
		0i64,
		v3);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(v2 + 40));
	v4 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		112i64,
		0i64);
	if (v4)
	{
		*(_OWORD*)v4 = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
		*(_OWORD*)(v4 + 16) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 240i64))(qword_140C65688);
		v5 = a1[69];
		v6 = a1[71];
		v7 = a1[68];
		v8 = _mm_unpackhi_ps(v7, v5);
		v9 = _mm_unpacklo_ps(v7, v5);
		v10 = a1[70];
		v11 = _mm_unpackhi_ps(v10, v6);
		v12 = _mm_unpacklo_ps(v10, v6);
		*(__m128*)(v4 + 32) = _mm_shuffle_ps(v9, v12, 68);
		*(__m128*)(v4 + 48) = _mm_shuffle_ps(v9, v12, 238);
		*(__m128*)(v4 + 64) = _mm_shuffle_ps(v8, v11, 68);
		*(__m128*)(v4 + 80) = _mm_shuffle_ps(v8, v11, 238);
		*(_OWORD*)(v4 + 96) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, bool))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1[1].m128_u64[0] + 336),
		a1[100].m128_i32[2] != 0);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		v2 + 88,
		v2 + 96,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;


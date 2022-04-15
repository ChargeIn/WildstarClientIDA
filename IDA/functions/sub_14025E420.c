//----- (000000014025E420) ----------------------------------------------------
__int64 __fastcall sub_14025E420(__int64 a1)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v4; // rdx
	__int128 v5; // xmm1
	__int128 v6; // xmm2
	__int128 v7; // xmm3
	__int128 v8; // xmm5
	__int128 v9; // xmm4
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__m128 v12; // xmm3
	int v13; // eax
	__m128 v14; // xmm3
	__m128 v15; // xmm0
	__m128 v16; // xmm0
	__m128 v17; // xmm2
	__m128 v18; // [rsp+40h] [rbp-78h]
	__int128 v19; // [rsp+40h] [rbp-78h]
	__m128 v20; // [rsp+50h] [rbp-68h]
	__m128 v21; // [rsp+60h] [rbp-58h]
	__m128 v22; // [rsp+70h] [rbp-48h]
	__m128 v23; // [rsp+80h] [rbp-38h]

	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, int, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 456i64))(
		qword_140C65670,
		1i64,
		1i64,
		0i64,
		1,
		0,
		0);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1672),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1680),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 1688),
		0i64,
		0i64);
	v2 = *(_DWORD*)(a1 + 48);
	if (v2 == 8 || v2 == 12)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			3i64,
			*(_QWORD*)(a1 + 1720));
	}
	else if (v2 == 17)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			3i64,
			*(_QWORD*)(a1 + 1704),
			0i64,
			0i64);
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		4i64,
		*(_QWORD*)(a1 + 1776));
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		5i64,
		*(_QWORD*)(a1 + 1784));
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		6i64,
		*(_QWORD*)(a1 + 1792));
	if (*(_DWORD*)(a1 + 48) == 17)
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			8i64,
			*(_QWORD*)(a1 + 1648));
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		272i64,
		0i64,
		0i64,
		0i64);
	v4 = result;
	if (result)
	{
		*(_OWORD*)result = *(_OWORD*)(a1 + 544);
		*(_OWORD*)(result + 16) = *(_OWORD*)(a1 + 560);
		*(_OWORD*)(result + 32) = *(_OWORD*)(a1 + 592);
		*(_OWORD*)(result + 48) = xmmword_140C78520;
		v5 = *(_OWORD*)(a1 + 1840);
		v6 = *(_OWORD*)(a1 + 1872);
		v7 = *(_OWORD*)(a1 + 1888);
		v8 = *(_OWORD*)(a1 + 1920);
		v9 = *(_OWORD*)(a1 + 1904);
		*(_OWORD*)(result + 64) = *(_OWORD*)(a1 + 1824);
		*(_OWORD*)(result + 80) = v5;
		*(_OWORD*)(result + 96) = v6;
		*(_OWORD*)(result + 112) = v7;
		*(_OWORD*)(result + 128) = v9;
		*(_OWORD*)(result + 144) = v8;
		v20 = *(__m128*)(a1 + 224);
		v20.m128_f32[2] = -*(float*)(a1 + 232);
		v21 = *(__m128*)(a1 + 240);
		v23 = *(__m128*)(a1 + 272);
		v21.m128_f32[2] = -*(float*)(a1 + 248);
		v23.m128_f32[2] = -*(float*)(a1 + 280);
		v22 = *(__m128*)(a1 + 256);
		v22.m128_f32[2] = -*(float*)(a1 + 264);
		v10 = _mm_unpacklo_ps(v20, v21);
		v11 = _mm_unpacklo_ps(v22, v23);
		*(__m128*)(result + 160) = _mm_shuffle_ps(v10, v11, 68);
		*(__m128*)(result + 176) = _mm_shuffle_ps(v10, v11, 238);
		*(__m128*)(result + 192) = _mm_shuffle_ps(_mm_unpackhi_ps(v20, v21), _mm_unpackhi_ps(v22, v23), 68);
		v12 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps((__m128)xmmword_140B7A860, (__m128)xmmword_140B7A860, 85),
					*(__m128*)(a1 + 176)),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A860, (__m128)xmmword_140B7A860, 0), *(__m128*)(a1 + 160))),
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A860, (__m128)xmmword_140B7A860, 170), *(__m128*)(a1 + 192)));
		*(__m128*)(result + 224) = v12;
		v18.m128_i32[0] = *(_DWORD*)(a1 + 176);
		v13 = dword_140C403B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C403B0)
			v13 = *(_DWORD*)qword_140C63750;
		*(unsigned __int64*)((char*)v18.m128_u64 + 4) = *(_QWORD*)(a1 + 180);
		v18.m128_f32[3] = -flt_140C403C0[v13];
		v14 = _mm_mul_ps(v12, v18);
		v15 = _mm_shuffle_ps(v14, v14, 85);
		v15.m128_f32[0] = (float)(v15.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
		v16 = _mm_xor_ps(v15, (__m128)0x80000000);
		*(__m128*)(v4 + 208) = _mm_div_ps(v18, _mm_shuffle_ps(v16, v16, 0));
		*((float*)&v19 + 2) = (float)(*(float*)(a1 + 1760) * 0.5) / (float)*(int*)(a1 + 1736);
		*((float*)&v19 + 3) = (float)(*(float*)(a1 + 1764) * 0.5) / (float)*(int*)(a1 + 1740);
		*(float*)&v19 = -(float)(*((float*)&v19 + 2) * *(float*)(a1 + 288));
		*((float*)&v19 + 1) = *((float*)&v19 + 3) * *(float*)(a1 + 308);
		v17 = 0i64;
		*(_OWORD*)(v4 + 240) = v19;
		v17.m128_f32[0] = (float)*(int*)(a1 + 2436);
		*(__m128*)(v4 + 256) = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), (__m128)0i64);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	return result;
}
// 140B7A860: using guessed type __int128 xmmword_140B7A860;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C403B0: using guessed type int dword_140C403B0;
// 140C403C0: using guessed type float flt_140C403C0[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78520: using guessed type __int128 xmmword_140C78520;


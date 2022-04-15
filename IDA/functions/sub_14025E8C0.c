#include "../winhttp.h"

//----- (000000014025E8C0) ----------------------------------------------------
__m128* __fastcall sub_14025E8C0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__m128* result; // rax
	__m128* v5; // rbx
	__int64 v6; // rdx
	__m128 v7; // xmm4
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm6
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	__m128 v13; // xmm5
	__int64 v14; // rcx
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	int v17; // ecx
	__m128 v18; // xmm3

	v2 = *(_QWORD*)(a2 + 760);
	if (!v2)
		v2 = *(_QWORD*)(a1 + 1816);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		7i64,
		v2,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		9i64,
		*(_QWORD*)(a2 + 776),
		0i64,
		0i64);
	result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			240i64,
			1i64,
			17i64,
			0);
	v5 = result;
	if (result)
	{
		sub_140262D50((float*)a2, result);
		*(_OWORD*)(v6 + 112) = *(_OWORD*)(a2 + 176);
		*(_DWORD*)(v6 + 128) = *(_DWORD*)(a2 + 144);
		*(_DWORD*)(v6 + 132) = *(_DWORD*)(a2 + 148);
		*(_DWORD*)(v6 + 136) = *(_DWORD*)(a2 + 152);
		*(_DWORD*)(v6 + 140) = *(_DWORD*)(a2 + 692);
		*(_DWORD*)(v6 + 144) = *(_DWORD*)(a2 + 160);
		*(_DWORD*)(v6 + 148) = *(_DWORD*)(a2 + 164);
		*(_DWORD*)(v6 + 152) = *(_DWORD*)(a2 + 168);
		*(_DWORD*)(v6 + 156) = *(_DWORD*)(a2 + 688);
		*(_DWORD*)(v6 + 160) = *(_DWORD*)(a2 + 208);
		*(_DWORD*)(v6 + 164) = *(_DWORD*)(a2 + 212);
		*(_DWORD*)(v6 + 168) = *(_DWORD*)(a2 + 216);
		*(_DWORD*)(v6 + 172) = *(_DWORD*)(a2 + 744);
		v7 = *(__m128*)(a2 + 640);
		v8 = *(__m128*)(a2 + 672);
		v9 = *(__m128*)(a2 + 624);
		v10 = _mm_unpackhi_ps(v9, v7);
		v11 = _mm_unpacklo_ps(v9, v7);
		v12 = _mm_unpacklo_ps(*(__m128*)(a2 + 656), v8);
		v13 = _mm_unpackhi_ps(*(__m128*)(a2 + 656), v8);
		*(__m128*)(v6 + 176) = _mm_shuffle_ps(v11, v12, 68);
		*(__m128*)(v6 + 192) = _mm_shuffle_ps(v11, v12, 238);
		*(__m128*)(v6 + 208) = _mm_shuffle_ps(v10, v13, 68);
		v14 = *(_QWORD*)(a2 + 776);
		if (v14)
		{
			v15 = (__m128)0x3F800000u;
			v16 = (__m128)0x3F800000u;
			v17 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14) + 4);
			v16.m128_f32[0] = 1.0 / (float)v17;
			v18 = v16;
			v18.m128_f32[0] = v16.m128_f32[0] * -1.0;
			v15.m128_f32[0] = 1.0 / (float)((float)((float)v17 * 0.00048828125) * 1024.0);
			v5[14] = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v16), _mm_unpacklo_ps((__m128)0i64, v15));
		}
		else
		{
			v5[14] = 0i64;
		}
		return (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	return result;
}
// 14025E963: variable 'v6' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;


#include "../winhttp.h"

//----- (0000000140258FA0) ----------------------------------------------------
__int64 __fastcall sub_140258FA0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__m128 v7; // xmm12
	__m128 v8; // xmm5
	__m128 v9; // xmm6
	__m128 v10; // xmm0
	__m128 v11; // xmm4
	__m128 v12; // xmm0
	__int64 v13; // rax
	__m128 v14; // xmm7
	__m128 v15; // xmm5
	__m128 v16; // xmm6
	__m128 v17; // xmm4
	__m128 v18; // xmm0
	__int64 v19; // rax
	__m128 v20; // xmm6
	__m128 v21; // xmm5
	__m128 v22; // xmm0
	__m128 v23; // xmm4

	if (*(_DWORD*)(a1 + 36))
		return 1i64;
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1776) + 32i64))(*(_QWORD*)(a1 + 1776))
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1784) + 32i64))(*(_QWORD*)(a1 + 1784), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1792) + 32i64))(*(_QWORD*)(a1 + 1792), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1816) + 32i64))(*(_QWORD*)(a1 + 1816), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2104) + 32i64))(*(_QWORD*)(a1 + 2104), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2112) + 32i64))(*(_QWORD*)(a1 + 2112), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2120) + 32i64))(*(_QWORD*)(a1 + 2120), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2128) + 32i64))(*(_QWORD*)(a1 + 2128), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2136) + 32i64))(*(_QWORD*)(a1 + 2136), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2144) + 32i64))(*(_QWORD*)(a1 + 2144), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2152) + 32i64))(*(_QWORD*)(a1 + 2152), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2160) + 32i64))(*(_QWORD*)(a1 + 2160), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2168) + 32i64))(*(_QWORD*)(a1 + 2168), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2176) + 32i64))(*(_QWORD*)(a1 + 2176), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2184) + 32i64))(*(_QWORD*)(a1 + 2184), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2192) + 32i64))(*(_QWORD*)(a1 + 2192), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2200) + 32i64))(*(_QWORD*)(a1 + 2200), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2208) + 32i64))(*(_QWORD*)(a1 + 2208), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2216) + 32i64))(*(_QWORD*)(a1 + 2216), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2224) + 32i64))(*(_QWORD*)(a1 + 2224), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2232) + 32i64))(*(_QWORD*)(a1 + 2232), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2240) + 32i64))(*(_QWORD*)(a1 + 2240), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2248) + 32i64))(*(_QWORD*)(a1 + 2248), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2256) + 32i64))(*(_QWORD*)(a1 + 2256), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2264) + 32i64))(*(_QWORD*)(a1 + 2264), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2272) + 32i64))(*(_QWORD*)(a1 + 2272), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2280) + 32i64))(*(_QWORD*)(a1 + 2280), a2)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2288) + 32i64))(*(_QWORD*)(a1 + 2288), a2))
	{
		return 0i64;
	}
	v5 = *(_QWORD*)(a1 + 1776);
	*(_DWORD*)(a1 + 36) = 1;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
	v7 = (__m128)0x3F800000u;
	v8 = (__m128)0x3F800000u;
	v9 = (__m128)0x3F800000u;
	v9.m128_f32[0] = 1.0 / (float)*(int*)(v6 + 4);
	v8.m128_f32[0] = 1.0 / (float)*(int*)(v6 + 8);
	v10 = v9;
	v10.m128_f32[0] = v9.m128_f32[0] * 0.5;
	v11 = v8;
	v11.m128_f32[0] = v8.m128_f32[0] * 0.5;
	*(__m128*)(a1 + 1824) = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v10), _mm_unpacklo_ps(v8, v11));
	v12 = v9;
	v12.m128_f32[0] = v9.m128_f32[0] * 1.5;
	v9.m128_f32[0] = v9.m128_f32[0] * 2.5;
	*(__m128*)(a1 + 1840) = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v12), _mm_unpacklo_ps(v8, v11));
	*(__m128*)(a1 + 1856) = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v9), _mm_unpacklo_ps(v8, v11));
	v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1784) + 24i64))(*(_QWORD*)(a1 + 1784));
	v14 = (__m128)0x3F800000u;
	v15 = (__m128)0x3F800000u;
	v16 = (__m128)0x3F800000u;
	v14.m128_f32[0] = 1.0 / (float)*(int*)(v13 + 4);
	v16.m128_f32[0] = 1.0 - v14.m128_f32[0];
	v15.m128_f32[0] = 1.0 / (float)*(int*)(v13 + 8);
	v14.m128_f32[0] = v14.m128_f32[0] * 0.5;
	v17 = v15;
	v18 = v15;
	v17.m128_f32[0] = v15.m128_f32[0] * 4.0;
	v15.m128_f32[0] = v15.m128_f32[0] * 1.5;
	v18.m128_f32[0] = v18.m128_f32[0] * 0.5;
	*(__m128*)(a1 + 1872) = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v14), _mm_unpacklo_ps(v17, v18));
	*(__m128*)(a1 + 1888) = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v14), _mm_unpacklo_ps(v17, v15));
	v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1792) + 24i64))(*(_QWORD*)(a1 + 1792));
	v20 = (__m128)0x3F800000u;
	v21 = (__m128)0x3F800000u;
	v20.m128_f32[0] = 1.0 / (float)*(int*)(v19 + 4);
	v18.m128_f32[0] = (float)*(int*)(v19 + 8);
	result = 1i64;
	v7.m128_f32[0] = 1.0 - v20.m128_f32[0];
	v21.m128_f32[0] = 1.0 / v18.m128_f32[0];
	v20.m128_f32[0] = v20.m128_f32[0] * 0.5;
	v22 = v21;
	v23 = v21;
	v22.m128_f32[0] = v21.m128_f32[0] * 2.5;
	v23.m128_f32[0] = v21.m128_f32[0] * 4.0;
	v21.m128_f32[0] = v21.m128_f32[0] * 3.5;
	*(__m128*)(a1 + 1904) = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v20), _mm_unpacklo_ps(v23, v22));
	*(__m128*)(a1 + 1920) = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v20), _mm_unpacklo_ps(v23, v21));
	return result;
}


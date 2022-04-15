#include "../winhttp.h"

//----- (00000001400ECF40) ----------------------------------------------------
__int64 __fastcall sub_1400ECF40(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4, int a5)
{
	__int64 v6; // rcx
	__int64 v7; // rbx
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	int* v13; // rax
	__int64 v14; // rdi
	_DWORD* v15; // rax
	__int64 v16; // rax
	__m128 v17; // xmm0
	float v18; // xmm0_4
	float v19; // xmm4_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm3_4
	float v23; // xmm0_4
	float v24; // xmm3_4
	float v25; // xmm2_4
	float v26; // xmm1_4
	float v27; // xmm0_4
	float v28; // xmm3_4
	__m128 v29; // xmm2
	float v30; // xmm3_4
	float v31; // xmm0_4
	float v32; // xmm2_4
	float v33; // xmm1_4
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // r8
	int v37; // ebx
	__int64 v38; // rdx
	__int64 v39; // rcx
	__m128 v41; // [rsp+38h] [rbp-81h] BYREF
	__m128 v42; // [rsp+48h] [rbp-71h]
	__m128 v43; // [rsp+58h] [rbp-61h]
	__m128 v44; // [rsp+68h] [rbp-51h]
	__m128 v45; // [rsp+78h] [rbp-41h]
	__m128 v46; // [rsp+88h] [rbp-31h] BYREF
	float v47; // [rsp+98h] [rbp-21h]
	float v48; // [rsp+9Ch] [rbp-1Dh]
	unsigned int v49; // [rsp+B8h] [rbp-1h]
	unsigned int v50; // [rsp+BCh] [rbp+3h]

	v6 = *(_QWORD*)(a1 + 368);
	v7 = *(_QWORD*)(v6 + 24);
	v11 = sub_14010E2E0(*(_QWORD**)(v6 + 16), v7, *(unsigned __int16**)(a4 + 72));
	if (v11 == (_QWORD*)v7 || (v12 = (_QWORD*)*v11) == 0i64)
		v12 = *(_QWORD**)(a1 + 2928);
	v13 = sub_14018B280(2240i64, 0);
	if (v13)
		v14 = sub_14015E3F0((__int64)v13, a1, a4, a3, a2, v12);
	else
		v14 = 0i64;
	if (*(char*)(v14 + 29) >= 0)
	{
		v15 = sub_1400CB0E0(v14, &v41, v14 + 64);
		*(_DWORD*)(v14 + 396) = *v15;
		*(_DWORD*)(v14 + 400) = v15[1];
		*(_DWORD*)(v14 + 404) = v15[2];
		*(_DWORD*)(v14 + 408) = v15[3];
		*(_BYTE*)(v14 + 29) |= 0x80u;
		v16 = v14;
		do
		{
			if (!*(_DWORD*)(v16 + 392))
				break;
			*(_DWORD*)(v16 + 392) = 0;
			v16 = *(_QWORD*)(v16 + 16);
		} while (v16);
	}
	v17 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 396)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 400)), _mm_cvtsi32_si128(0))));
	v45 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 404)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 408)), _mm_cvtsi32_si128(0))));
	v44 = v17;
	if (a2)
	{
		sub_1400C95C0(a2, &v46);
		v43 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v49, (__m128)0i64), _mm_unpacklo_ps((__m128)v50, (__m128)0i64));
		v41 = v43;
		if (v46.m128_f32[0] <= 0.0)
		{
			v18 = v46.m128_f32[0] * v45.m128_f32[0];
			v19 = v46.m128_f32[0] * v44.m128_f32[0];
		}
		else
		{
			v18 = v46.m128_f32[0] * v44.m128_f32[0];
			v19 = v46.m128_f32[0] * v45.m128_f32[0];
		}
		v20 = v43.m128_f32[0] + v18;
		if (v47 <= 0.0)
		{
			v21 = v47 * v45.m128_f32[1];
			v22 = v47 * v44.m128_f32[1];
		}
		else
		{
			v21 = v47 * v44.m128_f32[1];
			v22 = v47 * v45.m128_f32[1];
		}
		v41.m128_f32[0] = (float)(v43.m128_f32[0] + v19) + v22;
		v43.m128_f32[0] = v20 + v21;
		if (v46.m128_f32[1] <= 0.0)
		{
			v23 = v46.m128_f32[1] * v45.m128_f32[0];
			v24 = v46.m128_f32[1] * v44.m128_f32[0];
		}
		else
		{
			v23 = v46.m128_f32[1] * v44.m128_f32[0];
			v24 = v46.m128_f32[1] * v45.m128_f32[0];
		}
		v25 = v41.m128_f32[1] + v24;
		v26 = v43.m128_f32[1] + v23;
		if (v48 <= 0.0)
		{
			v27 = v48 * v45.m128_f32[1];
			v28 = v48 * v44.m128_f32[1];
		}
		else
		{
			v27 = v48 * v44.m128_f32[1];
			v28 = v48 * v45.m128_f32[1];
		}
		v43.m128_f32[1] = v26 + v27;
		v41.m128_f32[1] = v25 + v28;
		v44 = v43;
		v45 = v41;
	}
	v29 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 80)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 84)), _mm_cvtsi32_si128(0))));
	v30 = v44.m128_f32[0];
	v41 = 0i64;
	v31 = v45.m128_f32[0];
	v42 = v29;
	if (v44.m128_f32[0] < 0.0)
	{
		v31 = v45.m128_f32[0] - v44.m128_f32[0];
		v30 = 0.0;
	}
	if (v31 > v42.m128_f32[0])
	{
		v30 = v42.m128_f32[0] - (float)(v31 - v30);
		v31 = v42.m128_f32[0];
	}
	v32 = v44.m128_f32[1];
	v33 = v45.m128_f32[1];
	if (v44.m128_f32[1] < 0.0)
	{
		v33 = v45.m128_f32[1] - v44.m128_f32[1];
		v32 = 0.0;
	}
	if (v33 > v42.m128_f32[1])
	{
		v32 = v42.m128_f32[1] - (float)(v33 - v32);
		v33 = v42.m128_f32[1];
	}
	v41.m128_i32[2] = (int)v31;
	v41.m128_i32[1] = (int)v32;
	v41.m128_i32[3] = (int)v33;
	v41.m128_i32[0] = (int)v30;
	sub_1400CC7C0(v14, (int*)&v41);
	sub_1400D2C30(v14, (int*)L"GridWindowForPopupMenu");
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 400) + 32i64) + 160i64), a5);
	v36 = *(_QWORD*)(v35 + 16);
	*(_QWORD*)v36 = *v34;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v35 + 16) += 16i64;
	v37 = sub_1400578C0(v35);
	sub_1400579E0(*(_QWORD*)(*(_QWORD*)(v14 + 32) + 400i64), v38, *(_DWORD*)(v14 + 808));
	*(_DWORD*)(v14 + 808) = v37;
	if (*(_QWORD*)(a1 + 3208) && (v39 = **(_QWORD**)(a1 + 3200)) != 0)
		sub_140156F00(v39, (void(__fastcall***)(_QWORD))v14);
	else
		sub_1400E7280(a1, (void(__fastcall***)(_QWORD))v14, L"DefaultStratum");
	sub_1400E8B00(a1, v14);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
}
// 1400ED2D7: variable 'v35' is possibly undefined
// 1400ED309: variable 'v38' is possibly undefined
// 140A16988: using guessed type wchar_t aDefaultstratum_3[15];
// 140A178F8: using guessed type wchar_t aGridwindowforp[23];


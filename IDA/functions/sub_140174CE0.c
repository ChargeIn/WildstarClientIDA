#include "../winhttp.h"

//----- (0000000140174CE0) ----------------------------------------------------
_DWORD* __fastcall sub_140174CE0(__int64 a1, _DWORD* a2)
{
	int v2; // esi
	int v3; // r14d
	int v4; // ebp
	int v5; // r15d
	int v8; // r9d
	bool v9; // zf
	_QWORD* v10; // rcx
	int v11; // eax
	_QWORD* v12; // rcx
	int v13; // eax
	_QWORD* v14; // rcx
	float v15; // xmm2_4
	_QWORD** v16; // rcx
	float v17; // xmm3_4
	__m128i v18; // xmm0
	float v19; // xmm3_4
	__m128 v20; // xmm1
	int v21; // edx
	_QWORD** v22; // rcx
	int v23; // eax
	int v25; // [rsp+50h] [rbp+8h] BYREF
	int v26; // [rsp+54h] [rbp+Ch]

	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 720);
	v4 = *(_DWORD*)(a1 + 724);
	v5 = *(_DWORD*)(a1 + 728);
	if ((*(_BYTE*)(a1 + 664) & 8) != 0)
	{
		if (*(_BYTE*)(a1 + 1041))
		{
			v3 += sub_1400C3930((_QWORD**)(a1 + 1056), &v25)[1];
			v5 -= sub_1400C3930((_QWORD**)(a1 + 1472), &v25)[1];
		}
		else
		{
			v2 += *sub_1400C3930((_QWORD**)(a1 + 1056), &v25);
			v4 -= *sub_1400C3930((_QWORD**)(a1 + 1472), &v25);
		}
	}
	else
	{
		v8 = 0;
		v9 = *(_BYTE*)(a1 + 1041) == 0;
		v10 = *(_QWORD**)(a1 + 2304);
		if (v9)
		{
			if (v10)
			{
				sub_140101470(v10, &v25);
				v13 = v25;
			}
			else
			{
				v13 = 0;
			}
			v14 = *(_QWORD**)(a1 + 2352);
			v2 += v13;
			if (v14)
			{
				sub_140101470(v14, &v25);
				v8 = v25;
			}
			v4 -= v8;
		}
		else
		{
			if (v10)
			{
				sub_140101470(v10, &v25);
				v11 = v26;
			}
			else
			{
				v11 = 0;
			}
			v12 = *(_QWORD**)(a1 + 2352);
			v3 += v11;
			if (v12)
			{
				sub_140101470(v12, &v25);
				v8 = v26;
			}
			v5 -= v8;
		}
	}
	v15 = *(float*)(a1 + 1028) - *(float*)(a1 + 1024);
	if (v15 > 0.0)
	{
		v16 = (_QWORD**)(a1 + 1888);
		if (*(_BYTE*)(a1 + 1041))
		{
			v17 = (float)(v5 - v3);
			v18 = _mm_cvtsi32_si128(sub_1400C3930(v16, &v25)[1]);
		}
		else
		{
			v18 = _mm_cvtsi32_si128(*sub_1400C3930(v16, &v25));
			v17 = (float)(v4 - v2);
		}
		v19 = v17 - _mm_cvtepi32_ps(v18).m128_f32[0];
		if (v19 > 0.0)
		{
			v20 = (__m128) * (unsigned int*)(a1 + 1032);
			v20.m128_f32[0] = (float)((float)((float)(v20.m128_f32[0] - *(float*)(a1 + 1024)) * v19) / v15) + 0.5;
			v21 = (int)v20.m128_f32[0];
			if ((int)v20.m128_f32[0] != 0x80000000 && (float)v21 != v20.m128_f32[0])
				v20.m128_f32[0] = (float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1));
			v22 = (_QWORD**)(a1 + 1888);
			v23 = (int)v20.m128_f32[0];
			if (*(_BYTE*)(a1 + 1041))
			{
				v3 += v23;
				v5 = v3 + sub_1400C3930(v22, &v25)[1];
			}
			else
			{
				v2 += v23;
				v4 = v2 + *sub_1400C3930(v22, &v25);
			}
			*a2 = v2;
			a2[1] = v3;
			a2[2] = v4;
			a2[3] = v5;
		}
		else
		{
			*(_OWORD*)a2 = xmmword_140C784D0;
		}
	}
	else
	{
		*(_OWORD*)a2 = xmmword_140C784D0;
	}
	return a2;
}
// 140174DC5: variable 'v8' is possibly undefined
// 140C784D0: using guessed type __int128 xmmword_140C784D0;


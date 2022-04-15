#include "../winhttp.h"

//----- (00000001400E67A0) ----------------------------------------------------
__int64 __fastcall sub_1400E67A0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
	__int64 v9; // r15
	__int64 v10; // rcx
	unsigned int* v11; // rax
	__m128i v12; // xmm1
	__m128i v13; // xmm3
	__m128 v14; // xmm0
	__m128 v15; // xmm0
	_DWORD* v16; // rcx
	int v17; // eax
	int v18; // edx
	int* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdx
	char v24; // r14
	unsigned int v25; // esi
	__int64 v26; // rcx
	__int64 v27; // r15
	_DWORD* v28; // rcx
	_DWORD* v29; // rcx
	unsigned int* v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // [rsp+20h] [rbp-48h]
	int v33; // [rsp+70h] [rbp+8h] BYREF
	int v34; // [rsp+74h] [rbp+Ch]
	unsigned int v35; // [rsp+80h] [rbp+18h] BYREF

	*(_BYTE*)(a1 + 3360) = 0;
	if (a3 < 0x400 && !*(_BYTE*)(a3 + qword_140C63650 + 808))
		return 1i64;
	v9 = a5;
	v35 = 0;
	if (a3 >= 0x200 && sub_1400E6570((_DWORD*)a1, a3, a4, &v35, &v33) && v35 == 4)
	{
		v10 = *(_QWORD*)(a1 + 2488);
		if (v10)
		{
			v11 = (unsigned int*)(*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v10 + 208i64))(
				v10,
				&v33,
				v9);
			v12 = _mm_cvtsi32_si128(v11[1]);
			v13 = _mm_cvtsi32_si128(*v11);
		}
		else
		{
			v13 = _mm_cvtsi32_si128((__int16)v9);
			v12 = _mm_cvtsi32_si128(SWORD1(v9));
		}
		v14 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(0))));
		v15 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), *(__m128*)(a1 + 3152)),
				_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *(__m128*)(a1 + 3136))),
			*(__m128*)(a1 + 3184));
		**(_DWORD**)(a1 + 2832) = (int)(float)(v15.m128_f32[0] + 0.5);
		*(_DWORD*)(*(_QWORD*)(a1 + 2832) + 4i64) = (int)(float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] + 0.5);
		if (*(_QWORD*)(a1 + 2888))
		{
			v16 = *(_DWORD**)(a1 + 2832);
			v17 = *(_DWORD*)(a1 + 80);
			v18 = *(_DWORD*)(a1 + 84);
			if (*v16 > v17)
				*v16 = v17;
			v19 = *(int**)(a1 + 2832);
			if (*v19 < 0)
				*v19 = 0;
			v20 = *(_QWORD*)(a1 + 2832);
			if (*(_DWORD*)(v20 + 4) > v18)
				*(_DWORD*)(v20 + 4) = v18;
			v21 = *(_QWORD*)(a1 + 2832);
			if (*(int*)(v21 + 4) < 0)
				*(_DWORD*)(v21 + 4) = 0;
		}
		if (a3 == 512)
		{
			*(_DWORD*)(a1 + 2904) = 0;
			v22 = *(_QWORD*)(a1 + 2912);
			if (v22)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
				*(_QWORD*)(a1 + 2912) = 0i64;
			}
		}
	}
	*(_DWORD*)(a1 + 2876) = 0;
	if (GetAsyncKeyState(18) < 0)
		*(_DWORD*)(a1 + 2876) |= 4u;
	if ((GetAsyncKeyState(17) & 0x8000) != 0)
		*(_DWORD*)(a1 + 2876) |= 2u;
	if ((GetAsyncKeyState(16) & 0x8000) != 0)
		*(_DWORD*)(a1 + 2876) |= 1u;
	if (a3 == 514)
	{
		v23 = *(_QWORD*)(a1 + 2888);
		if (v23 && !*(_BYTE*)(a1 + 2825))
			return (*(__int64(__fastcall**)(__int64, __int64, __int64, unsigned __int64, __int64))(*(_QWORD*)a1 + 72i64))(
				a1,
				v23,
				514i64,
				a4,
				v9);
	}
	else if (a3 == 513 && *(_QWORD*)(a1 + 3384) && !*(_BYTE*)(a1 + 3376))
	{
		*(_BYTE*)(a1 + 3376) = 1;
	}
	v24 = 0;
	v25 = 1;
	if (a3 == 514)
	{
		if (*(_QWORD*)(a1 + 3384) && !*(_BYTE*)(a1 + 3376))
		{
			v26 = *(_QWORD*)(a1 + 3392);
			if (v26)
			{
				if (*(_DWORD*)(a1 + 3380) == 1)
				{
					*(_BYTE*)(a1 + 3376) = 1;
					goto LABEL_55;
				}
			LABEL_48:
				v33 = *(_DWORD*)(a1 + 3496);
				v34 = *(_DWORD*)(a1 + 3500);
				if (!(*(unsigned __int8(__fastcall**)(__int64, int*))(*(_QWORD*)v26 + 344i64))(v26, &v33))
				{
					sub_1400E9B10((_QWORD*)a1);
					return 0i64;
				}
				return 0i64;
			}
			v24 = 1;
		}
	}
	else if (a3 == 513)
	{
		if (*(_QWORD*)(a1 + 3384) && *(_BYTE*)(a1 + 3376))
		{
			v26 = *(_QWORD*)(a1 + 3392);
			if (v26)
			{
				if (*(_DWORD*)(a1 + 3380) != 1)
					goto LABEL_48;
			}
			else
			{
				v24 = 1;
				v25 = 3;
			}
		}
	}
	else if (a3 == 516 && *(_QWORD*)(a1 + 3384) && *(_BYTE*)(a1 + 3376))
	{
		v24 = 1;
		v25 = 2;
	}
LABEL_55:
	sub_140155630((_DWORD*)(qword_140C63650 + 200), a3, a4);
	v27 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD*)a1 + 64i64))(a1, a3, a4, v9);
	if (v27)
	{
		if (a3 == 256)
			sub_1400EAA10(a1, 59, (__int64)&unk_1409D3824, a4);
		v35 = -1;
		v33 = 0;
		if (a3 >= 0x200 && sub_1400E6570((_DWORD*)a1, a3, a4, &v33, &v35))
		{
			switch (v33)
			{
			case 2:
				v28 = *(_DWORD**)(a1 + 2832);
				LODWORD(v32) = *v28;
				sub_1400EAA10(a1, 53, (__int64)"iii", v35, v32, v28[1]);
				break;
			case 1:
				v29 = *(_DWORD**)(a1 + 2832);
				LODWORD(v32) = *v29;
				sub_1400EAA10(a1, 52, (__int64)"iii", v35, v32, v29[1]);
				break;
			case 5:
				v30 = *(unsigned int**)(a1 + 2832);
				LODWORD(v32) = v30[1];
				sub_1400EAA10(
					a1,
					55,
					(__int64)"iifi",
					*v30,
					v32,
					(float)((float)SWORD1(a4) * 0.0083333338),
					*(_DWORD*)(a1 + 2876));
				break;
			}
		}
	}
	if (v24)
	{
		if (v27)
		{
			v31 = *(_QWORD*)(a1 + 3384);
			if (!v31 || !(*(unsigned __int8(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v31 + 376i64))(v31, v25))
			{
				sub_1400E9A00((_QWORD*)a1);
				return 0i64;
			}
		}
		else if ((!*(_QWORD*)(a1 + 3384) || !*(_BYTE*)(a1 + 3376)) && a3 == 514)
		{
			*(_BYTE*)(a1 + 3376) = 1;
		}
		return 0i64;
	}
	return v27;
}
// 1400E6BC2: variable 'v32' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;


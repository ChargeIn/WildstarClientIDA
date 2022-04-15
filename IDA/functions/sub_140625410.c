#include "../winhttp.h"

//----- (0000000140625410) ----------------------------------------------------
void __fastcall sub_140625410(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	int v4; // xmm6_4
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rbx
	int v12; // eax
	__m128* v13; // rbx
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	float v18; // xmm0_4
	__int64 v19; // [rsp+28h] [rbp-29h] BYREF
	_BYTE v20[12]; // [rsp+30h] [rbp-21h]
	__int64 v21; // [rsp+3Ch] [rbp-15h]
	int v22; // [rsp+44h] [rbp-Dh]
	__m128 v23[3]; // [rsp+48h] [rbp-9h] BYREF

	*(_DWORD*)(a1 + 592) = 0;
	*(_DWORD*)(a1 + 672) = 1;
	v2 = *(_QWORD*)(a1 + 88);
	if (v2 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 848i64))(v2, 67i64))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(
			*(_QWORD*)(a1 + 128),
			*(_QWORD*)(a1 + 88));
		v3 = *(_QWORD*)(a1 + 88);
		v4 = *(_DWORD*)(a1 + 1016);
		LODWORD(v19) = 150;
		*(_QWORD*)&v20[4] = 0i64;
		*(_DWORD*)v20 = v4;
		v21 = 3i64;
		v22 = 0;
		HIDWORD(v19) = sub_1401AE6F0(0, -1);
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v19);
		v5 = *(_QWORD*)(a1 + 88);
		v19 = 154i64;
		*(_DWORD*)&v20[8] = 0;
		*(_QWORD*)v20 = 1065353216i64;
		v21 = 1i64;
		(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 600i64))(v5, 3i64, &v19);
		v6 = *(_QWORD*)(a1 + 48);
		if (v6)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 72i64))(v6, a1 + 208);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 936i64))(*(_QWORD*)(a1 + 48));
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 896i64))(
				*(_QWORD*)(a1 + 88),
				67i64,
				*(_QWORD*)(a1 + 48));
		}
		sub_140624CC0(a1);
	}
	if (*(_QWORD*)(a1 + 96))
	{
		if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128))
			&& (v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)),
				(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 848i64))(v7, 21i64)))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
			v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 896i64))(v8, 21i64, *(_QWORD*)(a1 + 96));
		}
		else
		{
			v9 = *(_QWORD*)(a1 + 48);
			if (v9 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 848i64))(v9, 44i64))
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 896i64))(
					*(_QWORD*)(a1 + 48),
					44i64,
					*(_QWORD*)(a1 + 96));
			}
		}
	}
	sub_140622800(a1);
	sub_140621C30((__m128*)a1);
	sub_140621F70((__m128*)a1);
	v10 = *(_QWORD*)(a1 + 80);
	if (v10
		&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 408i64))(v10, 150i64)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(*(_QWORD*)(a1 + 80), 67i64))
	{
		sub_140622590(a1, v23);
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 80) + 72i64))(*(_QWORD*)(a1 + 80), v23);
		v11 = *(_QWORD*)(a1 + 80);
		v12 = sub_1401AE6F0(0, -1);
		LODWORD(v19) = 150;
		*(_QWORD*)v20 = 1065353216i64;
		*(_DWORD*)&v20[8] = 0;
		v21 = 3i64;
		v22 = 0;
		HIDWORD(v19) = v12;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v19);
		v13 = (__m128*)(a1 + 368);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 80) + 872i64))(
			*(_QWORD*)(a1 + 80),
			67i64,
			a1 + 368);
		v14 = _mm_sub_ps(*(__m128*)(a1 + 368), *(__m128*)(a1 + 352));
		v15 = _mm_mul_ps(v14, v14);
		*(float*)(a1 + 656) = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
			+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
	}
	else
	{
		v13 = (__m128*)(a1 + 368);
		*(_OWORD*)(a1 + 368) = *(_OWORD*)(a1 + 352);
	}
	v16 = _mm_sub_ps(*(__m128*)(a1 + 336), *v13);
	v17 = _mm_mul_ps(v16, v16);
	v18 = *(float*)(a1 + 596);
	*(float*)(a1 + 556) = fsqrt(
		(float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
		+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0])
		* *(float*)(a1 + 1020);
	if (v18 >= 0.0000099999997)
		*(float*)(a1 + 560) = 1.0 / v18;
	else
		*(_DWORD*)(a1 + 560) = 1343554297;
}
// 140625410: using guessed type __m128 var_60[3];


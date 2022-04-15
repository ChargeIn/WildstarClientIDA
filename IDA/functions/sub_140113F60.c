//----- (0000000140113F60) ----------------------------------------------------
float* __fastcall sub_140113F60(__int64 a1)
{
	__int64 v1; // r8
	_WORD* v3; // r9
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__m128 v7; // xmm7
	__m128 v8; // xmm6
	float v9; // xmm1_4
	__int64 v10; // rax
	float v11; // xmm0_4
	float* result; // rax
	float v13; // xmm1_4
	float v14; // xmm0_4
	float v15; // [rsp+60h] [rbp+8h] BYREF
	float v16; // [rsp+68h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 1304);
	if (v1)
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, void*, __int64))(**(_QWORD**)(a1 + 1080) + 136i64))(
			*(_QWORD*)(a1 + 1080),
			*(_QWORD*)(a1 + 1048),
			*(_QWORD*)(a1 + 1048) + v1,
			&unk_1409D5ADC,
			-1i64);
	v3 = *(_WORD**)(qword_140C63650 + 304);
	v4 = 0i64;
	if (*v3)
	{
		do
			++v4;
		while (v3[v4]);
	}
	v5 = *(_QWORD*)(a1 + 1080);
	v6 = *(_QWORD*)(a1 + 1048);
	*(_QWORD*)(a1 + 1304) = v4;
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 136i64))(v5, v6, v6);
	v7 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
	v8 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0))));
	(*(void(__fastcall**)(_QWORD, _QWORD, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
		*(_QWORD*)(a1 + 1080),
		*(_QWORD*)(a1 + 1048),
		&v15);
	(*(void(__fastcall**)(_QWORD, _QWORD, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
		*(_QWORD*)(a1 + 1080),
		*(_QWORD*)(a1 + 1304) + *(_QWORD*)(a1 + 1048),
		&v16);
	*(__m128*)(a1 + 1312) = v8;
	*(__m128*)(a1 + 1328) = v7;
	v9 = *(float*)(a1 + 1068);
	v10 = *(_QWORD*)(a1 + 696);
	v11 = v8.m128_f32[0] + v15;
	*(float*)(a1 + 1328) = (float)(v8.m128_f32[0] + v16) - v9;
	*(float*)(a1 + 1312) = v11 - v9;
	result = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 96) + 32i64))(*(_QWORD*)(v10 + 96));
	v13 = *result;
	if ((*(_BYTE*)(a1 + 664) & 1) == 0)
	{
		result = (float*)*(unsigned int*)(a1 + 704);
		if (((unsigned __int8)result & 4) != 0)
		{
			v14 = (float)((float)((float)(*(float*)(a1 + 1332) - *(float*)(a1 + 1316)) - v13) * 0.5) + *(float*)(a1 + 1316);
			*(float*)(a1 + 1316) = v14;
			*(float*)(a1 + 1332) = v14 + v13;
		}
		else if (((unsigned __int8)result & 8) != 0)
		{
			*(float*)(a1 + 1316) = *(float*)(a1 + 1332) - v13;
		}
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;


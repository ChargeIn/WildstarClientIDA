//----- (00000001405B9D00) ----------------------------------------------------
void __fastcall sub_1405B9D00(__int64 a1, float a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx
	__m128 v6; // xmm0
	float v7; // xmm0_4
	float v8; // xmm3_4
	float v9; // xmm0_4
	__int64 v10; // rdx
	int v11; // eax
	__m128 v12; // xmm1
	float v13; // xmm2_4
	int v14; // ecx
	float v15; // xmm1_4
	__m128 v16; // [rsp+30h] [rbp-28h] BYREF
	__m128 v17; // [rsp+40h] [rbp-18h]

	v3 = sub_1405BA0B0(a1);
	v4 = v3;
	*(float*)(a1 + 1180) = a2 + *(float*)(a1 + 1180);
	if (v3 && !*(_QWORD*)(v3 + 40) && *(_QWORD*)(a1 + 1168) == v3)
	{
		sub_1400D4040(a1, "BuffRemoved", (char*)a1, &unk_1409D1439);
		v5 = *(_QWORD*)(a1 + 1168);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 1168) = 0i64;
		}
		*(_DWORD*)(a1 + 1180) = 0;
	}
	if (!*(_BYTE*)(a1 + 1176) || *(_QWORD*)(a1 + 1168))
	{
		if (v4)
		{
			sub_1400D42F0(a1, 1, 0, 4.0);
			v10 = *(_QWORD*)(a1 + 32);
			if (v10)
				sub_140109710((__int64*)(a1 + 1040), v10 + 240, *(__m128i**)(v4 + 56), 0);
			v11 = sub_140453EE0((_DWORD*)v4);
			if ((*(_BYTE*)(a1 + 664) & 8) != 0 && (unsigned int)v11 < 0x1E)
			{
				v12 = 0i64;
				v12.m128_f32[0] = (float)v11;
				v13 = (float)v11;
				v14 = (int)(float)v11;
				if (v14 != 0x80000000 && (float)v14 != v12.m128_f32[0])
					v13 = (float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
				v15 = v12.m128_f32[0] - v13;
				if (v15 <= 0.5)
					*(float*)(a1 + 1156) = v15 * 2.0;
				else
					*(float*)(a1 + 1156) = 2.0 - (float)(v15 * 2.0);
			}
			else
			{
				*(_DWORD*)(a1 + 1156) = 1065353216;
			}
		}
		else
		{
			*(_DWORD*)(a1 + 1160) = 0;
			sub_1400D42F0(a1, 0, 0, 4.0);
		}
	}
	else
	{
		v6 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0))));
		v17 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
		v16 = v6;
		v7 = *(float*)(a1 + 1180);
		if (v7 <= 0.25)
		{
			v16.m128_i32[0] = (int)v16.m128_f32[0];
			v8 = 0.25 - v7;
			v16.m128_i32[3] = (int)v17.m128_f32[1];
			v9 = v17.m128_f32[1] - v16.m128_f32[1];
			v16.m128_i32[1] = (int)v16.m128_f32[1];
			v16.m128_i32[2] = (int)(float)((float)(v8 * 4.0) * v9);
			sub_1400CC7C0(a1, (int*)&v16);
		}
		else
		{
			sub_1400C6B20(a1);
		}
	}
}
// 1405B9D00: using guessed type __m128 var_18;


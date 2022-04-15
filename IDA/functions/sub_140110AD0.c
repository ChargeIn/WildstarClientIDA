//----- (0000000140110AD0) ----------------------------------------------------
char __fastcall sub_140110AD0(__int64 a1, char a2)
{
	int v4; // edi
	__int64 v5; // rax
	float* v6; // rax
	__int64 v7; // rcx
	float* v8; // r14
	float v9; // xmm0_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	int v12; // esi
	int v13; // edx
	__int64 v14; // rax
	int v15; // ecx
	__int64 v16; // rax
	__int64 v17; // rax
	float v18; // xmm0_4
	int v19; // edx
	float v20; // xmm1_4
	int v21; // eax
	__int64 v22; // rdx
	float v23; // xmm6_4
	unsigned __int64 v24; // rdi
	__int64 v25; // rsi
	__int64 v26; // rbp
	unsigned __int64 v27; // rdx
	float v28; // xmm3_4
	float v29; // xmm2_4
	float v30; // xmm0_4
	float v31; // xmm2_4
	float v32; // xmm1_4
	float v33; // xmm1_4
	__m128 v35; // [rsp+20h] [rbp-68h]
	__m128 v36; // [rsp+30h] [rbp-58h]
	float v37; // [rsp+90h] [rbp+8h] BYREF
	float v38; // [rsp+A0h] [rbp+18h] BYREF
	float v39; // [rsp+A4h] [rbp+1Ch] BYREF

	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		v4 = 0;
		v36 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
		v35 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0))));
		sub_14010FFB0(a1);
		v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 48i64))(*(_QWORD*)(a1 + 1080));
		v6 = (float*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
		v7 = *(_QWORD*)(a1 + 1248);
		v8 = v6;
		v9 = (float)(int)v7;
		if (v7 < 0)
			v9 = v9 + 1.8446744e19;
		v10 = v9 * *v6;
		v11 = v36.m128_f32[1] - v35.m128_f32[1];
		if (v10 <= (float)(v36.m128_f32[1] - v35.m128_f32[1]))
		{
			if (sub_1400C6E00(a1))
			{
				v22 = *(_QWORD*)(a1 + 472);
				*(_DWORD*)(v22 + 1296) = 0;
				*(_BYTE*)(v22 + 1392) |= 0x10u;
				*(_DWORD*)(v22 + 1300) = 0;
			}
			v19 = 0;
		}
		else
		{
			v12 = (int)v11;
			v13 = 0;
			if ((int)v10 - (int)v11 + 1 > 0)
				v13 = (int)v10 - (int)v11 + 1;
			v14 = *(_QWORD*)(a1 + 472);
			if (v14)
				v15 = *(_DWORD*)(v14 + 1296);
			else
				v15 = 0;
			if (v13 != v15)
			{
				sub_1400CABD0(a1, v13);
				if (sub_1400C6E00(a1))
				{
					v16 = *(_QWORD*)(a1 + 472);
					*(_BYTE*)(v16 + 1392) |= 0x10u;
					*(_DWORD*)(v16 + 1304) = v12;
				}
				if (sub_1400C6E00(a1))
				{
					v17 = *(_QWORD*)(a1 + 472);
					*(_DWORD*)(v17 + 816) = 1008981770;
					*(_DWORD*)(v17 + 400) = 1008981770;
				}
				LOBYTE(v14) = sub_1400CAD40(a1, (int)*v8);
				*(_BYTE*)(a1 + 1065) = a2;
				return v14;
			}
			if (!a2)
				return v14;
			v18 = *(float*)(a1 + 1204);
			if (v18 < v11)
			{
				v20 = *(float*)(a1 + 1188);
				if (v20 >= 0.0)
					return v14;
				if (v14)
				{
					v21 = *(_DWORD*)(v14 + 1300) + (int)v20;
					if (v21 > 0)
						v4 = v21;
					v19 = v4;
				}
				else
				{
					if ((int)v20 > 0)
						v4 = (int)v20;
					v19 = v4;
				}
			}
			else
			{
				if (v14)
					v4 = *(_DWORD*)(v14 + 1300);
				v19 = v4 + (int)v18 - v12;
			}
		}
		LOBYTE(v14) = sub_1400CAC30((_QWORD*)a1, v19);
		return v14;
	}
	v23 = (float)(*(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716)) - 2.0;
	v24 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1080) + 40i64))(
		*(_QWORD*)(a1 + 1080),
		*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v25 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v26 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	(*(void(__fastcall**)(_QWORD, _QWORD, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
		*(_QWORD*)(a1 + 1080),
		*(_QWORD*)(a1 + 1024),
		&v38);
	if (*(_BYTE*)(a1 + 1072))
	{
		v27 = *(_QWORD*)(a1 + 1024);
		if (v27 >= v24)
		{
			v28 = v38;
			v39 = v38;
			v29 = fmaxf(v38, v38 + *(float*)(v26 + 20));
		}
		else
		{
			(*(void(__fastcall**)(_QWORD, unsigned __int64, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
				*(_QWORD*)(a1 + 1080),
				v27 + 1,
				&v39);
			v28 = v38;
			v29 = fmaxf(v39, v38 + *(float*)(v26 + 20));
		}
	}
	else
	{
		v28 = v38;
		v29 = v38 + *(float*)(v25 + 12);
	}
	v30 = *(float*)(a1 + 1068);
	v39 = v29;
	v31 = v29 - v23;
	if (v30 >= v31)
	{
		if (v30 > v28)
			*(float*)(a1 + 1068) = v28;
	}
	else
	{
		*(float*)(a1 + 1068) = v31;
	}
	LOBYTE(v14) = (*(__int64(__fastcall**)(_QWORD, unsigned __int64, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
		*(_QWORD*)(a1 + 1080),
		v24,
		&v37);
	v32 = v37 + (float)(v39 - v38);
	if (v32 >= v23)
	{
		v33 = v32 - v23;
		if (v33 < *(float*)(a1 + 1068))
			*(float*)(a1 + 1068) = v33;
	}
	else
	{
		*(_DWORD*)(a1 + 1068) = 0;
	}
	return v14;
}
// 140110CF8: conditional instruction was optimized away because ecx.4<1


#include "../winhttp.h"

//----- (0000000140112A60) ----------------------------------------------------
void __fastcall sub_140112A60(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, bool* a5)
{
	bool* v5; // rdi
	__int64 v7; // rsi
	__int64 v10; // r15
	__m128 v11; // xmm6
	__m128* v12; // rax
	__m128 v13; // xmm7
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int16 v16; // cx
	unsigned int v17; // edx
	__int64* v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rax
	__int64* v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rsi
	__int64 v26; // rsi
	unsigned __int64 v27; // r8
	char* v28; // rcx
	__int64 v29; // r8
	__int64 v30; // r9
	__int64 v31; // rax
	unsigned int v32; // eax
	__int64 v33; // r8
	__int64 v34; // r9
	__int64 v35; // [rsp+20h] [rbp-98h]
	__int64 v36; // [rsp+28h] [rbp-90h]
	__int64 v37; // [rsp+30h] [rbp-88h] BYREF
	__int64 v38; // [rsp+38h] [rbp-80h]
	__m128 v39[4]; // [rsp+40h] [rbp-78h] BYREF

	v5 = a5;
	v7 = a3;
	if (*a5)
	{
		sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
		return;
	}
	v10 = *(_QWORD*)(a1 + 32);
	if (!v10 || *(_QWORD*)(v10 + 2880) != a1)
	{
		if (a2 == 258
			&& a3 == 13
			&& (((WORD1(a4) & 0x1FF) - 28) & 0xFFFFFEFF) == 0
			&& !*(_QWORD*)(v10 + 2880)
			&& (*(_BYTE*)(a1 + 664) & 4) != 0)
		{
			sub_1400E8C50(*(_QWORD**)(a1 + 32), (char*)a1);
			*v5 = 1;
			return;
		}
		v32 = WORD1(a4) & 0x1FF;
		if (v32 == 284)
			v32 = 28;
		if (a2 == 258 && v32 == 53 && !*(_QWORD*)(v10 + 2880) && (*(_BYTE*)(a1 + 664) & 4) != 0)
		{
			sub_1400E8C50((_QWORD*)v10, (char*)a1);
			sub_14010F120(a1, 0x2Fu, v33, v34, v35, v36, v37, v38);
			goto LABEL_88;
		}
	LABEL_89:
		v17 = a2;
	LABEL_90:
		v27 = v7;
		goto LABEL_91;
	}
	LODWORD(a5) = 0;
	if (a2 >= 0x200)
	{
		if (sub_1400E6570((_DWORD*)v10, a2, a3, &a5, &v37))
		{
			if ((_DWORD)a5 == 1 && (*(_DWORD*)(a1 + 664) & 0x400i64) != 0)
			{
				v11 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v10 + 2832)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(
							_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v10 + 2832) + 4i64)),
							_mm_cvtsi32_si128(0))));
				v12 = sub_1400C96C0(a1, v39);
				v13 = _mm_add_ps(
					(__m128)xmmword_140B7A490,
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v12[1]),
							_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *v12)),
						v12[3]));
				LODWORD(a5) = (int)v13.m128_f32[0];
				HIDWORD(a5) = (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0];
				if (!sub_140001D30(a1, (int*)&a5))
				{
					v14 = *(_QWORD*)(a1 + 32);
					if (v14)
					{
						if (*(_QWORD*)(v14 + 2880) == a1)
							sub_1400E8BF0(v14);
					}
				}
			}
		}
	}
	v15 = *(_QWORD*)(a1 + 664);
	if ((v15 & 0x800) != 0)
	{
		a3 = 1023i64;
		v16 = *(_WORD*)(qword_140C63650 + 224) & 0x3FF;
		if ((v16 == 4 || (unsigned __int16)(v16 - 17) <= 1u) && a2 - 269 <= 2)
		{
			sub_140113F60(a1);
			*v5 = a2 - 269 <= 1;
			return;
		}
	}
	if (a2 != 256)
	{
		if (a2 == 257)
		{
			v25 = v7 - 16;
			if (v25)
			{
				v26 = v25 - 1;
				if (!v26)
				{
					*(_BYTE*)(a1 + 1074) = 0;
					*v5 = 1;
					return;
				}
				if (v26 == 175)
				{
					v17 = 257;
					v27 = 192i64;
				LABEL_91:
					v28 = (char*)a1;
					goto LABEL_92;
				}
			}
			else
			{
				*(_BYTE*)(a1 + 1073) = 0;
			}
			*v5 = 1;
			return;
		}
		if (a2 == 258)
		{
			switch (v7)
			{
			case 8i64:
				sub_1401119A0(a1);
				*v5 = 1;
				return;
			case 9i64:
				if ((v15 & 0x10) != 0)
				{
					v31 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
					sub_1400D4070(a1, 0x29u, (char*)a1, byte_1409D5B0C, v31);
					*v5 = 1;
					return;
				}
				v17 = 258;
				v27 = 9i64;
				goto LABEL_91;
			case 13i64:
				if ((v15 & 1) != 0)
					sub_14010F120(a1, 0xAu, a3, a4, v35, v36, v37, v38);
				else
					sub_140111030(a1);
				*v5 = 1;
				return;
			case 27i64:
				v17 = 258;
				v27 = 27i64;
				goto LABEL_91;
			}
			v28 = (char*)a1;
			if (v7 == 96)
			{
				v17 = 258;
				v27 = 96i64;
			LABEL_92:
				sub_1400D1AF0(v28, v17, v27, a4, v5);
				return;
			}
			if (!sub_140112950(a1, v15, v7) && (unsigned __int16)v7 >= 0x20u)
			{
				sub_14010F120(a1, v7, v29, v30, v35, v36, v37, v38);
				*v5 = 1;
				return;
			}
		LABEL_88:
			*v5 = 1;
			return;
		}
		goto LABEL_89;
	}
	switch (v7)
	{
	case 16i64:
		*(_BYTE*)(a1 + 1073) = 1;
		*v5 = 1;
		break;
	case 17i64:
		*(_BYTE*)(a1 + 1074) = 1;
		*v5 = 1;
		break;
	case 27i64:
		sub_1400D4070(a1, 0x2Au, (char*)a1, &unk_1409D04A3);
		if ((*(_DWORD*)(a1 + 664) & 0x100) != 0)
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)a1 + 80i64))(a1, &unk_1409D5AF4);
		v24 = *(_QWORD*)(a1 + 32);
		if (!v24 || *(_QWORD*)(v24 + 2880) != a1)
			goto LABEL_88;
		sub_1400E8BF0(v24);
		*v5 = 1;
		break;
	case 35i64:
		sub_140111890(a1);
		*v5 = 1;
		break;
	case 36i64:
		sub_1401117D0(a1);
		*v5 = 1;
		break;
	case 37i64:
		v18 = *(__int64**)(a1 + 1080);
		v19 = *(_QWORD*)(a1 + 1024);
		v20 = *v18;
		if (*(_BYTE*)(a1 + 1074))
			(*(void(__fastcall**)(__int64*, __int64, bool**))(v20 + 208))(v18, v19, &a5);
		else
			(*(void(__fastcall**)(__int64*, __int64, bool**))(v20 + 192))(v18, v19, &a5);
		sub_1401116A0(a1, (unsigned __int64)a5);
		*v5 = 1;
		break;
	case 38i64:
		sub_1401110B0(a1);
		*v5 = 1;
		break;
	case 39i64:
		v21 = *(__int64**)(a1 + 1080);
		v22 = *(_QWORD*)(a1 + 1024);
		v23 = *v21;
		if (*(_BYTE*)(a1 + 1074))
			(*(void(__fastcall**)(__int64*, __int64, bool**))(v23 + 200))(v21, v22, &a5);
		else
			(*(void(__fastcall**)(__int64*, __int64, bool**))(v23 + 184))(v21, v22, &a5);
		sub_1401115F0(a1, (unsigned __int64)a5);
		*v5 = 1;
		break;
	case 40i64:
		sub_1401113A0(a1);
		*v5 = 1;
		break;
	case 45i64:
		if (*(_BYTE*)(a1 + 1073))
			sub_140111D60(a1);
		else
			*(_BYTE*)(a1 + 1072) = *(_BYTE*)(a1 + 1072) == 0;
		*v5 = 1;
		break;
	case 46i64:
		if (*(_BYTE*)(a1 + 1073))
			sub_140111FD0(a1);
		else
			sub_140111B80(a1);
		*v5 = 1;
		break;
	case 192i64:
		v17 = 256;
		goto LABEL_90;
	default:
		goto LABEL_88;
	}
}
// 140112EEB: variable 'v29' is possibly undefined
// 140112EEB: variable 'v30' is possibly undefined
// 140112EEB: variable 'v35' is possibly undefined
// 140112EEB: variable 'v36' is possibly undefined
// 140112F25: variable 'a3' is possibly undefined
// 140112F25: variable 'a4' is possibly undefined
// 140113033: variable 'v33' is possibly undefined
// 140113033: variable 'v34' is possibly undefined
// 1409D5B0C: using guessed type _BYTE byte_1409D5B0C[24];
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140112A60: using guessed type __m128 var_78[4];


//----- (0000000140170080) ----------------------------------------------------
char __fastcall sub_140170080(__int64 a1)
{
	int v2; // eax
	int v3; // eax
	unsigned int v4; // r10d
	unsigned int v5; // edx
	int v6; // ecx
	__int64 v7; // rax
	int v8; // eax
	unsigned int v9; // r10d
	int v10; // r15d
	__int64 v11; // r9
	__int64 v12; // rbp
	__int64 v13; // r14
	__int64 v14; // rdx
	__int64 v15; // rsi
	int v16; // ebx
	__int64 v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned __int64 v20; // r8
	__m128* v21; // r8
	_QWORD* v22; // rcx
	unsigned int v23; // eax
	unsigned __int64 v24; // rbx
	__int64 v25; // r8
	__int64 v26; // rcx
	int v27; // r10d
	__int64 v28; // rdx
	unsigned int v30; // [rsp+50h] [rbp-48h] BYREF
	unsigned int v31; // [rsp+54h] [rbp-44h]
	int v32; // [rsp+58h] [rbp-40h]
	unsigned int v33; // [rsp+5Ch] [rbp-3Ch]
	__int128 v34[2]; // [rsp+60h] [rbp-38h] BYREF

	LOBYTE(v2) = *(_BYTE*)(a1 + 664) >> 4;
	if ((*(_BYTE*)(a1 + 664) & 0x10) != 0)
	{
		v3 = *(_DWORD*)(a1 + 724);
		v4 = *(_DWORD*)(a1 + 716);
		v5 = *(_DWORD*)(a1 + 720);
		v6 = *(_DWORD*)(a1 + 1372);
		v30 = v4;
		v32 = v3;
		v7 = *(_QWORD*)(a1 + 464);
		v31 = v5;
		v33 = v5 + v6;
		v8 = v7 ? *(_DWORD*)(v7 + 1300) : 0;
		v9 = v4 - v8;
		v2 = *(_DWORD*)(a1 + 1400);
		v10 = 0;
		v30 = v9;
		if (v2 > 0)
		{
			v11 = qword_140C63678;
			v12 = 1i64;
			v13 = 0i64;
			do
			{
				v14 = *(_QWORD*)(a1 + 1392);
				v15 = *(_QWORD*)(v13 + v14);
				if (!*(_BYTE*)(v15 + 1))
				{
					v16 = *(_DWORD*)(v15 + 4);
					v17 = v2;
					v18 = v12;
					if (v12 < v2)
					{
						v19 = v13 + v14 + 8;
						do
						{
							if (!*(_BYTE*)(*(_QWORD*)v19 + 1i64))
								break;
							v16 += *(_DWORD*)(*(_QWORD*)v19 + 4i64);
							++v18;
							v19 += 8i64;
						} while (v18 < v17);
					}
					v20 = *(unsigned int*)(a1 + 1612);
					if (v20 >= *(_QWORD*)(v11 + 48))
						v21 = *(__m128**)(v11 + 40);
					else
						v21 = (__m128*)(*(_QWORD*)(v11 + 40) + 32 * v20);
					v22 = *(_QWORD**)(a1 + 1624);
					if (v22)
					{
						sub_140103CF0(
							v22,
							&v30,
							v21,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1632)) * *(float*)(a1 + 1636)));
						v9 = v30;
						v11 = qword_140C63678;
					}
					v23 = v16 + v9;
					v32 = v16 + v9;
					if (*(_QWORD*)(v15 + 16))
					{
						v24 = *(unsigned int*)(v15 + 76);
						v34[0] = (__int128)_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(0))));
						v34[1] = (__int128)_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(0))));
						if (v24 >= *(_QWORD*)(v11 + 48))
							goto LABEL_23;
						v25 = *(_QWORD*)(v11 + 40);
						v26 = 32i64 * (unsigned int)v24;
						v27 = *(_DWORD*)(v26 + v25 + 16);
						if ((unsigned int)(v27 - 1) <= 0xFFFFFFFD)
							*(_DWORD*)(v26 + v25 + 16) = v27 + 1;
						if (v24 >= *(_QWORD*)(v11 + 48))
							LABEL_23:
						v28 = *(_QWORD*)(v11 + 40);
						else
							v28 = *(_QWORD*)(v11 + 40) + 32 * v24;
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
							qword_140C65680,
							*(_QWORD*)(v15 + 16),
							0i64,
							-1i64,
							v34,
							*(_DWORD*)(v15 + 72),
							v28,
							1,
							0i64);
						sub_1401429A0(qword_140C63678, v24);
						v23 = v32;
						v11 = qword_140C63678;
					}
					v9 = v23;
					v30 = v23;
				}
				v2 = *(_DWORD*)(a1 + 1400);
				++v10;
				v13 += 8i64;
				++v12;
			} while (v10 < v2);
		}
	}
	return v2;
}
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;


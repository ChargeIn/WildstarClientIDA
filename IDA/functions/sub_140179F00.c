#include "../winhttp.h"

//----- (0000000140179F00) ----------------------------------------------------
void __fastcall sub_140179F00(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__m128 v12; // xmm6
	__m128* v13; // rax
	__m128 v14; // xmm7
	int v15; // r13d
	int v16; // r12d
	int v17; // ebp
	int v18; // esi
	__int64 v19; // rdi
	int v20; // eax
	__int64 v21; // rax
	int v22[4]; // [rsp+30h] [rbp-A8h] BYREF
	__m128 v23[4]; // [rsp+40h] [rbp-98h] BYREF
	int v26; // [rsp+100h] [rbp+28h]

	if (!*a5 && a2 == 1026)
	{
		v8 = qword_140C63690;
		if (qword_140C63690 != a1)
		{
			if (qword_140C63690)
			{
				v9 = *(_QWORD*)(a1 + 32);
				if (*(_QWORD*)(qword_140C63690 + 32) == v9 && *(float*)(a1 + 648) > 0.0)
				{
					v10 = *(_QWORD*)(a1 + 16);
					if ((!v10 || sub_1400D1A60(v10)) && *(float*)(v8 + 648) > 0.0)
					{
						v11 = *(_QWORD*)(v8 + 16);
						if ((!v11 || sub_1400D1A60(v11)) && *(_DWORD*)(v8 + 1120) == *(_DWORD*)(a1 + 1120))
						{
							v12 = _mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v9 + 2832)), _mm_cvtsi32_si128(0)),
									_mm_unpacklo_epi32(
										_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v9 + 2832) + 4i64)),
										_mm_cvtsi32_si128(0))));
							v13 = sub_1400C96C0(a1, v23);
							v14 = _mm_add_ps(
								(__m128)xmmword_140B7A490,
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v13[1]),
										_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *v13)),
									v13[3]));
							v15 = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
							v26 = (int)v14.m128_f32[0];
							sub_1400CB3D0(a1, v22);
							v16 = qword_140C77760;
							v17 = HIDWORD(qword_140C77760);
							v18 = v22[2] - v22[0];
							if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v19 = *(_QWORD*)(a1 + 48)) != 0)
							{
								v16 += sub_14010CF80(*(_QWORD*)(a1 + 48));
								v18 -= sub_14010D0A0(v19);
								v20 = v17 + sub_14010D1C0(v19);
							}
							else
							{
								v20 = HIDWORD(qword_140C77760);
							}
							if (v26 >= v16 && v26 < v18 && v15 >= v17 && v15 < v20)
							{
								sub_14017A290((_QWORD*)qword_140C63690, a1, 1);
								sub_1400CA410(qword_140C63690);
								v21 = qword_140C63690;
								qword_140C63690 = 0i64;
								*(_BYTE*)(v21 + 1148) = 1;
								*a5 = 1;
							}
						}
					}
				}
			}
		}
	}
	sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
}
// 140179F87: variable 'v8' is possibly undefined
// 140179FBE: variable 'v9' is possibly undefined
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140C63690: using guessed type __int64 qword_140C63690;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140179F00: using guessed type __m128 var_98[4];


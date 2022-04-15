//----- (0000000140389A30) ----------------------------------------------------
void __fastcall sub_140389A30(__m128* a1, __m128* a2, char a3, __int64 a4)
{
	__m128 v5; // xmm5
	__m128 v6; // xmm4
	unsigned int(__fastcall * v7)(__m128*, __m128*, __m128*, _QWORD); // rax
	__m128 v8; // xmm2
	__m128 v9; // xmm0
	int v10; // eax
	__m128* v11; // rax
	__int64 v12; // rcx
	unsigned int(__fastcall * v13)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v14; // eax
	__m128* v15; // rax
	__int64 v16; // rcx
	__m128 v17; // [rsp+20h] [rbp-48h] BYREF
	__m128 v18; // [rsp+30h] [rbp-38h] BYREF
	__m128 v19; // [rsp+40h] [rbp-28h] BYREF
	__m128 v20; // [rsp+50h] [rbp-18h] BYREF

	if ((a3 & 4) != 0 && (a1[70].m128_i8[0] & 1) != 0)
	{
		v5 = _mm_min_ps(a2[1], a1[75]);
		v6 = _mm_max_ps(*a2, a1[74]);
		if (v6.m128_f32[0] <= v5.m128_f32[0]
			&& _mm_shuffle_ps(v6, v6, 85).m128_f32[0] <= _mm_shuffle_ps(v5, v5, 85).m128_f32[0]
			&& _mm_shuffle_ps(v6, v6, 170).m128_f32[0] <= _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
		{
			v7 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
			v8 = _mm_shuffle_ps(v5, v5, 170);
			v9 = _mm_shuffle_ps(v6, v6, 170);
			v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v9), (__m128)xmmword_140B7A3E0);
			v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v8), (__m128)xmmword_140B7A3E0);
			v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v8), (__m128)xmmword_140B7A3E0);
			v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v9), (__m128)xmmword_140B7A3E0);
			if (!v7 || v7(&v17, &v19, &v18, *(_QWORD*)(a4 + 48)))
			{
				v10 = *(_DWORD*)(a4 + 16);
				if (*(_DWORD*)(a4 + 12) == v10)
				{
					if (v10)
						*(_DWORD*)(a4 + 16) = 2 * v10;
					else
						*(_DWORD*)(a4 + 16) = 16;
					*(_QWORD*)(a4 + 24) = sub_14018C320(*(_QWORD*)(a4 + 24), 48i64 * *(unsigned int*)(a4 + 16), 8u);
				}
				v11 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
				*v11 = v17;
				v11[1] = v19;
				v11[2] = v18;
				v12 = *(_QWORD*)(a4 + 32);
				++* (_DWORD*)(a4 + 12);
				if (v12)
				{
					sub_14018B900(v12, 0);
					*(_QWORD*)(a4 + 32) = 0i64;
				}
			}
			v13 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
			if (!v13 || v13(&v17, &v18, &v20, *(_QWORD*)(a4 + 48)))
			{
				v14 = *(_DWORD*)(a4 + 16);
				if (*(_DWORD*)(a4 + 12) == v14)
				{
					if (v14)
						*(_DWORD*)(a4 + 16) = 2 * v14;
					else
						*(_DWORD*)(a4 + 16) = 16;
					*(_QWORD*)(a4 + 24) = sub_14018C320(*(_QWORD*)(a4 + 24), 48i64 * *(unsigned int*)(a4 + 16), 8u);
				}
				v15 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
				*v15 = v17;
				v15[1] = v18;
				v15[2] = v20;
				v16 = *(_QWORD*)(a4 + 32);
				++* (_DWORD*)(a4 + 12);
				if (v16)
				{
					sub_14018B900(v16, 0);
					*(_QWORD*)(a4 + 32) = 0i64;
				}
			}
		}
	}
}
// 140B7A3E0: using guessed type __int128 xmmword_140B7A3E0;
// 140389A30: using guessed type __m128 var_18;


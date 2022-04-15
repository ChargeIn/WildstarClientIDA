//----- (000000014052E4A0) ----------------------------------------------------
__int64 __fastcall sub_14052E4A0(__m128* a1, int* a2, int a3)
{
	__int32 v7; // eax
	int v8; // ebx
	int v9; // eax
	bool v10; // cc
	__int64 v11; // rcx
	unsigned int* v12; // rax
	__m128i v13; // xmm2
	int* v14; // rax
	unsigned __int64 v15; // rax
	__int64 v16; // rax
	__int64(__fastcall * **v17)(_QWORD); // rbx
	__int64(__fastcall * **v18)(_QWORD); // rcx
	int v19; // esi
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	__int32 v23; // [rsp+34h] [rbp-34h]
	__int128 v24[2]; // [rsp+40h] [rbp-28h] BYREF
	int v25; // [rsp+70h] [rbp+8h] BYREF
	int v26; // [rsp+74h] [rbp+Ch]
	int v27; // [rsp+88h] [rbp+20h] BYREF

	if (a1[1].m128_i8[12] >= 0)
		return sub_1400D2660((__int64)a1, a2, a3);
	if ((a1[41].m128_i8[8] & 1) == 0)
	{
		v7 = a1[79].m128_i32[0];
		if (a3 >= 0)
		{
			v8 = a1[79].m128_i32[1];
			v9 = v7 - 1;
			v10 = v8 < v9;
		}
		else
		{
			v8 = a1[79].m128_i32[2];
			v9 = v7 + 1;
			v10 = v9 < v8;
		}
		if (v10)
			v8 = v9;
		if (a1[79].m128_i32[0] != v8)
		{
			sub_14052AD50((__int64)a1, &v27, a2);
			v23 = a1[45].m128_i32[0];
			v25 = *a2 - a1[44].m128_i32[3];
			v26 = a2[1] - v23;
			sub_14052AF60((__int64)a1, v24, &v25);
			a1[79].m128_i32[0] = v8;
			if (v8 > 2)
			{
				if (v8 == 3)
				{
					v15 = a1[74].m128_u64[1];
					if (v15)
					{
						if (a3 > 0)
						{
							if (qword_140C658F8)
							{
								v16 = sub_140449420(v11, *(unsigned int(__fastcall****)(_QWORD))(v15 + 8), &v27);
								v17 = (__int64(__fastcall***)(_QWORD))v16;
								if (v16)
								{
									sub_140529B60((__int64)a1, v16);
									v18 = (__int64(__fastcall***)(_QWORD))a1[72].m128_u64[0];
									if (v17 != v18)
									{
										v19 = -1;
										if (v18)
											v19 = (**v18)(v18);
										v20 = (*v17)[3](v17);
										v21 = *(_QWORD*)(qword_140C65898 + 29504);
										v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
										sub_1400EA3E0(v21, "ZoneMapWindowChange", byte_1409F1A34, v22, v19);
									}
								}
							}
						}
					}
					a1[78] = 0i64;
				}
			}
			else
			{
				v12 = sub_14052AB00((__int64)a1, &v25, (float*)v24);
				v13 = _mm_cvtsi32_si128(0);
				a1[78] = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v12), v13),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12[1]), v13)));
				v14 = sub_14052B440((__int64)a1, (int*)v24);
				a1[78] = _mm_sub_ps(
					a1[78],
					_mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14[2] - *v14), v13),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14[3] - v14[1]), v13))),
						(__m128)xmmword_140B7AC50));
				sub_14052E280((__int64)a1);
			}
			sub_140529F90((__int64)a1);
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ZoneMapWindowModeChange", "i", a1[79].m128_u32[0]);
			a1[64].m128_i32[0] = 1;
		}
	}
	return 0i64;
}
// 14052E63E: variable 'v11' is possibly undefined
// 1409F1A34: using guessed type _BYTE byte_1409F1A34[24];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;


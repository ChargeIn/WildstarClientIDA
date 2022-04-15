//----- (0000000140368740) ----------------------------------------------------
__int64 __fastcall sub_140368740(__m128* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rbx
	float v6; // xmm6_4
	__int64 v7; // rdi
	__m128* v8; // rax
	__m128 v9; // xmm2
	float v10; // xmm0_4

	result = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 144))(a1);
	if ((_DWORD)result)
	{
		sub_140357DF0((__int64)a1, (__int64)&a1[105]);
		v5 = a1[145].m128_i64[1];
		v6 = a1[8].m128_f32[2] * a1[8].m128_f32[2];
		if (v5)
		{
			while (1)
			{
				v7 = *(_QWORD*)(v5 + 1408);
				if (*(_QWORD*)(v5 + 1448))
				{
					if (!(unsigned int)sub_14037CC30(v5, a2))
						break;
				}
				v8 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 16) + 40i64))(*(_QWORD*)(v5 + 16));
				v9 = _mm_sub_ps(_mm_max_ps(v8[2], _mm_min_ps(a1[54], v8[3])), a1[54]);
				v10 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
				if ((float)((float)(v10 * v10) + (float)(v9.m128_f32[0] * v9.m128_f32[0])) <= v6
					&& *(_QWORD*)(v5 + 1464)
					&& !(unsigned int)sub_14037D060(v5, a2, 1))
				{
					break;
				}
				v5 = v7;
				if (!v7)
					return 1i64;
			}
			return 0i64;
		}
		else
		{
			return 1i64;
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;


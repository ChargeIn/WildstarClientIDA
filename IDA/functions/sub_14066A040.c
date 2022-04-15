//----- (000000014066A040) ----------------------------------------------------
__int64 __fastcall sub_14066A040(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rdi
	__m128 v4; // xmm6
	unsigned int v5; // eax
	unsigned int* v6; // rdi
	__int64 v7; // rcx
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm6
	__m128 v11; // xmm1
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	int v16; // [rsp+48h] [rbp+10h] BYREF

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = sub_140056AB0(a1, 1u);
		v3 = (__int64*)v2;
		if (v2
			&& *(_QWORD*)v2
			&& (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64)))
		{
			v4 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*v3 + 8)) == 2)
			{
				v5 = sub_14054F710(*v3);
			}
			else if (qword_140C65898)
			{
				v5 = sub_140553BD0(*v3, &v16);
			}
			else
			{
				v5 = 0;
			}
			v6 = (unsigned int*)sub_14024B980(v5);
			if (v6
				&& v6[10] == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
			{
				v7 = a1[2];
				v8 = _mm_unpacklo_ps((__m128)v6[3], (__m128)v6[5]);
				v9 = _mm_unpacklo_ps((__m128)v6[4], (__m128)0i64);
				*(_DWORD*)(v7 + 8) = 3;
				v10 = _mm_sub_ps(v4, _mm_unpacklo_ps(v8, v9));
				v11 = _mm_mul_ps(v10, v10);
				*(double*)v7 = fsqrt(
					(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
					+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]);
			}
			else
			{
				v13 = a1[2];
				*(_QWORD*)v13 = 0x47EFFFFFE0000000i64;
				*(_DWORD*)(v13 + 8) = 3;
			}
		}
		else
		{
			v14 = a1[2];
			*(_QWORD*)v14 = 0x47EFFFFFE0000000i64;
			*(_DWORD*)(v14 + 8) = 3;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v15 = a1[2];
		*(_QWORD*)v15 = 0x47EFFFFFE0000000i64;
		*(_DWORD*)(v15 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;


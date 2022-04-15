//----- (000000014052B980) ----------------------------------------------------
__int64 __fastcall sub_14052B980(__int64 a1, unsigned int* a2)
{
	unsigned int* v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // r8d
	__int64 v7; // rdx
	__int64(__fastcall * **v8)(_QWORD); // rax
	unsigned int v10; // r8d
	__int64 v11; // rdx
	__m128 v12; // [rsp+40h] [rbp-18h] BYREF
	__int64 v13; // [rsp+68h] [rbp+10h] BYREF

	if (a2 && a2[6] != 16)
	{
		v4 = (unsigned int*)sub_14024B980(a2[5]);
		v5 = *(_QWORD*)(a1 + 1152);
		if (v4)
		{
			v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v4[3], (__m128)v4[5]), _mm_unpacklo_ps((__m128)v4[4], (__m128)0i64));
			if (qword_140C658F8)
			{
				v6 = a2[2];
				v7 = a2[1];
				v13 = qword_140C77760;
				v8 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v5, v7, v6, v12.m128_f32, v5, 1, &v13);
				if (v8)
					return (**v8)(v8);
			}
		}
		else
		{
			v12 = 0i64;
			if (qword_140C658F8)
			{
				v10 = a2[2];
				v11 = a2[1];
				v13 = qword_140C77760;
				v8 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v5, v11, v10, v12.m128_f32, v5, 1, &v13);
				if (v8)
					return (**v8)(v8);
			}
		}
	}
	return 0i64;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 14052B980: using guessed type __m128 var_18;


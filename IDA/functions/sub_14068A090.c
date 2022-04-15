//----- (000000014068A090) ----------------------------------------------------
__int64 __fastcall sub_14068A090(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	unsigned int* v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // r8d
	__int64 v10; // rdx
	__int64(__fastcall * **v11)(_QWORD); // rax
	__int64 v12; // rcx
	__int64 result; // rax
	__m128 v14; // [rsp+40h] [rbp-18h] BYREF
	__int64 v15; // [rsp+60h] [rbp+8h] BYREF

	v1 = 0;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 8);
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 8);
				if (v5)
				{
					v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
					v7 = (unsigned int*)sub_14024B980(*(_DWORD*)(v6 + 20));
					if (v7)
					{
						v9 = v7[11];
						v10 = v7[10];
						v14 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v7[3], (__m128)v7[5]),
							_mm_unpacklo_ps((__m128)v7[4], (__m128)0i64));
						if (qword_140C658F8)
						{
							v15 = qword_140C77760;
							v11 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v8, v10, v9, v14.m128_f32, 0i64, 1, &v15);
							if (v11)
								v1 = (**v11)(v11);
						}
					}
				}
			}
		}
	}
	v12 = a1[2];
	result = 1i64;
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v1;
	a1[2] += 16i64;
	return result;
}
// 14068A155: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 14068A090: using guessed type __m128 var_18;


//----- (00000001405767D0) ----------------------------------------------------
__int64 __fastcall sub_1405767D0(__int64 a1, int a2, __int64 a3, _QWORD* a4)
{
	_QWORD* v4; // r15
	_QWORD* v5; // rbx
	__m128* v9; // rbp
	__m128* v10; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm2
	float v13; // xmm2_4
	__int64 v15; // rax
	__int64 v16; // rax
	int* v17; // rax
	int v18; // edi

	v4 = (_QWORD*)qword_140C65B78;
	v5 = 0i64;
	if (*(float*)(a3 + 172) <= 0.0000099999997)
	{
		if (!*(_QWORD*)(qword_140C65898 + 25744) || a2 != *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64))
		{
			v15 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v15)
				return 2147500037i64;
			v16 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v15 + 192));
			if (!v16
				|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 32i64))(v16)
				|| *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 192i64) != a2)
			{
				return 2147500037i64;
			}
		}
	}
	else
	{
		v9 = *(__m128**)(qword_140C65898 + 25744);
		v10 = (__m128*)sub_1403D90D0(qword_140C65898, a2);
		if (!v9)
			return 2147500037i64;
		if (!v10)
			return 2147500037i64;
		v11 = _mm_sub_ps(v9[286], v10[286]);
		v12 = _mm_mul_ps(v11, v11);
		v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
		if (v13 < (float)(*(float*)(a3 + 168) * *(float*)(a3 + 168))
			|| v13 >= (float)(*(float*)(a3 + 172) * *(float*)(a3 + 172)))
		{
			return 2147500037i64;
		}
	}
	v17 = sub_14018B280(440i64, 8u);
	if (v17)
		v5 = (_QWORD*)sub_14071B260((__int64)v17);
	v18 = sub_14071B3B0((__int64)v5, (int*)a3);
	if (v18 >= 0)
	{
		sub_140579A40(v4, v5, a4);
	}
	else if (v5)
	{
		(*(void(__fastcall**)(_QWORD*, __int64)) * v5)(v5, 1i64);
		return (unsigned int)v18;
	}
	return (unsigned int)v18;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;


//----- (00000001404ADFE0) ----------------------------------------------------
__int64 __fastcall sub_1404ADFE0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned int* v4; // rbx
	__m128* v5; // rcx
	int v6; // edx
	float v7; // xmm6_4
	__m128 v8; // xmm1
	__m128 v9; // xmm7
	float v10; // xmm7_4
	__int64 v11; // rax

	result = sub_1402413C0(a2);
	if (result)
	{
		v4 = (unsigned int*)sub_14024B980(*(_DWORD*)(result + 24));
		if (!v4 || !qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120))
			return 0i64;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72) != v4[10])
			return sub_1404ADA70((__int64)v5, a2);
		if ((dword_140DC30F0 & 1) != 0)
		{
			v6 = dword_140DC30FC;
		}
		else
		{
			v6 = 0;
			dword_140DC30FC = 0;
			dword_140DC30F0 |= 1u;
		}
		v7 = 0.0;
		v5 = *(__m128**)(qword_140C65898 + 120);
		v8 = _mm_sub_ps(
			v5[286],
			_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v4[3], (__m128)v4[5]), _mm_unpacklo_ps((__m128)v4[4], (__m128)0i64)));
		v9 = _mm_mul_ps(v8, v8);
		v10 = fsqrt((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
		if (v6)
		{
			v7 = *(float*)&dword_140DC30F8;
		}
		else
		{
			dword_140DC30FC = 1;
			v11 = sub_140200220(0x52Bu);
			if (v11)
				v7 = *(float*)(v11 + 24);
			dword_140DC30F8 = LODWORD(v7);
		}
		if (v10 >= v7)
			return sub_1404ADA70((__int64)v5, a2);
		else
			return 0i64;
	}
	return result;
}
// 1404AE10E: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC30F0: using guessed type int dword_140DC30F0;
// 140DC30F8: using guessed type int dword_140DC30F8;
// 140DC30FC: using guessed type int dword_140DC30FC;


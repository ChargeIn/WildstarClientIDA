//----- (0000000140726670) ----------------------------------------------------
__int64 __fastcall sub_140726670(__int64 a1)
{
	__m128 v2; // xmm6
	int v3; // eax
	__int64 v4; // rax
	float v5; // xmm3_4
	int v6; // xmm3_4
	__m128 v7; // xmm2
	__m128 v8; // xmm1

	v2 = *(__m128*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 608) + 80i64))(*(_QWORD*)(a1 + 608)) + 48);
	v3 = dword_140DC4CF8;
	if ((dword_140DC4CF8 & 1) != 0)
	{
		v5 = *(float*)&dword_140DC4CFC;
	}
	else
	{
		dword_140DC4CF8 |= 1u;
		v4 = sub_140200220(0x38Au);
		if (v4)
		{
			v5 = *(float*)(v4 + 24);
			v3 = dword_140DC4CF8;
			dword_140DC4CFC = LODWORD(v5);
		}
		else
		{
			v5 = 20.0;
			v3 = dword_140DC4CF8;
			dword_140DC4CFC = 1101004800;
		}
	}
	if ((v3 & 2) != 0)
	{
		v6 = dword_140DC4D00;
	}
	else
	{
		*(float*)&v6 = v5 * v5;
		dword_140DC4CF8 = v3 | 2;
		dword_140DC4D00 = v6;
	}
	v7 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64), v2);
	v8 = _mm_mul_ps(v7, v7);
	if ((float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]) <= *(float*)&v6)
		return sub_1404C3060(a1);
	else
		return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4CF8: using guessed type int dword_140DC4CF8;
// 140DC4CFC: using guessed type int dword_140DC4CFC;
// 140DC4D00: using guessed type int dword_140DC4D00;


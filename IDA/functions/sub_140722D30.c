//----- (0000000140722D30) ----------------------------------------------------
_BOOL8 __fastcall sub_140722D30(__int64 a1, __m128* a2)
{
	__m128* v5; // rdi
	int v6; // eax
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm6_4
	__m128 v13; // xmm5
	__m128 v14; // xmm5

	if (*(_QWORD*)(a1 + 96) || !(unsigned int)sub_1407234A0(a1, (__int64)a2))
		return 0i64;
	v5 = *(__m128**)(qword_140C65898 + 25744);
	if (!v5)
		return 0i64;
	v6 = dword_140DC4CE0;
	if ((dword_140DC4CE0 & 1) == 0)
	{
		dword_140DC4CE0 |= 1u;
		v7 = sub_140200220(0x1F3u);
		if (v7)
			v8 = *(_DWORD*)(v7 + 24);
		else
			v8 = 0;
		v6 = dword_140DC4CE0;
		dword_140DC4CE4 = v8;
	}
	if ((v6 & 2) == 0)
	{
		dword_140DC4CE0 = v6 | 2;
		v9 = sub_140200220(0x1F4u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 0;
		v6 = dword_140DC4CE0;
		dword_140DC4CE8 = v10;
	}
	if ((v6 & 4) != 0)
	{
		v12 = dword_140DC4CEC;
	}
	else
	{
		dword_140DC4CE0 = v6 | 4;
		v11 = sub_140200220(0x1F7u);
		if (v11)
		{
			v12 = *(int*)(v11 + 24);
			dword_140DC4CEC = v12;
		}
		else
		{
			*(float*)&v12 = 0.0;
			dword_140DC4CEC = 0;
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(a1 + 72) + 8i64) == 1)
	{
		v12 = dword_140DC4CE4;
	}
	else if (*(_DWORD*)(*(_QWORD*)(a1 + 72) + 8i64) == 2)
	{
		v12 = dword_140DC4CE8;
	}
	v13 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v5[286], (__m128)0i64),
			_mm_unpacklo_ps(_mm_shuffle_ps(v5[286], v5[286], 170), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(a2[286], (__m128)0i64),
			_mm_unpacklo_ps(_mm_shuffle_ps(a2[286], a2[286], 170), (__m128)0i64)));
	v14 = _mm_mul_ps(v13, v13);
	return (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]) <= (float)(*(float*)&v12 * *(float*)&v12);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4CE0: using guessed type int dword_140DC4CE0;
// 140DC4CE4: using guessed type int dword_140DC4CE4;
// 140DC4CE8: using guessed type int dword_140DC4CE8;
// 140DC4CEC: using guessed type int dword_140DC4CEC;


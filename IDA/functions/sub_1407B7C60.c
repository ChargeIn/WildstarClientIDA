//----- (00000001407B7C60) ----------------------------------------------------
__int64 __fastcall sub_1407B7C60(__m128* a1)
{
	int v1; // edx
	__m128* v3; // r9
	int v4; // eax
	__int64 v5; // r10
	int v6; // r8d
	__m128 v7; // xmm2
	_DWORD* i; // rcx

	v1 = 0;
	v3 = a1 + 63;
	v4 = 1;
	v5 = 9i64;
	v6 = 0;
	do
	{
		v7 = _mm_mul_ps(a1[23], *v3);
		if ((float)((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0])
			+ v3->m128_f32[3]) >= 0.0)
			v6 |= v4;
		v4 = __ROL4__(v4, 1);
		++v3;
		--v5;
	} while (v5);
	for (i = &unk_140B53BFC; (v6 & i[1]) != *i; i += 13)
	{
		if ((unsigned int)++v1 >= 7)
		{
			v1 = 7;
			return sub_1407B7D00(a1, (_DWORD*)&unk_140B53BD0 + 13 * v1);
		}
	}
	return sub_1407B7D00(a1, (_DWORD*)&unk_140B53BD0 + 13 * v1);
}


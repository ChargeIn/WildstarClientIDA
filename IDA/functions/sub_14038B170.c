//----- (000000014038B170) ----------------------------------------------------
__int64 __fastcall sub_14038B170(
	__int64 a1,
	int a2,
	__int64 a3,
	void(__fastcall*** a4)(_QWORD),
	int a5,
	int a6,
	int a7)
{
	__int64 v9; // rcx
	__m128 v10; // xmm1
	int v11; // xmm2_4
	__m128* v12; // rax
	__m128 v13; // xmm0
	_QWORD* v14; // rcx
	bool v15; // zf
	__int64 v16; // rax
	_QWORD* v17; // rcx
	__int64 v18; // rax

	*(_DWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 32) = a4;
	if (a4)
		(**a4)(a4);
	v9 = *(_QWORD*)(a1 + 32);
	if (v9 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 944i64))(v9))
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 72i64))(*(_QWORD*)(a1 + 32), a3);
	*(_OWORD*)(a1 + 48) = *(_OWORD*)a3;
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a3 + 16);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a3 + 32);
	*(_OWORD*)(a1 + 96) = *(_OWORD*)(a3 + 48);
	v10 = _mm_mul_ps(*(__m128*)(a1 + 48), *(__m128*)(a1 + 48));
	v11 = 1065353216;
	*(float*)(a1 + 128) = 1.0
		/ fsqrt(
			(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
	v12 = *(__m128**)(a3 + 64);
	if (v12)
		v13 = *v12;
	else
		v13 = _mm_add_ps(*(__m128*)(a1 + 96), (__m128)xmmword_140C77870);
	*(__m128*)(a1 + 112) = v13;
	*(_DWORD*)(a1 + 236) = a5;
	*(_DWORD*)(a1 + 188) = a6;
	if (!a5)
		v11 = 0;
	*(_DWORD*)(a1 + 244) = v11;
	*(_DWORD*)(a1 + 240) = v11;
	*(_QWORD*)(a1 + 248) = 0i64;
	v14 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5328i64);
	v15 = *(_QWORD*)(a1 + 1168) == 0i64;
	*(_DWORD*)(a1 + 232) = a7;
	if (v15)
	{
		*(_QWORD*)(a1 + 1168) = v14;
		*(_QWORD*)(a1 + 1176) = *v14;
		*v14 = a1;
		v16 = *(_QWORD*)(a1 + 1176);
		if (v16)
			*(_QWORD*)(v16 + 1168) = a1 + 1176;
	}
	v17 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5336i64);
	if (!*(_QWORD*)(a1 + 1184))
	{
		*(_QWORD*)(a1 + 1184) = v17;
		*(_QWORD*)(a1 + 1192) = *v17;
		*v17 = a1;
		v18 = *(_QWORD*)(a1 + 1192);
		if (v18)
			*(_QWORD*)(v18 + 1184) = a1 + 1192;
	}
	return 0i64;
}
// 140C77870: using guessed type __int128 xmmword_140C77870;


//----- (00000001403589F0) ----------------------------------------------------
__int64 __fastcall sub_1403589F0(__int64 a1, __m128* a2)
{
	__m128 v4; // xmm2
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rbx
	_QWORD* v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rbx
	int v11; // [rsp+30h] [rbp+8h] BYREF
	int v12; // [rsp+34h] [rbp+Ch]

	v4 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(*a2, *a2, 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v11 = (int)v4.m128_f32[0];
	v12 = (int)_mm_shuffle_ps(v4, v4, 85).m128_f32[0];
	v5 = (*(__int64(__fastcall**)(int*))(a1 + 2384))(&v11);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 2376) + 8 * (v5 % *(_QWORD*)(a1 + 2368)));
	if (!v6)
		return 0i64;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2392))(&v11, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			return 0i64;
	}
	v8 = v6 + 3;
	if (!v8)
		return 0i64;
	if (!*v8)
		return 0i64;
	v9 = *(_QWORD*)(*v8 + 40i64);
	if (!v9)
		return 0i64;
	while (1)
	{
		v10 = *(_QWORD*)(v9 + 8);
		if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10))
		{
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, _QWORD, _QWORD))(*(_QWORD*)v10 + 32i64))(
				v10,
				a2,
				0i64,
				0i64))
			{
				break;
			}
		}
		v9 = *(_QWORD*)(v9 + 24);
		if (!v9)
			return 0i64;
	}
	return v10;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;


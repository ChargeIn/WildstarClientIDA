//----- (00000001400CD300) ----------------------------------------------------
int* __fastcall sub_1400CD300(__int64 a1, int* a2)
{
	__int64* v2; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rax
	int v6; // ecx
	int* result; // rax
	__int64 v8; // rcx
	float* v9; // rax
	int v10; // ecx
	__int64 v11; // rdx
	__m128 v12; // xmm6
	__int128 v13; // [rsp+50h] [rbp-48h] BYREF
	__m128 v14; // [rsp+60h] [rbp-38h] BYREF
	__m128 v15; // [rsp+70h] [rbp-28h]

	v2 = *(__int64**)(a1 + 680);
	if (!v2)
		goto LABEL_8;
	v4 = v2[3];
	if (v4)
	{
		v5 = sub_1400CB3D0(v4, &v13);
		v6 = v5[2] - *v5;
		LODWORD(v5) = v5[3] - v5[1];
		*a2 = v6;
		a2[1] = (int)v5;
		return a2;
	}
	v8 = v2[1];
	if (v8)
	{
		v9 = sub_140141910(v8, (float*)&v13);
		v10 = (int)*v9;
		a2[1] = (int)v9[1];
		*a2 = v10;
		return a2;
	}
	v11 = *v2;
	if (*v2)
	{
		v15.m128_u64[0] = 1134559232i64;
		v13 = xmmword_140B7B240;
		v14.m128_u64[0] = 0i64;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v11,
			0i64,
			-1i64,
			&v14,
			1044,
			&v13,
			1,
			0i64);
		v12 = _mm_sub_ps(_mm_add_ps((__m128)xmmword_140B7B240, v15), v14);
		*a2 = (int)v12.m128_f32[0];
		a2[1] = (int)_mm_shuffle_ps(v12, v12, 85).m128_f32[0];
		return a2;
	}
	else
	{
	LABEL_8:
		result = a2;
		*(_QWORD*)a2 = 0i64;
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;


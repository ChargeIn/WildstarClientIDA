#include "../winhttp.h"

//----- (00000001402D6A30) ----------------------------------------------------
__int64 __fastcall sub_1402D6A30(__int64 a1, __m128* a2, _OWORD* a3)
{
	unsigned int v3; // r12d
	unsigned __int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rsi
	__m128 v10; // xmm1
	__m128 v11; // xmm1
	_OWORD* v13; // [rsp+28h] [rbp-E0h] BYREF
	int v14; // [rsp+30h] [rbp-D8h]
	__m128 v15; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v16; // [rsp+48h] [rbp-C0h]
	int v17; // [rsp+58h] [rbp-B0h]
	__m128 v18[7]; // [rsp+68h] [rbp-A0h] BYREF
	char v19; // [rsp+D8h] [rbp-30h]
	char v20; // [rsp+148h] [rbp+40h]
	char v21; // [rsp+1B8h] [rbp+B0h]
	char v22; // [rsp+228h] [rbp+120h]
	char v23; // [rsp+298h] [rbp+190h]
	void* v24; // [rsp+308h] [rbp+200h]
	__int64 v25; // [rsp+310h] [rbp+208h]
	__m128* (__fastcall * v26)(__m128*, __int64); // [rsp+318h] [rbp+210h]
	__int64* v27; // [rsp+320h] [rbp+218h]

	v3 = 0;
	v13 = a3;
	v14 = 0;
	*a3 = xmmword_140C78500;
	v6 = 0i64;
	a3[1] = xmmword_140C78510;
	v7 = *(_QWORD*)(a1 + 16);
	v24 = &unk_140AF05E0;
	v18[0].m128_i8[0] = 1;
	v19 = 1;
	v26 = sub_1402D69C0;
	v20 = 1;
	v27 = (__int64*)&v13;
	v21 = 1;
	v22 = 1;
	v23 = 1;
	v25 = 4i64;
	if (*(_DWORD*)(v7 + 80) / 3u)
	{
		v8 = 0i64;
		do
		{
			v9 = 3i64;
			do
			{
				v10 = *(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 72i64)
					+ 16i64 * *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64) + v8));
				v15 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), a2[1]),
							_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *a2)),
						_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), a2[2])),
					a2[3]);
				v11 = _mm_shuffle_ps(v15, v15, 255);
				v16 = _mm_sub_ps(_mm_shuffle_ps(v11, v11, 0), v15);
				v17 = _mm_movemask_ps(_mm_cmplt_ps(v15, (__m128)0i64)) | (16 * _mm_movemask_ps(_mm_cmplt_ps(v16, (__m128)0i64)));
				sub_1402D7630((__int64)v18, v18, &v15);
				v8 += 2i64;
				--v9;
			} while (v9);
			sub_1402D7820((__int64)v18, v18);
			++v6;
		} while (v6 < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 80i64) / 3u);
	}
	LOBYTE(v3) = v14 != 0;
	sub_1402D7820((__int64)v18, v18);
	return v3;
}
// 140C78500: using guessed type __int128 xmmword_140C78500;
// 140C78510: using guessed type __int128 xmmword_140C78510;


//----- (000000014052A510) ----------------------------------------------------
void __fastcall sub_14052A510(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v3; // rcx
	unsigned int v4; // ebx
	_DWORD* v5; // rdx
	__int64 v6; // rax
	__m128 v7; // xmm2
	__m128 v8; // xmm2
	__m128 v9; // xmm2
	__m128 v10; // xmm2
	_DWORD* v11; // rdx
	__m128 v12; // xmm2
	__m128 v13; // xmm2
	__m128 v14; // xmm6
	_DWORD* v15; // rdx
	int v16; // [rsp+80h] [rbp+20h]
	int v17; // [rsp+80h] [rbp+20h]
	int v18; // [rsp+88h] [rbp+28h]
	unsigned int v19; // [rsp+90h] [rbp+30h] BYREF

	v1 = (_QWORD*)(a1 + 1432);
	v3 = *(_QWORD*)(a1 + 1432);
	if (v3)
	{
		v4 = 0;
		if (*(_DWORD*)((*(__int64 (**)(void))(*(_QWORD*)v3 + 24i64))() + 8) < (unsigned int)(*(_DWORD*)(a1 + 1408) + 3))
		{
			if (*v1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
				*v1 = 0i64;
			}
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				2i64,
				(unsigned int)(*(_DWORD*)(a1 + 1408) + 3),
				1i64,
				0,
				1,
				0,
				0,
				0,
				v1);
		}
		v5 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned int*, __int64))(*(_QWORD*)*v1 + 72i64))(
			*v1,
			0i64,
			&v19,
			2i64);
		if (v5)
		{
			if (*(_DWORD*)(a1 + 1408))
			{
				do
				{
					v6 = v4++;
					v7 = _mm_add_ps(
						(__m128)xmmword_140B7AC50,
						_mm_mul_ps(
							_mm_min_ps(
								_mm_max_ps((__m128)0i64, *(__m128*)(*(_QWORD*)(a1 + 1576) + 96 * v6 + 16)),
								(__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470));
					BYTE2(v16) = (int)v7.m128_f32[0];
					BYTE1(v16) = (int)_mm_shuffle_ps(v7, v7, 85).m128_f32[0];
					LOBYTE(v16) = (int)_mm_shuffle_ps(v7, v7, 170).m128_f32[0];
					HIBYTE(v16) = (int)_mm_shuffle_ps(v7, v7, 255).m128_f32[0];
					*v5 = v16;
					v8 = _mm_add_ps(
						(__m128)xmmword_140B7AC50,
						_mm_mul_ps(
							_mm_min_ps(
								_mm_max_ps((__m128)0i64, *(__m128*)(96 * v6 + *(_QWORD*)(a1 + 1576))),
								(__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470));
					BYTE2(v18) = (int)v8.m128_f32[0];
					BYTE1(v18) = (int)_mm_shuffle_ps(v8, v8, 85).m128_f32[0];
					LOBYTE(v18) = (int)_mm_shuffle_ps(v8, v8, 170).m128_f32[0];
					HIBYTE(v18) = (int)_mm_shuffle_ps(v8, v8, 255).m128_f32[0];
					v5[1] = v18;
					v5 = (_DWORD*)((char*)v5 + v19);
				} while (v4 < *(_DWORD*)(a1 + 1408));
			}
			v9 = _mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AFA0), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50);
			BYTE2(v17) = (int)v9.m128_f32[0];
			BYTE1(v17) = (int)_mm_shuffle_ps(v9, v9, 85).m128_f32[0];
			LOBYTE(v17) = (int)_mm_shuffle_ps(v9, v9, 170).m128_f32[0];
			HIBYTE(v17) = (int)_mm_shuffle_ps(v9, v9, 255).m128_f32[0];
			*v5 = v17;
			v10 = _mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7B230), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50);
			BYTE2(v17) = (int)v10.m128_f32[0];
			BYTE1(v17) = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
			LOBYTE(v17) = (int)_mm_shuffle_ps(v10, v10, 170).m128_f32[0];
			HIBYTE(v17) = (int)_mm_shuffle_ps(v10, v10, 255).m128_f32[0];
			v5[1] = v17;
			v11 = (_DWORD*)((char*)v5 + v19);
			v12 = _mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AFC0), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50);
			BYTE2(v17) = (int)v12.m128_f32[0];
			BYTE1(v17) = (int)_mm_shuffle_ps(v12, v12, 85).m128_f32[0];
			LOBYTE(v17) = (int)_mm_shuffle_ps(v12, v12, 170).m128_f32[0];
			HIBYTE(v17) = (int)_mm_shuffle_ps(v12, v12, 255).m128_f32[0];
			*v11 = v17;
			v13 = _mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AD00), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50);
			BYTE2(v17) = (int)v13.m128_f32[0];
			BYTE1(v17) = (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0];
			LOBYTE(v17) = (int)_mm_shuffle_ps(v13, v13, 170).m128_f32[0];
			HIBYTE(v17) = (int)_mm_shuffle_ps(v13, v13, 255).m128_f32[0];
			v11[1] = v17;
			v14 = _mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)0i64), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470));
			v15 = (_DWORD*)((char*)v11 + v19);
			BYTE2(v17) = (int)v14.m128_f32[0];
			BYTE1(v17) = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
			LOBYTE(v17) = (int)_mm_shuffle_ps(v14, v14, 170).m128_f32[0];
			HIBYTE(v17) = (int)_mm_shuffle_ps(v14, v14, 255).m128_f32[0];
			*v15 = v17;
			v15[1] = v17;
			(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v1 + 80i64))(*v1, 0i64);
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7AFA0: using guessed type __int128 xmmword_140B7AFA0;
// 140B7AFC0: using guessed type __int128 xmmword_140B7AFC0;
// 140B7B230: using guessed type __int128 xmmword_140B7B230;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C65670: using guessed type __int64 qword_140C65670;


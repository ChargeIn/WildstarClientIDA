//----- (0000000140141F10) ----------------------------------------------------
__int64 __fastcall sub_140141F10(__int64 a1, __m128* a2)
{
	__m128 v2; // xmm1
	__int64 result; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	int v8; // r12d
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	unsigned int v11; // ebp
	int v12; // r14d
	unsigned int v13; // ebx
	__int64 v14; // rdx
	unsigned int v15; // ecx
	__int64 v16; // rsi
	unsigned int v17; // ebx
	unsigned int* v18; // rbx
	unsigned int v19; // edx
	__int64 v20; // r8
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // ecx
	__int64 v24; // r8
	__int64 v25; // rax
	__int64 v26; // rdx
	int v27; // ecx
	__int64 v28; // rax
	unsigned __int64 v29; // rax
	__int64 v30; // r14
	unsigned __int64 v31; // rbp
	unsigned __int64 v32; // rbx
	int* v33; // rax
	__int64 v34; // rcx
	int v35; // [rsp+58h] [rbp+10h] BYREF

	v2 = *a2;
	if (!_mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_140B7B240, *a2)))
		return 1i64;
	result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_140C777D0, v2));
	if ((_DWORD)result)
	{
		v6 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, v2), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v7 = _mm_packus_epi16(v6, v6);
		v8 = _mm_cvtsi128_si32(_mm_packus_epi16(v7, v7));
		v35 = v8;
		v9 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v35);
		v10 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v9 % *(_QWORD*)(a1 + 8)));
		if (!v10)
			goto LABEL_8;
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 32))(&v35, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				goto LABEL_8;
		}
		v18 = (unsigned int*)v10 + 5;
		if (v18)
		{
			v11 = *v18;
			v12 = 1;
			v19 = *v18;
			if (*v18 != -1)
			{
				v20 = *(_QWORD*)(a1 + 40);
				while (1)
				{
					v21 = 32i64 * v19;
					if (!_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(v21 + v20), *a2)))
						break;
					v19 = *(_DWORD*)(v21 + v20 + 20);
					if (v19 == -1)
						goto LABEL_9;
				}
				v22 = 32i64 * v19;
				v23 = *(_DWORD*)(v22 + v20 + 16);
				if (v23 != -1)
					*(_DWORD*)(v22 + v20 + 16) = v23 + 1;
				return v19;
			}
		}
		else
		{
		LABEL_8:
			v11 = v35;
			v12 = 0;
		}
	LABEL_9:
		v13 = *(_DWORD*)(a1 + 48);
		if (*(_DWORD*)(a1 + 56) < v13)
		{
			v14 = *(_QWORD*)(a1 + 40);
			do
			{
				v15 = *(_DWORD*)(a1 + 56);
				if (!*(_DWORD*)(32i64 * v15 + v14 + 16))
					break;
				*(_DWORD*)(a1 + 56) = v15 + 1;
			} while (v15 + 1 < v13);
		}
		v16 = *(unsigned int*)(a1 + 56);
		if ((unsigned int)v16 < v13)
		{
			*(_DWORD*)(a1 + 56) = v16 + 1;
		}
		else
		{
			v17 = v13 + 1;
			sub_1401448A0((__int64*)(a1 + 40), v17);
			*(_DWORD*)(a1 + 56) = v17;
		}
		v24 = 32 * v16;
		*(__m128*)(v24 + *(_QWORD*)(a1 + 40)) = *a2;
		*(_DWORD*)(v24 + *(_QWORD*)(a1 + 40) + 16) = 1;
		v25 = *(_QWORD*)(a1 + 40);
		if (v12)
		{
			v26 = 32i64 * v11;
			v27 = *(_DWORD*)(v26 + v25 + 20);
			*(_DWORD*)(v26 + v25 + 20) = v16;
			*(_DWORD*)(v24 + *(_QWORD*)(a1 + 40) + 20) = v27;
		}
		else
		{
			*(_DWORD*)(v24 + v25 + 20) = -1;
			v28 = *(_QWORD*)(a1 + 8);
			v35 = v8;
			if (*(_QWORD*)a1 == v28)
				sub_1400290D0(a1);
			v29 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v35);
			v30 = *(_QWORD*)(a1 + 16);
			v31 = v29;
			v32 = v29 % *(_QWORD*)(a1 + 8);
			v33 = sub_14018B280(24i64, 0);
			if (v33)
			{
				v34 = *(_QWORD*)(v30 + 8 * v32);
				*(_QWORD*)v33 = v31;
				*((_QWORD*)v33 + 1) = v34;
				LODWORD(v34) = v35;
				v33[5] = v16;
				v33[4] = v34;
			}
			*(_QWORD*)(v30 + 8 * v32) = v33;
			++* (_QWORD*)a1;
		}
		return (unsigned int)v16;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;


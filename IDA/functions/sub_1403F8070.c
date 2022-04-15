//----- (00000001403F8070) ----------------------------------------------------
__int64 __fastcall sub_1403F8070(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	unsigned int* a4,
	float* a5,
	unsigned int* a6)
{
	__m128 v8; // xmm7
	unsigned int* v9; // rdi
	__int64 v10; // r12
	unsigned int v11; // ebx
	unsigned int* v12; // rax
	unsigned int* v13; // rbx
	__m128 v14; // xmm0
	__m128 v15; // xmm2
	__m128 v16; // xmm6
	int v17; // eax
	__m128 v18; // xmm6
	unsigned int v19; // esi
	__m128 v20; // xmm2
	__m128 v21; // xmm3
	float v22; // xmm3_4
	unsigned int v23; // eax
	__m128 v24; // xmm6
	__m128 v25; // xmm2
	float v26; // xmm2_4
	unsigned int v27; // eax
	__int64 result; // rax
	__m128 v29; // [rsp+20h] [rbp-58h] BYREF

	v8 = *(__m128*)(*(_QWORD*)(a1 + 120) + 4576i64);
	if (a3)
	{
		v9 = (unsigned int*)(a2 + 4);
		v10 = a3;
		while (1)
		{
			v11 = *v9;
			if (qword_140C63840)
				break;
			if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
			{
				v12 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
					qword_140C65388,
					v11);
				goto LABEL_8;
			}
		LABEL_17:
			v9 += 2;
			if (!--v10)
				goto LABEL_18;
		}
		v12 = (unsigned int*)qword_140C63840(off_140A6E228, v11, qword_140C63858);
	LABEL_8:
		v13 = v12;
		if (v12)
		{
			v14 = (__m128)v12[5];
			v15 = (__m128)v12[4];
			v16 = (__m128)v12[3];
			v17 = *(_DWORD*)(a1 + 26444);
			v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v14), _mm_unpacklo_ps(v15, (__m128)0i64));
			v29 = v18;
			if ((v17 & v13[12]) != 0)
			{
				v19 = *(v9 - 1);
				if (v13[10] == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(a1 + 72) + 8i64))(a1 + 72))
				{
					v24 = _mm_sub_ps(v18, v8);
					v25 = _mm_mul_ps(v24, v24);
					v26 = (float)((float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
						+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0])
						- (float)(*((float*)v13 + 1) * *((float*)v13 + 1));
					if (v26 < *a5)
					{
						v27 = *v9;
						*a5 = v26;
						*a6 = 0;
						*a4 = v27;
					}
				}
				else if (v19)
				{
					if ((unsigned int)sub_14043E6D0(a1, v19, *v9, v29.m128_f32))
					{
						v20 = _mm_sub_ps(v29, v8);
						v21 = _mm_mul_ps(v20, v20);
						v22 = (float)((float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
							+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0])
							- (float)(*((float*)v13 + 1) * *((float*)v13 + 1));
						if (v22 < *a5)
						{
							v23 = *v9;
							*a5 = v22;
							*a6 = v19;
							*a4 = v23;
						}
					}
				}
			}
		}
		goto LABEL_17;
	}
LABEL_18:
	result = 2147500037i64;
	if (*a4)
		return 0i64;
	return result;
}
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;


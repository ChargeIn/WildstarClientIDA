//----- (00000001402D3720) ----------------------------------------------------
void __fastcall sub_1402D3720(_QWORD* a1, _QWORD* a2)
{
	__int64 v3; // rcx
	_QWORD* v5; // rsi
	__int64 v6; // r10
	int v7; // r13d
	unsigned __int64 v8; // rbp
	unsigned __int64 v9; // rdx
	__int64 v10; // r12
	__int64 v11; // r14
	__int64 v12; // rbx
	__int64 v13; // rdi
	__int64 v14; // rax
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	__int64 v18; // rdx
	int v19; // eax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rdx
	_QWORD* v23; // r9
	__int64 v24; // rax
	int v25[4]; // [rsp+20h] [rbp-58h] BYREF
	BOOL v26; // [rsp+80h] [rbp+8h]
	_BOOL8 v27; // [rsp+88h] [rbp+10h]

	v3 = *a1;
	v25[0] = -1;
	if (v3)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v25))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v5 = (_QWORD*)a2[41];
	if (v5 && v5[11] && v5[12])
	{
		v6 = qword_140C657F0;
		v7 = 4;
		if ((*(_DWORD*)(qword_140C657F0 + 1208) & 4) == 0)
			v7 = 2;
		v8 = 0i64;
		v27 = (*(_DWORD*)(qword_140C657F0 + 1208) & 4) == 0;
		v26 = (*(_DWORD*)(qword_140C657F0 + 1208) & 4) == 0;
		v9 = (v5[15] - v5[14]) / 28i64;
		if (v9)
		{
			v10 = 0i64;
			v11 = 0i64;
			while (1)
			{
				v12 = v11 + v5[14];
				if (*(_BYTE*)(v12 + 20) != 0xFF && ((*(_DWORD*)v12 & 6) == 0 || (*(_DWORD*)v12 & v7) != 0))
					break;
			LABEL_31:
				++v8;
				v11 += 28i64;
				v10 += 64i64;
				v9 = (v5[15] - v5[14]) / 28i64;
				if (v8 >= v9)
					return;
			}
			v13 = v10 + a2[42];
			*(_QWORD*)(v13 + 24) = v6 + 1360;
			*(_DWORD*)(v13 + 12) = 0;
			v14 = (*(__int64(__fastcall**)(_QWORD*, unsigned __int64))(*a2 + 40i64))(a2, v9);
			v6 = qword_140C657F0;
			v15 = *(__m128*)(v14 + 48);
			v16 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), *(__m128*)(qword_140C657F0 + 192)),
						_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), *(__m128*)(qword_140C657F0 + 176))),
					_mm_mul_ps(_mm_shuffle_ps(v15, v15, 170), *(__m128*)(qword_140C657F0 + 208))),
				*(__m128*)(qword_140C657F0 + 224));
			*(_QWORD*)(v13 + 48) = a2;
			*(_QWORD*)(v13 + 56) = v12;
			v17 = _mm_mul_ps(v16, v16);
			*(float*)(v13 + 16) = fsqrt(
				(float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
				+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0]);
			v18 = *(_QWORD*)(192i64 * *(unsigned __int8*)(v12 + 20) + a2[38] + 8);
			if ((*(_BYTE*)(v18 + 4) & 2) == 0)
			{
				v19 = *(_DWORD*)(v18 + 12);
				if (v19 >= 0)
				{
					if (v19 <= 1)
					{
						v21 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 16i64))(a2);
						if ((*(float(__fastcall**)(__int64))(*(_QWORD*)v21 + 136i64))(v21) < 1.0 || (v26 & *(_DWORD*)v12) != 0)
						{
							v6 = qword_140C657F0;
							v20 = 1i64;
						}
						else
						{
							v6 = qword_140C657F0;
							v20 = 0i64;
						}
					LABEL_27:
						v22 = *(_QWORD*)(v6 + 1200);
						v23 = (_QWORD*)(v22 + 8 * v20);
						if (!*(_QWORD*)(v13 + 32))
						{
							*(_QWORD*)(v13 + 32) = v23;
							*(_QWORD*)(v13 + 40) = *v23;
							*v23 = v13;
							v24 = *(_QWORD*)(v13 + 40);
							if (v24)
								*(_QWORD*)(v24 + 32) = v13 + 40;
						}
						++* (_QWORD*)(v22 + 8 * v20 + 64);
						goto LABEL_31;
					}
					if (v19 == 2)
					{
						v20 = 1i64;
						goto LABEL_27;
					}
					if (v19 == 7)
					{
						v20 = v27;
						goto LABEL_27;
					}
				}
			}
			v20 = 5i64;
			goto LABEL_27;
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 1402D3720: using guessed type int var_58[4];


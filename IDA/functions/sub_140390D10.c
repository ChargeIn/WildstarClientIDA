//----- (0000000140390D10) ----------------------------------------------------
__int64 __fastcall sub_140390D10(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rbx
	unsigned int v5; // ebp
	__int64 v6; // rdi
	__int64 v7; // rsi
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	_DWORD* v10; // rbx
	int* v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	int** v14; // rdx
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rax
	int v18; // eax
	__int64 v20; // [rsp+30h] [rbp-48h]
	_QWORD* v21; // [rsp+38h] [rbp-40h]

	*(_DWORD*)(a1 + 168) = 1;
	v4 = a1;
	v5 = 0;
	v20 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	if (v20)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(v4 + 160);
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v6 + v7) + 96i64))(*(_QWORD*)(v6 + v7), a3))
			{
				v8 = *(__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + v7) + 24i64))(*(_QWORD*)(v6 + v7));
				v9 = _mm_mul_ps(*a2, v8);
				if ((float)((float)((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
					+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0])
					+ _mm_shuffle_ps(v8, v8, 255).m128_f32[0]) <= -0.0000099999997)
				{
					v10 = *(_DWORD**)(v6 + v7 + 16);
					if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v10 + 24i64))(v10))
					{
						v11 = sub_14018B280(80i64, 0);
						if (v11)
						{
							v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + v7) + 56i64))(*(_QWORD*)(v6 + v7));
							v13 = *(_QWORD*)(a4 + 16);
							*((_QWORD*)v11 + 4) = 0i64;
							*((_QWORD*)v11 + 5) = 0i64;
							*((_QWORD*)v11 + 6) = 0i64;
							*((_QWORD*)v11 + 7) = 0i64;
							*((_QWORD*)v11 + 8) = 0i64;
							*((_QWORD*)v11 + 9) = 0i64;
							*((_QWORD*)v11 + 3) = a4;
							v14 = (int**)(v13 + 224);
							*(_QWORD*)v11 = 0i64;
							*((_QWORD*)v11 + 1) = v12;
							*((_QWORD*)v11 + 2) = v13;
							if (!*((_QWORD*)v11 + 6))
							{
								*((_QWORD*)v11 + 6) = v14;
								*((_QWORD*)v11 + 7) = *v14;
								*v14 = v11;
								v15 = *((_QWORD*)v11 + 7);
								if (v15)
									*(_QWORD*)(v15 + 48) = v11 + 14;
							}
							*(_DWORD*)(*((_QWORD*)v11 + 2) + 12i64) = 0;
						}
						v5 = 1;
					}
					else
					{
						v16 = sub_14018B280(80i64, 0);
						v21 = v16;
						if (v16)
						{
							v17 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + v7) + 56i64))(*(_QWORD*)(v6 + v7));
							v16 = sub_140390210(v21, (__int64)v10, v17, *(_QWORD*)(a4 + 16), a4);
						}
						if (v10[42])
							v18 = 0;
						else
							v18 = sub_140390D10(v10, a2, a3, v16);
						v5 |= v18;
					}
					v4 = a1;
				}
			}
			v6 += 24i64;
			--v20;
		} while (v20);
		*(_DWORD*)(v4 + 168) = 0;
		return v5;
	}
	else
	{
		*(_DWORD*)(v4 + 168) = 0;
		return 0i64;
	}
}


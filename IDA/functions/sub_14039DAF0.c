//----- (000000014039DAF0) ----------------------------------------------------
void __fastcall sub_14039DAF0(__int64 a1)
{
	__int64 v1; // r9
	__int64 v3; // r9
	int v4; // r10d
	__int64 v5; // rax
	__m128* v6; // rcx
	__m128 v7; // xmm2
	__m128* v8; // rax
	__m128 v9; // xmm2
	__m128 v10; // xmm3
	float v11; // xmm3_4
	__m128 v12; // xmm1
	__m128 v13; // xmm0
	int* v14; // rax
	int v15; // ecx
	int* v16; // rsi
	__int64 v17; // rdi
	int v18; // ebx
	unsigned int v19; // esi
	__int64 i; // rbx
	int v21[4]; // [rsp+30h] [rbp-48h] BYREF
	__m128 v22; // [rsp+40h] [rbp-38h] BYREF
	int* v23; // [rsp+50h] [rbp-28h]
	int v24; // [rsp+80h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 25744);
	if (v1)
	{
		if (!*(_DWORD*)(v1 + 592) && !(unsigned int)sub_14045E6D0(*(_QWORD*)(a1 + 25744)))
		{
			if (*(_DWORD*)(v3 + 3408))
			{
				v5 = sub_1403D90D0(qword_140C65898, v4);
				if (v5)
				{
					v6 = *(__m128**)(a1 + 25744);
					if ((__m128*)v5 != v6)
					{
						v7 = *(__m128*)(v5 + 4576);
						v8 = (__m128*)v6[240].m128_u64[0];
						if (v8)
							v7 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v8[288]),
										_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v8[287])),
									_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v8[289])),
								v8[290]);
						v9 = _mm_sub_ps(v7, v6[247]);
						v10 = _mm_mul_ps(v9, v9);
						v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
							+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
						if (v11 >= *(float*)&dword_140C44798)
						{
							v12 = 0i64;
							v12.m128_f32[0] = 1.0 / fsqrt(v11);
							v13 = v12;
							v13.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * v11) * v12.m128_f32[0]) - 3.0)
								* (float)(v12.m128_f32[0] * -0.5);
							v22 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v9);
							sub_1401B3170((__int64)v21, v22.m128_f32);
							*(unsigned __int64*)((char*)v22.m128_u64 + 4) = 8i64;
							v14 = sub_14018C320(0i64, 0x240ui64, 8u);
							v15 = dword_140C636A8;
							v13.m128_i32[0] = v21[0];
							*v14 = 14;
							*(_QWORD*)(v14 + 3) = 0i64;
							v16 = v14;
							v14[2] = v13.m128_i32[0];
							v14[5] = 0;
							v17 = *(_QWORD*)(a1 + 25744);
							v23 = v14;
							v22.m128_i32[0] = 1;
							v24 = v15;
							if (*(_DWORD*)(v17 + 3408) || *(_DWORD*)(v17 + 128) == 18)
							{
								v18 = 0;
								while ((int)sub_1405B4AB0(v17, (unsigned int*)&v24, (unsigned int*)&v16[18 * v18], 0i64, 0i64) >= 0)
								{
									if (++v18)
									{
										v19 = v24;
										sub_1405B4F50(v17, v24);
										sub_1405B5070(v17, v19);
										sub_1405B82A0(v17, v19, *(double*)v9.m128_u64);
										for (i = *(_QWORD*)(v17 + 3848); i; i = *(_QWORD*)(i + 3864))
											sub_1405B4EF0(i, v19, *(double*)v9.m128_u64);
										break;
									}
								}
							}
							sub_14057A190(a1, (unsigned int*)&v22);
							sub_14079A4F0((__int64)&v22);
							sub_14018B900((__int64)v23, 0);
						}
					}
				}
			}
		}
	}
}
// 14039DB2A: variable 'v3' is possibly undefined
// 14039DB41: variable 'v4' is possibly undefined
// 140C44798: using guessed type int dword_140C44798;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14039DAF0: using guessed type int var_48[4];


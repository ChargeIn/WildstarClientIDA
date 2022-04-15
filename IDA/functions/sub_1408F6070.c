//----- (00000001408F6070) ----------------------------------------------------
void** __fastcall sub_1408F6070(__int64 a1, __int64 a2, __m128* a3)
{
	void** result; // rax
	unsigned int v4; // ebp
	__int64 v5; // r15
	unsigned int v8; // r12d
	unsigned int v10; // ebx
	__int64 v11; // r9
	__int64 v12; // r10
	__int64 v13; // rax
	__int64 v14; // r11
	unsigned int* v15; // rdx
	__m128 v16; // xmm3
	__m128 v17; // xmm6
	__m128 v18; // xmm7
	__m128 v19; // xmm8
	__m128 v20; // xmm4
	__m128 v21; // xmm5
	__m128* v22; // rcx
	__int64 v23; // r8
	__m128 v24; // xmm0
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	__m128 v27; // xmm0
	__m128* v28; // rdx
	__int64 v29; // r8
	__int64 v30; // rax
	__m128 v31; // xmm1
	__m128 v32; // xmm1
	void* retaddr; // [rsp+E8h] [rbp+0h] BYREF

	result = &retaddr;
	v4 = *(unsigned __int16*)(a2 + 18);
	v5 = 0i64;
	v8 = (unsigned int)(*(_DWORD*)(a1 + 196) + 3) >> 2;
	if (*(_WORD*)(a2 + 18))
	{
		result = (void**)(a1 + 104);
		do
		{
			v10 = 1024;
			if (v4 < 0x400)
				v10 = v4;
			sub_1408F6890((__int64)result, a3->m128_f32, v10);
			sub_1407E4830((int*)&a3[256], 0i64, 0x4000ui64);
			if (v8)
			{
				v11 = 0i64;
				v12 = v8;
				v13 = 0i64;
				do
				{
					v14 = *(_QWORD*)(a1 + 32);
					v15 = (unsigned int*)&a3[256];
					v16 = *(__m128*)(v11 + v14);
					v17 = *(__m128*)(v11 + v14 + 16);
					v18 = *(__m128*)(v11 + v14 + 48);
					v19 = *(__m128*)(v11 + v14 + 64);
					v20 = *(__m128*)(v11 + v14 + 80);
					v21 = *(__m128*)(v11 + v14 + 96);
					if (v10)
					{
						v22 = a3;
						v23 = v10;
						do
						{
							v24 = (__m128)v22->m128_u32[0];
							v16 = _mm_add_ps(v16, v17);
							v15 += 4;
							v22 = (__m128*)((char*)v22 + 4);
							v25 = _mm_mul_ps(v21, v19);
							v26 = _mm_add_ps(_mm_mul_ps(v20, v18), _mm_shuffle_ps(v24, v24, 0));
							v27 = v21;
							v21 = v20;
							v20 = _mm_add_ps(v26, v25);
							*((__m128*)v15 - 1) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v20, v27), v16), *((__m128*)v15 - 1));
							--v23;
						} while (v23);
					}
					*(__m128*)(v13 + v14 + 80) = v20;
					v13 += 112i64;
					v11 += 112i64;
					*(__m128*)(v13 + *(_QWORD*)(a1 + 32) - 16) = v21;
					*(__m128*)(v13 + *(_QWORD*)(a1 + 32) - 112) = v16;
					--v12;
				} while (v12);
			}
			v28 = a3 + 256;
			v29 = *(_QWORD*)a2 + 4 * v5;
			if (v10)
			{
				v30 = v10;
				do
				{
					v31 = *v28;
					v29 += 4i64;
					++v28;
					v32 = _mm_add_ps(v31, _mm_movehl_ps(v31, v31));
					*(float*)(v29 - 4) = _mm_shuffle_ps(v32, v32, 85).m128_f32[0] + v32.m128_f32[0];
					--v30;
				} while (v30);
			}
			v5 = v10 + (unsigned int)v5;
			result = (void**)(a1 + 104);
			v4 -= v10;
		} while (v4);
	}
	return result;
}


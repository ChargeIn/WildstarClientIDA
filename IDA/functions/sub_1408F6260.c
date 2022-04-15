#include "../winhttp.h"

//----- (00000001408F6260) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408F6260(__int64 a1, __int64* a2, __m128* a3)
{
	unsigned __int64 result; // rax
	unsigned int v4; // ebp
	__int64 v5; // r15
	unsigned int v8; // r12d
	__int64 v10; // rcx
	unsigned int v11; // ebx
	__int64 v12; // r8
	__int64 v13; // r10
	__int64 v14; // rax
	__int64 v15; // r11
	unsigned int* v16; // rcx
	__m128 v17; // xmm3
	__m128 v18; // xmm6
	__m128 v19; // xmm7
	__m128 v20; // xmm8
	__m128 v21; // xmm4
	__m128 v22; // xmm5
	__m128 v23; // xmm9
	__m128 v24; // xmm10
	__m128* v25; // rdx
	__int64 v26; // r9
	__m128 v27; // xmm0
	__m128 v28; // xmm1
	__m128 v29; // xmm2
	__m128 v30; // xmm0
	__m128 v31; // xmm0
	__m128 v32; // xmm2
	__m128 v33; // xmm0
	__int64 v34; // r9
	__m128* v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rdx
	__m128 v38; // xmm1
	__m128 v39; // xmm1
	__m128* v40; // rcx
	__int64 v41; // rdx
	__m128 v42; // xmm1
	__m128 v43; // xmm1
	void* retaddr; // [rsp+128h] [rbp+0h] BYREF

	result = (unsigned __int64)&retaddr;
	v4 = *((unsigned __int16*)a2 + 9);
	v5 = 0i64;
	v8 = (unsigned int)(*(_DWORD*)(a1 + 196) + 3) >> 2;
	if (*((_WORD*)a2 + 9))
	{
		v10 = a1 + 104;
		do
		{
			v11 = 1024;
			if (v4 < 0x400)
				v11 = v4;
			sub_1408F6890(v10, a3->m128_f32, v11);
			sub_1407E4830((int*)&a3[256], 0i64, 0x8000ui64);
			if (v8)
			{
				v12 = 0i64;
				v13 = v8;
				v14 = 0i64;
				do
				{
					v15 = *(_QWORD*)(a1 + 32);
					v16 = (unsigned int*)&a3[256];
					v17 = *(__m128*)(v12 + v15);
					v18 = *(__m128*)(v12 + v15 + 16);
					v19 = *(__m128*)(v12 + v15 + 48);
					v20 = *(__m128*)(v12 + v15 + 64);
					v21 = *(__m128*)(v12 + v15 + 80);
					v22 = *(__m128*)(v12 + v15 + 96);
					v23 = *(__m128*)(v12 + v15 + 112);
					v24 = *(__m128*)(v12 + v15 + 128);
					if (v11)
					{
						v25 = a3;
						v26 = v11;
						do
						{
							v27 = (__m128)v25->m128_u32[0];
							v17 = _mm_add_ps(v17, v18);
							v16 += 8;
							v25 = (__m128*)((char*)v25 + 4);
							v28 = _mm_mul_ps(v22, v20);
							v29 = _mm_add_ps(_mm_mul_ps(v21, v19), _mm_shuffle_ps(v27, v27, 0));
							v30 = v22;
							v22 = v21;
							v21 = _mm_add_ps(v29, v28);
							v31 = _mm_mul_ps(_mm_sub_ps(v21, v30), v17);
							v32 = _mm_mul_ps(v31, v23);
							v33 = _mm_add_ps(_mm_mul_ps(v31, v24), *((__m128*)v16 - 1));
							*((__m128*)v16 - 2) = _mm_add_ps(v32, *((__m128*)v16 - 2));
							*((__m128*)v16 - 1) = v33;
							--v26;
						} while (v26);
					}
					*(__m128*)(v14 + v15 + 80) = v21;
					v14 += 144i64;
					v12 += 144i64;
					*(__m128*)(v14 + *(_QWORD*)(a1 + 32) - 48) = v22;
					*(__m128*)(v14 + *(_QWORD*)(a1 + 32) - 144) = v17;
					--v13;
				} while (v13);
			}
			v34 = *a2;
			v35 = a3 + 256;
			v36 = *a2 + 4 * v5;
			if (v11)
			{
				v37 = v11;
				do
				{
					v38 = *v35;
					v36 += 4i64;
					v35 += 2;
					v39 = _mm_add_ps(v38, _mm_movehl_ps(v38, v38));
					*(float*)(v36 - 4) = _mm_shuffle_ps(v39, v39, 85).m128_f32[0] + v39.m128_f32[0];
					--v37;
				} while (v37);
			}
			v40 = a3 + 257;
			result = (unsigned int)v5 + (unsigned __int64)*((unsigned __int16*)a2 + 8);
			v41 = v34 + 4 * result;
			if (v11)
			{
				result = v11;
				do
				{
					v42 = *v40;
					v41 += 4i64;
					v40 += 2;
					v43 = _mm_add_ps(v42, _mm_movehl_ps(v42, v42));
					*(float*)(v41 - 4) = _mm_shuffle_ps(v43, v43, 85).m128_f32[0] + v43.m128_f32[0];
					--result;
				} while (result);
			}
			v5 = v11 + (unsigned int)v5;
			v10 = a1 + 104;
			v4 -= v11;
		} while (v4);
	}
	return result;
}


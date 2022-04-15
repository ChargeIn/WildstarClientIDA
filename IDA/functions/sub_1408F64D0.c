//----- (00000001408F64D0) ----------------------------------------------------
void** __fastcall sub_1408F64D0(__int64 a1, __int64 a2, __m128* a3)
{
	void** result; // rax
	unsigned int v4; // ebx
	unsigned int v5; // esi
	__int64 v7; // r15
	unsigned int v8; // ebp
	unsigned int v10; // edi
	__int64 v11; // rsi
	__int64 v12; // r15
	__int64 v13; // rbx
	__int64 v14; // rbp
	__int128* v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int128 v21; // xmm1
	__int128 v22; // xmm0
	__int128 v23; // xmm1
	__int128 v24; // xmm0
	__int128 v25; // xmm1
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__m128 v28; // xmm3
	__m128 v29; // xmm6
	__m128 v30; // xmm7
	__m128 v31; // xmm8
	__m128 v32; // xmm4
	__m128 v33; // xmm5
	__m128 v34; // xmm9
	__m128 v35; // xmm10
	__m128 v36; // xmm11
	__m128 v37; // xmm12
	unsigned int* v38; // rax
	__m128* v39; // rcx
	__int64 v40; // rdx
	__m128 v41; // xmm0
	__m128 v42; // xmm1
	__m128 v43; // xmm2
	__m128 v44; // xmm0
	__m128 v45; // xmm2
	__m128 v46; // xmm1
	__m128 v47; // xmm0
	__m128* v48; // r8
	__int64 v49; // r10
	__int64 v50; // r9
	__int64 v51; // r11
	__m128* v52; // rax
	__int64 v53; // rcx
	__int64 v54; // rdx
	__m128 v55; // xmm1
	__m128 v56; // xmm1
	__int128 v57[11]; // [rsp+20h] [rbp-168h] BYREF
	void* retaddr; // [rsp+188h] [rbp+0h] BYREF
	unsigned int v59; // [rsp+190h] [rbp+8h]
	unsigned int v61; // [rsp+1A0h] [rbp+18h]
	unsigned int v62; // [rsp+1A8h] [rbp+20h]

	result = &retaddr;
	v4 = *(unsigned __int16*)(a2 + 18);
	v5 = 0;
	v7 = a2;
	v8 = (unsigned int)(*(_DWORD*)(a1 + 196) + 3) >> 2;
	v59 = 0;
	v62 = v8;
	v61 = v4;
	if (*(_WORD*)(a2 + 18))
	{
		result = (void**)(a1 + 104);
		do
		{
			v10 = 1024;
			if (v4 < 0x400)
				v10 = v4;
			sub_1408F6890((__int64)result, a3->m128_f32, v10);
			sub_1407E4830((int*)&a3[256], 0i64, 0x10000ui64);
			if (v8)
			{
				v11 = 0i64;
				v12 = v8;
				v13 = 0i64;
				do
				{
					v14 = *(_QWORD*)(a1 + 32);
					v15 = v57;
					v16 = v11 + v14;
					if ((((unsigned __int8)v57 | (unsigned __int8)(v11 + v14)) & 0xF) != 0)
					{
						sub_1407DB590((int*)v57, (int*)v16, 0xB0ui64);
					}
					else
					{
						v17 = 1i64;
						do
						{
							v18 = *(_OWORD*)v16;
							v19 = *(_OWORD*)(v16 + 16);
							v15 += 8;
							v16 += 128i64;
							*(v15 - 8) = v18;
							v20 = *(_OWORD*)(v16 - 96);
							*(v15 - 7) = v19;
							v21 = *(_OWORD*)(v16 - 80);
							*(v15 - 6) = v20;
							v22 = *(_OWORD*)(v16 - 64);
							*(v15 - 5) = v21;
							v23 = *(_OWORD*)(v16 - 48);
							*(v15 - 4) = v22;
							v24 = *(_OWORD*)(v16 - 32);
							*(v15 - 3) = v23;
							v25 = *(_OWORD*)(v16 - 16);
							*(v15 - 2) = v24;
							*(v15 - 1) = v25;
							--v17;
						} while (v17);
						v26 = *(_OWORD*)(v16 + 16);
						*v15 = *(_OWORD*)v16;
						v27 = *(_OWORD*)(v16 + 32);
						v15[1] = v26;
						v15[2] = v27;
					}
					v28 = (__m128)v57[0];
					v29 = (__m128)v57[1];
					v30 = (__m128)v57[3];
					v31 = (__m128)v57[4];
					v32 = (__m128)v57[5];
					v33 = (__m128)v57[6];
					v34 = (__m128)v57[7];
					v35 = (__m128)v57[8];
					v36 = (__m128)v57[9];
					v37 = (__m128)v57[10];
					if (v10)
					{
						v38 = (unsigned int*)&a3[258];
						v39 = a3;
						v40 = v10;
						do
						{
							v41 = (__m128)v39->m128_u32[0];
							v28 = _mm_add_ps(v28, v29);
							v38 += 16;
							v39 = (__m128*)((char*)v39 + 4);
							v42 = _mm_mul_ps(v33, v31);
							v43 = _mm_add_ps(_mm_mul_ps(v32, v30), _mm_shuffle_ps(v41, v41, 0));
							v44 = v33;
							v33 = v32;
							v32 = _mm_add_ps(v43, v42);
							v45 = _mm_mul_ps(_mm_sub_ps(v32, v44), v28);
							v46 = _mm_add_ps(_mm_mul_ps(v45, v35), *((__m128*)v38 - 5));
							*((__m128*)v38 - 6) = _mm_add_ps(_mm_mul_ps(v45, v34), *((__m128*)v38 - 6));
							*((__m128*)v38 - 5) = v46;
							v47 = _mm_add_ps(_mm_mul_ps(v45, v37), *((__m128*)v38 - 3));
							*((__m128*)v38 - 4) = _mm_add_ps(_mm_mul_ps(v45, v36), *((__m128*)v38 - 4));
							*((__m128*)v38 - 3) = v47;
							--v40;
						} while (v40);
					}
					*(__m128*)(v13 + v14 + 80) = v32;
					v13 += 176i64;
					v11 += 176i64;
					*(__m128*)(v13 + *(_QWORD*)(a1 + 32) - 80) = v33;
					*(__m128*)(v13 + *(_QWORD*)(a1 + 32) - 176) = v28;
					--v12;
				} while (v12);
				v4 = v61;
				v5 = v59;
				v8 = v62;
				v7 = a2;
			}
			v48 = a3 + 256;
			v49 = 4i64;
			v50 = *(_QWORD*)v7 + 4i64 * v5;
			v51 = 4i64 * *(unsigned __int16*)(v7 + 16);
			do
			{
				v52 = v48;
				v53 = v50;
				if (v10)
				{
					v54 = v10;
					do
					{
						v55 = *v52;
						v53 += 4i64;
						v52 += 4;
						v56 = _mm_add_ps(v55, _mm_movehl_ps(v55, v55));
						*(float*)(v53 - 4) = _mm_shuffle_ps(v56, v56, 85).m128_f32[0] + v56.m128_f32[0];
						--v54;
					} while (v54);
				}
				++v48;
				v50 += v51;
				--v49;
			} while (v49);
			v5 += v10;
			v4 -= v10;
			result = (void**)(a1 + 104);
			v61 = v4;
			v59 = v5;
		} while (v4);
	}
	return result;
}


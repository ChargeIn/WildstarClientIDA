//----- (000000014014B8E0) ----------------------------------------------------
__int64 __fastcall sub_14014B8E0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__m128* v4; // rbx
	int v5; // eax
	float* v6; // rax
	__m128 v7; // xmm12
	float v8; // xmm4_4
	__m128 v9; // xmm11
	float v10; // xmm8_4
	__m128 v11; // xmm7
	float v12; // xmm10_4
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r9
	__m128 v18; // xmm1
	__m128 v19; // xmm6
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // r9
	__int64 v24; // [rsp+20h] [rbp-88h] BYREF
	int v25; // [rsp+28h] [rbp-80h]
	unsigned __int64 v26; // [rsp+B8h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	v3 = dword_140A12138;
	v4 = (__m128*)v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v5 = v3[2];
	if (v5 == 3 || v5 == 4 && sub_14005AC80((char*)(*(_QWORD*)v3 + 32i64), &v26))
	{
		v18 = 0i64;
		v18.m128_f32[0] = sub_140056C40(a1, 2u);
		v19 = _mm_mul_ps(*v4, _mm_shuffle_ps(v18, v18, 0));
		*(__m128*)sub_140059170(a1, 0x10ui64) = v19;
		v20 = a1[4];
		v21 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
		v22 = a1[2];
		v24 = v21;
		v25 = 4;
		sub_14005E8E0((__int64)a1, v20 + 160, (int*)&v24, v22);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
	}
	else
	{
		v6 = (float*)sub_140056AB0(a1, 1u);
		v7 = (__m128)v4->m128_u32[3];
		v8 = v6[3];
		v9 = (__m128) * (unsigned int*)v6;
		v10 = v6[1];
		v11 = (__m128)v4->m128_u32[1];
		v12 = v6[2];
		v13 = v11;
		v14 = v11;
		v9.m128_f32[0] = (float)((float)((float)(v9.m128_f32[0] * v7.m128_f32[0]) + (float)(v4->m128_f32[0] * v8))
			+ (float)(v4->m128_f32[2] * v10))
			- (float)(v4->m128_f32[1] * v12);
		v14.m128_f32[0] = (float)((float)((float)(v11.m128_f32[0] * v8) - (float)(v4->m128_f32[2] * *v6))
			+ (float)(v10 * v7.m128_f32[0]))
			+ (float)(v12 * v4->m128_f32[0]);
		v13.m128_f32[0] = (float)((float)((float)(v11.m128_f32[0] * *v6) + (float)(v4->m128_f32[2] * v8))
			- (float)(v10 * v4->m128_f32[0]))
			+ (float)(v12 * v7.m128_f32[0]);
		v7.m128_f32[0] = (float)((float)((float)(v7.m128_f32[0] * v8) - (float)(*v6 * v4->m128_f32[0]))
			- (float)(v11.m128_f32[0] * v10))
			- (float)(v12 * v4->m128_f32[2]);
		*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, v13), _mm_unpacklo_ps(v14, v7));
		v15 = a1[4];
		v16 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
		v17 = a1[2];
		v24 = v16;
		v25 = 4;
		sub_14005E8E0((__int64)a1, v15 + 160, (int*)&v24, v17);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


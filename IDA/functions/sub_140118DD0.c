//----- (0000000140118DD0) ----------------------------------------------------
__int64 __fastcall sub_140118DD0(_QWORD* a1)
{
	__m128 v1; // xmm0
	__int64 v3; // rax
	_DWORD* v4; // rcx
	__m128* v5; // rbx
	int v6; // eax
	__m128* v7; // rax
	__m128 v8; // xmm0
	__m128 v9; // xmm6
	float v10; // xmm1_4
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

	v3 = sub_140056AB0(a1, 1u);
	v4 = dword_140A12138;
	v5 = (__m128*)v3;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v6 = v4[2];
	if (v6 == 3 || v6 == 4 && sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v17))
	{
		*(double*)v1.m128_u64 = sub_140056C40(a1, 2u);
		v9 = *v5;
		v10 = *(double*)v1.m128_u64;
		v1.m128_f32[0] = v10;
		v8 = _mm_shuffle_ps(v1, v1, 0);
	}
	else
	{
		v7 = (__m128*)sub_140056AB0(a1, 2u);
		v8 = *v5;
		v9 = *v7;
	}
	*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_mul_ps(v9, v8);
	v11 = a1[4];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
	v13 = a1[2];
	v15 = v12;
	v16 = 4;
	sub_14005E8E0((__int64)a1, v11 + 160, (int*)&v15, v13);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140118E66: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];


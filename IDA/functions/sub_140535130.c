//----- (0000000140535130) ----------------------------------------------------
__int64 __fastcall sub_140535130(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // r15
	_DWORD* v6; // rbx
	__m128* v7; // rdx
	__int32 v8; // eax
	int v9; // r12d
	int v10; // eax
	_DWORD* v11; // rdx
	unsigned __int64 v12; // rcx
	int v13; // ecx
	int v14; // r14d
	unsigned __int64 v15; // rcx
	int v16; // r13d
	int v17; // eax
	__int64 v18; // rbx
	int* v19; // rax
	int* v20; // rax
	__int64 v21; // rdx
	bool v22; // zf
	__m128* v23; // r14
	__m128* v24; // rax
	__m128i v25; // xmm0
	__int64 v26; // rcx
	__m128 v27; // [rsp+50h] [rbp-B0h] BYREF
	int v28; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v29; // [rsp+64h] [rbp-9Ch]
	int v30; // [rsp+74h] [rbp-8Ch]
	__m128 v31; // [rsp+80h] [rbp-80h] BYREF
	char v32[16]; // [rsp+90h] [rbp-70h] BYREF
	_QWORD v33[30]; // [rsp+A0h] [rbp-60h] BYREF
	unsigned __int64 v34; // [rsp+1D8h] [rbp+D8h] BYREF
	int v35; // [rsp+1E0h] [rbp+E0h]

	result = sub_14052E9B0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (int*)sub_1406622C0((__int64)a1, 2);
	if (!v4)
		return 0i64;
	v5 = sub_1403D90D0(qword_140C65898, *v4);
	if (!v5)
		return 0i64;
	v6 = dword_140A12138;
	v7 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v7 = (__m128*)(a1[3] + 32i64);
	v8 = v7->m128_i32[2];
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(v7->m128_u64[0] + 32), &v34))
		{
			v9 = 0;
			goto LABEL_11;
		}
		v27.m128_i32[2] = 3;
		v7 = &v27;
		v27.m128_u64[0] = v34;
	}
	v9 = (int)*(double*)v7->m128_u64;
LABEL_11:
	sub_140770490((__int64)v33);
	sub_140770630((__int64)v33, a1, 4);
	v10 = sub_140121AC0(a1, 5u, (__int64)off_140B13F68, 7ui64);
	v11 = dword_140A12138;
	v12 = a1[3] + 80i64;
	v35 = v10;
	if (v12 < a1[2])
		v11 = (_DWORD*)v12;
	v13 = v11[2];
	v14 = v13 && (v13 != 1 || *v11);
	sub_1400579E0((__int64)a1, (__int64)v11, -2);
	v15 = a1[2];
	if (a1[3] + 96i64 < v15)
		v6 = (_DWORD*)(a1[3] + 96i64);
	*(_QWORD*)v15 = *(_QWORD*)v6;
	*(_DWORD*)(v15 + 8) = v6[2];
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	v17 = sub_14052B8D0(v3, v5);
	v18 = *(_QWORD*)(*(_QWORD*)(v3 + 696) + 96i64);
	LODWORD(v34) = v17;
	v19 = sub_140538120(v3 + 1376, (int*)&v34);
	v20 = sub_1407740E0((__int64)v19, v5, v9, word_1409F1FEC, v18, (__int64)v33, v35, v14);
	v22 = *(_QWORD*)(v3 + 1192) == 0i64;
	LODWORD(v34) = 1065353216;
	v23 = (__m128*)v20;
	if (!v22)
	{
		if ((unsigned int)sub_14052B1A0(v3, (int*)&v27, &v31, (float*)&v34))
		{
			v28 = 0;
			v30 = 0;
			v29 = v27;
			v23[1] = *(__m128*)(*(__int64(__fastcall**)(__m128*, __m128*))(v23->m128_u64[0] + 16))(v23, &v27);
			v24 = (__m128*)(*(__int64(__fastcall**)(__m128*, char*))(v23->m128_u64[0] + 16))(v23, v32);
			sub_1407711C0(&v27, v24, &v31, 0.0, v34, (__int64)&v28, (__m128*)v23[21].m128_i32, &v23[21].m128_f32[1]);
			v23[20] = v27;
		}
	}
	v25 = _mm_cvtsi32_si128(v23->m128_u32[2]);
	v26 = a1[2];
	*(_DWORD*)(v26 + 8) = 3;
	*(_QWORD*)v26 = *(_OWORD*)&_mm_cvtepi32_pd(v25);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v21, v16);
	sub_140532D90(v33);
	return 1i64;
}
// 140535433: variable 'v21' is possibly undefined
// 1409F1FEC: using guessed type _WORD word_1409F1FEC[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13F68: using guessed type wchar_t *off_140B13F68[7];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140535130: using guessed type _QWORD var_120[30];
// 140535130: using guessed type char var_130[16];


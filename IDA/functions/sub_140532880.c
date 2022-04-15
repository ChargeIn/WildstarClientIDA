//----- (0000000140532880) ----------------------------------------------------
__int64 __fastcall sub_140532880(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r13
	_DWORD* v4; // rbx
	__m128* v5; // rcx
	__int32 v6; // eax
	int v7; // r14d
	__m128* v8; // rcx
	__int32 v9; // eax
	unsigned int v10; // ecx
	unsigned int* v11; // rdi
	char* v12; // rax
	int v13; // eax
	_DWORD* v14; // rdx
	unsigned __int64 v15; // rcx
	unsigned int v16; // r15d
	int v17; // ecx
	BOOL v18; // r12d
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rcx
	unsigned int v23; // r8d
	__int64 v24; // rdx
	__int64(__fastcall * **v25)(_QWORD); // rax
	__int64 v26; // rbx
	int* v27; // rdi
	int* v28; // rax
	__int64 v29; // r14
	int* v30; // rax
	__int64 v31; // rbx
	int* v32; // r12
	int* v33; // rax
	int* v34; // rdi
	bool v35; // zf
	__m128* v36; // rax
	__int64 v37; // rax
	double v38; // xmm0_8
	__m128 v39; // [rsp+50h] [rbp-B0h] BYREF
	__int64(__fastcall * *v40)(); // [rsp+60h] [rbp-A0h] BYREF
	int v41; // [rsp+68h] [rbp-98h]
	_QWORD* v42; // [rsp+70h] [rbp-90h]
	int v43; // [rsp+78h] [rbp-88h] BYREF
	__m128 v44; // [rsp+7Ch] [rbp-84h]
	int v45; // [rsp+8Ch] [rbp-74h]
	int v46; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v47[3]; // [rsp+A8h] [rbp-58h] BYREF
	__m128 v48; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v49; // [rsp+D0h] [rbp-30h] BYREF
	int* v50; // [rsp+D8h] [rbp-28h]
	_QWORD v51[30]; // [rsp+F0h] [rbp-10h] BYREF
	unsigned __int64 v52; // [rsp+228h] [rbp+128h] BYREF
	int v53; // [rsp+230h] [rbp+130h]

	result = sub_14052E9B0(a1);
	v3 = (_QWORD*)result;
	if (!result)
		return result;
	v4 = dword_140A12138;
	v5 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__m128*)(a1[3] + 16i64);
	v6 = v5->m128_i32[2];
	if (v6 == 3)
		goto LABEL_8;
	if (v6 == 4 && sub_14005AC80((char*)(v5->m128_u64[0] + 32), &v52))
	{
		v39.m128_i32[2] = 3;
		v5 = &v39;
		v39.m128_u64[0] = v52;
	LABEL_8:
		v7 = (int)*(double*)v5->m128_u64;
		goto LABEL_9;
	}
	v7 = 0;
LABEL_9:
	v8 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v8 = (__m128*)(a1[3] + 32i64);
	v9 = v8->m128_i32[2];
	if (v9 == 3)
		goto LABEL_15;
	if (v9 == 4 && sub_14005AC80((char*)(v8->m128_u64[0] + 32), &v52))
	{
		v39.m128_i32[2] = 3;
		v8 = &v39;
		v39.m128_u64[0] = v52;
	LABEL_15:
		v10 = (int)*(double*)v8->m128_u64;
		goto LABEL_16;
	}
	v10 = 0;
LABEL_16:
	result = sub_14024B980(v10);
	v11 = (unsigned int*)result;
	if (result)
	{
		v12 = (char*)sub_140056BB0(a1, 4u, 0i64);
		sub_14018F2D0(&v49, v12);
		sub_140770490((__int64)v51);
		sub_140770630((__int64)v51, a1, 5);
		v13 = sub_140121AC0(a1, 6u, (__int64)off_140B13F68, 7ui64);
		v14 = dword_140A12138;
		v15 = a1[3] + 96i64;
		v53 = v13;
		v16 = 1;
		if (v15 < a1[2])
			v14 = (_DWORD*)v15;
		v17 = v14[2];
		v18 = v17 && (v17 != 1 || *v14);
		v42 = a1;
		v41 = -2;
		v40 = off_140B56A08;
		sub_1400579E0((__int64)a1, (__int64)v14, -2);
		v19 = (__int64)v42;
		v20 = v42[2];
		if (v42[3] + 112i64 < v20)
			v4 = (_DWORD*)(v42[3] + 112i64);
		*(_QWORD*)v20 = *(_QWORD*)v4;
		*(_DWORD*)(v20 + 8) = v4[2];
		*(_QWORD*)(v19 + 16) += 16i64;
		v41 = sub_1400578C0((__int64)v42);
		v22 = v3[144];
		v39 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v11[3], (__m128)v11[5]),
			_mm_unpacklo_ps((__m128)v11[4], (__m128)0i64));
		if (qword_140C658F8
			&& (v23 = v11[11],
				v24 = v11[10],
				v52 = qword_140C77760,
				(v25 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v22, v24, v23, v39.m128_f32, v22, 1, (__int64*)&v52)) != 0i64))
		{
			LODWORD(v52) = (**v25)(v25);
			v26 = *(_QWORD*)(v3[87] + 96i64);
			v27 = sub_140538120((__int64)(v3 + 172), (int*)&v52);
			v28 = sub_14018B280(384i64, 0);
			if (v28)
				v29 = sub_140770B60((__int64)v28, v7, &v39, word_1409F1DCC, v26, v50, (__int64)v51, v53, (__int64)&v40);
			else
				v29 = 0i64;
			*(_DWORD*)(v29 + 376) = v18;
			v46 = 0;
			v30 = sub_14018DB00(0i64, 1ui64, 8i64);
			*(_QWORD*)v30 = v29;
			v31 = *((_QWORD*)v27 + 7);
			v32 = v30;
			v47[0] = (__int64)v30;
			v47[1] = 1i64;
			v33 = sub_14018B280(40i64, 0);
			v34 = v33;
			if (v33 != (int*)-16i64)
			{
				v33[4] = 0;
				sub_1403FE910((__int64*)v33 + 3, (__int64)v47);
			}
			*(_QWORD*)v34 = v31;
			*((_QWORD*)v34 + 1) = *(_QWORD*)(v31 + 8);
			**(_QWORD**)(v31 + 8) = v34;
			*(_QWORD*)(v31 + 8) = v34;
			(*(void(__fastcall**)(int*))(*((_QWORD*)v32 - 2) + 8i64))(v32 - 4);
			v35 = v3[149] == 0i64;
			LODWORD(v52) = 1065353216;
			if (!v35 && (unsigned int)sub_14052B1A0((__int64)v3, (int*)&v39, &v48, (float*)&v52))
			{
				v43 = 0;
				v45 = 0;
				v44 = v39;
				*(_OWORD*)(v29 + 16) = *(_OWORD*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v29 + 16i64))(
					v29,
					&v39);
				v36 = (__m128*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v29 + 16i64))(v29, &v46);
				sub_1407711C0(&v39, v36, &v48, 0.0, v52, (__int64)&v43, (_DWORD*)(v29 + 336), (float*)(v29 + 340));
				*(__m128*)(v29 + 320) = v39;
			}
			v37 = a1[2];
			v38 = (double)*(int*)(v29 + 8);
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = v38;
			a1[2] += 16i64;
		}
		else
		{
			v16 = 0;
		}
		v40 = off_140B56A08;
		if (v42)
			sub_1400579E0((__int64)v42, v21, v41);
		sub_140532D90(v51);
		if (v50)
			sub_14018B900((__int64)v50, 0);
		return v16;
	}
	return result;
}
// 140532D33: variable 'v21' is possibly undefined
// 1409F1DCC: using guessed type _WORD word_1409F1DCC[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13F68: using guessed type wchar_t *off_140B13F68[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140532880: using guessed type _QWORD var_120[30];


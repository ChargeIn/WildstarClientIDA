//----- (0000000140390730) ----------------------------------------------------
__int64 __fastcall sub_140390730(__m128* a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__m128* v5; // rax
	__m128 v6; // xmm0
	__m128 v7; // xmm3
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	int v12; // ecx
	int v13; // r9d
	__m128 v14; // xmm1
	int v15; // ecx
	__m128 v16; // xmm3
	int v17; // ecx
	__int64 v18; // rdx
	int v19; // ecx
	int v20; // ecx
	int v21; // r9d
	__int64 v22; // r8
	unsigned __int64 v23; // r15
	unsigned int v24; // ebx
	__int64 v25; // rax
	bool v26; // cf
	__int64 v27; // rax
	int* v28; // rax
	int v29; // ecx
	int* v30; // rdx
	_QWORD* v31; // rax
	unsigned int v32; // r14d
	int v33; // ecx
	__int64 v34; // rdi
	unsigned __int64 v35; // rbp
	_QWORD* v36; // rbx
	int* v37; // rax
	void(__fastcall * **v38)(_QWORD); // rdi
	_QWORD* v39; // rbx
	__int64 v40; // rbx
	__int64* v41; // rcx
	__int64 v42; // rax
	int v43; // eax
	unsigned __int64 v44; // rbp
	__int64 v45; // rax
	__int64 v46; // r14
	__int64 v47; // rax
	unsigned __int64 v48; // rdi
	__int64 v49; // rbx
	__int64 v50; // rax
	int v52; // [rsp+70h] [rbp+8h] BYREF
	int v53; // [rsp+74h] [rbp+Ch]

	a1->m128_u64[1] = a2;
	a1[1].m128_u64[0] = a3;
	v5 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a3 + 112i64))(a3);
	a1[2] = *v5;
	v6 = v5[1];
	a1[3] = v6;
	v7 = a1[2];
	v8 = _mm_sub_ps(v6, v7);
	v9 = _mm_mul_ps(v8, v8);
	a1[4] = _mm_mul_ps(_mm_add_ps(v7, v6), (__m128)xmmword_140B7AC50);
	v10 = (__m128)(unsigned int)dword_140C43FB8;
	v11 = (__m128)(unsigned int)dword_140C43FB8;
	a1[5].m128_f32[0] = fsqrt(
		(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0])
		* 0.5;
	v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] * a1[2].m128_f32[0]) + 0.5) * 2048.0;
	v12 = (int)v11.m128_f32[0];
	if ((int)v11.m128_f32[0] != 0x80000000 && (float)v12 != v11.m128_f32[0])
		v11.m128_f32[0] = (float)(v12 - (_mm_movemask_ps(_mm_unpacklo_ps(v11, v11)) & 1));
	v14 = v10;
	v13 = (int)v11.m128_f32[0];
	v14.m128_f32[0] = (float)((float)(v10.m128_f32[0] * a1[2].m128_f32[2]) + 0.5) * 2048.0;
	v15 = (int)v14.m128_f32[0];
	if ((int)v14.m128_f32[0] != 0x80000000 && (float)v15 != v14.m128_f32[0])
		v14.m128_f32[0] = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v14, v14)) & 1));
	v16 = v10;
	v16.m128_f32[0] = (float)((float)(v10.m128_f32[0] * a1[3].m128_f32[0]) + 0.5) * 2048.0;
	v17 = (int)v16.m128_f32[0];
	if ((int)v16.m128_f32[0] != 0x80000000 && (float)v17 != v16.m128_f32[0])
		v16.m128_f32[0] = (float)(v17 - (_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1));
	v18 = (unsigned int)((int)v16.m128_f32[0] + 1);
	v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * a1[3].m128_f32[2]) + 0.5) * 2048.0;
	v19 = (int)v10.m128_f32[0];
	if ((int)v10.m128_f32[0] != 0x80000000 && (float)v19 != v10.m128_f32[0])
		v10.m128_f32[0] = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1));
	a1[6].m128_i32[0] = v13;
	a1[6].m128_i32[1] = (int)v14.m128_f32[0];
	a1[6].m128_i32[2] = v18;
	v20 = (int)v10.m128_f32[0] + 1;
	a1[6].m128_i32[3] = v20;
	v21 = a1[6].m128_i32[0];
	if (dword_140C445D8 < (int)v18)
		v18 = (unsigned int)dword_140C445D8;
	v22 = a1[6].m128_u32[1];
	if (dword_140C445DC < v20)
		v20 = dword_140C445DC;
	if (v21 < (int)qword_140C445D0)
		v21 = qword_140C445D0;
	if ((int)v22 < SHIDWORD(qword_140C445D0))
		v22 = HIDWORD(qword_140C445D0);
	v23 = 0i64;
	if (v21 >= (int)v18 || (int)v22 >= v20)
		goto LABEL_53;
	a1[6].m128_i32[0] = v21;
	a1[6].m128_i32[1] = v22;
	a1[6].m128_i32[2] = v18;
	a1[6].m128_i32[3] = v20;
	v24 = (v18 - a1[6].m128_i32[0]) * (v20 - a1[6].m128_i32[1]);
	v25 = 32i64 * v24;
	if (!is_mul_ok(v24, 0x20ui64))
		v25 = -1i64;
	v26 = __CFADD__(v25, 8i64);
	v27 = v25 + 8;
	if (v26)
		v27 = -1i64;
	v28 = sub_14018B280(v27, 0);
	if (v28)
	{
		v29 = v24 - 1;
		*v28 = v24;
		v30 = v28 + 2;
		if ((int)(v24 - 1) >= 0)
		{
			v31 = v28 + 6;
			do
			{
				--v29;
				*v31 = 0i64;
				v31[1] = 0i64;
				*(v31 - 2) = 0i64;
				v31 += 4;
			} while (v29 >= 0);
		}
	}
	else
	{
		v30 = 0i64;
	}
	a1[7].m128_u64[0] = (unsigned __int64)v30;
	v18 = a1[6].m128_u32[1];
	v32 = 0;
	v53 = v18;
	if ((int)v18 >= a1[6].m128_i32[3])
	{
	LABEL_53:
		if (!(*(unsigned int(__fastcall**)(__m128*, __int64, __int64))(a1->m128_u64[0] + 24))(a1, v18, v22))
		{
			v43 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[1].m128_u64[0] + 232i64))(a1[1].m128_u64[0]);
			sub_140391230(a1, v43);
		}
		v44 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a3 + 128i64))(a3);
		v45 = 24 * v44;
		if (!is_mul_ok(v44, 0x18ui64))
			v45 = -1i64;
		a1[10].m128_u64[0] = (unsigned __int64)sub_14018B280(v45, 0);
		if (v44)
		{
			v46 = 0i64;
			do
			{
				v47 = (*(__int64(__fastcall**)(unsigned __int64, unsigned __int64))(*(_QWORD*)a3 + 136i64))(a3, v23);
				v48 = a1[10].m128_u64[0];
				*(_QWORD*)(v46 + v48 + 8) = a1;
				*(_QWORD*)(v46 + v48) = v47;
				v49 = *(_QWORD*)(*(_QWORD*)(a1->m128_u64[1] + 48) + 32i64);
				v50 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
				++v23;
				v46 += 24i64;
				*(_QWORD*)(v46 + v48 - 8) = v49 + 336 * (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v50 + 32i64))(v50);
			} while (v23 < v44);
		}
		return 0i64;
	}
	else
	{
		while (1)
		{
			v33 = a1[6].m128_i32[0];
			v52 = v33;
			if (v33 < a1[6].m128_i32[2])
				break;
		LABEL_52:
			v18 = (unsigned int)(v18 + 1);
			v53 = v18;
			if ((int)v18 >= a1[6].m128_i32[3])
				goto LABEL_53;
		}
		while (1)
		{
			v34 = *(_QWORD*)(a1->m128_u64[1] + 16);
			if (v33 < (int)qword_140C44530
				|| v33 >= dword_140C44538
				|| (int)v18 < SHIDWORD(qword_140C44530)
				|| (int)v18 >= dword_140C4453C)
			{
				return 2147942487i64;
			}
			v35 = (*(__int64(__fastcall**)(int*))(v34 + 2384))(&v52);
			v36 = *(_QWORD**)(*(_QWORD*)(v34 + 2376) + 8 * (v35 % *(_QWORD*)(v34 + 2368)));
			if (!v36)
				goto LABEL_43;
			while (v35 != *v36 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v34 + 2392))(&v52, v36 + 2))
			{
				v36 = (_QWORD*)v36[1];
				if (!v36)
					goto LABEL_43;
			}
			v39 = v36 + 3;
			if (v39)
			{
				v38 = (void(__fastcall***)(_QWORD)) * v39;
				(**(void(__fastcall***)(_QWORD)) * v39)(*v39);
			}
			else
			{
			LABEL_43:
				v37 = sub_14018B280(112i64, 0);
				if (v37)
					v38 = (void(__fastcall***)(_QWORD))sub_14038F6A0((__int64)v37, v34, &v52);
				else
					v38 = 0i64;
			}
			v40 = a1[7].m128_u64[0] + 32i64 * v32;
			*(_QWORD*)v40 = v38;
			*(_QWORD*)(v40 + 8) = a1;
			(**v38)(v38);
			v41 = (__int64*)(*(_QWORD*)v40 + 40i64);
			if (!*(_QWORD*)(v40 + 16))
			{
				*(_QWORD*)(v40 + 16) = v41;
				*(_QWORD*)(v40 + 24) = *v41;
				*v41 = v40;
				v42 = *(_QWORD*)(v40 + 24);
				if (v42)
					*(_QWORD*)(v42 + 16) = v40 + 24;
			}
			sub_14038F970(*(_QWORD**)v40);
			++v32;
			(*v38)[1](v38);
			LODWORD(v18) = v53;
			v33 = v52 + 1;
			v52 = v33;
			if (v33 >= a1[6].m128_i32[2])
				goto LABEL_52;
		}
	}
}
// 140390B0F: variable 'v22' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;
// 140C445D0: using guessed type __int64 qword_140C445D0;
// 140C445D8: using guessed type int dword_140C445D8;
// 140C445DC: using guessed type int dword_140C445DC;


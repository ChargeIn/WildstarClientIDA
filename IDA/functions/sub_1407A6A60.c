//----- (00000001407A6A60) ----------------------------------------------------
__int64 __fastcall sub_1407A6A60(__int64* a1, __int64 a2, float* a3, __int64 a4, float a5)
{
	float v9; // xmm0_4
	float v10; // xmm1_4
	unsigned __int64 v11; // r14
	__int128* v12; // rax
	int v13; // ebx
	__int128 v14; // xmm7
	double v15; // xmm0_8
	__int128* v16; // rax
	__int128 v17; // xmm1
	unsigned __int64 v18; // r14
	double v19; // xmm0_8
	__int128* v20; // rax
	float v21; // xmm2_4
	__int128 v22; // xmm1
	__m128 v23; // xmm7
	int v24; // ebx
	double v25; // xmm0_8
	__int128* v26; // rax
	float v27; // xmm2_4
	__int128 v28; // xmm1
	unsigned __int64 v29; // r14
	int v30; // ebx
	__m128 v31; // xmm7
	double v32; // xmm0_8
	__int128* v33; // rax
	float v34; // xmm2_4
	__int128 v35; // xmm1
	unsigned __int64 i; // rbx
	__m128 v37; // xmm6
	unsigned int* v38; // rax
	__m128 v39; // xmm7
	double v40; // xmm0_8
	__int128* v41; // rax
	float v42; // xmm2_4
	__int128 v43; // xmm1
	__int128 v45[4]; // [rsp+20h] [rbp-81h] BYREF
	__int128 v46; // [rsp+60h] [rbp-41h]
	float v47; // [rsp+70h] [rbp-31h]
	int v48; // [rsp+74h] [rbp-2Dh]
	int v49; // [rsp+78h] [rbp-29h]
	int v50; // [rsp+88h] [rbp-19h]

	if ((unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 32i64))(a2) < 2)
		return 2147500037i64;
	v9 = a3[4];
	if (v9 > a3[5])
		return 2147500037i64;
	v10 = a3[3];
	if (v9 <= v10 || v10 < 0.0)
		return 2147500037i64;
	v11 = (*(__int64(__fastcall**)(__int64*))(*a1 + 32))(a1);
	v12 = (__int128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 40i64))(a2, a4);
	v13 = *((_DWORD*)a3 + 6);
	v14 = *v12;
	v15 = (*(double(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 56i64))(a2, a4);
	v16 = (__int128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 48i64))(a2, a4);
	v48 = LODWORD(v15);
	v45[0] = v14;
	v47 = a5;
	v17 = *v16;
	v49 = v13;
	v50 = 0;
	v46 = v17;
	sub_1407A7140(a1 + 3, v11, (__int64)v45);
	sub_1407A4640((__int64)a1);
	v18 = v11 + 1;
	if (a3[3] > 0.0)
	{
		v19 = (*(double(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 56i64))(a2, a4);
		v20 = (__int128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 48i64))(a2, a4);
		v48 = LODWORD(v19);
		v45[0] = v14;
		v21 = a5 + a3[3];
		v22 = *v20;
		v49 = 0;
		v50 = 0;
		v47 = v21;
		v46 = v22;
		sub_1407A7140(a1 + 3, v18, (__int64)v45);
		sub_1407A4640((__int64)a1);
		++v18;
	}
	v23 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 2)),
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a3 + 1), (__m128)0i64));
	if (a3[4] >= a3[5])
		v24 = *((_DWORD*)a3 + 7);
	else
		v24 = 0;
	v25 = (*(double(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 56i64))(a2, a4);
	v26 = (__int128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 48i64))(a2, a4);
	v48 = LODWORD(v25);
	v45[0] = (__int128)v23;
	v27 = a5 + a3[4];
	v28 = *v26;
	v49 = v24;
	v50 = 0;
	v47 = v27;
	v46 = v28;
	sub_1407A7140(a1 + 3, v18, (__int64)v45);
	sub_1407A4640((__int64)a1);
	v29 = v18 + 1;
	if (a3[4] < a3[5])
	{
		v30 = *((_DWORD*)a3 + 7);
		v31 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 2)),
			_mm_unpacklo_ps((__m128) * ((unsigned int*)a3 + 1), (__m128)0i64));
		v32 = (*(double(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 56i64))(a2, a4);
		v33 = (__int128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 48i64))(a2, a4);
		v48 = LODWORD(v32);
		v45[0] = (__int128)v31;
		v34 = a5 + a3[5];
		v35 = *v33;
		v49 = v30;
		v50 = 0;
		v47 = v34;
		v46 = v35;
		sub_1407A7140(a1 + 3, v29, (__int64)v45);
		sub_1407A4640((__int64)a1);
		++v29;
	}
	for (i = a4 + 1; i < (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 32i64))(a2); ++i)
	{
		v37 = *(__m128*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 40i64))(a2, i);
		v38 = (unsigned int*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 40i64))(a2, a4);
		v39 = _mm_add_ps(
			_mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 2)),
					_mm_unpacklo_ps((__m128) * ((unsigned int*)a3 + 1), (__m128)0i64)),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * v38, (__m128)v38[2]),
					_mm_unpacklo_ps((__m128)v38[1], (__m128)0i64))),
			v37);
		v40 = (*(double(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 56i64))(a2, i);
		v41 = (__int128*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 48i64))(a2, i);
		v48 = LODWORD(v40);
		v45[0] = (__int128)v39;
		v42 = a5 + a3[5];
		v43 = *v41;
		v49 = 0;
		v50 = 0;
		v47 = v42;
		v46 = v43;
		sub_1407A7140(a1 + 3, v29, (__int64)v45);
		sub_1407A4640((__int64)a1);
		++v29;
	}
	return 0i64;
}


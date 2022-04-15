//----- (00000001407A6510) ----------------------------------------------------
__int64 __fastcall sub_1407A6510(__int64 a1, __int64* a2, float* a3, _QWORD* a4, unsigned int* a5)
{
	int v7; // r12d
	unsigned __int64 v9; // r15
	__m128* v10; // rax
	__int64 v11; // r14
	float v12; // xmm1_4
	__m128 v13; // xmm8
	float v14; // xmm0_4
	double v15; // xmm0_8
	float v16; // xmm7_4
	__int64 v17; // rax
	__m128* v18; // rbx
	unsigned int* v19; // rax
	double v20; // xmm0_8
	__int128* v21; // rax
	__int128 v22; // xmm1
	__m128* v23; // rbx
	__int64 v24; // rax
	double v25; // xmm0_8
	__int128* v26; // rax
	__int128 v27; // xmm1
	int v28; // ebx
	double v29; // xmm0_8
	__int128* v30; // rax
	int v31; // xmm2_4
	__int64* v32; // rbx
	unsigned __int64 v33; // r15
	int v34; // ebx
	double v35; // xmm0_8
	__int128* v36; // rax
	double v37; // xmm0_8
	__int128* v38; // rax
	int v39; // xmm2_4
	__int128 v40; // xmm7
	double v41; // xmm0_8
	__int128* v42; // rax
	int v43; // xmm2_4
	int v44; // ebx
	double v45; // xmm0_8
	__int128* v46; // rax
	int v47; // xmm2_4
	unsigned int v48; // ecx
	_OWORD v50[4]; // [rsp+38h] [rbp-99h] BYREF
	__int128 v51; // [rsp+78h] [rbp-59h]
	int v52; // [rsp+88h] [rbp-49h]
	int v53; // [rsp+8Ch] [rbp-45h]
	int v54; // [rsp+90h] [rbp-41h]
	__int128 v55; // [rsp+A0h] [rbp-31h]
	int v56; // [rsp+130h] [rbp+5Fh]

	v7 = 0;
	v9 = 0i64;
	v10 = (__m128*)(*(__int64(__fastcall**)(__int64*, _QWORD))(*a2 + 40))(a2, 0i64);
	v11 = 0i64;
	v12 = a3[4];
	v13 = *v10;
	if (v12 < a3[3] || (v14 = a3[5], v14 <= v12) || (v56 = 1, v14 > a3[6]))
		v56 = 0;
	v15 = (*(double(__fastcall**)(__int64*, __int64))(*a2 + 104))(a2, 1i64);
	v16 = *(float*)&v15;
	*(float*)&v15 = (*(float(__fastcall**)(__int64*, _QWORD))(*a2 + 104))(a2, 0i64);
	v17 = *a2;
	if (v16 == *(float*)&v15)
	{
		if ((unsigned __int64)(*(__int64(__fastcall**)(__int64*))(v17 + 32))(a2) > 2)
		{
			v18 = (__m128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, 1i64);
			_mm_sub_ps(*(__m128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, 2i64), *v18);
		}
		if (v56)
		{
			v19 = (unsigned int*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, 1i64);
			v13 = _mm_add_ps(
				_mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 2)),
						_mm_unpacklo_ps((__m128) * ((unsigned int*)a3 + 1), (__m128)0i64)),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * v19, (__m128)v19[2]),
						_mm_unpacklo_ps((__m128)v19[1], (__m128)0i64))),
				v13);
		}
		v20 = (*(double(__fastcall**)(__int64*, _QWORD))(*a2 + 56))(a2, 0i64);
		v21 = (__int128*)(*(__int64(__fastcall**)(__int64*, _QWORD))(*a2 + 48))(a2, 0i64);
		v53 = LODWORD(v20);
		v50[0] = v13;
		v22 = *v21;
		v52 = 0;
		v54 = 0;
		v51 = v22;
		LODWORD(v55) = 0;
		sub_1407A7140((__int64*)(a1 + 24), 0i64, (__int64)v50);
		sub_1407A4640(a1);
		v9 = 1i64;
		v11 = 1i64;
		if (!v56)
		{
			v13 = *(__m128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, 1i64);
			goto LABEL_14;
		}
	}
	else
	{
		v23 = (__m128*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v17 + 40))(a2, 0i64);
		_mm_sub_ps(*(__m128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, 1i64), *v23);
		if (!v56)
			goto LABEL_14;
	}
	v13 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 2)),
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a3 + 1), (__m128)0i64));
LABEL_14:
	v24 = *a2;
	if (a3[3] <= 0.0)
	{
		v34 = *((_DWORD*)a3 + 7);
		v35 = (*(double(__fastcall**)(__int64*, __int64))(v24 + 56))(a2, v11);
		v36 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
		v54 = v34;
		v32 = (__int64*)(a1 + 24);
		v53 = LODWORD(v35);
		v50[0] = v13;
		v51 = *v36;
		v52 = 0;
		LODWORD(v55) = 0;
		sub_1407A7140((__int64*)(a1 + 24), v9, (__int64)v50);
		sub_1407A4640(a1);
		v33 = v9 + 1;
	}
	else
	{
		v25 = (*(double(__fastcall**)(__int64*, __int64))(v24 + 56))(a2, v11);
		v26 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
		v53 = LODWORD(v25);
		v50[0] = v13;
		v27 = *v26;
		v52 = 0;
		v54 = 0;
		v51 = v27;
		LODWORD(v55) = 0;
		sub_1407A7140((__int64*)(a1 + 24), v9, (__int64)v50);
		sub_1407A4640(a1);
		v28 = *((_DWORD*)a3 + 7);
		v29 = (*(double(__fastcall**)(__int64*, __int64))(*a2 + 56))(a2, v11);
		v30 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
		v54 = v28;
		v31 = *((_DWORD*)a3 + 3);
		v32 = (__int64*)(a1 + 24);
		v53 = LODWORD(v29);
		v50[0] = v13;
		v52 = v31;
		v51 = *v30;
		LODWORD(v55) = 0;
		sub_1407A7140((__int64*)(a1 + 24), v9 + 1, (__int64)v50);
		sub_1407A4640(a1);
		v33 = v9 + 2;
	}
	if (v56)
	{
		if (a3[3] < a3[4])
		{
			v37 = (*(double(__fastcall**)(__int64*, __int64))(*a2 + 56))(a2, v11);
			v38 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
			v39 = *((_DWORD*)a3 + 4);
			v53 = LODWORD(v37);
			v50[0] = v13;
			v52 = v39;
			v54 = 0;
			LODWORD(v55) = 0;
			v51 = *v38;
			sub_1407A7140(v32, v33, (__int64)v50);
			sub_1407A4640(a1);
			++v33;
		}
		v40 = *(_OWORD*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 40))(a2, v11);
		if (a3[5] >= a3[6])
			v7 = *((_DWORD*)a3 + 8);
		v41 = (*(double(__fastcall**)(__int64*, __int64))(*a2 + 56))(a2, v11);
		v42 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
		v43 = *((_DWORD*)a3 + 5);
		v53 = LODWORD(v41);
		v50[0] = v40;
		v52 = v43;
		v54 = v7;
		LODWORD(v55) = 0;
		v51 = *v42;
		sub_1407A7140(v32, v33, (__int64)v50);
		sub_1407A4640(a1);
		if (a3[5] < a3[6])
		{
			v44 = *((_DWORD*)a3 + 8);
			v45 = (*(double(__fastcall**)(__int64*, __int64))(*a2 + 56))(a2, v11);
			v46 = (__int128*)(*(__int64(__fastcall**)(__int64*, __int64))(*a2 + 48))(a2, v11);
			v47 = *((_DWORD*)a3 + 6);
			v53 = LODWORD(v45);
			v50[0] = v40;
			v52 = v47;
			v51 = *v46;
			v54 = v44;
			LODWORD(v55) = 0;
			sub_1407A7140((__int64*)(a1 + 24), v33 + 1, (__int64)v50);
			sub_1407A4640(a1);
		}
		v48 = *((_DWORD*)a3 + 6);
	}
	else
	{
		v48 = *((_DWORD*)a3 + 3);
	}
	*a5 = v48;
	*a4 = v11 + 1;
	return 0i64;
}


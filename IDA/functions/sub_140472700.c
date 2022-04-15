//----- (0000000140472700) ----------------------------------------------------
void __fastcall sub_140472700(__int64 a1, __int64* a2, unsigned int a3, int a4, __m128* a5)
{
	__int64 v5; // r14
	__int64* v6; // r13
	__int64 v9; // rcx
	__int64 v10; // rax
	__m128* v11; // rax
	__m128 v12; // xmm1
	__m128 v13; // xmm2
	__m128 v14; // xmm6
	__m128 v15; // xmm2
	float v16; // xmm1_4
	float v17; // xmm1_4
	int v18; // eax
	float v19; // xmm8_4
	int v20; // eax
	float v21; // xmm7_4
	__int64 v22; // rax
	unsigned __int64 v23; // rsi
	float v24; // xmm6_4
	unsigned __int64 v25; // r12
	int v26; // edi
	__int64 v27; // rbx
	float v28; // xmm0_4
	__int64 v29; // rax
	int* v30; // rax
	int* v31; // r14
	__int64 v32; // rax
	float v33; // xmm6_4
	int v34; // eax
	__int64 v35; // rax
	int v36; // ebx
	__int64 v37; // rcx
	__int64 v38; // rax
	int v39; // eax
	__int64 v40; // [rsp+30h] [rbp-D0h] BYREF
	__m128* v41; // [rsp+38h] [rbp-C8h] BYREF
	unsigned __int64 v42; // [rsp+40h] [rbp-C0h]
	__int64 v43; // [rsp+48h] [rbp-B8h]
	__int64 v44; // [rsp+50h] [rbp-B0h]
	__int64 v45; // [rsp+58h] [rbp-A8h]
	__int64 v46; // [rsp+60h] [rbp-A0h]
	unsigned int v47; // [rsp+68h] [rbp-98h]
	int v48[3]; // [rsp+6Ch] [rbp-94h] BYREF
	__m128* v49; // [rsp+78h] [rbp-88h]
	__int64* v50; // [rsp+80h] [rbp-80h]
	__m128 v51; // [rsp+90h] [rbp-70h] BYREF
	__m128 v52; // [rsp+A0h] [rbp-60h] BYREF
	int v53; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v54; // [rsp+B4h] [rbp-4Ch]
	__int64 v55; // [rsp+C0h] [rbp-40h]
	__int64 v56; // [rsp+C8h] [rbp-38h]
	int v57; // [rsp+D0h] [rbp-30h]
	__int64 v58; // [rsp+D8h] [rbp-28h]
	int v59[8]; // [rsp+E0h] [rbp-20h] BYREF
	char v60[32]; // [rsp+100h] [rbp+0h] BYREF
	unsigned int v61; // [rsp+120h] [rbp+20h]
	unsigned int v62; // [rsp+190h] [rbp+90h]

	v5 = (__int64)a5;
	v47 = a3;
	v6 = *(__int64**)(qword_140C65898 + 29256);
	v50 = a2;
	v49 = a5;
	if (!v6)
		return;
	v9 = qword_140C7E598;
	v10 = *(_QWORD*)(qword_140C7E598 + 8);
	if (!v10)
		return;
	do
	{
		if (*(_DWORD*)(v10 + 32) < a4)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	} while (v10);
	if (v9 == qword_140C7E598 || a4 < *(_DWORD*)(v9 + 32))
		return;
	v11 = *(__m128**)(qword_140C65898 + 29096);
	if (!v11)
		v11 = *(__m128**)(qword_140C65898 + 29088);
	v12 = a5[3];
	v13 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v11[7]),
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v11[6])),
			_mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), v11[8])),
		v11[9]);
	v14 = _mm_mul_ps(v13, v13);
	if (fsqrt((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]) + _mm_shuffle_ps(v14, v14, 170).m128_f32[0]) > (float)(*(float*)((*(__int64(__fastcall**)(__int64*))(*v6 + 72))(v6) + 20) + 16.0))
		return;
	v15 = a5[3];
	v16 = *(float*)(a1 + 1392);
	v43 = 0i64;
	v41 = 0i64;
	v42 = 0i64;
	v52 = v15;
	v51 = v15;
	v17 = v16 * *(float*)(a1 + 4804);
	v45 = 0i64;
	v44 = 0i64;
	v46 = 0i64;
	v51.m128_f32[1] = a5[3].m128_f32[1] - v17;
	v18 = *(_DWORD*)(a1 + 8);
	v52.m128_f32[1] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] + v17;
	v19 = 0.0;
	LODWORD(v43) = v18;
	v20 = *(_DWORD*)(a1 + 308);
	v21 = -*(float*)&dword_140C45978;
	*((float*)&v42 + 1) = -*(float*)&dword_140C45978;
	v40 = 0i64;
	HIDWORD(v43) = v20;
	v22 = *v6;
	v41 = a5;
	LODWORD(v45) = a4;
	v53 = 32777;
	v54 = 12i64;
	v55 = 0i64;
	v56 = 0i64;
	v57 = 0;
	v58 = 0i64;
	v48[0] = 0;
	v48[1] = 1065353216;
	if ((*(int(__fastcall**)(__int64*, __m128*, __m128*, int*, __int64*, int*))(v22 + 432))(
		v6,
		&v52,
		&v51,
		v48,
		&v40,
		&v53) < 0
		|| (v23 = 0i64, v24 = 1.0, (v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v40 + 16i64))(v40)) == 0))
	{
		v26 = HIDWORD(v44);
		goto LABEL_25;
	}
	v26 = HIDWORD(v44);
	do
	{
		v27 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v40 + 24i64))(v40, v23);
		v28 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
		if (v28 >= v24)
			goto LABEL_21;
		v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 40i64))(v27);
		v30 = (int*)sub_140472CD0(v29);
		v31 = v30;
		if (v30)
		{
			if (*v30 == 22)
				goto LABEL_21;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
			v26 = *v31;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
			v26 = 0;
		}
		HIDWORD(v44) = v26;
		v24 = v28;
	LABEL_21:
		++v23;
	} while (v23 < v25);
	v5 = (__int64)v49;
	if (v24 < 1.0)
		v19 = v24;
LABEL_25:
	if (v26)
	{
		*(_DWORD*)(a1 + 4916) = v26;
	}
	else
	{
		v26 = *(_DWORD*)(a1 + 4916);
		HIDWORD(v44) = v26;
	}
	v32 = *v50;
	v59[7] = 0;
	(*(void(__fastcall**)(__int64*, _QWORD, int*))(v32 + 592))(v50, v47, v59);
	HIDWORD(v45) = v59[0];
	if ((*(unsigned int(__fastcall**)(__int64*, __int64, char*, __int64, _QWORD))(*v6 + 440))(
		v6,
		v5 + 48,
		v60,
		65i64,
		0i64))
	{
		v33 = *(float*)&v61;
		v21 = *(float*)&v62;
		v42 = __PAIR64__(v62, v61);
	}
	else
	{
		v33 = *(float*)&v42;
	}
	if (a1 == *(_QWORD*)(qword_140C65898 + 25744))
	{
		if ((dword_140DC2EE0 & 1) == 0)
		{
			dword_140DC2EE0 |= 1u;
			sub_1401AD620((__int64)&unk_140DC2EF0, L"Footstep Material");
		}
		sub_1401ADA40((__int64)&unk_140DC2EF0, v26);
	}
	if (v21 > v33 && (float)(v19 + v21) > *(float*)(v5 + 52))
	{
		if ((float)(v21 - v33) >= (float)((float)(*(float*)(a1 + 1392) * *(float*)(a1 + 4804)) * 0.5))
			v34 = v46 | 6;
		else
			v34 = v46 | 3;
		LODWORD(v46) = v34;
	}
	v35 = *(_QWORD*)(a1 + 3336);
	if (v35)
	{
		v36 = *(_DWORD*)(v35 + 176);
		LODWORD(v44) = v36;
	}
	else
	{
		v36 = v44;
	}
	v37 = *(_QWORD*)(a1 + 3264);
	if (v37)
	{
		v38 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v37 + 64i64))(v37, 5i64);
		if (*(_QWORD*)v38)
		{
			v39 = *(_DWORD*)(*(_QWORD*)v38 + 236i64);
			if (v39)
				v36 = v39;
			LODWORD(v44) = v36;
		}
	}
	if (qword_140C7E570)
		sub_14062F9D0((__int64)&v41);
	if (v40)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
}
// 140B080C8: using guessed type wchar_t aFootstepMateri[18];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C45978: using guessed type int dword_140C45978;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E570: using guessed type __int64 qword_140C7E570;
// 140C7E598: using guessed type __int64 qword_140C7E598;
// 140DC2EE0: using guessed type int dword_140DC2EE0;
// 140472700: using guessed type char var_170[32];


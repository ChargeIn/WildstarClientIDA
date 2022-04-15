//----- (00000001404BD330) ----------------------------------------------------
void __fastcall sub_1404BD330(__int64 a1)
{
	__int64 v2; // rcx
	char* v3; // rax
	__m128 v4; // xmm8
	__m128 v5; // xmm10
	__m128 v6; // xmm5
	__m128 v7; // xmm3
	__m128 v8; // xmm7
	__m128 v9; // xmm12
	__m128 v10; // xmm1
	float v11; // xmm2_4
	__m128 v12; // xmm1
	float v13; // xmm0_4
	float v14; // xmm2_4
	float v15; // xmm0_4
	__m128 v16; // xmm1
	__m128 v17; // xmm10
	float v18; // xmm2_4
	float v19; // xmm0_4
	__m128 v20; // xmm5
	__m128 v21; // xmm8
	__int64 v22; // rax
	double v23; // xmm6_8
	_QWORD* v24; // r13
	__int64 v25; // r8
	_QWORD* v26; // rbx
	_QWORD* v27; // rsi
	_QWORD* v28; // r15
	_QWORD* v29; // r12
	_QWORD* v30; // r14
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	int v34[4]; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v35; // [rsp+68h] [rbp-A0h]
	float v36; // [rsp+78h] [rbp-90h]
	int v37; // [rsp+7Ch] [rbp-8Ch]
	int v38; // [rsp+80h] [rbp-88h]
	int v39; // [rsp+84h] [rbp-84h]
	__int128 v40; // [rsp+88h] [rbp-80h]
	__int128 v41[4]; // [rsp+98h] [rbp-70h] BYREF
	__int64 v42; // [rsp+D8h] [rbp-30h]
	__m128 v43; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v44; // [rsp+F8h] [rbp-10h]
	__m128 v45; // [rsp+108h] [rbp+0h]
	__m128 v46; // [rsp+118h] [rbp+10h]
	__m128 v47[4]; // [rsp+128h] [rbp+20h] BYREF
	__int64 v48; // [rsp+168h] [rbp+60h]
	__m128 v49[4]; // [rsp+178h] [rbp+70h] BYREF
	char v50[64]; // [rsp+1B8h] [rbp+B0h] BYREF
	char v51[64]; // [rsp+1F8h] [rbp+F0h] BYREF
	__m128* v52; // [rsp+238h] [rbp+130h] BYREF
	__m128* v53; // [rsp+240h] [rbp+138h]
	__m128* v54[2]; // [rsp+288h] [rbp+180h] BYREF
	__m128 v55[4]; // [rsp+298h] [rbp+190h] BYREF
	__m128* v56; // [rsp+2D8h] [rbp+1D0h] BYREF
	double v57[8]; // [rsp+2E8h] [rbp+1E0h] BYREF

	v2 = *(_QWORD*)(a1 + 256);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)v2 + 96i64))(v2, v50, 0i64);
		(*(void(__fastcall**)(_QWORD, char*, __int64))(**(_QWORD**)(a1 + 256) + 96i64))(
			*(_QWORD*)(a1 + 256),
			v51,
			1i64);
		v3 = v51;
		v4 = (__m128)0x40400000u;
		v5 = (__m128)0x40400000u;
		v6 = (__m128)0x40400000u;
		if (*(_DWORD*)(a1 + 188) != 1)
			v3 = v50;
		v7 = *((__m128*)v3 + 2);
		v8 = *((__m128*)v3 + 1);
		v9 = *((__m128*)v3 + 3);
		v10 = _mm_mul_ps(v7, v7);
		v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		v12 = _mm_mul_ps(v8, v8);
		v13 = 1.0 / fsqrt(v11);
		v5.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v11 * v13) * v13)) * 0.5) * v13, 0.0);
		v14 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
		v15 = 1.0 / fsqrt(v14);
		v16 = _mm_mul_ps(*(__m128*)v3, *(__m128*)v3);
		v17 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7);
		v6.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v14 * v15) * v15)) * 0.5) * v15, 0.0);
		v18 = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
		v19 = fsqrt(v18);
		v20 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v8);
		v4.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v18 * (float)(1.0 / v19)) * (float)(1.0 / v19))) * 0.5)
			* (float)(1.0 / v19),
			0.0);
		v21 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *(__m128*)v3);
		v43 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v21, _mm_shuffle_ps(v21, v21, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v21, v21, 85), (__m128)0i64));
		v44 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v20, v20, 85), (__m128)0i64));
		v45 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)0i64));
		v46 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v9, _mm_shuffle_ps(v9, v9, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v9, v9, 85), (__m128)0x3F800000u));
		v22 = *(_QWORD*)(qword_140C65898 + 120);
		v41[0] = (__int128)v43;
		*(_QWORD*)&v23 = (unsigned int)dword_140C45D38;
		v42 = v22 + 4576;
		v41[1] = (__int128)v44;
		v41[2] = (__int128)v45;
		v41[3] = (__int128)v46;
		*(float*)&v23 = *(float*)&dword_140C45D38 * 0.5;
		v36 = sub_1408FE3D0(v23);
		v34[0] = sub_1408FC950(v23);
		v38 = v34[0];
		v40 = xmmword_140C78440;
		v34[1] = 0;
		v34[3] = 0;
		v37 = 0;
		*(float*)&v34[2] = -v36;
		v35 = xmmword_140B7A4B0;
		v39 = 0;
		v56 = &v43;
		sub_1401AFC20((__int64*)&v56, v57);
		v54[0] = (__m128*)v57;
		v54[1] = (__m128*)v34;
		sub_1401AFB10(v54, v55);
		v52 = v55;
		v53 = &v43;
		sub_1401AFB10(&v52, v49);
		v52 = &v43;
		v53 = v49;
		sub_1401AFB10(&v52, v47);
		v24 = (_QWORD*)(a1 + 96);
		v48 = v25 + 4576;
		if (!*(_QWORD*)(a1 + 96) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __m128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v47,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_X.m3",
					1,
					0,
					a1 + 96);
		v26 = (_QWORD*)(a1 + 104);
		if (!*(_QWORD*)(a1 + 104) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Y.m3",
					1,
					0,
					a1 + 104);
		v27 = (_QWORD*)(a1 + 112);
		if (!*(_QWORD*)(a1 + 112) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __m128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v47,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Z.m3",
					1,
					0,
					a1 + 112);
		v28 = (_QWORD*)(a1 + 120);
		if (!*(_QWORD*)(a1 + 120) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X.m3",
					1,
					0,
					a1 + 120);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X_noSelect.m3",
					1,
					0,
					a1 + 144);
		}
		v29 = (_QWORD*)(a1 + 128);
		if (!*(_QWORD*)(a1 + 128) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y.m3",
					1,
					0,
					a1 + 128);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y_noSelect.m3",
					1,
					0,
					a1 + 152);
		}
		v30 = (_QWORD*)(a1 + 136);
		if (!*(_QWORD*)(a1 + 136) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z.m3",
					1,
					0,
					a1 + 136);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v41,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z_noSelect.m3",
					1,
					0,
					a1 + 160);
		}
		if (*v24 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64) && *v24)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v24 + 8i64))(*v24);
			*v24 = 0i64;
		}
		if (*v26 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64) && *v26)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v26 + 8i64))(*v26);
			*v26 = 0i64;
		}
		if (*v27 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64) && *v27)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v27 + 8i64))(*v27);
			*v27 = 0i64;
		}
		if (*v28 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64))
		{
			if (*v28)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v28 + 8i64))(*v28);
				*v28 = 0i64;
			}
			v31 = *(_QWORD*)(a1 + 144);
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
				*(_QWORD*)(a1 + 144) = 0i64;
			}
		}
		if (*v29 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64))
		{
			if (*v29)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v29 + 8i64))(*v29);
				*v29 = 0i64;
			}
			v32 = *(_QWORD*)(a1 + 152);
			if (v32)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
				*(_QWORD*)(a1 + 152) = 0i64;
			}
		}
		if (*v30 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64))
		{
			if (*v30)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v30 + 8i64))(*v30);
				*v30 = 0i64;
			}
			v33 = *(_QWORD*)(a1 + 160);
			if (v33)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
				*(_QWORD*)(a1 + 160) = 0i64;
			}
		}
	}
}
// 1404BD71A: variable 'v25' is possibly undefined
// 140B098F0: using guessed type wchar_t aArtFxHousingTr_4[51];
// 140B09990: using guessed type wchar_t aArtFxHousingTr_5[60];
// 140B09A40: using guessed type wchar_t aArtFxHousingTr_6[51];
// 140B09AE0: using guessed type wchar_t aArtFxHousingTr_7[60];
// 140B09B80: using guessed type wchar_t aArtFxHousingTr_0[57];
// 140B09C80: using guessed type wchar_t aArtFxHousingTr_1[57];
// 140B09D30: using guessed type wchar_t aArtFxHousingTr_2[51];
// 140B09DF0: using guessed type wchar_t aArtFxHousingTr_3[60];
// 140B09E90: using guessed type wchar_t aArtFxHousingTr[57];
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C45D38: using guessed type int dword_140C45D38;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1404BD330: using guessed type double var_D0[8];
// 1404BD330: using guessed type __m128 var_120[4];
// 1404BD330: using guessed type __m128 var_240[4];
// 1404BD330: using guessed type __m128 var_290[4];


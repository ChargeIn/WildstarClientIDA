//----- (00000001400355A0) ----------------------------------------------------
__int64 __fastcall sub_1400355A0(__int64 a1)
{
	__int64 v2; // r14
	__m128 v3; // xmm6
	__m128 v4; // xmm3
	int v5; // ecx
	float v6; // xmm5_4
	float v7; // xmm7_4
	float v8; // xmm11_4
	int v9; // xmm9_4
	float v10; // xmm8_4
	int v11; // xmm10_4
	_QWORD* v12; // rbx
	int v13; // xmm7_4
	__int64 v14; // rcx
	unsigned int v15; // edi
	int v16; // eax
	float v17; // xmm8_4
	float v18; // xmm11_4
	__int64 v19; // r8
	__int64 v21; // [rsp+30h] [rbp-D8h]
	__int128 v22; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v23; // [rsp+68h] [rbp-A0h] BYREF
	int v24[8]; // [rsp+78h] [rbp-90h] BYREF
	int v25[8]; // [rsp+98h] [rbp-70h] BYREF
	int v26[8]; // [rsp+B8h] [rbp-50h] BYREF
	int v27[4]; // [rsp+D8h] [rbp-30h] BYREF
	int v28; // [rsp+E8h] [rbp-20h]
	int v29; // [rsp+ECh] [rbp-1Ch]
	int v30[8]; // [rsp+F8h] [rbp-10h] BYREF
	int v31[8]; // [rsp+118h] [rbp+10h] BYREF
	int v32[8]; // [rsp+138h] [rbp+30h] BYREF
	int v33[5]; // [rsp+158h] [rbp+50h] BYREF
	int v34; // [rsp+16Ch] [rbp+64h]
	int v35[8]; // [rsp+178h] [rbp+70h] BYREF
	int v36[4]; // [rsp+198h] [rbp+90h] BYREF
	int v37; // [rsp+1A8h] [rbp+A0h]
	int v38; // [rsp+1ACh] [rbp+A4h]
	int v39[8]; // [rsp+1B8h] [rbp+B0h] BYREF
	__int64 v40; // [rsp+1D8h] [rbp+D0h] BYREF
	int v41; // [rsp+1E8h] [rbp+E0h]
	int v42; // [rsp+1ECh] [rbp+E4h]
	int v43[8]; // [rsp+1F8h] [rbp+F0h] BYREF
	int v44[8]; // [rsp+218h] [rbp+110h] BYREF
	int v45[8]; // [rsp+238h] [rbp+130h] BYREF
	__int64 v46; // [rsp+258h] [rbp+150h] BYREF
	int v47; // [rsp+268h] [rbp+160h]
	int v48; // [rsp+26Ch] [rbp+164h]
	int v49[8]; // [rsp+278h] [rbp+170h] BYREF
	__int64 v50; // [rsp+298h] [rbp+190h] BYREF
	int v51; // [rsp+2A8h] [rbp+1A0h]
	int v52; // [rsp+2ACh] [rbp+1A4h]
	int v53[32]; // [rsp+2B8h] [rbp+1B0h] BYREF

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v3 = 0i64;
	v3.m128_f32[0] = (float)*(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24i64))(*(_QWORD*)(a1 + 256))
		+ 8);
	v4 = 0i64;
	v5 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24i64))(*(_QWORD*)(a1 + 256)) + 4);
	v50 = 0i64;
	v51 = 1088421888;
	v52 = 1084227584;
	v40 = 1088421888i64;
	v41 = 1100480512;
	v4.m128_f32[0] = (float)v5;
	v42 = 1084227584;
	v46 = 1100480512i64;
	v47 = 1104150528;
	v48 = 1084227584;
	v44[0] = 0;
	v44[1] = 1084227584;
	v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, (__m128)0i64), _mm_unpacklo_ps(v3, (__m128)0i64));
	v44[4] = 1088421888;
	v44[5] = 1104150528;
	v25[0] = 1088421888;
	v25[1] = 1084227584;
	v25[4] = 1100480512;
	v25[5] = 1104150528;
	v30[0] = 1100480512;
	v30[1] = 1084227584;
	v30[4] = 1104150528;
	v30[5] = 1104150528;
	v35[0] = 0;
	v35[1] = 1104150528;
	v35[4] = 1088421888;
	v35[5] = 1107558400;
	v43[0] = 1088421888;
	v43[1] = 1104150528;
	v43[4] = 1100480512;
	v43[5] = 1107558400;
	v49[0] = 1100480512;
	v49[1] = 1104150528;
	v49[4] = 1104150528;
	v49[5] = 1107558400;
	v6 = (float)*(int*)(v2 + 8);
	v7 = (float)*(int*)(v2 + 12);
	v8 = v6 * 0.00073206442;
	*(float*)&v9 = (float)(v6 * 0.00073206442) * 106.0;
	v10 = v7 * 0.0013020834;
	*(float*)&v11 = v7 - (float)((float)(v7 * 0.0013020834) * 159.0);
	v36[0] = v9;
	v36[1] = v11;
	v27[1] = v11;
	v12 = (_QWORD*)(a1 + 224);
	*(float*)&v13 = v7 - (float)((float)(v7 * 0.0013020834) * 87.0);
	v31[1] = v11;
	*(float*)&v31[4] = v6 - *(float*)&v9;
	v14 = *(_QWORD*)(a1 + 224);
	*(float*)&v37 = (float)((float)(v6 * 0.00073206442) * 7.0) + *(float*)&v9;
	*(float*)&v38 = (float)(v10 * 5.0) + *(float*)&v11;
	v27[0] = v37;
	*(float*)&v28 = (float)(v6 - *(float*)&v9) - (float)((float)(v6 * 0.00073206442) * 7.0);
	v29 = v38;
	v31[0] = v28;
	v31[5] = v38;
	v33[0] = v9;
	v33[1] = v38;
	v33[4] = v37;
	*(float*)&v34 = *(float*)&v13 - (float)(v10 * 7.0);
	v24[0] = v37;
	v24[1] = v38;
	v24[4] = v28;
	v24[5] = v34;
	v26[0] = v28;
	v26[1] = v38;
	*(float*)&v26[4] = v6 - *(float*)&v9;
	v26[5] = v34;
	v32[0] = v9;
	v32[1] = v34;
	v32[4] = v37;
	v32[5] = v13;
	v39[0] = v37;
	v39[1] = v34;
	v39[4] = v28;
	v39[5] = v13;
	v45[0] = v28;
	v45[1] = v34;
	*(float*)&v45[4] = v6 - *(float*)&v9;
	v45[5] = v13;
	v15 = (int)(float)((float)(v10 * 10.0) + 0.5);
	if (v15 != *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14) + 8))
	{
		if (*v12)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
			*v12 = 0i64;
		}
		v21 = a1 + 224;
		(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)qword_140C65680 + 32i64))(
			qword_140C65680,
			L"Trebuchet MS",
			v15);
	}
	v16 = *(_DWORD*)(v2 + 8);
	v17 = v10 * 8.0;
	v18 = v8 * 8.0;
	*(float*)&v53[5] = *(float*)&v13 - v17;
	*(float*)&v53[1] = v17 + *(float*)&v11;
	*(float*)v53 = v18 + *(float*)&v9;
	*(float*)&v53[4] = (float)((float)v16 - *(float*)&v9) - v18;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	v22 = xmmword_140B7B240;
	LODWORD(v21) = 1;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, __int128*, __int64))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		&v50,
		v36,
		&v22,
		v21);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		&v40,
		v27,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		&v46,
		v31,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v44,
		v33,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v25,
		v24,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v30,
		v26,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v35,
		v32,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v43,
		v39,
		&v22,
		1);
	v22 = xmmword_140B7B240;
	(*(void(__fastcall**)(__int64, _QWORD, int*, int*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 256),
		v49,
		v45,
		&v22,
		1);
	v19 = *(_QWORD*)(a1 + 128);
	v23 = (__m128)xmmword_140B7B240;
	v22 = xmmword_140C777D0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, int*, int, __m128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
		qword_140C65680,
		*v12,
		v19,
		-1i64,
		v53,
		21,
		&v23,
		&v22,
		1);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
}
// 140035A07: variable 'v21' is possibly undefined
// 1409DE788: using guessed type wchar_t aTrebuchetMs[13];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;


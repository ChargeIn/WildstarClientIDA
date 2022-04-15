//----- (00000001403F5FD0) ----------------------------------------------------
_QWORD* __fastcall sub_1403F5FD0(__int64 a1)
{
	_QWORD* result; // rax
	__m128** v3; // rax
	__m128* v4; // rbx
	__m128 v5; // xmm6
	float v6; // xmm8_4
	float v7; // xmm9_4
	__int64 v8; // r8
	__int64 v9; // r14
	__int128 v10; // xmm15
	__int128 v11; // xmm14
	float v12; // xmm1_4
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	float v15; // xmm1_4
	__m128 v16; // xmm2
	double v17; // xmm6_8
	__m128 v18; // xmm13
	float v19; // xmm7_4
	float v20; // xmm0_4
	float v21; // xmm11_4
	float v22; // xmm4_4
	float v23; // xmm0_4
	float v24; // xmm10_4
	float v25; // xmm8_4
	float v26; // xmm7_4
	__m128 v27; // xmm3
	float v28; // xmm5_4
	float v29; // xmm11_4
	float v30; // xmm9_4
	__int64 i; // rsi
	_WORD* v32; // rcx
	unsigned __int64 v33; // rax
	int v34; // eax
	__int64 v35; // rdi
	float v36; // xmm2_4
	_QWORD** v37; // rax
	_QWORD* v38; // rbx
	__int64 v39; // rdi
	__int64 v40; // rcx
	float v41; // [rsp+38h] [rbp-D0h]
	float v42; // [rsp+3Ch] [rbp-CCh]
	__m128 v43; // [rsp+48h] [rbp-C0h] BYREF
	float v44; // [rsp+58h] [rbp-B0h]
	int v45; // [rsp+5Ch] [rbp-ACh]
	__m128 v46; // [rsp+68h] [rbp-A0h]
	__m128* v47; // [rsp+78h] [rbp-90h]
	__m128* v48; // [rsp+80h] [rbp-88h]
	__m128* v49; // [rsp+88h] [rbp-80h]
	__m128* v50; // [rsp+90h] [rbp-78h]
	int v51[12]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v52; // [rsp+C8h] [rbp-40h]
	__m128 v53; // [rsp+D8h] [rbp-30h]
	__int128 v54[4]; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v55[4]; // [rsp+128h] [rbp+20h] BYREF
	float v56; // [rsp+168h] [rbp+60h]
	int v57; // [rsp+16Ch] [rbp+64h]
	int v58; // [rsp+170h] [rbp+68h]
	__int128 v59[4]; // [rsp+178h] [rbp+70h] BYREF
	__m128* v60[2]; // [rsp+1B8h] [rbp+B0h] BYREF
	__m128 v61[4]; // [rsp+1C8h] [rbp+C0h] BYREF
	__m128* v62[10]; // [rsp+208h] [rbp+100h] BYREF
	int v63; // [rsp+258h] [rbp+150h]
	int v64; // [rsp+25Ch] [rbp+154h]
	int v65; // [rsp+260h] [rbp+158h]
	int v66; // [rsp+264h] [rbp+15Ch]
	int v67; // [rsp+268h] [rbp+160h]
	int v68; // [rsp+270h] [rbp+168h]
	int v69; // [rsp+278h] [rbp+170h]
	int v70; // [rsp+280h] [rbp+178h]
	int v71; // [rsp+288h] [rbp+180h]
	int v72; // [rsp+290h] [rbp+188h]
	int v73; // [rsp+298h] [rbp+190h]
	int v74; // [rsp+2A0h] [rbp+198h]
	int v75; // [rsp+2ACh] [rbp+1A4h]
	int v76; // [rsp+2B4h] [rbp+1ACh]
	int v77; // [rsp+2FCh] [rbp+1F4h]
	int v78; // [rsp+304h] [rbp+1FCh]
	int v79; // [rsp+34Ch] [rbp+244h]
	int v80; // [rsp+354h] [rbp+24Ch]
	int v81; // [rsp+39Ch] [rbp+294h]
	int v82; // [rsp+3A4h] [rbp+29Ch]

	result = *(_QWORD**)(a1 + 31896);
	if ((_QWORD*)*result != result)
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65680 + 136i64))();
		v3 = *(__m128***)(a1 + 31896);
		v4 = *v3;
		if (*v3 != (__m128*)v3)
		{
			v5 = 0i64;
			v6 = sub_1408FE3D0(0.0);
			v41 = v6;
			v49 = (__m128*)v59;
			v7 = sub_1408FC950(0.0);
			v50 = (__m128*)v51;
			v42 = v7;
			v47 = v61;
			v48 = (__m128*)v54;
			do
			{
				v8 = v4[1].m128_i32[0];
				if ((int)v8 >= 0
					|| (int)v8 < (int)((*(_QWORD*)(qword_140C65898 + 31936) - *(_QWORD*)(qword_140C65898 + 31928)) / 112i64))
				{
					v9 = *(_QWORD*)(qword_140C65898 + 31928) + 112 * v8;
				}
				else
				{
					v9 = 0i64;
				}
				v10 = xmmword_140C78420;
				v11 = xmmword_140C78430;
				v43.m128_i32[0] = v4[5].m128_i32[0];
				v12 = v4[5].m128_f32[0];
				v54[1] = xmmword_140C78420;
				v54[2] = xmmword_140C78430;
				v44 = v12;
				v45 = v4[6].m128_i32[1];
				v13 = (__m128)v4[6].m128_u32[0];
				v14 = (__m128)v4[6].m128_u32[1];
				v14.m128_f32[0] = v14.m128_f32[0] - v4[5].m128_f32[1];
				v13.m128_f32[0] = v13.m128_f32[0] - v4[5].m128_f32[0];
				v15 = v4[4].m128_f32[0];
				v54[0] = xmmword_140C78410;
				v14.m128_f32[0] = (float)(v14.m128_f32[0] * 0.5) + v4[5].m128_f32[1];
				v13.m128_f32[0] = (float)(v13.m128_f32[0] * 0.5) + v4[5].m128_f32[0];
				v53 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, v5), _mm_unpacklo_ps(v14, v5));
				v16 = _mm_unpacklo_ps(v53, v5);
				*(_QWORD*)&v17 = (unsigned int)dword_140C3B438;
				v18 = _mm_shuffle_ps(v53, v53, 85);
				*(float*)&v17 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(v15 * -1.0)) * 0.5;
				v54[3] = (__int128)_mm_unpacklo_ps(v16, _mm_unpacklo_ps(v18, (__m128)0x3F800000u));
				v19 = sub_1408FE3D0(v17);
				v20 = sub_1408FC950(v17);
				v46.m128_f32[0] = (float)((float)(v7 * v6) * v20) + (float)((float)(v6 * v7) * v19);
				v46.m128_f32[1] = (float)((float)(v6 * v7) * v20) - (float)((float)(v7 * v6) * v19);
				v46.m128_f32[3] = (float)((float)(v6 * v6) * v19) + (float)((float)(v7 * v7) * v20);
				v46.m128_f32[2] = (float)((float)(v7 * v7) * v19) - (float)((float)(v6 * v6) * v20);
				v21 = _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
				v51[3] = 0;
				v22 = _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
				v51[7] = 0;
				v51[11] = 0;
				v23 = _mm_shuffle_ps(v46, v46, 255).m128_f32[0];
				v16.m128_f32[0] = v46.m128_f32[0] * (float)(v21 * 2.0);
				v59[1] = v10;
				v59[2] = v11;
				v24 = (float)(v46.m128_f32[0] * 2.0) * v23;
				v25 = (float)(v21 * 2.0) * v23;
				v26 = v21 * (float)(v21 * 2.0);
				v27 = v53;
				v28 = (float)(v22 * 2.0) * v23;
				*(float*)&v17 = v46.m128_f32[0] * (float)(v46.m128_f32[0] * 2.0);
				*(float*)&v51[8] = (float)(v46.m128_f32[0] * (float)(v22 * 2.0)) + v25;
				v29 = v21 * (float)(v22 * 2.0);
				v30 = (float)(v22 * 2.0) * v22;
				*(float*)&v51[2] = (float)(v46.m128_f32[0] * (float)(v22 * 2.0)) - v25;
				*(float*)&v51[6] = v29 + v24;
				*(float*)&v51[9] = v29 - v24;
				*(float*)v51 = (float)(1.0 - v26) - v30;
				*(float*)&v51[1] = v16.m128_f32[0] + v28;
				*(float*)&v51[4] = v16.m128_f32[0] - v28;
				v27.m128_f32[0] = v53.m128_f32[0] * -1.0;
				v18.m128_f32[0] = v18.m128_f32[0] * -1.0;
				*(float*)&v51[10] = (float)(1.0 - *(float*)&v17) - v26;
				v56 = v53.m128_f32[0] * -1.0;
				*(float*)&v51[5] = (float)(1.0 - *(float*)&v17) - v30;
				v58 = 0;
				v57 = v18.m128_i32[0];
				v52 = xmmword_140B7AD00;
				v59[0] = xmmword_140C78410;
				v60[0] = v49;
				v60[1] = v50;
				v59[3] = (__int128)_mm_unpacklo_ps(
					_mm_unpacklo_ps(v27, (__m128)0i64),
					_mm_unpacklo_ps(v18, (__m128)0x3F800000u));
				sub_1401AFB10(v60, v61);
				v62[0] = v47;
				v62[1] = v48;
				sub_1401AFB10(v62, v55);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v55);
				for (i = 0i64; ; i = (unsigned int)(i + 1))
				{
					v32 = (_WORD*)v4[2].m128_u64[0];
					v33 = 0i64;
					if (*v32)
					{
						do
							++v33;
						while (v32[v33]);
					}
					if ((unsigned int)i >= v33)
						break;
					v34 = (unsigned __int16)v32[i] - 48;
					if ((unsigned int)v34 <= 9)
					{
						v35 = *(_QWORD*)(v9 + 8i64 * v34 + 32);
						if (*(_QWORD*)v35)
							sub_140109C00(*(float**)(v9 + 8i64 * v34 + 32));
						v36 = (float)((float)((float)(v74 + v72 + v70 + v65 + v68 - v69 - v67 - v71 - v73 - v63) * v4[3].m128_f32[3])
							+ 0.5)
							+ v43.m128_f32[0];
						v44 = v36;
						v43.m128_f32[1] = v4[6].m128_f32[1]
							- (float)((float)((float)(v82 + v80 + v78 + v76 + v66 - v64 - v75 - v77 - v79 - v81)
								* v4[3].m128_f32[3])
								+ 0.5);
						if (*(_QWORD*)v35)
						{
							sub_140103E60(
								*(_QWORD**)v35,
								&v43,
								v4 + 7,
								0,
								COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v35 + 8)) * *(float*)(v35 + 12)));
							v36 = v44;
						}
						v43.m128_f32[0] = v36;
						v43.m128_f32[0] = (float)((float)((float)v4[4].m128_i32[1] * v4[3].m128_f32[3]) + 0.5) + v36;
					}
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				v4 = (__m128*)v4->m128_u64[0];
				v6 = v41;
				v7 = v42;
				v5 = 0i64;
			} while (v4 != *(__m128**)(a1 + 31896));
		}
		v37 = *(_QWORD***)(a1 + 31896);
		v38 = *v37;
		if (*v37 != v37)
		{
			do
			{
				v39 = (__int64)v38;
				v38 = (_QWORD*)*v38;
				v40 = *(_QWORD*)(v39 + 32);
				if (v40)
					sub_14018B900(v40, 0);
				sub_14018B900(v39, 0);
			} while (v38 != *(_QWORD**)(a1 + 31896));
		}
		**(_QWORD**)(a1 + 31896) = *(_QWORD*)(a1 + 31896);
		result = *(_QWORD**)(a1 + 31896);
		result[1] = result;
	}
	return result;
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1403F5FD0: using guessed type __m128 var_2F0[4];
// 1403F5FD0: using guessed type __m128 var_390[4];


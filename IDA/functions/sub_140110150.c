//----- (0000000140110150) ----------------------------------------------------
char __fastcall sub_140110150(
	__int64 a1,
	__m128* a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	unsigned int* a5,
	char a6)
{
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdi
	float* v13; // rax
	bool v14; // zf
	__m128 v15; // xmm2
	__m128 v16; // xmm0
	float v17; // xmm9_4
	float v18; // xmm1_4
	float v19; // xmm8_4
	char v20; // si
	__int64 v21; // rax
	unsigned __int64 v22; // r12
	float v23; // xmm11_4
	__int64 v24; // rdi
	__int64 v25; // rcx
	__int32 v26; // xmm0_4
	__int32 v27; // xmm1_4
	__int64 v28; // rdx
	float v29; // xmm6_4
	__int64 v30; // rax
	unsigned __int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rax
	float v34; // xmm3_4
	__int64 v35; // rcx
	int v36; // eax
	float v37; // xmm1_4
	__int64 v38; // rax
	float v39; // xmm1_4
	__int64 v40; // rax
	float v41; // xmm2_4
	_QWORD* v42; // rsi
	int v43; // xmm6_4
	__m128* v44; // rax
	__int16 v45; // cx
	__m128 v46; // xmm0
	__m128 v47; // xmm1
	__int64 v48; // rdx
	unsigned __int64 v49; // r9
	char v50; // cl
	__int64 v51; // rcx
	__int64 v52; // rcx
	unsigned __int64 v53; // rsi
	float v54; // xmm7_4
	__int64 v55; // rax
	int v56; // eax
	float v57; // xmm1_4
	unsigned __int64 v58; // r8
	__m128* v59; // r8
	_QWORD* v60; // rcx
	__m128 v62; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v63; // [rsp+48h] [rbp-C0h]
	float v64; // [rsp+58h] [rbp-B0h] BYREF
	float v65; // [rsp+5Ch] [rbp-ACh] BYREF
	float v66; // [rsp+60h] [rbp-A8h] BYREF
	float v67; // [rsp+64h] [rbp-A4h] BYREF
	__m128 v68; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v69; // [rsp+78h] [rbp-90h]
	unsigned __int64 v70; // [rsp+88h] [rbp-80h]
	__int64 v71; // [rsp+90h] [rbp-78h]
	float* v72; // [rsp+98h] [rbp-70h]
	char v73; // [rsp+158h] [rbp+50h]
	float v74; // [rsp+160h] [rbp+58h] BYREF

	v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64);
	v12 = v10;
	v71 = v10;
	v13 = (float*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11);
	v14 = *(_BYTE*)(a1 + 1072) == 0;
	v15 = *a2;
	v16 = a2[1];
	v62 = v15;
	v72 = v13;
	v17 = 0.0;
	v63 = v16;
	v62.m128_f32[1] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
	v18 = v62.m128_f32[1] + *v13;
	v68 = v15;
	v63.m128_f32[1] = v18;
	v69 = v63;
	if (v14)
	{
		v19 = *(float*)(v12 + 12) + 1.0;
	}
	else
	{
		v15 = v62;
		v19 = *(float*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64))
			+ 20);
	}
	v20 = a6;
	LOBYTE(v21) = 0;
	v22 = 0i64;
	v23 = 0.0;
	v73 = 0;
	v70 = *(_QWORD*)(a1 + 1248);
	if (v70)
	{
		v24 = 0i64;
		while (1)
		{
			v25 = *(_QWORD*)(a1 + 1080);
			v26 = a2->m128_i32[0];
			v27 = a2[1].m128_i32[0];
			v28 = *(_QWORD*)(a1 + 1240);
			v74 = 0.0;
			v29 = 0.0;
			v62.m128_i32[0] = v26;
			v63.m128_i32[0] = v27;
			(*(void(__fastcall**)(__int64, _QWORD, float*))(*(_QWORD*)v25 + 168i64))(v25, *(_QWORD*)(v24 + v28), &v74);
			if (a3 >= a4)
				goto LABEL_29;
			v30 = *(_QWORD*)(a1 + 1240);
			v31 = *(_QWORD*)(v24 + v30);
			if (a4 <= v31 || a3 >= *(_QWORD*)(v24 + v30 + 8))
				goto LABEL_29;
			if (a3 > v31)
			{
				v32 = *(_QWORD*)(a1 + 1080);
				v66 = 0.0;
				(*(void(__fastcall**)(__int64, unsigned __int64, float*))(*(_QWORD*)v32 + 168i64))(v32, a3, &v66);
				v29 = v66 - v74;
			}
			v33 = *(_QWORD*)(a1 + 1240);
			v34 = *(float*)(v24 + v33 + 16);
			if (a4 < *(_QWORD*)(v24 + v33 + 8))
			{
				v35 = *(_QWORD*)(a1 + 1080);
				v67 = 0.0;
				(*(void(__fastcall**)(__int64, unsigned __int64, float*))(*(_QWORD*)v35 + 168i64))(v35, a4, &v67);
				v34 = v67 - v74;
			}
			v36 = *(_DWORD*)(a1 + 704);
			if ((v36 & 2) != 0)
				break;
			v39 = a2->m128_f32[0];
			if ((v36 & 1) == 0)
			{
				v62.m128_f32[0] = v39 + v29;
				goto LABEL_18;
			}
			v40 = *(_QWORD*)(a1 + 1240);
			v41 = a2[1].m128_f32[0] - v39;
			v62.m128_f32[0] = (float)((float)((float)(v41 - *(float*)(v24 + v40 + 16)) * 0.5) + v39) + v29;
			v63.m128_f32[0] = (float)((float)((float)(v41 - *(float*)(v24 + v40 + 16)) * 0.5) + v39) + v34;
		LABEL_19:
			if (!v20 || sub_1400D40A0(a1))
			{
				v42 = *(_QWORD**)(a1 + 1096);
				if (v42)
				{
					*(float*)&v43 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1104)) * *(float*)(a1 + 1108);
					v44 = (__m128*)sub_14004F610(a5);
					sub_140103E60(v42, &v62, v44, 0, v43);
				}
				v20 = a6;
			}
			v45 = *(_WORD*)(qword_140C63650 + 224) & 0x3FF;
			if ((v45 == 4 || (unsigned __int16)(v45 - 17) <= 1u)
				&& (*(_DWORD*)(a1 + 664) & 0x800i64) != 0
				&& sub_1400D40A0(a1))
			{
				v46 = v62;
				v47 = v63;
				*(__m128*)(a1 + 1312) = v62;
				*(__m128*)(a1 + 1328) = v47;
				goto LABEL_30;
			}
		LABEL_29:
			v47 = v63;
			v46 = v62;
		LABEL_30:
			if (v20 && !v73)
			{
				v48 = *(_QWORD*)(a1 + 1240);
				v49 = *(_QWORD*)(a1 + 1024);
				if (v49 < *(_QWORD*)(v24 + v48) || v49 >= *(_QWORD*)(v24 + v48 + 8))
				{
					v50 = 0;
				}
				else
				{
					v50 = 1;
					*(_BYTE*)(a1 + 1064) = 0;
				}
				if (*(_BYTE*)(a1 + 1064) && v49 == *(_QWORD*)(v24 + v48 + 8))
					v50 = 1;
				if (v49 == *(_QWORD*)(v24 + v48 + 8) && v22 == v70 - 1 || v50)
				{
					v51 = *(_QWORD*)(a1 + 1080);
					v68 = v46;
					v69 = v47;
					v23 = *(float*)(v24 + v48 + 16);
					v64 = 0.0;
					v73 = 1;
					(*(void(__fastcall**)(__int64, unsigned __int64, float*))(*(_QWORD*)v51 + 168i64))(v51, v49, &v64);
					v17 = v64 - v74;
					if (*(_BYTE*)(a1 + 1072))
					{
						v52 = *(_QWORD*)(a1 + 1080);
						v53 = *(_QWORD*)(a1 + 1024);
						v65 = 0.0;
						if (v53 >= (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v52 + 72i64))(v52))
						{
							v54 = v68.m128_f32[0];
						}
						else
						{
							(*(void(__fastcall**)(_QWORD, unsigned __int64, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
								*(_QWORD*)(a1 + 1080),
								v53 + 1,
								&v65);
							v54 = v65 - v74;
						}
						v55 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
						v20 = a6;
						v19 = fmaxf(v54, v17 + *(float*)(v55 + 20));
					}
					else
					{
						v19 = (float)(v17 + *(float*)(v71 + 12)) + 1.0;
					}
				}
			}
			++v22;
			v24 += 24i64;
			v62.m128_f32[1] = v62.m128_f32[1] + *v72;
			v63.m128_f32[1] = v63.m128_f32[1] + *v72;
			if (v22 >= v70)
			{
				v15 = v62;
				LOBYTE(v21) = v73;
				v12 = v71;
				goto LABEL_50;
			}
		}
		v37 = a2[1].m128_f32[0];
		v38 = *(_QWORD*)(a1 + 1240);
		v62.m128_f32[0] = (float)(v37 - *(float*)(v24 + v38 + 16)) + v29;
		v39 = v37 - *(float*)(v24 + v38 + 16);
	LABEL_18:
		v63.m128_f32[0] = v39 + v34;
		goto LABEL_19;
	}
LABEL_50:
	if (v20)
	{
		if (!(_BYTE)v21)
		{
			v68 = v15;
			v17 = 0.0;
			v69 = v63;
			v19 = *(float*)(v12 + 12) + 1.0;
		}
		v56 = *(_DWORD*)(a1 + 704);
		if ((v56 & 2) != 0)
		{
			v57 = a2[1].m128_f32[0] - v23;
		}
		else if ((v56 & 1) != 0)
		{
			v57 = (float)((float)((float)(a2[1].m128_f32[0] - a2->m128_f32[0]) - v23) * 0.5) + a2->m128_f32[0];
		}
		else
		{
			v57 = a2->m128_f32[0];
		}
		v21 = *(_QWORD*)(a1 + 32);
		v69.m128_f32[0] = v57 + v19;
		v68.m128_f32[0] = v57 + v17;
		if (v21)
		{
			if (*(_QWORD*)(v21 + 2880) == a1)
			{
				LOBYTE(v21) = *(_BYTE*)(a1 + 664) >> 1;
				if ((*(_BYTE*)(a1 + 664) & 2) == 0)
				{
					LOWORD(v21) = sub_14018CDF0();
					if ((v21 & 0x200) != 0)
					{
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
						LOBYTE(v21) = qword_140C63678;
						v58 = *(unsigned int*)(a1 + 708);
						if (v58 >= *(_QWORD*)(qword_140C63678 + 48))
							v59 = *(__m128**)(qword_140C63678 + 40);
						else
							v59 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v58);
						v60 = *(_QWORD**)(a1 + 1096);
						if (v60)
							LOBYTE(v21) = sub_140103E60(
								v60,
								&v68,
								v59,
								0,
								COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1104)) * *(float*)(a1 + 1108)));
					}
				}
			}
		}
		*(__m128*)(a1 + 1184) = v68;
		*(__m128*)(a1 + 1200) = v69;
	}
	return v21;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;


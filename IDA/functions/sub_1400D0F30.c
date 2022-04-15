//----- (00000001400D0F30) ----------------------------------------------------
__int64 sub_1400D0F30(_QWORD* a1, char a2, ...)
{
	__int64 v2; // r8
	_BYTE* v3; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v8; // eax
	unsigned __int8 v9; // cl
	__m128* v10; // rsi
	__int64 v11; // r9
	__int64 v12; // rdx
	__int64 v13; // rax
	char v14; // al
	__int64 v15; // rcx
	__int64 v16; // rax
	float* v17; // rcx
	double v18; // xmm0_8
	char v19; // cl
	int v20; // eax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rbx
	bool v27; // zf
	unsigned int* v28; // rax
	__m128i v29; // xmm2
	__m128* v30; // rax
	float v31; // xmm0_4
	char v32; // al
	char v33; // al
	_QWORD* v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	_QWORD* v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rcx
	_BYTE* v40; // rsi
	__int64 v41; // rcx
	int v42; // eax
	int v43; // r8d
	__int64 v44; // rsi
	__int64 v45; // rcx
	unsigned __int8 v46; // bl
	_BYTE* v48; // [rsp+28h] [rbp-A9h]
	unsigned int v49; // [rsp+48h] [rbp-89h]
	_BYTE* v50; // [rsp+50h] [rbp-81h] BYREF
	__int64 v51; // [rsp+58h] [rbp-79h] BYREF
	int v52; // [rsp+60h] [rbp-71h]
	int v53; // [rsp+64h] [rbp-6Dh]
	_QWORD** v54; // [rsp+68h] [rbp-69h] BYREF
	int v55; // [rsp+70h] [rbp-61h]
	int v56; // [rsp+74h] [rbp-5Dh]
	__m128 v57; // [rsp+78h] [rbp-59h] BYREF
	int v58[4]; // [rsp+88h] [rbp-49h] BYREF
	__m128 v59[3]; // [rsp+98h] [rbp-39h] BYREF
	char v60; // [rsp+128h] [rbp+57h]
	unsigned __int8 v61; // [rsp+130h] [rbp+5Fh]
	_BYTE* v62; // [rsp+138h] [rbp+67h] BYREF
	va_list va; // [rsp+138h] [rbp+67h]
	_BYTE* v64; // [rsp+140h] [rbp+6Fh]
	_BYTE* v65; // [rsp+148h] [rbp+77h]
	__m128* v66; // [rsp+150h] [rbp+7Fh] BYREF
	va_list va1; // [rsp+150h] [rbp+7Fh]
	va_list va2; // [rsp+158h] [rbp+87h] BYREF

	va_start(va2, a2);
	va_start(va1, a2);
	va_start(va, a2);
	v62 = va_arg(va1, _BYTE*);
	v2 = (__int64)v62;
	v64 = va_arg(va1, _BYTE*);
	v65 = va_arg(va1, _BYTE*);
	va_copy(va2, va1);
	v66 = va_arg(va2, __m128*);
	v3 = v62;
	if (a1)
		(*(void(__fastcall**)(_QWORD*)) * a1)(a1);
	v60 = 0;
	if (!a2 || (v61 = 1, *((float*)a1 + 162) <= 0.0))
		v61 = 0;
	v6 = a1[4];
	LOBYTE(v2) = 0;
	v49 = v2;
	if (v6)
	{
		v7 = *(_QWORD*)(v6 + 2488);
		if (v7)
		{
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 184i64))(v7);
			v2 = (unsigned __int8)v49;
			if (v8)
				v2 = 1i64;
			v49 = v2;
		}
	}
	v9 = *((_BYTE*)a1 + 28);
	v10 = v66;
	v11 = 0i64;
	v12 = v9;
	LOBYTE(v12) = v9 & 1;
	if ((v9 & 1) != 0 && v61 && ((v9 & 8) != 0 || (a1[82] & 0x800000000i64) != 0) && !(_BYTE)v2)
	{
		v60 = v9 >> 7;
		v13 = a1[2];
		if (v13 && (*(_BYTE*)(v13 + 28) & 0x40) == 0 && (a1[82] & 0x10000) == 0)
		{
			*((_BYTE*)a1 + 28) = v9 & 0x3F;
			goto LABEL_45;
		}
		LODWORD(v66) = (int)v66->m128_f32[0];
		HIDWORD(v66) = (int)v10->m128_f32[1];
		v14 = (*(__int64(__fastcall**)(_QWORD*, __m128**, __int64, _QWORD))(*a1 + 64i64))(a1, (__m128**)va1, v2, 0i64);
		*((_BYTE*)a1 + 28) &= ~0x80u;
		*((_BYTE*)a1 + 28) |= v14 << 7;
		if (*((char*)a1 + 28) < 0)
		{
			v15 = a1[82];
			if ((v15 & 0x200000) != 0 && (v15 & 8) != 0)
			{
				v16 = a1[6];
				if (v16)
				{
					if (*(_QWORD*)(v16 + 160) && a1[92])
					{
						sub_1400CB3D0((__int64)a1, &v54);
						v51 = qword_140C77760;
						v53 = v56 - HIDWORD(v54);
						v17 = (float*)a1[92];
						v52 = v55 - (_DWORD)v54;
						LODWORD(v66) = (int)v10->m128_f32[0];
						HIDWORD(v66) = (int)v10->m128_f32[1];
						v18 = sub_140109AB0(v17, (int*)&v51, (int*)va1);
						*((_BYTE*)a1 + 28) &= ~0x80u;
						*((_BYTE*)a1 + 28) |= (*(float*)&v18 > 0.5) << 7;
					}
				}
			}
		}
		v19 = *((_BYTE*)a1 + 28);
		if (v19 >= 0
			|| (v12 = (unsigned int)(int)v10->m128_f32[0], v20 = (int)v10->m128_f32[1], (int)v12 < *((_DWORD*)a1 + 179))
			|| (int)v12 >= *((_DWORD*)a1 + 181)
			|| v20 < *((_DWORD*)a1 + 180)
			|| v20 >= *((_DWORD*)a1 + 182))
		{
			*((_BYTE*)a1 + 28) = v19 ^ v19 & 0x40;
		}
		else
		{
			*((_BYTE*)a1 + 28) = v19 ^ (v19 ^ 0x40) & 0x40;
		}
	}
	else
	{
		if ((_BYTE)v12 && (v9 & 0x80u) != 0)
		{
			v21 = a1[45];
			if (v21)
				sub_14010B100((unsigned int*)(v21 + 72));
			LODWORD(v66) = (int)v10->m128_f32[0];
			HIDWORD(v66) = (int)v10->m128_f32[1];
			(*(void(__fastcall**)(_QWORD*, __m128**, __int64, __int64))(*a1 + 304i64))(a1, (__m128**)va1, v2, v11);
			sub_1400D4070((__int64)a1, 0x33u, (char*)a1, byte_1409D2DE4, v10->m128_f32[0], v10->m128_f32[1]);
			v2 = v49;
		}
		if ((_BYTE)v2)
		{
			v22 = a1[4];
			*v3 = 0;
			v23 = *(_QWORD*)(v22 + 2896);
			v66 = (__m128*)v22;
			if (v23)
			{
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v23 + 8i64))(v23, v12, v2, v11);
				v66[181].m128_u64[0] = 0i64;
			}
			(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, __int64))(*a1 + 488i64))(a1, 0i64, v2, v11);
		}
		*((_BYTE*)a1 + 28) &= 0x3Fu;
	}
	v11 = 0i64;
LABEL_45:
	if ((*((_BYTE*)a1 + 28) & 8) != 0)
	{
		v2 = a1[75];
		v24 = 0i64;
		v51 = 0i64;
		if (v2 && (*(_BYTE*)(v2 + 28) & 1) != 0)
		{
			sub_1400D0E80(0i64, &v57, v2, v10);
			if ((unsigned __int8)sub_1400D0F30(a1[75], v61, (_DWORD)v3, (_DWORD)v64, (__int64)v65, (__int64)&v57))
			{
				v24 = v51;
			}
			else
			{
				v24 = a1[75];
				v51 = v24;
				a1[75] = 0i64;
			}
		}
		v25 = (_QWORD*)a1[70];
		if (v25 != (_QWORD*)*v25)
		{
			do
			{
				v54 = (_QWORD**)(v25 + 1);
				v26 = *(_QWORD*)(v25[1] + 16i64);
				if (v26 != a1[75] && v26 != v24)
				{
					v27 = *(float*)(v26 + 620) == 0.0;
					LOBYTE(v66) = *v62;
					if (v27 && *(float*)(v26 + 616) == 1.0)
					{
						v28 = sub_1400CB3D0(v26, v58);
						v29 = _mm_cvtsi32_si128(0);
						v57 = _mm_sub_ps(
							*v10,
							_mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v28), v29),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(v28[1]), v29))));
					}
					else
					{
						v30 = sub_1400C98B0(v26, v59);
						v57 = _mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 85), v30[1]),
								_mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0), *v30)),
							v30[3]);
					}
					if ((unsigned __int8)sub_1400D0F30(v26, v61, (_DWORD)v62, (_DWORD)v64, (__int64)v65, (__int64)&v57)
						&& !(_BYTE)v66
						&& *v62)
					{
						a1[75] = v26;
					}
				}
				v25 = *v54;
				v24 = v51;
			} while (*v54 != *(_QWORD**)a1[70]);
			v3 = v62;
		}
	}
	v31 = v10->m128_f32[1] + 0.5;
	LODWORD(v50) = (int)(float)(v10->m128_f32[0] + 0.5);
	HIDWORD(v50) = (int)v31;
	if (!*v64 && *((char*)a1 + 28) < 0)
	{
		v32 = (*(__int64(__fastcall**)(_QWORD*, _BYTE**, __int64, __int64))(*a1 + 288i64))(a1, &v50, v2, v11);
		*v64 = v32;
	}
	if (!*v3 && *((char*)a1 + 28) < 0 && (a1[82] & 0x4000i64) == 0 && !(_BYTE)v49)
	{
		sub_1400E9BC0(a1[4], (__int64(__fastcall***)(_QWORD))a1);
		*v3 = 1;
	}
	v33 = *((_BYTE*)a1 + 28);
	if ((v33 & 1) != 0 && v61)
	{
		if (v60)
		{
			if (v33 >= 0
				|| *v3
				&& (v34 = *(_QWORD**)(a1[4] + 2896i64), v34 != a1)
				&& (!v34 || (v35 = v34[2]) == 0 || (_QWORD*)v35 != a1 && !sub_1400D1A90(v35, (__int64)a1))
				&& (a1[82] & 0x4000i64) == 0)
			{
				v36 = a1[45];
				if (v36)
					sub_14010B100((unsigned int*)(v36 + 72));
				LODWORD(v62) = (int)v10->m128_f32[0];
				HIDWORD(v62) = (int)v10->m128_f32[1];
				(*(void(__fastcall**)(_QWORD*, _BYTE**, __int64, __int64))(*a1 + 304i64))(a1, (_BYTE**)va, v2, v11);
				sub_1400D4070((__int64)a1, 0x33u, (char*)a1, byte_1409D2F5C, v10->m128_f32[0], v10->m128_f32[1]);
			}
		}
		else if (v33 < 0)
		{
			if (!*v3
				|| (v37 = *(_QWORD**)(a1[4] + 2896i64), v37 == a1)
				|| v37 && (v38 = v37[2]) != 0 && ((_QWORD*)v38 == a1 || sub_1400D1A90(v38, (__int64)a1)))
			{
				v39 = a1[45];
				if (v39)
					sub_14010B100((unsigned int*)(v39 + 32));
				LODWORD(v62) = (int)v10->m128_f32[0];
				HIDWORD(v62) = (int)v10->m128_f32[1];
				(*(void(__fastcall**)(_QWORD*, _BYTE**, __int64, __int64))(*a1 + 296i64))(a1, (_BYTE**)va, v2, v11);
				sub_1400D4070(
					(__int64)a1,
					0x32u,
					(char*)a1,
					"iib",
					v10->m128_f32[0],
					v10->m128_f32[1],
					*(_QWORD*)(a1[4] + 2896i64) == (_QWORD)a1);
			}
		}
	}
	v40 = v65;
	if (!*v65 && *((char*)a1 + 28) < 0)
	{
		v41 = a1[4];
		if (*(_QWORD*)(v41 + 3384))
		{
			if ((int)v50 < *((_DWORD*)a1 + 179)
				|| (int)v50 >= *((_DWORD*)a1 + 181)
				|| SHIDWORD(v50) < *((_DWORD*)a1 + 180)
				|| SHIDWORD(v50) >= *((_DWORD*)a1 + 182))
			{
				if ((a1[82] & 0x4000i64) != 0)
					goto LABEL_108;
				v43 = 1;
				v62 = v50;
				v48 = v64;
			}
			else
			{
				v42 = (*(__int64(__fastcall**)(_QWORD*, _BYTE**, __int64, __int64))(*a1 + 352i64))(a1, &v50, v2, v11);
				if (!v42)
					goto LABEL_108;
				v43 = v42;
				v62 = v50;
				v48 = v64;
				v41 = a1[4];
			}
			*v40 = 1;
			sub_1400E9B50(v41, (void(__fastcall***)(_QWORD))a1, v43, (_BYTE**)va, v48);
		}
	}
LABEL_108:
	v44 = a1[4];
	if (*(_QWORD**)(v44 + 2896) == a1 && !*v3 || (_BYTE)v49)
	{
		v45 = *(_QWORD*)(v44 + 2896);
		if (v45)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v45 + 8i64))(v45, v12, v2, v11);
			*(_QWORD*)(v44 + 2896) = 0i64;
		}
	}
	v46 = *((_BYTE*)a1 + 28) >> 7;
	(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, __int64))(*a1 + 8i64))(a1, *a1, v2, v11);
	return v46;
}
// 1400D0F8A: variable 'v2' is possibly undefined
// 1400D119C: variable 'v11' is possibly undefined
// 1400D11F8: variable 'v12' is possibly undefined
// 1409D2DE4: using guessed type _BYTE byte_1409D2DE4[64];
// 1409D2F5C: using guessed type _BYTE byte_1409D2F5C[32];
// 140C77760: using guessed type __int64 qword_140C77760;
// 1400D0F30: using guessed type int var_90[4];
// 1400D0F30: using guessed type __m128 var_80[3];


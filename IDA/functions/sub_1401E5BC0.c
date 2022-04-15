//----- (00000001401E5BC0) ----------------------------------------------------
__int64 __fastcall sub_1401E5BC0(__int64 a1)
{
	int v3; // r15d
	int* v4; // rbx
	int v5; // edi
	bool v6; // zf
	unsigned int v7; // r12d
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // r8
	int* v11; // rsi
	__int64 v12; // rdx
	int v13; // edi
	int* v14; // r9
	int v15; // ecx
	int v16; // r8d
	int v17; // eax
	__m128i v18; // xmm3
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // r8
	int v22; // r13d
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // r8
	__int64 v27; // r10
	__int64 v28; // rdi
	__int64 v29; // r11
	int v30; // r10d
	__int64 v31; // r8
	__int64 v32; // r9
	float v33; // xmm2_4
	__m128 v34; // xmm4
	float v35; // xmm0_4
	float v36; // xmm1_4
	__m128 v37; // xmm2
	int v38; // edi
	__int64 v39; // rcx
	int v40; // edi
	__int64 v41; // r8
	__int64 v42; // rax
	__int64 v43; // r8
	__int64 v44; // rax
	__int64 v45; // r8
	__int64 v46; // rcx
	int* v47; // [rsp+40h] [rbp-69h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-61h] BYREF
	__int128 v49; // [rsp+50h] [rbp-59h]
	__int64 v50; // [rsp+60h] [rbp-49h] BYREF
	__int64(__fastcall * *v51)(); // [rsp+70h] [rbp-39h] BYREF
	__int128 v52; // [rsp+78h] [rbp-31h]
	unsigned int v53; // [rsp+90h] [rbp-19h]
	int v54[3]; // [rsp+94h] [rbp-15h] BYREF
	__int128 v55; // [rsp+A0h] [rbp-9h]
	__int128 v56[2]; // [rsp+B0h] [rbp+7h] BYREF

	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 600i64))(qword_140C65670))
		return 2147500037i64;
	v3 = 0;
	v4 = 0i64;
	v47 = 0i64;
	if (!*(_QWORD*)(a1 + 40))
		goto LABEL_40;
	v5 = sub_1401DD0B0(*(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + 1216), &v47);
	if (v5 >= 0)
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 288i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		v4 = v47;
		v6 = *(_DWORD*)(a1 + 1216) == 7;
		v7 = 0;
		v53 = 7 - *(_DWORD*)(a1 + 1216);
		if (!v6)
		{
			do
			{
				LODWORD(TlsValue) = 1;
				*(_QWORD*)&v49 = *((_QWORD*)v4 + 5);
				HIDWORD(v49) = v7;
				LODWORD(v51) = 1;
				v8 = *((_QWORD*)v4 + 4);
				HIDWORD(v52) = v7;
				*(_QWORD*)&v52 = v8;
				(*(void(__fastcall**)(__int64, __int64(__fastcall***)(), __int64(__fastcall***)(), void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
					qword_140C65670,
					&v51,
					&TlsValue,
					&unk_140C3FE88,
					&unk_140C3FE88);
				if (v7 + *(_DWORD*)(a1 + 1216) >= *(_DWORD*)(a1 + 1220) && *(_QWORD*)(a1 + 1264))
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 64i64),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 1264) + 32i64),
						v7 + *(_DWORD*)(a1 + 1216) - *(_DWORD*)(a1 + 1220),
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						2i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 1264) + 40i64),
						v7 + *(_DWORD*)(a1 + 1216) - *(_DWORD*)(a1 + 1220),
						0i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64),
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
						qword_140C65670,
						1i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						v9,
						0i64,
						0i64,
						0i64);
				}
				else
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 64i64),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 80i64));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						2i64,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64));
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64),
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
						qword_140C65670,
						1i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						v10,
						0i64,
						0i64,
						0i64);
					v11 = *(int**)(a1 + 1256);
					if (v11)
					{
						do
						{
							v12 = *v11;
							if (*(_DWORD*)(a1 + 24) == dword_140C637B0[v12])
							{
								v13 = 1 << (v7 + *(_DWORD*)(a1 + 1216));
								v14 = sub_1401DD2B0((unsigned int*)(a1 + 24), v12);
								v54[0] = v13 - 1;
								v51 = (__int64(__fastcall**)())(v14 + 2);
								v54[1] = v13 - 1;
								*(_QWORD*)&v52 = v54;
								DWORD2(v52) = v13 - 1 + v14[2];
								HIDWORD(v52) = v14[3] + v13 - 1;
								v15 = SHIDWORD(v52) / v13;
								v16 = *v14 / v13;
								v17 = v14[1] / v13;
								if (v16 < SDWORD2(v52) / v13 && v17 < v15)
								{
									v18 = _mm_cvtsi32_si128(v16);
									v19 = *((_QWORD*)v11 + 1);
									v56[0] = (__int128)_mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(0))));
									v56[1] = (__int128)_mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(SDWORD2(v52) / v13), _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0))));
									v20 = *(_QWORD*)qword_140C65670;
									if (v19)
									{
										(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(v20 + 360))(
											qword_140C65670,
											0i64,
											v19,
											v7);
										(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
											qword_140C65670,
											*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64),
											13i64);
										(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 456i64))(
											qword_140C65670,
											8i64,
											0i64);
										(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, __int128*))(*(_QWORD*)qword_140C65670
											+ 664i64))(
												qword_140C65670,
												0xFFFFFFFFi64,
												v21,
												0i64,
												0i64,
												v56);
										(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
											qword_140C65670,
											1i64,
											1i64,
											0i64);
										v22 = 1;
									}
									else
									{
										(*(void(__fastcall**)(__int64, __int64, _QWORD))(v20 + 464))(qword_140C65670, 1i64, 0i64);
										v22 = 0;
									}
									v23 = *((_QWORD*)v11 + 4);
									if (v23 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 56i64))(v23))
									{
										v24 = (*(__int64(__fastcall**)(_QWORD))(**((_QWORD**)v11 + 4) + 56i64))(*((_QWORD*)v11 + 4));
										v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 24i64))(v24);
										v26 = *((_QWORD*)v11 + 4);
										v27 = *(_QWORD*)qword_140C65670;
										v28 = v25;
										v50 = v25;
										(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(v27 + 360))(
											qword_140C65670,
											3i64,
											v26,
											v7);
										(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
											qword_140C65670,
											4i64,
											*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * *(int*)(a1 + 24) + 32));
										v29 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
											qword_140C65670,
											48i64,
											0i64);
										if (v29)
										{
											v30 = v11[1];
											if (v30 < 0)
											{
												v31 = *(int*)(a1 + 24);
												v32 = *(_QWORD*)(a1 + 16);
												HIDWORD(v55) = *(_DWORD*)(v32 + 16 * (v31 + 11));
												v33 = *(float*)(v32 + 16 * v31 + 180);
												v34 = (__m128)0x3F800000u;
												v35 = (float)((float)(((unsigned int)v30 >> 20) & 0x3FF) * *((float*)&v55 + 3)) + v33;
												v36 = (float)((float)(((unsigned int)v30 >> 10) & 0x3FF) * *((float*)&v55 + 3)) + v33;
												*(float*)&v55 = (float)((float)(v30 & 0x3FF) * *((float*)&v55 + 3)) + v33;
												v37 = (__m128)0x3F800000u;
												*((float*)&v55 + 2) = v35 - v36;
												*((float*)&v55 + 1) = v36 - *(float*)&v55;
												*(_OWORD*)v29 = *(_OWORD*)(v32 + 16 * (v31 + 7));
												*(_OWORD*)(v29 + 16) = v55;
												v34.m128_f32[0] = 1.0 / (float)*(int*)(v28 + 4);
												v37.m128_f32[0] = 1.0 / (float)*(int*)(v28 + 8);
												*(__m128*)(v29 + 32) = _mm_unpacklo_ps(
													_mm_unpacklo_ps(v34, (__m128)0i64),
													_mm_unpacklo_ps(v37, (__m128)0i64));
											}
											(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
										}
										v38 = (*(_DWORD*)(a1 + 24) != 0) + 1;
										LOBYTE(v3) = *(_DWORD*)(v50 + 24) != 6;
									}
									else
									{
										v39 = *((_QWORD*)v11 + 4);
										if (v39)
										{
											if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 56i64))(v39))
											{
												*(_QWORD*)&v49 = 0i64;
												TlsValue = &off_140B5E648;
												*((_QWORD*)&v49 + 1) = TlsGetValue(dwTlsIndex);
												TlsSetValue(dwTlsIndex, &TlsValue);
												v51 = TlsValue;
												v50 = 0x141D45670i64;
												v52 = v49;
												v40 = sub_1401971E0(dword_140C8A288, 10, &v50, &v51);
												TlsValue = &off_140B5E648;
												TlsSetValue(dwTlsIndex, *((LPVOID*)&v49 + 1));
												if (v40)
													DebugBreak();
											}
										}
										v38 = 0;
									}
									v41 = *((_QWORD*)v11 + 2);
									v42 = *(_QWORD*)qword_140C65670;
									if (v41)
										(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(v42 + 360))(
											qword_140C65670,
											1i64,
											v41,
											v7);
									else
										(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(v42 + 352))(
											qword_140C65670,
											1i64,
											*(_QWORD*)(*(_QWORD*)(a1 + 16) + 80i64),
											0i64,
											0i64);
									v43 = *((_QWORD*)v11 + 3);
									v44 = *(_QWORD*)qword_140C65670;
									if (v43)
										(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(v44 + 360))(
											qword_140C65670,
											2i64,
											v43,
											v7);
									else
										(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(v44 + 352))(
											qword_140C65670,
											2i64,
											*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64),
											0i64,
											0i64);
									(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
										qword_140C65670,
										*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64),
										(unsigned int)(2 * (v3 + 2 * (v38 + 2 * v22 + v22))));
									v3 = 0;
									(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, __int128*))(*(_QWORD*)qword_140C65670
										+ 664i64))(
											qword_140C65670,
											0xFFFFFFFFi64,
											v45,
											0i64,
											0i64,
											v56);
								}
							}
							v11 = (int*)*((_QWORD*)v11 + 6);
						} while (v11);
						v4 = v47;
					}
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
				++v7;
			} while (v7 < v53);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	LABEL_40:
		if (*(int**)(a1 + 1264) != v4)
		{
			if (v4)
				(**(void(__fastcall***)(int*))v4)(v4);
			v46 = *(_QWORD*)(a1 + 1264);
			if (v46)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
			*(_QWORD*)(a1 + 1264) = v4;
		}
		v5 = 0;
		goto LABEL_47;
	}
	v4 = v47;
LABEL_47:
	if (v4)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4);
	return (unsigned int)v5;
}
// 11: found interdependent unknown calls
// 1401E5E3C: variable 'v9' is possibly undefined
// 1401E5F03: variable 'v10' is possibly undefined
// 1401E6081: variable 'v21' is possibly undefined
// 1401E640C: variable 'v45' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C637B0: using guessed type _DWORD dword_140C637B0[1];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A288: using guessed type _DWORD dword_140C8A288[2];


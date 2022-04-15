//----- (000000014076F910) ----------------------------------------------------
__int64 __fastcall sub_14076F910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r15
	__int64 v8; // rcx
	__int64* v10; // rax
	__int64* v11; // rsi
	__int64 v12; // r14
	int* v13; // rax
	int* v14; // rdi
	int* v15; // rdx
	__int64 v16; // rcx
	unsigned __int64 v17; // rdi
	__int64 v18; // rax
	int v19; // ecx
	int v20; // r9d
	int v21; // r10d
	int v22; // edx
	int v23; // eax
	int v24; // ecx
	float v25; // xmm4_4
	__m128 v26; // xmm2
	__int64 v27; // rdx
	__m128 v28; // xmm0
	__m128 v29; // xmm5
	__m128** v30; // rcx
	__m128 v31; // xmm6
	__m128 v32; // xmm3
	__m128 v33; // xmm1
	__m128 v34; // xmm2
	float v35; // xmm2_4
	__m128* v36; // rax
	int* v37; // rax
	__int64 v38; // r14
	__m128i* v39; // rsi
	__int64 v40; // rcx
	__int64(__fastcall * *v41)(); // rdi
	__int64 i; // rcx
	__int64(__fastcall * *v43)(); // rsi
	int* v44; // rax
	__int64 v45; // rdx
	_WORD* v46; // r9
	char v47; // si
	__int64 v48; // rax
	__m128* v49; // rax
	int* v50; // rax
	__int64 v51; // r14
	__m128i* v52; // rsi
	__int64 v53; // rcx
	__int64(__fastcall * *v54)(); // rdi
	__int64 j; // rcx
	__int64(__fastcall * *v56)(); // rsi
	int* v57; // rax
	__int64 v58; // rdx
	char v59; // si
	_WORD* v60; // r9
	__int64 v61; // rcx
	__int64 v62; // [rsp+20h] [rbp-E0h]
	__int64 v63; // [rsp+20h] [rbp-E0h]
	__int64(__fastcall * *v64)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v65; // [rsp+58h] [rbp-A8h]
	__int64 v66; // [rsp+60h] [rbp-A0h] BYREF
	int* v67; // [rsp+68h] [rbp-98h]
	int* v68; // [rsp+70h] [rbp-90h]
	int* v69; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v70)(); // [rsp+80h] [rbp-80h]
	__m128 v71; // [rsp+90h] [rbp-70h] BYREF
	__int64 v72; // [rsp+A0h] [rbp-60h]
	int v73; // [rsp+A8h] [rbp-58h]
	int v74; // [rsp+ACh] [rbp-54h]
	__int64(__fastcall * *v75)(); // [rsp+B0h] [rbp-50h] BYREF
	int v76; // [rsp+B8h] [rbp-48h]
	__int128 v77; // [rsp+110h] [rbp+10h]
	__int128 v78; // [rsp+120h] [rbp+20h]
	int v79; // [rsp+130h] [rbp+30h]
	char v80; // [rsp+1E0h] [rbp+E0h]

	v4 = 0i64;
	v80 = 0;
	if (*(_QWORD*)(a1 + 56) && (*(_DWORD*)(a1 + 4) != (_DWORD)a2 || !sub_1400F9CB0(a1 + 8, a3)))
		goto LABEL_4;
	if (!*(_QWORD*)(a4 + 8) && *(_QWORD*)(a4 + 40))
		sub_14076EFF0((__int64*)a4);
	if ((unsigned int)sub_14076F0F0(a1, a4))
	{
		v10 = (__int64*)sub_14018B280(64i64, 0);
		v11 = v10;
		if (v10)
		{
			sub_140776240(v10, a4);
			*((_OWORD*)v11 + 1) = *(_OWORD*)(a4 + 16);
			sub_1407764F0(v11 + 4, (_QWORD*)(a4 + 32));
			*((_DWORD*)v11 + 12) = *(_DWORD*)(a4 + 48);
			*((_DWORD*)v11 + 13) = *(_DWORD*)(a4 + 52);
			*((_DWORD*)v11 + 14) = *(_DWORD*)(a4 + 56);
			*((_DWORD*)v11 + 15) = *(_DWORD*)(a4 + 60);
		}
		else
		{
			v11 = 0i64;
		}
		v12 = *(_QWORD*)(a1 + 56);
		v13 = sub_14018DB00(*(_QWORD*)(a1 + 48), v12 + 1, 8i64);
		v14 = v13;
		*(_QWORD*)&v13[2 * v12] = v11;
		v15 = *(int**)(a1 + 48);
		if (v15 != v13)
		{
			sub_1407DB590(v13, v15, 8i64 * *(_QWORD*)(a1 + 56));
			v16 = *(_QWORD*)(a1 + 48);
			if (v16)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
			*(_QWORD*)(a1 + 48) = v14;
		}
		*(_QWORD*)(a1 + 56) = v12 + 1;
		v17 = 0i64;
		if (v11[5])
		{
			v71.m128_i32[2] = v12;
			do
			{
				v18 = v11[4];
				LODWORD(v72) = *(_DWORD*)(v18 + 8 * v17);
				LODWORD(v18) = *(_DWORD*)(v18 + 8 * v17 + 4);
				v71.m128_u64[0] = __PAIR64__(v18, v72);
				HIDWORD(v72) = v18;
				if (sub_140776730((__int64*)(a1 + 64), (int*)&v71))
				{
					v20 = HIDWORD(v72);
					v73 = 1;
					v74 = 1;
					LODWORD(v70) = v72 + 1;
					HIDWORD(v70) = HIDWORD(v72) + 1;
					v21 = *(_DWORD*)(a1 + 88);
					v22 = *(_DWORD*)(a1 + 92);
					if (v21 < (int)v72 + 1)
						v21 = v72 + 1;
					v23 = *(_DWORD*)(a1 + 84);
					if (v22 < HIDWORD(v72) + 1)
						v22 = HIDWORD(v72) + 1;
					v24 = *(_DWORD*)(a1 + 80);
					if ((int)v72 < v24)
						v24 = v72;
					*(_DWORD*)(a1 + 80) = v24;
					if (v20 < v23)
						v23 = v20;
					*(_DWORD*)(a1 + 84) = v23;
					*(_DWORD*)(a1 + 88) = v21;
					*(_DWORD*)(a1 + 92) = v22;
				}
				else
				{
					v19 = v72;
					*(_QWORD*)(a1 + 88) = v72;
					*(_DWORD*)(a1 + 80) = v19;
					*(_DWORD*)(a1 + 84) = *(_DWORD*)(a1 + 92);
				}
				++v17;
			} while (v17 < v11[5]);
		}
		v25 = 3.4028235e38;
		v64 = (__int64(__fastcall**)())(a1 + 80);
		v65 = a1 + 88;
		LODWORD(v66) = *(_DWORD*)(a1 + 80) + *(_DWORD*)(a1 + 88);
		v26 = (__m128)COERCE_UNSIGNED_INT((float)((int)v66 >> 1));
		v27 = *(_QWORD*)(a1 + 56);
		v26.m128_f32[0] = (float)((float)(v26.m128_f32[0] * 1.5) * *(float*)&dword_140C7AC4C) - *(float*)&dword_140C45098;
		v28 = (__m128)COERCE_UNSIGNED_INT((float)((((int)v66 >> 1) & 1)
			+ 2 * ((*(_DWORD*)(a1 + 92) + *(_DWORD*)(a1 + 84)) >> 1)));
		v28.m128_f32[0] = (float)(v28.m128_f32[0] * *(float*)&dword_140C7CDF8) - *(float*)&dword_140C45098;
		v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v28), (__m128)0i64);
		if (v27)
		{
			v30 = *(__m128***)(a1 + 48);
			v31 = v71;
			do
			{
				v32 = (*v30)[1];
				v71 = v32;
				v71.m128_i32[1] = 0;
				v33 = _mm_sub_ps(v71, v29);
				v34 = _mm_mul_ps(v33, v33);
				v35 = (float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
					+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
				if (v35 < v25)
				{
					v31 = v32;
					v25 = v35;
				}
				++v30;
				--v27;
			} while (v27);
			v71 = v31;
			if (v25 < 3.4028235e38)
			{
				v36 = *(__m128**)(a1 + 96);
				if (v36)
				{
					if (v36->m128_i32[3])
						v36[1] = v31;
				}
				else
				{
					v37 = sub_14018B280(16i64, 0);
					v38 = (__int64)v37;
					v67 = v37;
					v68 = v37;
					v69 = v37 + 4;
					if (v37)
						*(_WORD*)v37 = 0;
					v39 = *(__m128i**)(a1 + 120);
					v40 = *(_QWORD*)(qword_140C65898 + 29504);
					v41 = 0i64;
					v64 = 0i64;
					v65 = (unsigned int)dword_140C63664 | 0x3F80000000000000i64;
					if (v40)
					{
						if (v39)
						{
							if (v39->m128i_i16[0])
							{
								v70 = (__int64(__fastcall**)())sub_140108E80(v40 + 240, v39);
								if (v70)
								{
									for (i = 0i64; v39->m128i_i16[i]; ++i)
										;
									sub_14001C480((__int64)&v66, v39->m128i_i32, (int*)((char*)v39->m128i_i32 + 2 * i));
									v41 = v64;
									v43 = v70;
									if (v70 != v64)
									{
										(*(void(__fastcall**)(__int64(__fastcall**)())) * v70)(v70);
										v41 = v43;
									}
									v38 = (__int64)v67;
								}
							}
						}
					}
					sub_140770490((__int64)&v75);
					v79 = 1065353216;
					v77 = xmmword_140B7B240;
					v78 = xmmword_140B7B240;
					if (v41)
						(*(void(__fastcall**)(__int64(__fastcall**)())) * v41)(v41);
					if (v75)
						(*((void(__fastcall**)(__int64(__fastcall**)())) * v75 + 1))(v75);
					v76 = v65;
					v75 = v41;
					v44 = sub_14018B280(384i64, 0);
					if (v44)
					{
						v46 = *(_WORD**)(a1 + 184);
						v47 = 1;
						v62 = *(_QWORD*)(a1 + 208);
						v80 = 1;
						v64 = off_140B56A08;
						v66 = 0i64;
						LODWORD(v65) = -2;
						v48 = sub_140770B60((__int64)v44, 1, &v71, v46, v62, 0i64, (__int64)&v75, 18, (__int64)&v64);
						v31 = v71;
					}
					else
					{
						v48 = 0i64;
						v47 = 0;
					}
					*(_QWORD*)(a1 + 96) = v48;
					if ((v47 & 1) != 0)
					{
						v64 = off_140B56A08;
						v80 = v47 & 0xFE;
						if (v66)
							sub_1400579E0(v66, v45, v65);
					}
					sub_140532D90(&v75);
					if (v41)
						(*((void(__fastcall**)(__int64(__fastcall**)())) * v41 + 1))(v41);
					if (v38)
						sub_14018B900(v38, 0);
				}
				v49 = *(__m128**)(a1 + 104);
				if (v49)
				{
					if (v49->m128_i32[3])
						v49[1] = v31;
				}
				else
				{
					v50 = sub_14018B280(16i64, 0);
					v51 = (__int64)v50;
					v67 = v50;
					v68 = v50;
					v69 = v50 + 4;
					if (v50)
						*(_WORD*)v50 = 0;
					v52 = *(__m128i**)(a1 + 152);
					v53 = *(_QWORD*)(qword_140C65898 + 29504);
					v54 = 0i64;
					v64 = 0i64;
					v65 = (unsigned int)dword_140C63664 | 0x3F80000000000000i64;
					if (v53)
					{
						if (v52)
						{
							if (v52->m128i_i16[0])
							{
								v70 = (__int64(__fastcall**)())sub_140108E80(v53 + 240, v52);
								if (v70)
								{
									for (j = 0i64; v52->m128i_i16[j]; ++j)
										;
									sub_14001C480((__int64)&v66, v52->m128i_i32, (int*)((char*)v52->m128i_i32 + 2 * j));
									v54 = v64;
									v56 = v70;
									if (v70 != v64)
									{
										(*(void(__fastcall**)(__int64(__fastcall**)())) * v70)(v70);
										if (v54)
											(*((void(__fastcall**)(__int64(__fastcall**)())) * v54 + 1))(v54);
										v54 = v56;
									}
									v51 = (__int64)v67;
								}
							}
						}
					}
					sub_140770490((__int64)&v75);
					v79 = 1065353216;
					v77 = xmmword_140B7B240;
					v78 = xmmword_140B7B240;
					if (v54)
						(*(void(__fastcall**)(__int64(__fastcall**)())) * v54)(v54);
					if (v75)
						(*((void(__fastcall**)(__int64(__fastcall**)())) * v75 + 1))(v75);
					v76 = v65;
					v75 = v54;
					v57 = sub_14018B280(384i64, 0);
					v59 = v80;
					if (v57)
					{
						v60 = *(_WORD**)(a1 + 184);
						v63 = *(_QWORD*)(a1 + 208);
						v59 = v80 | 2;
						v64 = off_140B56A08;
						v66 = 0i64;
						LODWORD(v65) = -2;
						v4 = sub_140770B60((__int64)v57, 1, &v71, v60, v63, 0i64, (__int64)&v75, 18, (__int64)&v64);
					}
					*(_QWORD*)(a1 + 104) = v4;
					if ((v59 & 2) != 0)
					{
						v64 = off_140B56A08;
						if (v66)
							sub_1400579E0(v66, v58, v65);
					}
					sub_140532D90(&v75);
					if (v54)
						(*((void(__fastcall**)(__int64(__fastcall**)())) * v54 + 1))(v54);
					if (v51)
						sub_14018B900(v51, 0);
				}
			}
		}
		v61 = *(_QWORD*)(a3 + 16);
		*(_QWORD*)a3 = off_140B56A08;
		if (v61)
			sub_1400579E0(v61, v27, *(_DWORD*)(a3 + 8));
		return 1i64;
	}
	else
	{
	LABEL_4:
		v8 = *(_QWORD*)(a3 + 16);
		*(_QWORD*)a3 = off_140B56A08;
		if (v8)
			sub_1400579E0(v8, a2, *(_DWORD*)(a3 + 8));
		return 0i64;
	}
}
// 14076FCDA: conditional instruction was optimized away because rdi.8==0
// 14076F974: variable 'a2' is possibly undefined
// 14076FDD8: variable 'v45' is possibly undefined
// 14076FFC8: variable 'v58' is possibly undefined
// 14077002A: variable 'v27' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C45098: using guessed type int dword_140C45098;
// 140C63664: using guessed type int dword_140C63664;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7AC4C: using guessed type int dword_140C7AC4C;
// 140C7CDF8: using guessed type int dword_140C7CDF8;


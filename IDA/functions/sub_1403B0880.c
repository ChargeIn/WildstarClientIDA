//----- (00000001403B0880) ----------------------------------------------------
__int64 __fastcall sub_1403B0880(
	__int64 a1,
	unsigned int* a2,
	unsigned __int64 a3,
	__m128* a4,
	__int64 a5,
	__m128* a6,
	__int64 a7)
{
	__int64 v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v10; // r12
	__int64 v12; // r9
	unsigned int v13; // esi
	__int64 v14; // rdx
	__int64 v15; // rcx
	__m128* v16; // r14
	unsigned int v17; // eax
	int v18; // eax
	unsigned __int64 v19; // rdx
	int* v20; // rax
	unsigned __int64 v22; // rdx
	int* v23; // rax
	int v24; // ecx
	unsigned __int64 v25; // rdx
	int* v26; // rax
	unsigned __int64 v27; // rdx
	int* v28; // rax
	unsigned __int64 v29; // rdx
	int* v30; // rax
	float v31; // xmm9_4
	double v32; // xmm0_8
	__int64 v33; // rcx
	int v34; // r9d
	int v35; // r10d
	unsigned __int64 v36; // rdx
	unsigned __int64 v37; // rcx
	_DWORD* v38; // rax
	unsigned __int64 v39; // rdx
	int* v40; // rax
	unsigned __int64 v41; // rdx
	unsigned __int64 v42; // rcx
	_DWORD* v43; // rax
	unsigned __int64 v44; // rdx
	int* v45; // rax
	__int64 v46; // rax
	int v47; // eax
	unsigned __int64 v48; // rdx
	int* v49; // rax
	__m128 v50; // xmm4
	__m128 v51; // xmm5
	__m128 v52; // xmm7
	__int64 v53; // rax
	unsigned __int64 v54; // rsi
	__m128 v55; // xmm2
	__m128 v56; // xmm3
	__m128 v57; // xmm2
	__m128 v58; // xmm4
	float v59; // xmm7_4
	__m128 v60; // xmm8
	float v61; // xmm8_4
	float v62; // xmm0_4
	__int64 v63; // rax
	int v64; // eax
	unsigned __int64 v65; // r8
	unsigned __int64 v66; // rdx
	int* v67; // rax
	int v68; // r14d
	unsigned __int64 v69; // rsi
	float v70; // xmm7_4
	float v71; // xmm0_4
	__int64 v72; // rax
	float v73; // xmm8_4
	unsigned __int64 v74; // r8
	unsigned __int64 v75; // rdx
	int* v76; // rax
	float v77; // xmm7_4
	unsigned __int64 v78; // rsi
	float v79; // xmm1_4
	__int64 v80; // rax
	float v81; // xmm0_4
	unsigned __int64 v82; // r8
	unsigned __int64 v83; // rdx
	int* v84; // rax
	int v85; // ecx
	unsigned __int64 v86; // rdx
	int* v87; // rax
	__m128 v88; // [rsp+40h] [rbp-41h] BYREF
	int v90; // [rsp+E0h] [rbp+5Fh] BYREF

	v7 = a7;
	v8 = 0i64;
	v10 = a3;
	v12 = a1;
	v13 = 0;
	if (!a7 || (v14 = 0i64, !*(_DWORD*)(a7 + 20)))
		v14 = 1i64;
	v15 = *(_QWORD*)(a3 + 112);
	v16 = a6;
	LODWORD(a7) = v14;
	v17 = *(_DWORD*)(v15 + 124);
	if (v17 > 7 || (a3 = 133i64, !_bittest((const int*)&a3, v17)))
	{
		v18 = *(_DWORD*)(v15 + 268);
		if ((v18 & 0x4000000) == 0 && a4 == a6 && (v18 & 0x10000000) == 0)
		{
			if (v7)
			{
				a3 = *(_QWORD*)(v7 + 8);
				v90 = 32;
				*(_DWORD*)(v7 + 16) = 32;
				*(_DWORD*)(v7 + 24) = 1;
				v19 = 0i64;
				if (a3)
				{
					v20 = *(int**)v7;
					while (*v20 != 32)
					{
						if (*v20 <= 32)
						{
							++v19;
							++v20;
							if (v19 < a3)
								continue;
						}
						goto LABEL_15;
					}
				}
				else
				{
				LABEL_15:
					sub_1401C2E70((__int64*)v7, v19, &v90);
					v12 = a1;
				}
				v14 = (unsigned int)a7;
			}
			if ((_DWORD)v14)
				return 32i64;
		}
	}
	if ((*(_BYTE*)(*(_QWORD*)(v10 + 112) + 272i64) & 0x20) != 0)
	{
		if (!v16)
			goto LABEL_62;
		if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v12 + 72i64))(
			v12,
			a4->m128_u32[2],
			v16->m128_u32[2]))
		{
			if (v7)
			{
				v22 = *(_QWORD*)(v7 + 8);
				LODWORD(a7) = 286;
				*(_DWORD*)(v7 + 16) = 286;
				*(_DWORD*)(v7 + 24) = 1;
				if (v22)
				{
					v23 = *(int**)v7;
					while (*v23 != 286)
					{
						if (*v23 <= 286)
						{
							++v8;
							++v23;
							if (v8 < v22)
								continue;
						}
						goto LABEL_28;
					}
				}
				else
				{
				LABEL_28:
					sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
				}
			}
			return 286i64;
		}
	}
	if (v16)
	{
		v24 = *(_DWORD*)(*(_QWORD*)(v10 + 112) + 268i64);
		if ((v24 & 0x4000000) != 0 && v16[8].m128_i32[0] == 17)
		{
			if ((v24 & 0x8000000) == 0)
			{
				if (v7)
				{
					v25 = *(_QWORD*)(v7 + 8);
					LODWORD(a7) = 274;
					*(_DWORD*)(v7 + 16) = 274;
					*(_DWORD*)(v7 + 24) = 1;
					if (v25)
					{
						v26 = *(int**)v7;
						while (*v26 != 274)
						{
							if (*v26 <= 274)
							{
								++v8;
								++v26;
								if (v8 < v25)
									continue;
							}
							goto LABEL_40;
						}
					}
					else
					{
					LABEL_40:
						sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
					}
				}
				return 274i64;
			}
			if ((unsigned int)sub_14045A950((__int64)a4, v16->m128_i32[2]) != 2)
			{
				if (v7)
				{
					v27 = *(_QWORD*)(v7 + 8);
					LODWORD(a7) = 99;
					*(_DWORD*)(v7 + 16) = 99;
					*(_DWORD*)(v7 + 24) = 1;
					if (v27)
					{
						v28 = *(int**)v7;
						while (*v28 != 99)
						{
							if (*v28 <= 99)
							{
								++v8;
								++v28;
								if (v8 < v27)
									continue;
							}
							goto LABEL_49;
						}
					}
					else
					{
					LABEL_49:
						sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
					}
				}
				return 99i64;
			}
		}
		if ((*(_DWORD*)(*(_QWORD*)(v10 + 112) + 268i64) & 0x4000000) != 0
			&& (*(unsigned int(__fastcall**)(__m128*, __int64, unsigned __int64, __int64))(v16->m128_u64[0] + 32))(
				v16,
				v14,
				a3,
				v12)
			&& !(*(unsigned int(__fastcall**)(__m128*))(v16->m128_u64[0] + 40))(v16))
		{
			if (v7)
			{
				v29 = *(_QWORD*)(v7 + 8);
				LODWORD(a7) = 304;
				*(_DWORD*)(v7 + 16) = 304;
				*(_DWORD*)(v7 + 24) = 1;
				if (v29)
				{
					v30 = *(int**)v7;
					while (*v30 != 304)
					{
						if (*v30 <= 304)
						{
							++v8;
							++v30;
							if (v8 < v29)
								continue;
						}
						goto LABEL_60;
					}
				}
				else
				{
				LABEL_60:
					sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
				}
			}
			return 304i64;
		}
	}
LABEL_62:
	v31 = 0.0;
	if (a2[5])
	{
		v32 = (*(double(__fastcall**)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD*)a1 + 32i64))(
			a1,
			v14,
			a3,
			v12);
		v31 = *(float*)&v32;
	}
	v33 = *(_QWORD*)(v10 + 112);
	v34 = *(_DWORD*)(v33 + 124);
	if ((unsigned int)(v34 - 2) <= 2 || (unsigned int)(v34 - 7) <= 1)
		goto LABEL_94;
	v35 = *(_DWORD*)(v33 + 268);
	if ((v35 & 0x2000) != 0 && v16)
	{
		v36 = a4[44].m128_u64[0];
		v37 = 0i64;
		if (!v36)
		{
		LABEL_72:
			if (v7)
			{
				v39 = *(_QWORD*)(v7 + 8);
				LODWORD(a7) = 255;
				*(_DWORD*)(v7 + 16) = 255;
				*(_DWORD*)(v7 + 24) = 1;
				if (v39)
				{
					v40 = *(int**)v7;
					while (*v40 != 255)
					{
						if (*v40 <= 255)
						{
							++v8;
							++v40;
							if (v8 < v39)
								continue;
						}
						goto LABEL_78;
					}
				}
				else
				{
				LABEL_78:
					sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
				}
			}
			return 255i64;
		}
		v38 = (_DWORD*)a4[43].m128_u64[1];
		while (*v38 != v16->m128_i32[2])
		{
			++v37;
			++v38;
			if (v37 >= v36)
				goto LABEL_72;
		}
	}
	if ((v35 & 0x4000) == 0 || !v16)
		goto LABEL_94;
	v41 = v16[44].m128_u64[0];
	v42 = 0i64;
	if (v41)
	{
		v43 = (_DWORD*)v16[43].m128_u64[1];
		while (*v43 != a4->m128_i32[2])
		{
			++v42;
			++v43;
			if (v42 >= v41)
				goto LABEL_86;
		}
	LABEL_94:
		if (v34 == 4
			|| (unsigned int)(v34 - 7) <= 1
			|| (v46 = sub_1403ACD90(qword_140C65B70, a2[2], (__int64)a4)) != 0
			&& (*(_BYTE*)(*(_QWORD*)(v46 + 112) + 272i64) & 2) != 0
			&& a2[12] == a2[9])
		{
			v50 = (__m128)a2[14];
			v51 = (__m128)a2[13];
			v52 = (__m128)a2[15];
			if ((float)((float)((float)(v51.m128_f32[0] * v51.m128_f32[0]) + (float)(v50.m128_f32[0] * v50.m128_f32[0]))
				+ (float)(v52.m128_f32[0] * v52.m128_f32[0])) > *(float*)&dword_140C44798
				&& !a4[8].m128_i32[1])
			{
				v53 = *(_QWORD*)(v10 + 112);
				v54 = a4[208].m128_u64[1];
				v88 = a4[286];
				v55 = _mm_shuffle_ps(v88, v88, 85);
				v55.m128_f32[0] = v55.m128_f32[0] - a4[306].m128_f32[1];
				v56 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v88.m128_u32[0], (__m128)v88.m128_u32[2]),
					_mm_unpacklo_ps(v55, (__m128)0i64));
				v57 = v50;
				v58 = _mm_unpacklo_ps(v51, v52);
				v59 = *(float*)(v53 + 108);
				v88 = _mm_sub_ps(_mm_unpacklo_ps(v58, _mm_unpacklo_ps(v57, (__m128)0i64)), v56);
				v60 = _mm_mul_ps(v88, v88);
				v61 = fsqrt(
					(float)(v60.m128_f32[0] + _mm_shuffle_ps(v60, v60, 85).m128_f32[0])
					+ _mm_shuffle_ps(v60, v60, 170).m128_f32[0]);
				if (v54)
				{
					v62 = sub_14047A940(a4) * *(float*)(v54 + 140);
				}
				else
				{
					v63 = sub_14022D500(a4[13].m128_u32[2]);
					if (v63)
						v62 = *(float*)(v63 + 40);
					else
						v62 = 0.0;
				}
				v64 = sub_1407A17D0(v61, v62, 0.0, v59, v31);
				v13 = v64;
				if (!v64 || v64 == 317)
				{
					v68 = a7;
				}
				else
				{
					if (v7)
					{
						v65 = *(_QWORD*)(v7 + 8);
						v90 = v64;
						*(_DWORD*)(v7 + 16) = v64;
						*(_DWORD*)(v7 + 24) = 1;
						v66 = 0i64;
						if (v65)
						{
							v67 = *(int**)v7;
							while (*v67 != v13)
							{
								if (*v67 <= (int)v13)
								{
									++v66;
									++v67;
									if (v66 < v65)
										continue;
								}
								goto LABEL_125;
							}
						}
						else
						{
						LABEL_125:
							sub_1401C2E70((__int64*)v7, v66, &v90);
						}
					}
					v68 = a7;
					if ((_DWORD)a7)
						return v13;
				}
				v69 = a4[208].m128_u64[1];
				v70 = *(float*)(*(_QWORD*)(v10 + 112) + 112i64);
				if (v69)
				{
					v71 = sub_14047A940(a4) * *(float*)(v69 + 140);
				}
				else
				{
					v72 = sub_14022D500(a4[13].m128_u32[2]);
					if (v72)
						v71 = *(float*)(v72 + 40);
					else
						v71 = 0.0;
				}
				v73 = v61 - v71;
				if (v73 < 0.0)
					v73 = 0.0;
				if (v31 != 0.0 && v70 != 0.0)
					v70 = v70 + v31;
				if (v73 <= v70)
				{
					v13 = 0;
				}
				else
				{
					v13 = 105;
					if (v7)
					{
						v74 = *(_QWORD*)(v7 + 8);
						LODWORD(a7) = 105;
						*(_DWORD*)(v7 + 16) = 105;
						*(_DWORD*)(v7 + 24) = 1;
						v75 = 0i64;
						if (v74)
						{
							v76 = *(int**)v7;
							while (*v76 != 105)
							{
								if (*v76 <= 105)
								{
									++v75;
									++v76;
									if (v75 < v74)
										continue;
								}
								goto LABEL_146;
							}
						}
						else
						{
						LABEL_146:
							sub_1401C2E70((__int64*)v7, v75, (int*)&a7);
						}
					}
					if (v68)
						return v13;
				}
				v77 = *(float*)(*(_QWORD*)(v10 + 112) + 116i64);
				if (v77 > -1.0)
				{
					v78 = a4[208].m128_u64[1];
					if (v78)
					{
						v79 = sub_14047A940(a4) * *(float*)(v78 + 140);
					}
					else
					{
						v80 = sub_14022D500(a4[13].m128_u32[2]);
						if (v80)
							v79 = *(float*)(v80 + 40);
						else
							v79 = 0.0;
					}
					v81 = fabs(v88.m128_f32[1]) - v79;
					if (v81 < 0.0)
						v81 = 0.0;
					if (v81 <= v77)
					{
						v13 = 0;
					}
					else
					{
						v13 = 183;
						if (v7)
						{
							v82 = *(_QWORD*)(v7 + 8);
							LODWORD(a7) = 183;
							*(_DWORD*)(v7 + 16) = 183;
							*(_DWORD*)(v7 + 24) = 1;
							v83 = 0i64;
							if (v82)
							{
								v84 = *(int**)v7;
								while (*v84 != 183)
								{
									if (*v84 <= 183)
									{
										++v83;
										++v84;
										if (v83 < v82)
											continue;
									}
									goto LABEL_165;
								}
							}
							else
							{
							LABEL_165:
								sub_1401C2E70((__int64*)v7, v83, (int*)&a7);
							}
						}
						if (v68)
							return v13;
					}
				}
				v85 = *(_DWORD*)(*(_QWORD*)(v10 + 112) + 268i64);
				if ((v85 & 0x40000) == 0)
				{
					v88 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)a2[13], (__m128)a2[15]),
						_mm_unpacklo_ps((__m128)a2[14], (__m128)0i64));
					if ((v85 & 0x800) != 0 || (unsigned int)sub_14047D830(a4, &v88))
					{
						return 0;
					}
					else
					{
						v13 = 166;
						if (v7)
						{
							v86 = *(_QWORD*)(v7 + 8);
							LODWORD(a7) = 166;
							*(_DWORD*)(v7 + 16) = 166;
							*(_DWORD*)(v7 + 24) = 1;
							if (v86)
							{
								v87 = *(int**)v7;
								while (*v87 != 166)
								{
									if (*v87 <= 166)
									{
										++v8;
										++v87;
										if (v8 < v86)
											continue;
									}
									goto LABEL_178;
								}
							}
							else
							{
							LABEL_178:
								sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
							}
						}
					}
				}
			}
		}
		else if (!a2[17])
		{
			if (v16)
			{
				v47 = sub_1403B2240(a1, v10, (__int64)a4, a5, v16, (__int64)a2, v31, v7);
				v13 = v47;
				if (v47)
				{
					if (v47 != 317 && v7)
					{
						v48 = *(_QWORD*)(v7 + 8);
						v90 = v47;
						*(_DWORD*)(v7 + 16) = v47;
						*(_DWORD*)(v7 + 24) = 1;
						if (v48)
						{
							v49 = *(int**)v7;
							while (*v49 != v13)
							{
								if (*v49 <= (int)v13)
								{
									++v8;
									++v49;
									if (v8 < v48)
										continue;
								}
								goto LABEL_109;
							}
						}
						else
						{
						LABEL_109:
							sub_1401C2E70((__int64*)v7, v8, &v90);
						}
					}
				}
			}
		}
		return v13;
	}
LABEL_86:
	if (v7)
	{
		v44 = *(_QWORD*)(v7 + 8);
		LODWORD(a7) = 256;
		*(_DWORD*)(v7 + 16) = 256;
		*(_DWORD*)(v7 + 24) = 1;
		if (v44)
		{
			v45 = *(int**)v7;
			while (*v45 != 256)
			{
				if (*v45 <= 256)
				{
					++v8;
					++v45;
					if (v8 < v44)
						continue;
				}
				goto LABEL_92;
			}
		}
		else
		{
		LABEL_92:
			sub_1401C2E70((__int64*)v7, v8, (int*)&a7);
		}
	}
	return 256i64;
}
// 1403B0AED: variable 'v14' is possibly undefined
// 1403B0AED: variable 'a3' is possibly undefined
// 1403B0AED: variable 'v12' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C44798: using guessed type int dword_140C44798;
// 140C65B70: using guessed type __int64 qword_140C65B70;


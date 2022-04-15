#include "../winhttp.h"

//----- (000000014056FBE0) ----------------------------------------------------
__int64 __fastcall sub_14056FBE0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r13
	__m128* v4; // rdx
	__int64 v6; // rax
	__m128 v7; // xmm9
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	int v10; // esi
	_QWORD** v11; // rdi
	unsigned int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rax
	float v15; // xmm4_4
	__m128 v16; // xmm3
	__m128 v17; // xmm2
	float v18; // xmm2_4
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v25; // rax
	unsigned int v26; // r14d
	__int64 v27; // rbx
	__int64 v28; // rsi
	int* v29; // rdi
	__int64 v30; // r15
	unsigned int v31; // esi
	__int64 v32; // rax
	__m128 v33; // xmm2
	__m128 v34; // xmm1
	float v35; // xmm1_4
	float v36; // xmm0_4
	int v37; // eax
	int v38; // eax
	int v39; // xmm1_4
	int v40; // xmm0_4
	__int64 v41; // rax
	__int64 k; // rax
	__int64 m; // rax
	float v44; // [rsp+20h] [rbp-49h] BYREF
	int v45; // [rsp+24h] [rbp-45h]
	int v46; // [rsp+28h] [rbp-41h]
	int v47; // [rsp+2Ch] [rbp-3Dh]
	__int64 v48; // [rsp+30h] [rbp-39h] BYREF
	__int64 v49; // [rsp+38h] [rbp-31h]
	int* v50; // [rsp+40h] [rbp-29h]
	__int64 v51; // [rsp+48h] [rbp-21h]
	__int64 v52; // [rsp+D8h] [rbp+6Fh] BYREF
	int v53; // [rsp+E0h] [rbp+77h] BYREF

	v3 = a1;
	v4 = *(__m128**)(qword_140C65898 + 25744);
	if (!v4)
		return 2147500037i64;
	v6 = *(_QWORD*)(a1 + 88);
	v7 = v4[286];
	if (v6)
	{
		v8 = *(_QWORD**)(v6 + 16);
		v9 = (_QWORD*)v8[2];
		if (v9 != v8)
		{
			v10 = 134250504;
			do
			{
				v11 = (_QWORD**)v9[5];
				if (!((unsigned int(__fastcall*)(_QWORD**))(*v11)[7])(v11))
				{
					a1 = *v11[6];
					v12 = *(_DWORD*)(a1 + 12);
					if (v12 <= 0x1B && _bittest(&v10, v12))
					{
						if (!((unsigned int(__fastcall*)(_QWORD**))(*v11)[7])(v11))
						{
							v13 = sub_14077CCE0(v11, &v53);
							if (v13)
							{
								v14 = sub_14024B980(*(_DWORD*)(*(_QWORD*)v13 + 8i64));
								if (v14)
								{
									v15 = *(float*)(v14 + 4);
									v16 = _mm_sub_ps(
										_mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 12), (__m128) * (unsigned int*)(v14 + 20)),
											_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 16), (__m128)0i64)),
										v7);
									v17 = _mm_mul_ps(v16, v16);
									v18 = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
										+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
									if (v18 < (float)((float)(v15 * v15) * (float)(v15 * v15))
										&& (v18 < 0.0000099999997 || (float)(1.0 - (float)(fsqrt(v18) / v15)) >= *(float*)&dword_140C4B1E8))
									{
										v19 = *(_QWORD*)(qword_140C65920 + 8);
										if (v19)
										{
											do
											{
												v20 = *(_QWORD*)(v19 + 32);
												if (!*(_DWORD*)(v19 + 56))
													(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
												v19 = v20;
											} while (v20);
										}
										v52 = 0i64;
										LODWORD(v52) = ((__int64(__fastcall*)(_QWORD**))(*v11)[1])(v11);
										HIDWORD(v52) = v53;
										sub_1403F4900(qword_140C65898, 0xF3u, (__int64)&v52);
										return 0i64;
									}
								}
							}
						}
					}
					else if (v12 == 18)
					{
						v21 = ((__int64(__fastcall*)(_QWORD**, __int64))(*v11)[15])(v11, 1347241296i64);
						if (v21)
						{
							if (*(_DWORD*)(v21 + 36))
							{
								LODWORD(v52) = 0;
								LODWORD(v52) = *(_DWORD*)(*v11[6] + 20i64);
								sub_1403F4900(qword_140C65898, 0xF9u, (__int64)&v52);
								return 0i64;
							}
						}
					}
				}
				v22 = v9[3];
				if (v22)
				{
					v9 = (_QWORD*)v9[3];
					for (i = *(_QWORD**)(v22 + 16); i; i = (_QWORD*)i[2])
						v9 = i;
				}
				else
				{
					for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v9 = (_QWORD*)j;
					if (v9[3] != j)
						v9 = (_QWORD*)j;
				}
			} while (v9 != *(_QWORD**)(*(_QWORD*)(v3 + 88) + 16i64));
		}
	}
	v25 = *(_QWORD*)(v3 + 168);
	v26 = 0;
	v27 = *(_QWORD*)(v25 + 16);
	v28 = 0i64;
	v49 = 0i64;
	v29 = 0i64;
	v50 = 0i64;
	v30 = 0i64;
	v51 = 0i64;
	if (v27 == v25)
		goto LABEL_59;
	do
	{
		a1 = *(_QWORD*)(sub_140722000(a1, *(_DWORD*)(v27 + 32)) + 16);
		if (*(_DWORD*)(a1 + 8) != 2)
			goto LABEL_49;
		v31 = *(_DWORD*)(v27 + 36);
		if (qword_140C63840)
		{
			v32 = qword_140C63840(off_140A6E228, v31, qword_140C63858);
		}
		else
		{
			if (dword_140C63E98 || (int)sub_14024B720() < 0)
				goto LABEL_49;
			v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v31);
		}
		a1 = v32;
		if (v32)
		{
			v33 = _mm_sub_ps(
				v7,
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v32 + 12), (__m128) * (unsigned int*)(v32 + 20)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v32 + 16), (__m128)0i64)));
			v34 = _mm_mul_ps(v33, v33);
			v35 = fsqrt(
				(float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
				+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0])
				/ *(float*)(v32 + 4);
			v36 = 1.0 - v35;
			if ((float)(1.0 - v35) <= 0.5)
				v37 = v36 > 0.0;
			else
				v37 = 2;
			v46 = v37;
			v38 = *(_DWORD*)a1;
			v44 = 1.0 - v35;
			v45 = v38;
			v47 = *(_DWORD*)(v27 + 32);
			if (v29 == (int*)v30)
			{
				sub_1405737B0(&v48, v29, (int*)&v44);
				v30 = v51;
				v29 = v50;
			}
			else
			{
				if (v29)
				{
					v39 = v46;
					*(float*)v29 = v36;
					v29[1] = v45;
					v40 = v47;
					v29[2] = v39;
					v29[3] = v40;
				}
				v29 += 4;
				v50 = v29;
			}
		}
	LABEL_49:
		v41 = *(_QWORD*)(v27 + 24);
		if (v41)
		{
			v27 = *(_QWORD*)(v27 + 24);
			for (k = *(_QWORD*)(v41 + 16); k; k = *(_QWORD*)(k + 16))
				v27 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v27 + 8); v27 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v27 = m;
			if (*(_QWORD*)(v27 + 24) != m)
				v27 = m;
		}
	} while (v27 != *(_QWORD*)(v3 + 168));
	v28 = v49;
LABEL_59:
	if ((((unsigned __int64)v29 - v28) & 0xFFFFFFFFFFFFFFF0ui64) != 0)
	{
		sub_140573980((int*)v28, v29, a3);
		sub_14039BF20(qword_140C65898, *(_DWORD*)(v28 + 8), *(_DWORD*)(v28 + 12));
	}
	else
	{
		v26 = -2147467259;
	}
	if (v28)
		sub_14018B900(v28, 0);
	return v26;
}
// 14056FEA3: variable 'a1' is possibly undefined
// 140570082: variable 'a3' is possibly undefined
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C4B1E8: using guessed type int dword_140C4B1E8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;


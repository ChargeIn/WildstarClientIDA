//----- (00000001406871A0) ----------------------------------------------------
__int64 __fastcall sub_1406871A0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rsi
	unsigned int* v10; // rsi
	unsigned int v11; // edx
	__int64 v12; // rcx
	int* v13; // rax
	__int64 v14; // rcx
	unsigned int* v15; // rax
	unsigned int* v16; // rsi
	double v17; // xmm1_8
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rdx
	int v24; // r15d
	unsigned __int64 v25; // rcx
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // r14d
	__int64 v30; // rbx
	__int64 v31; // rdx
	__int64 v32; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v35; // ebx
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r8
	char v43[8]; // [rsp+20h] [rbp-99h] BYREF
	int* v44; // [rsp+28h] [rbp-91h]
	__int64 v45; // [rsp+30h] [rbp-89h]
	__int64(__fastcall * *v46)(); // [rsp+40h] [rbp-79h] BYREF
	int v47; // [rsp+48h] [rbp-71h]
	_QWORD* v48; // [rsp+50h] [rbp-69h]
	int v49; // [rsp+58h] [rbp-61h]
	__int64(__fastcall * *v50)(); // [rsp+60h] [rbp-59h] BYREF
	int v51; // [rsp+68h] [rbp-51h]
	_QWORD* v52; // [rsp+70h] [rbp-49h]
	int v53; // [rsp+78h] [rbp-41h]
	char v54[8]; // [rsp+80h] [rbp-39h] BYREF
	int* v55; // [rsp+88h] [rbp-31h]
	__int64 v56; // [rsp+90h] [rbp-29h]
	__int64(__fastcall * *v57)(); // [rsp+A0h] [rbp-19h] BYREF
	int v58; // [rsp+A8h] [rbp-11h]
	__int64 v59; // [rsp+B0h] [rbp-9h]
	__m128 v60; // [rsp+C0h] [rbp+7h] BYREF
	__int64(__fastcall * *v61)(); // [rsp+D0h] [rbp+17h] BYREF
	int v62; // [rsp+D8h] [rbp+1Fh]
	_QWORD* v63; // [rsp+E0h] [rbp+27h]
	int v64; // [rsp+E8h] [rbp+2Fh]
	__m128 v65[2]; // [rsp+F0h] [rbp+37h] BYREF

	v1 = (_QWORD*)a1;
	v52 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v53 = 1;
	v50 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v51 = v6;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v7 = sub_140056AB0(v1, 1u)) != 0
		&& (v9 = *(_QWORD*)(v7 + 8)) != 0
		&& (v10 = *(unsigned int**)(v9 + 8)) != 0i64
		&& (unsigned int)sub_14048D5A0(v8, *v10)
		&& (unsigned int)sub_14048D530(v12, v11))
	{
		v13 = sub_14018B280(40i64, 0);
		v14 = qword_140C65898;
		v55 = v13;
		v56 = 0i64;
		*(_BYTE*)v13 = 0;
		*((_QWORD*)v55 + 1) = 0i64;
		*((_QWORD*)v55 + 2) = v55;
		*((_QWORD*)v55 + 3) = v55;
		if (sub_1403F8270(v14, v10[15], 0))
		{
			v15 = (unsigned int*)sub_14024B980(v10[15]);
			v16 = v15;
			if (v15)
			{
				v60 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v15[3], (__m128)v15[5]),
					_mm_unpacklo_ps((__m128)v15[4], (__m128)0i64));
				v45 = 0i64;
				v44 = sub_14018B280(40i64, 0);
				*(_BYTE*)v44 = 0;
				*(_QWORD*)&v17 = v16[1];
				*((_QWORD*)v44 + 1) = 0i64;
				*((_QWORD*)v44 + 2) = v44;
				*((_QWORD*)v44 + 3) = v44;
				sub_140449B10(&v60, v17, (__int64)v43);
				if (v45)
				{
					v18 = v1[4];
					v61 = off_140B569F0;
					v19 = *(_QWORD*)(v18 + 112);
					v63 = v1;
					v64 = 1;
					if (*(_QWORD*)(v18 + 120) >= v19)
						sub_14005E2C0((__int64)v1);
					v20 = v1[2];
					v21 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v20 + 8) = 5;
					*(_QWORD*)v20 = v21;
					v1[2] += 16i64;
					v22 = sub_1400578C0((__int64)v1);
					v23 = v1[4];
					v24 = v22;
					v62 = v22;
					v25 = *(_QWORD*)(v23 + 112);
					v46 = off_140B569F0;
					v26 = (__int64)v1;
					v48 = v1;
					v49 = 1;
					if (*(_QWORD*)(v23 + 120) >= v25)
						sub_14005E2C0((__int64)v1);
					v27 = v1[2];
					v28 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v27 + 8) = 5;
					*(_QWORD*)v27 = v28;
					v1[2] += 16i64;
					v29 = sub_1400578C0((__int64)v1);
					v47 = v29;
					v30 = *((_QWORD*)v44 + 2);
					if ((int*)v30 != v44)
					{
						do
						{
							v65[0] = _mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 32)), _mm_cvtsi32_si128(0)),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 36)), _mm_cvtsi32_si128(0))));
							sub_1400FA180((__int64)&v57, (__int64)v1, v65[0].m128_f32);
							sub_1400FB1D0((__int64)&v46);
							v57 = off_140B56A08;
							if (v59)
								sub_1400579E0(v59, v31, v58);
							v32 = *(_QWORD*)(v30 + 24);
							if (v32)
							{
								v30 = *(_QWORD*)(v30 + 24);
								for (i = *(_QWORD*)(v32 + 16); i; i = *(_QWORD*)(i + 16))
									v30 = i;
							}
							else
							{
								for (j = *(_QWORD*)(v30 + 8); v30 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
									v30 = j;
								if (*(_QWORD*)(v30 + 24) != j)
									v30 = j;
							}
						} while ((int*)v30 != v44);
						v26 = (__int64)v48;
						v29 = v47;
					}
					sub_1400FB2A0((__int64)&v61, (__int64)L"tHexes", v29);
					sub_1400FA3C0((__int64)&v57, (__int64)v1, v60.m128_f32);
					v35 = v58;
					sub_1400FB2A0((__int64)&v61, (__int64)L"tIndicator", v58);
					sub_1400FB1D0((__int64)&v50);
					if (v59)
						sub_1400579E0(v59, v36, v35);
					if (v26)
						sub_1400579E0(v26, v36, v29);
					sub_1400579E0((__int64)v1, v36, v24);
					v1 = v52;
					v6 = v51;
				}
				sub_140008410((__int64)v43);
				sub_14018B900((__int64)v44, 0);
			}
		}
		v37 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v38 = v1[2];
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		v1[2] += 16i64;
		sub_140008410((__int64)v54);
		sub_14018B900((__int64)v55, 0);
	}
	else
	{
		v40 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v41 = v1[2];
		*(_QWORD*)v41 = *v40;
		v39 = *((unsigned int*)v40 + 2);
		*(_DWORD*)(v41 + 8) = v39;
		v1[2] += 16i64;
	}
	sub_1400579E0((__int64)v1, v39, v6);
	return 1i64;
}
// 140687264: variable 'v8' is possibly undefined
// 140687271: variable 'v12' is possibly undefined
// 140687271: variable 'v11' is possibly undefined
// 140687474: variable 'v31' is possibly undefined
// 140687529: variable 'v36' is possibly undefined
// 1406875E1: variable 'v39' is possibly undefined
// 140B323C8: using guessed type wchar_t aTindicator_2[11];
// 140B323E0: using guessed type wchar_t aThexes_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406871A0: using guessed type char var_F0[8];
// 1406871A0: using guessed type __m128 var_20[2];
// 1406871A0: using guessed type char var_90[8];


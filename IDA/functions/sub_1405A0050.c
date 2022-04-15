#include "../winhttp.h"

//----- (00000001405A0050) ----------------------------------------------------
__int64 __fastcall sub_1405A0050(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	unsigned int* v4; // rdi
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rbx
	unsigned __int64 v10; // rbp
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v13; // rax
	double v14; // xmm0_8
	__int64* v15; // rax
	int v16; // edx
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // rbx
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__int64 v24; // rax
	double v25; // xmm0_8
	__int64* v26; // rax
	int v27; // r12d
	__int64 v28; // rcx
	unsigned __int64 v29; // rdx
	__int64 v30; // r8
	__int64 v31; // rax
	__int64 v32; // r14
	__int64 v33; // rax
	__int64 v34; // r10
	_QWORD* v35; // rsi
	__int64 v36; // rdi
	__m128 v37; // xmm6
	unsigned __int64 v38; // rdx
	unsigned __int64 v39; // rcx
	__int64 v40; // rbx
	unsigned int v41; // r9d
	_DWORD* v42; // rax
	bool v43; // zf
	__m128 v44; // xmm3
	__m128 v45; // xmm1
	__m128 v46; // xmm1
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	__int64 v50; // rsi
	unsigned __int64* v51; // r14
	unsigned __int64 v52; // rdi
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rax
	__int64* v57; // rax
	int v58; // r14d
	_QWORD* v59; // rax
	__int64 v60; // r10
	__int64 v61; // rdx
	__int64 v62; // rdi
	unsigned __int64* v63; // rsi
	__int64 v64; // rbx
	__int64 v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rax
	__int64* v68; // rax
	unsigned int v69; // edx
	_QWORD* v70; // rbx
	int* v71; // rax
	__m128 v73; // [rsp+20h] [rbp-68h] BYREF
	__int64 v74; // [rsp+30h] [rbp-58h] BYREF
	__int64 v75; // [rsp+38h] [rbp-50h]

	v2 = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	v3 = *(_DWORD*)(a1 + 8);
	v4 = (unsigned int*)v2;
	v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64);
	v73 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(qword_140C65898 + 6944), (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(qword_140C65898 + 6948), (__m128)0i64));
	v6 = sub_14005C3C0(v5, v3);
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = -1i64;
	v11 = (unsigned __int64*)sub_14018F0E0(&v74, L"fVectorX")[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710(v9, v11, v12);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
		*(_QWORD*)(v9 + 16) += 16i64;
	}
	if (v75)
		sub_14018B900(v75, 0);
	v13 = *(_QWORD*)(v9 + 16);
	v14 = v73.m128_f32[0];
	*(_DWORD*)(v13 + 8) = 3;
	*(double*)v13 = v14;
	*(_QWORD*)(v9 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(v9, -3);
	sub_14005EA50(v9, v15, (int*)(*(_QWORD*)(v9 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64));
	*(_QWORD*)(v9 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v16 = *(_DWORD*)(a1 + 8);
	v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64);
	v73 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(qword_140C65898 + 6944), (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(qword_140C65898 + 6948), (__m128)0i64));
	v18 = sub_14005C3C0(v17, v16);
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	v21 = *(_QWORD*)(a1 + 16);
	v22 = (unsigned __int64*)sub_14018F0E0(&v74, L"fVectorY")[1];
	if (v22)
	{
		v23 = -1i64;
		do
			++v23;
		while (*((_BYTE*)v22 + v23));
		sub_140058710(v21, v22, v23);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v21 + 16) + 8i64) = 0;
		*(_QWORD*)(v21 + 16) += 16i64;
	}
	if (v75)
		sub_14018B900(v75, 0);
	v24 = *(_QWORD*)(v21 + 16);
	v25 = v73.m128_f32[1];
	*(_DWORD*)(v24 + 8) = 3;
	*(double*)v24 = v25;
	*(_QWORD*)(v21 + 16) += 16i64;
	v26 = (__int64*)sub_1400580E0(v21, -3);
	sub_14005EA50(v21, v26, (int*)(*(_QWORD*)(v21 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v21 + 16) - 16i64));
	*(_QWORD*)(v21 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v27 = 0;
	if (v4)
	{
		v28 = 0i64;
		v29 = *(_QWORD*)(qword_140C65898 + 5792);
		if (v29)
		{
			v30 = *(_QWORD*)(qword_140C65898 + 5784);
			v31 = 0i64;
			while (*(_DWORD*)(*(_QWORD*)(v30 + 8 * v31) + 8i64) != v4[2])
			{
				v28 = (unsigned int)(v28 + 1);
				v31 = (unsigned int)v28;
				if ((unsigned int)v28 >= v29)
					goto LABEL_35;
			}
			v32 = *(_QWORD*)(v30 + 8i64 * (unsigned int)v28);
			if (v32)
			{
				v33 = sub_1405BE260(v28, *v4);
				v35 = (_QWORD*)v33;
				if (v33)
				{
					v36 = 0i64;
					v37 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v34 + 6944), (__m128)0i64),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v34 + 6948), (__m128)0i64));
					if (*(_QWORD*)(v33 + 8))
					{
						while (1)
						{
							v38 = *(_QWORD*)(v32 + 72);
							v39 = 0i64;
							v40 = *(_QWORD*)(*v35 + 8 * v36);
							if (v38)
							{
								v41 = *(_DWORD*)v40;
								v42 = *(_DWORD**)(v32 + 64);
								while (*v42 != v41)
								{
									++v39;
									++v42;
									if (v39 >= v38)
										goto LABEL_32;
								}
								v43 = (*(_BYTE*)(v40 + 32) & 2) == 0;
								v44 = _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128) * (unsigned int*)(v40 + 80), (__m128)0i64),
									_mm_unpacklo_ps((__m128) * (unsigned int*)(v40 + 84), (__m128)0i64));
								v73 = v44;
								if (!v43)
								{
									sub_1405E5F20((__int64*)(v34 + 5784), v41, &v73);
									v34 = qword_140C65898;
									v44 = v73;
								}
								v45 = _mm_sub_ps(v37, v44);
								v46 = _mm_mul_ps(v45, v45);
								if (fsqrt(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0]) <= *(float*)(v40 + 88))
									break;
							}
						LABEL_32:
							if ((unsigned __int64)++v36 >= v35[1])
								goto LABEL_35;
						}
						v27 = *(_DWORD*)v40;
					}
				}
			}
		}
	}
LABEL_35:
	v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v49 = *(_QWORD*)(v48 + 16);
	*(_QWORD*)v49 = *v47;
	*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
	*(_QWORD*)(v48 + 16) += 16i64;
	v50 = *(_QWORD*)(a1 + 16);
	v51 = (unsigned __int64*)sub_14018F0E0(&v74, L"nSubSchematicId")[1];
	if (v51)
	{
		v52 = -1i64;
		do
			++v52;
		while (*((_BYTE*)v51 + v52));
		if (*(_QWORD*)(*(_QWORD*)(v50 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v50 + 32) + 112i64))
			sub_14005E2C0(v50);
		v53 = *(_QWORD*)(v50 + 16);
		v54 = sub_140062650(v50, v51, v52);
		*(_DWORD*)(v53 + 8) = 4;
		*(_QWORD*)v53 = v54;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v50 + 16) + 8i64) = 0;
	}
	v55 = v75;
	*(_QWORD*)(v50 + 16) += 16i64;
	if (v55)
		sub_14018B900(v55, 0);
	v56 = *(_QWORD*)(v50 + 16);
	*(_DWORD*)(v56 + 8) = 3;
	*(double*)v56 = (double)v27;
	*(_QWORD*)(v50 + 16) += 16i64;
	v57 = (__int64*)sub_1400580E0(v50, -3);
	sub_14005EA50(v50, v57, (int*)(*(_QWORD*)(v50 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v50 + 16) - 16i64));
	*(_QWORD*)(v50 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v58 = *(_DWORD*)(qword_140C65898 + 6936);
	v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v61 = *(_QWORD*)(v60 + 16);
	*(_QWORD*)v61 = *v59;
	*(_DWORD*)(v61 + 8) = *((_DWORD*)v59 + 2);
	*(_QWORD*)(v60 + 16) += 16i64;
	v62 = *(_QWORD*)(a1 + 16);
	v63 = (unsigned __int64*)sub_14018F0E0(&v74, L"nAdditiveCount")[1];
	if (v63)
	{
		do
			++v10;
		while (*((_BYTE*)v63 + v10));
		if (*(_QWORD*)(*(_QWORD*)(v62 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v62 + 32) + 112i64))
			sub_14005E2C0(v62);
		v64 = *(_QWORD*)(v62 + 16);
		v65 = sub_140062650(v62, v63, v10);
		*(_DWORD*)(v64 + 8) = 4;
		*(_QWORD*)v64 = v65;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v62 + 16) + 8i64) = 0;
	}
	v66 = v75;
	*(_QWORD*)(v62 + 16) += 16i64;
	if (v66)
		sub_14018B900(v66, 0);
	v67 = *(_QWORD*)(v62 + 16);
	*(_DWORD*)(v67 + 8) = 3;
	*(double*)v67 = (double)v58;
	*(_QWORD*)(v62 + 16) += 16i64;
	v68 = (__int64*)sub_1400580E0(v62, -3);
	sub_14005EA50(v62, v68, (int*)(*(_QWORD*)(v62 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v62 + 16) - 16i64));
	*(_QWORD*)(v62 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v69 = *(_DWORD*)(qword_140C65898 + 6912);
	if (v69)
	{
		v70 = *(_QWORD**)(a1 + 16);
		v71 = sub_1400B5DF0(qword_140C658F0, v69, 0i64);
		if ((unsigned int)sub_140415C70(v70, (__int64)v71))
		{
			sub_1400FB540(a1);
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		}
	}
	return 1i64;
}
// 1405A00CD: variable 'v7' is possibly undefined
// 1405A01D4: variable 'v19' is possibly undefined
// 1405A030D: variable 'v34' is possibly undefined
// 1405A03F4: variable 'v48' is possibly undefined
// 1405A04FA: variable 'v60' is possibly undefined
// 140B203A8: using guessed type wchar_t aNadditivecount[15];
// 140B203C8: using guessed type wchar_t aNsubschematici[16];
// 140B20470: using guessed type wchar_t aFvectory_2[9];
// 140B20488: using guessed type wchar_t aFvectorx_2[9];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;


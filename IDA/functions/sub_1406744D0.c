#include "../winhttp.h"

//----- (00000001406744D0) ----------------------------------------------------
void __fastcall sub_1406744D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // r14
	int v7; // r9d
	__int64 v8; // rdi
	float v9; // xmm7_4
	float v10; // xmm8_4
	__m128 v11; // xmm1
	__m128 v12; // xmm6
	float v13; // xmm8_4
	float v14; // xmm0_4
	bool v15; // zf
	int v16; // xmm10_4
	float v17; // xmm9_4
	float v18; // xmm6_4
	int* v19; // rax
	__int64 v20; // rcx
	unsigned int v21; // edx
	__int64 v22; // rdi
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // esi
	_QWORD* v26; // rax
	__int64 v27; // rdx
	int v28; // r10d
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	_QWORD* v33; // rax
	__int64 v34; // r10
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // rbx
	unsigned __int64 v37; // r8
	__int64 v38; // rax
	double v39; // xmm0_8
	__int64* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // r10
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	__int64 v45; // rax
	double v46; // xmm0_8
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // r10
	unsigned __int64* v50; // rdx
	unsigned __int64 v51; // r8
	__int64 v52; // rax
	__int64* v53; // rax
	_QWORD* v54; // rax
	__int64 v55; // r10
	unsigned __int64* v56; // rdx
	unsigned __int64 v57; // r8
	__int64 v58; // rax
	__int64* v59; // rax
	_QWORD* v60; // rax
	__int64 v61; // r10
	unsigned __int64* v62; // rdx
	unsigned __int64 v63; // r8
	__int64 v64; // rax
	__int64* v65; // rax
	_QWORD* v66; // rax
	__int64 v67; // r10
	unsigned __int64* v68; // rdx
	unsigned __int64 v69; // r8
	__int64 v70; // rax
	__int64* v71; // rax
	_QWORD* v72; // rax
	__int64 v73; // r10
	unsigned __int64* v74; // rdx
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // rdx
	float v78[4]; // [rsp+40h] [rbp-59h] BYREF
	__m128 v79; // [rsp+50h] [rbp-49h] BYREF
	__int64 v80; // [rsp+60h] [rbp-39h] BYREF
	__int64 v81; // [rsp+68h] [rbp-31h]
	float v82; // [rsp+100h] [rbp+67h] BYREF
	int v83; // [rsp+110h] [rbp+77h] BYREF
	float v84; // [rsp+118h] [rbp+7Fh] BYREF

	if (*(_DWORD*)(a1 + 152))
	{
		if (*(_DWORD*)(a1 + 1344))
		{
			v4 = *(_QWORD*)(a1 + 168);
			if (v4)
			{
				v5 = sub_140243A00(*(_DWORD*)(v4 + 448));
				v6 = v5;
				if (v5)
				{
					v7 = *(_DWORD*)(v5 + 4);
					v8 = qword_140C65898;
					v9 = 0.0;
					v10 = *(float*)(v5 + 20);
					v11 = 0i64;
					v12 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12), (__m128)0i64),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 16), (__m128)0i64));
					v79 = v12;
					v13 = v10 * sub_1405E6230(qword_140C65898 + 5784, 16, v79.m128_f32, v7).m128_f32[0];
					v14 = sub_1405E6230(v8 + 5784, 15, v79.m128_f32, *(_DWORD*)(v6 + 4)).m128_f32[0];
					v15 = *(_DWORD*)(a1 + 152) == 0;
					v16 = dword_140C4AB88;
					v17 = v13;
					v82 = 0.0;
					v11.m128_f32[0] = v14;
					v83 = dword_140C4AB88;
					v78[0] = v13;
					v79 = _mm_mul_ps(v12, _mm_shuffle_ps(v11, v11, 0));
					v18 = 0.0;
					v84 = 0.0;
					if (!v15)
					{
						v19 = sub_140417BF0(*(_QWORD**)a1, 2u);
						if (v19)
						{
							v21 = v19[113];
							if (v21)
							{
								sub_1405BE320(v20, v21, &v79, &v82, (float*)&v83, &v84, v78);
								v9 = v82;
								v16 = v83;
								v18 = v84;
								v17 = v78[0];
							}
						}
					}
					v22 = *(_QWORD*)a1;
					if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64) + 120i64) >= *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64)
						+ 112i64))
						sub_14005E2C0(*(_QWORD*)a1);
					v23 = *(_QWORD*)(v22 + 16);
					v24 = sub_14005C1B0(v22, 0, 0);
					*(_DWORD*)(v23 + 8) = 5;
					*(_QWORD*)v23 = v24;
					*(_QWORD*)(v22 + 16) += 16i64;
					v25 = sub_1400578C0(v22);
					v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					v27 = *(_QWORD*)(v22 + 16);
					*(_QWORD*)v27 = *v26;
					*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					sub_1400F06F0(v22, v27, L"eTradeskill", v28);
					*(_QWORD*)(v22 + 16) -= 16i64;
					v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v30 = *v29;
					*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					sub_1400F06F0(v22, v31, L"nTier", v32);
					*(_QWORD*)(v22 + 16) -= 16i64;
					v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v34 = *v33;
					*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v35 = (unsigned __int64*)sub_14018F0E0(&v80, L"nVectorX")[1];
					v36 = -1i64;
					if (v35)
					{
						v37 = -1i64;
						do
							++v37;
						while (*((_BYTE*)v35 + v37));
						sub_140058710(v22, v35, v37);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v38 = *(_QWORD*)(v22 + 16);
					v39 = v79.m128_f32[0];
					*(_DWORD*)(v38 + 8) = 3;
					*(double*)v38 = v39;
					*(_QWORD*)(v22 + 16) += 16i64;
					v40 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v40,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v42 = *v41;
					*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v43 = (unsigned __int64*)sub_14018F0E0(&v80, L"nVectorY")[1];
					if (v43)
					{
						v44 = -1i64;
						do
							++v44;
						while (*((_BYTE*)v43 + v44));
						sub_140058710(v22, v43, v44);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v45 = *(_QWORD*)(v22 + 16);
					v46 = v79.m128_f32[1];
					*(_DWORD*)(v45 + 8) = 3;
					*(double*)v45 = v46;
					*(_QWORD*)(v22 + 16) += 16i64;
					v47 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v47,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v49 = *v48;
					*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v50 = (unsigned __int64*)sub_14018F0E0(&v80, L"nRadius")[1];
					if (v50)
					{
						v51 = -1i64;
						do
							++v51;
						while (*((_BYTE*)v50 + v51));
						sub_140058710(v22, v50, v51);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v52 = *(_QWORD*)(v22 + 16);
					*(_DWORD*)(v52 + 8) = 3;
					*(double*)v52 = v13;
					*(_QWORD*)(v22 + 16) += 16i64;
					v53 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v53,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v55 = *v54;
					*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v56 = (unsigned __int64*)sub_14018F0E0(&v80, L"nRadiusMin")[1];
					if (v56)
					{
						v57 = -1i64;
						do
							++v57;
						while (*((_BYTE*)v56 + v57));
						sub_140058710(v22, v56, v57);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v58 = *(_QWORD*)(v22 + 16);
					*(_DWORD*)(v58 + 8) = 3;
					*(double*)v58 = v18;
					*(_QWORD*)(v22 + 16) += 16i64;
					v59 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v59,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v61 = *v60;
					*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v62 = (unsigned __int64*)sub_14018F0E0(&v80, L"nRadiusMax")[1];
					if (v62)
					{
						v63 = -1i64;
						do
							++v63;
						while (*((_BYTE*)v62 + v63));
						sub_140058710(v22, v62, v63);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v64 = *(_QWORD*)(v22 + 16);
					*(_DWORD*)(v64 + 8) = 3;
					*(double*)v64 = v17;
					*(_QWORD*)(v22 + 16) += 16i64;
					v65 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v65,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v67 = *v66;
					*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v68 = (unsigned __int64*)sub_14018F0E0(&v80, L"nStartAngle")[1];
					if (v68)
					{
						v69 = -1i64;
						do
							++v69;
						while (*((_BYTE*)v68 + v69));
						sub_140058710(v22, v68, v69);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v70 = *(_QWORD*)(v22 + 16);
					*(_DWORD*)(v70 + 8) = 3;
					*(double*)v70 = v9;
					*(_QWORD*)(v22 + 16) += 16i64;
					v71 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v71,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					v72 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
					*(_QWORD*)v73 = *v72;
					*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
					*(_QWORD*)(v22 + 16) += 16i64;
					v74 = (unsigned __int64*)sub_14018F0E0(&v80, L"nMaxRotation")[1];
					if (v74)
					{
						do
							++v36;
						while (*((_BYTE*)v74 + v36));
						sub_140058710(v22, v74, v36);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
						*(_QWORD*)(v22 + 16) += 16i64;
					}
					if (v81)
						sub_14018B900(v81, 0);
					v75 = *(_QWORD*)(v22 + 16);
					*(_DWORD*)(v75 + 8) = 3;
					*(double*)v75 = *(float*)&v16;
					*(_QWORD*)(v22 + 16) += 16i64;
					v76 = (__int64*)sub_1400580E0(v22, -3);
					sub_14005EA50(
						v22,
						v76,
						(int*)(*(_QWORD*)(v22 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
					*(_QWORD*)(v22 + 16) -= 48i64;
					sub_1400FB2A0(a2, (__int64)L"tAdditive", v25);
					sub_1400579E0(v22, v77, v25);
				}
			}
		}
	}
}
// 14067464C: variable 'v20' is possibly undefined
// 1406746E2: variable 'v28' is possibly undefined
// 140674713: variable 'v30' is possibly undefined
// 140674725: variable 'v31' is possibly undefined
// 140674725: variable 'v32' is possibly undefined
// 14067474F: variable 'v34' is possibly undefined
// 140674816: variable 'v42' is possibly undefined
// 1406748D6: variable 'v49' is possibly undefined
// 140674996: variable 'v55' is possibly undefined
// 140674A57: variable 'v61' is possibly undefined
// 140674B18: variable 'v67' is possibly undefined
// 140674BD9: variable 'v73' is possibly undefined
// 140674C9A: variable 'v77' is possibly undefined
// 140B2FED8: using guessed type wchar_t aNmaxrotation[13];
// 140B2FEF8: using guessed type wchar_t aTadditive[10];
// 140B2FF10: using guessed type wchar_t aNradiusmax[11];
// 140B2FF28: using guessed type wchar_t aNstartangle[12];
// 140B2FF40: using guessed type wchar_t aNradius[8];
// 140B2FF50: using guessed type wchar_t aNradiusmin[11];
// 140B2FF68: using guessed type wchar_t aNvectorx[9];
// 140B2FF80: using guessed type wchar_t aNvectory[9];
// 140B2FF98: using guessed type wchar_t aEtradeskill[12];
// 140B2FFB0: using guessed type wchar_t aNtier_4[6];
// 140C4AB88: using guessed type int dword_140C4AB88;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406744D0: using guessed type float var_B0[4];


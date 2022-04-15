//----- (000000014041A270) ----------------------------------------------------
__int64 __fastcall sub_14041A270(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // r15
	int v7; // r9d
	__int64 v8; // rsi
	__m128 v9; // xmm1
	float v10; // xmm7_4
	__m128 v11; // xmm6
	float v12; // xmm7_4
	float v13; // xmm0_4
	unsigned int v14; // edx
	int* v15; // rax
	__int64 v16; // rcx
	unsigned int v17; // edx
	int* v18; // rax
	__int64 v19; // rcx
	unsigned int v20; // edx
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // esi
	_QWORD* v24; // rax
	__int64 v25; // rdx
	int v26; // r10d
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r10
	unsigned __int64* v33; // rdx
	unsigned __int64 v34; // rbx
	unsigned __int64 v35; // r8
	__int64 v36; // rax
	double v37; // xmm0_8
	__int64* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	__int64 v43; // rax
	double v44; // xmm0_8
	__int64* v45; // rax
	_QWORD* v46; // rax
	__int64 v47; // r10
	unsigned __int64* v48; // rdx
	unsigned __int64 v49; // r8
	__int64 v50; // rax
	__int64* v51; // rax
	_QWORD* v52; // rax
	__int64 v53; // r10
	unsigned __int64* v54; // rdx
	unsigned __int64 v55; // r8
	__int64 v56; // rax
	double v57; // xmm0_8
	__int64* v58; // rax
	_QWORD* v59; // rax
	__int64 v60; // r10
	unsigned __int64* v61; // rdx
	unsigned __int64 v62; // r8
	__int64 v63; // rax
	double v64; // xmm0_8
	__int64* v65; // rax
	_QWORD* v66; // rax
	__int64 v67; // r10
	unsigned __int64* v68; // rdx
	unsigned __int64 v69; // r8
	__int64 v70; // rax
	double v71; // xmm0_8
	__int64* v72; // rax
	_QWORD* v73; // rax
	__int64 v74; // r10
	unsigned __int64* v75; // rdx
	__int64 v76; // rax
	double v77; // xmm0_8
	__int64* v78; // rax
	_QWORD* v79; // rax
	__int64 v80; // r10
	__int64 v81; // rdx
	int v82[4]; // [rsp+40h] [rbp-29h] BYREF
	__m128 v83; // [rsp+50h] [rbp-19h] BYREF
	__int64 v84; // [rsp+60h] [rbp-9h] BYREF
	__int64 v85; // [rsp+68h] [rbp-1h]
	float v86; // [rsp+D8h] [rbp+6Fh] BYREF
	float v87; // [rsp+E0h] [rbp+77h] BYREF
	float v88; // [rsp+E8h] [rbp+7Fh] BYREF

	v2 = sub_140417BF0(a1, 1u);
	if (v2 && (v3 = v2[112]) != 0)
	{
		v4 = sub_140243A00(v3);
		v5 = v4;
		if (v4)
		{
			v7 = *(_DWORD*)(v4 + 4);
			v8 = qword_140C65898;
			v9 = 0i64;
			v10 = *(float*)(v4 + 20);
			v11 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 12), (__m128)0i64),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 16), (__m128)0i64));
			v83 = v11;
			v12 = v10 * sub_1405E6230(qword_140C65898 + 5784, 16, v83.m128_f32, v7).m128_f32[0];
			v13 = sub_1405E6230(v8 + 5784, 15, v83.m128_f32, *(_DWORD*)(v5 + 4)).m128_f32[0];
			v14 = *(_DWORD*)(v8 + 6912);
			v87 = v12;
			v9.m128_f32[0] = v13;
			v88 = 0.0;
			v86 = 0.0;
			v82[0] = dword_140C44B68;
			v83 = _mm_mul_ps(v11, _mm_shuffle_ps(v9, v9, 0));
			v15 = sub_1400B5DF0(qword_140C658F0, v14, 0i64);
			if (v15)
			{
				v17 = v15[113];
				if (v17)
					sub_1405BE320(v16, v17, &v83, &v88, (float*)v82, &v86, &v87);
			}
			v18 = sub_140417BF0(a1, 2u);
			if (v18)
			{
				v20 = v18[113];
				if (v20)
					sub_1405BE320(v19, v20, &v83, &v88, (float*)v82, &v86, &v87);
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v21 = a1[2];
			v22 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v21 + 8) = 5;
			*(_QWORD*)v21 = v22;
			a1[2] += 16i64;
			v23 = sub_1400578C0((__int64)a1);
			v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			v25 = a1[2];
			*(_QWORD*)v25 = *v24;
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v25, L"eTradeskillId", v26);
			a1[2] -= 16i64;
			v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v29, L"nTier", v30);
			a1[2] -= 16i64;
			v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v32 = *v31;
			*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
			a1[2] += 16i64;
			v33 = (unsigned __int64*)sub_14018F0E0(&v84, L"fVectorX")[1];
			v34 = -1i64;
			if (v33)
			{
				v35 = -1i64;
				do
					++v35;
				while (*((_BYTE*)v33 + v35));
				sub_140058710((__int64)a1, v33, v35);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v36 = a1[2];
			v37 = v83.m128_f32[0];
			*(_DWORD*)(v36 + 8) = 3;
			*(double*)v36 = v37;
			a1[2] += 16i64;
			v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v40 = *v39;
			*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
			a1[2] += 16i64;
			v41 = (unsigned __int64*)sub_14018F0E0(&v84, L"fVectorY")[1];
			if (v41)
			{
				v42 = -1i64;
				do
					++v42;
				while (*((_BYTE*)v41 + v42));
				sub_140058710((__int64)a1, v41, v42);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v43 = a1[2];
			v44 = v83.m128_f32[1];
			*(_DWORD*)(v43 + 8) = 3;
			*(double*)v43 = v44;
			a1[2] += 16i64;
			v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v47 = *v46;
			*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
			a1[2] += 16i64;
			v48 = (unsigned __int64*)sub_14018F0E0(&v84, L"fRadius")[1];
			if (v48)
			{
				v49 = -1i64;
				do
					++v49;
				while (*((_BYTE*)v48 + v49));
				sub_140058710((__int64)a1, v48, v49);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v50 = a1[2];
			*(_DWORD*)(v50 + 8) = 3;
			*(double*)v50 = v12;
			a1[2] += 16i64;
			v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v53 = *v52;
			*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
			a1[2] += 16i64;
			v54 = (unsigned __int64*)sub_14018F0E0(&v84, L"fRadiusMin")[1];
			if (v54)
			{
				v55 = -1i64;
				do
					++v55;
				while (*((_BYTE*)v54 + v55));
				sub_140058710((__int64)a1, v54, v55);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v56 = a1[2];
			v57 = v86;
			*(_DWORD*)(v56 + 8) = 3;
			*(double*)v56 = v57;
			a1[2] += 16i64;
			v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v59 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v60 = *v59;
			*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
			a1[2] += 16i64;
			v61 = (unsigned __int64*)sub_14018F0E0(&v84, L"fRadiusMax")[1];
			if (v61)
			{
				v62 = -1i64;
				do
					++v62;
				while (*((_BYTE*)v61 + v62));
				sub_140058710((__int64)a1, v61, v62);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v63 = a1[2];
			v64 = v87;
			*(_DWORD*)(v63 + 8) = 3;
			*(double*)v63 = v64;
			a1[2] += 16i64;
			v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v66 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v67 = *v66;
			*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
			a1[2] += 16i64;
			v68 = (unsigned __int64*)sub_14018F0E0(&v84, L"fStartAngle")[1];
			if (v68)
			{
				v69 = -1i64;
				do
					++v69;
				while (*((_BYTE*)v68 + v69));
				sub_140058710((__int64)a1, v68, v69);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v70 = a1[2];
			v71 = v88;
			*(_DWORD*)(v70 + 8) = 3;
			*(double*)v70 = v71;
			a1[2] += 16i64;
			v72 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v72, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v73 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v74 = *v73;
			*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
			a1[2] += 16i64;
			v75 = (unsigned __int64*)sub_14018F0E0(&v84, L"fMaxRotation")[1];
			if (v75)
			{
				do
					++v34;
				while (*((_BYTE*)v75 + v34));
				sub_140058710((__int64)a1, v75, v34);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v85)
				sub_14018B900(v85, 0);
			v76 = a1[2];
			v77 = *(float*)v82;
			*(_DWORD*)(v76 + 8) = 3;
			*(double*)v76 = v77;
			a1[2] += 16i64;
			v78 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v78, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
			*(_QWORD*)v80 = *v79;
			*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v81, v23);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14041A3DC: variable 'v16' is possibly undefined
// 14041A420: variable 'v19' is possibly undefined
// 14041A49D: variable 'v26' is possibly undefined
// 14041A4CE: variable 'v28' is possibly undefined
// 14041A4E0: variable 'v29' is possibly undefined
// 14041A4E0: variable 'v30' is possibly undefined
// 14041A50A: variable 'v32' is possibly undefined
// 14041A5C8: variable 'v40' is possibly undefined
// 14041A686: variable 'v47' is possibly undefined
// 14041A745: variable 'v53' is possibly undefined
// 14041A806: variable 'v60' is possibly undefined
// 14041A8C6: variable 'v67' is possibly undefined
// 14041A986: variable 'v74' is possibly undefined
// 14041AA42: variable 'v80' is possibly undefined
// 14041AA54: variable 'v81' is possibly undefined
// 140AFA010: using guessed type wchar_t aFmaxrotation[13];
// 140AFA030: using guessed type wchar_t aFstartangle[12];
// 140AFA048: using guessed type wchar_t aFradiusmax[11];
// 140AFA0E8: using guessed type wchar_t aNtier_1[6];
// 140AFA0F8: using guessed type wchar_t aEtradeskillid[14];
// 140AFA150: using guessed type wchar_t aFradiusmin[11];
// 140AFA168: using guessed type wchar_t aFradius[8];
// 140AFA178: using guessed type wchar_t aFvectory[9];
// 140AFA190: using guessed type wchar_t aFvectorx[9];
// 140C44B68: using guessed type int dword_140C44B68;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;


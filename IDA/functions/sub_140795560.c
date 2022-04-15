#include "../winhttp.h"

//----- (0000000140795560) ----------------------------------------------------
__int64 __fastcall sub_140795560(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rbx
	char* v3; // rdi
	_DWORD* v4; // rax
	signed __int64 v5; // rax
	int* v6; // rax
	unsigned int* v7; // rsi
	char* v8; // rax
	int v9; // ecx
	__int64 v10; // rdx
	__int64 v11; // rax
	__m128i v12; // xmm0
	__int64 v13; // r14
	unsigned __int64 v14; // rdi
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v18; // rax
	__m128i v19; // xmm0
	unsigned __int64 v20; // r8
	__int64 v21; // r14
	__int64 v22; // rax
	unsigned int* v23; // r9
	__int64 v24; // rax
	__m128i v25; // xmm0
	unsigned __int64 v26; // r8
	__int64 v27; // r14
	__int64 v28; // rax
	unsigned int* v29; // r9
	__int64 v30; // rax
	__m128i v31; // xmm0
	unsigned __int64 v32; // r8
	__int64 v33; // r14
	__int64 v34; // rax
	unsigned int* v35; // r9
	__int64 v36; // rcx
	int v37; // eax
	unsigned __int64 v38; // r8
	__int64 v39; // r14
	__int64 v40; // rax
	unsigned int* v41; // r9
	__int64 v42; // rcx
	int v43; // eax
	unsigned __int64 v44; // r8
	__int64 v45; // r14
	__int64 v46; // rax
	unsigned int* v47; // r9
	__int64 v48; // rcx
	int v49; // eax
	unsigned __int64 v50; // r8
	__int64 v51; // r14
	__int64 v52; // rax
	unsigned int* v53; // r9
	__int64 v54; // rcx
	int v55; // eax
	__int64 v56; // r14
	__int64 v57; // rax
	unsigned int* v58; // r9
	int v59; // edx
	char v60; // al
	int v61; // edx
	unsigned __int64* v62; // r8
	CHAR* v63; // rax
	__int64 v64; // rax
	unsigned __int64 v65; // r8
	__int64 v67; // [rsp+20h] [rbp-E0h] BYREF
	int v68; // [rsp+28h] [rbp-D8h]
	CHAR v69[8]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v70; // [rsp+38h] [rbp-C8h] BYREF
	unsigned __int64* v71; // [rsp+40h] [rbp-C0h] BYREF
	int v72; // [rsp+48h] [rbp-B8h]
	_QWORD* v73; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v74[64]; // [rsp+58h] [rbp-A8h] BYREF
	unsigned __int64 v75; // [rsp+258h] [rbp+158h] BYREF
	char v76[208]; // [rsp+260h] [rbp+160h] BYREF

	v1 = (_DWORD*)a1[3];
	v2 = a1;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = aC_17;
	else
		v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	v4 = (_DWORD*)(v2[3] + 16i64);
	if ((unsigned __int64)v4 >= v2[2] || v4 == dword_140A12138 || *(int*)(v2[3] + 24i64) <= 0)
		v5 = sub_1408FCC50(0i64);
	else
		v5 = (unsigned int)(int)sub_140056C40(v2, 2u);
	v70 = v5;
	if (*v3 == 33)
	{
		v6 = sub_14090151C(&v70);
		++v3;
	}
	else
	{
		v6 = sub_140901A68(&v70);
	}
	v7 = (unsigned int*)v6;
	if (v6)
	{
		v8 = v3;
		do
		{
			v9 = (unsigned __int8)v8[aT_57 - v3];
			v10 = (unsigned int)(unsigned __int8)*v8 - v9;
			if ((_DWORD)v10)
				break;
			++v8;
		} while (v9);
		if ((_DWORD)v10)
		{
			v60 = *v3;
			v61 = 0;
			v62 = v74;
			v69[0] = 37;
			v69[2] = 0;
			v73 = v2;
			v71 = v74;
			v72 = 0;
			if (v60)
			{
				do
				{
					if (v60 == 37 && (v63 = v3 + 1, v3[1]))
					{
						++v3;
						v69[1] = *v63;
						v64 = sub_140901A4C(v76, 200i64, v69, v7);
						sub_1400576C0((__int64)&v71, v76, v64);
						v62 = v71;
					}
					else
					{
						if (v62 >= &v75 && v62 != v74)
						{
							sub_140058710((__int64)v2, v74, (char*)v62 - (char*)v74);
							++v72;
							v71 = v74;
							sub_1400575B0((__int64)&v71);
							v62 = v71;
						}
						*(_BYTE*)v62 = *v3;
						v62 = (unsigned __int64*)((char*)v71 + 1);
						v71 = (unsigned __int64*)((char*)v71 + 1);
					}
					v60 = v3[1];
					v2 = v73;
					++v3;
				} while (v60);
				v61 = v72;
			}
			v65 = (char*)v62 - (char*)v74;
			if (v65)
			{
				sub_140058710((__int64)v2, v74, v65);
				v2 = v73;
				v61 = ++v72;
				v71 = v74;
			}
			sub_1400590E0(v2, v61);
		}
		else
		{
			sub_140058900((__int64)v2, v10, 9);
			v11 = v2[2];
			v12 = _mm_cvtsi32_si128(*v7);
			*(_DWORD*)(v11 + 8) = 3;
			*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
			v2[2] += 16i64;
			v13 = v2[2];
			v14 = -1i64;
			v15 = -1i64;
			do
				++v15;
			while (aSec_0[v15]);
			v16 = sub_140062650((__int64)v2, (unsigned __int64*)aSec_0, v15);
			v17 = (unsigned int*)(v2[2] - 16i64);
			v67 = v16;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v13 - 32), (int*)&v67, v17);
			v2[2] -= 16i64;
			v18 = v2[2];
			v19 = _mm_cvtsi32_si128(v7[1]);
			*(_DWORD*)(v18 + 8) = 3;
			v20 = -1i64;
			*(_QWORD*)v18 = *(_OWORD*)&_mm_cvtepi32_pd(v19);
			v2[2] += 16i64;
			v21 = v2[2];
			do
				++v20;
			while (aMin_2[v20]);
			v22 = sub_140062650((__int64)v2, (unsigned __int64*)aMin_2, v20);
			v23 = (unsigned int*)(v2[2] - 16i64);
			v67 = v22;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v21 - 32), (int*)&v67, v23);
			v2[2] -= 16i64;
			v24 = v2[2];
			v25 = _mm_cvtsi32_si128(v7[2]);
			*(_DWORD*)(v24 + 8) = 3;
			v26 = -1i64;
			*(_QWORD*)v24 = *(_OWORD*)&_mm_cvtepi32_pd(v25);
			v2[2] += 16i64;
			v27 = v2[2];
			do
				++v26;
			while (aHour_0[v26]);
			v28 = sub_140062650((__int64)v2, (unsigned __int64*)aHour_0, v26);
			v29 = (unsigned int*)(v2[2] - 16i64);
			v67 = v28;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v27 - 32), (int*)&v67, v29);
			v2[2] -= 16i64;
			v30 = v2[2];
			v31 = _mm_cvtsi32_si128(v7[3]);
			*(_DWORD*)(v30 + 8) = 3;
			v32 = -1i64;
			*(_QWORD*)v30 = *(_OWORD*)&_mm_cvtepi32_pd(v31);
			v2[2] += 16i64;
			v33 = v2[2];
			do
				++v32;
			while (aDay_0[v32]);
			v34 = sub_140062650((__int64)v2, (unsigned __int64*)aDay_0, v32);
			v35 = (unsigned int*)(v2[2] - 16i64);
			v67 = v34;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v33 - 32), (int*)&v67, v35);
			v2[2] -= 16i64;
			v36 = v2[2];
			v37 = v7[4] + 1;
			*(_DWORD*)(v36 + 8) = 3;
			v38 = -1i64;
			*(double*)v36 = (double)v37;
			v2[2] += 16i64;
			v39 = v2[2];
			do
				++v38;
			while (aMonth_0[v38]);
			v40 = sub_140062650((__int64)v2, (unsigned __int64*)aMonth_0, v38);
			v41 = (unsigned int*)(v2[2] - 16i64);
			v67 = v40;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v39 - 32), (int*)&v67, v41);
			v2[2] -= 16i64;
			v42 = v2[2];
			v43 = v7[5] + 1900;
			*(_DWORD*)(v42 + 8) = 3;
			v44 = -1i64;
			*(double*)v42 = (double)v43;
			v2[2] += 16i64;
			v45 = v2[2];
			do
				++v44;
			while (aYear_0[v44]);
			v46 = sub_140062650((__int64)v2, (unsigned __int64*)aYear_0, v44);
			v47 = (unsigned int*)(v2[2] - 16i64);
			v67 = v46;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v45 - 32), (int*)&v67, v47);
			v2[2] -= 16i64;
			v48 = v2[2];
			v49 = v7[6] + 1;
			*(_DWORD*)(v48 + 8) = 3;
			v50 = -1i64;
			*(double*)v48 = (double)v49;
			v2[2] += 16i64;
			v51 = v2[2];
			do
				++v50;
			while (aWday[v50]);
			v52 = sub_140062650((__int64)v2, (unsigned __int64*)aWday, v50);
			v53 = (unsigned int*)(v2[2] - 16i64);
			v67 = v52;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v51 - 32), (int*)&v67, v53);
			v2[2] -= 16i64;
			v54 = v2[2];
			v55 = v7[7] + 1;
			*(_DWORD*)(v54 + 8) = 3;
			*(double*)v54 = (double)v55;
			v2[2] += 16i64;
			v56 = v2[2];
			do
				++v14;
			while (aYday[v14]);
			v57 = sub_140062650((__int64)v2, (unsigned __int64*)aYday, v14);
			v58 = (unsigned int*)(v2[2] - 16i64);
			v67 = v57;
			v68 = 4;
			sub_14005EA50((__int64)v2, (__int64*)(v56 - 32), (int*)&v67, v58);
			v2[2] -= 16i64;
			v59 = v7[8];
			if (v59 >= 0)
				sub_140795300((__int64)v2, v59);
		}
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
		v2[2] += 16i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140795560: using guessed type unsigned __int64 var_2F8[64];
// 140795560: using guessed type unsigned __int64 var_F8;


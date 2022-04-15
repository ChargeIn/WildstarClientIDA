#include "../winhttp.h"

//----- (00000001400CBE10) ----------------------------------------------------
char __fastcall sub_1400CBE10(__int64 a1, int* a2)
{
	__int128 v2; // xmm8
	__int128 v3; // xmm9
	__int128 v4; // xmm10
	char v5; // al
	__int128 v6; // xmm15
	int v7; // r12d
	bool v9; // r10
	bool v10; // r11
	int v12; // r15d
	int v13; // ecx
	int v14; // r14d
	bool v15; // cl
	int v16; // r9d
	int v17; // esi
	int v18; // r9d
	bool v19; // dl
	int v20; // edi
	int v21; // eax
	bool v22; // cl
	float v23; // xmm11_4
	float v24; // xmm12_4
	float v25; // xmm13_4
	__int64 v26; // r13
	float v27; // xmm14_4
	unsigned int v28; // ecx
	unsigned int v29; // edx
	double v30; // xmm9_8
	double v31; // xmm10_8
	float v32; // xmm2_4
	float v33; // xmm6_4
	float v34; // xmm7_4
	float v35; // xmm8_4
	__m128i v36; // xmm0
	__m128 v37; // xmm0
	__m128 v38; // xmm1
	__m128 v39; // xmm2
	int v40; // r8d
	int v41; // ecx
	int v42; // r10d
	int v43; // edx
	int v44; // r9d
	int v45; // eax
	char v46; // r9
	int v47; // r9d
	char v48; // al
	int v49; // ecx
	int v50; // ecx
	int v51; // eax
	char v52; // cl
	int v53; // ecx
	char v54; // al
	int v55; // edx
	unsigned int v56; // ecx
	unsigned int v57; // edx
	double v58; // xmm6_8
	double v59; // xmm7_8
	float v60; // xmm11_4
	float v61; // xmm12_4
	float v62; // xmm13_4
	float v63; // xmm14_4
	__m128i v64; // xmm2
	unsigned __int64 v65; // rax
	__m128 v66; // xmm0
	__m128 v67; // xmm1
	__m128 v68; // xmm2
	int v69; // ecx
	int v70; // r9d
	int v71; // r8d
	int v72; // ecx
	int v73; // r9d
	int v74; // eax
	char v75; // cl
	int v76; // r9d
	int v77; // eax
	char v78; // cl
	int v79; // eax
	char result; // al
	__int64 v81; // [rsp+28h] [rbp-E0h]
	__int64 v82; // [rsp+30h] [rbp-D8h]
	__int64 v83; // [rsp+38h] [rbp-D0h]
	__int64 v84; // [rsp+40h] [rbp-C8h]
	bool v85; // [rsp+48h] [rbp-C0h]
	bool v86; // [rsp+49h] [rbp-BFh]
	bool v87; // [rsp+4Ah] [rbp-BEh]
	bool v88; // [rsp+4Bh] [rbp-BDh]
	__int128 v89; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v90; // [rsp+68h] [rbp-A0h]
	int v91; // [rsp+78h] [rbp-90h]
	int v92; // [rsp+7Ch] [rbp-8Ch]
	int v93; // [rsp+80h] [rbp-88h]
	int v94; // [rsp+84h] [rbp-84h]
	__int128 v95; // [rsp+88h] [rbp-80h]
	__int128 v96; // [rsp+98h] [rbp-70h]
	__int128 v97; // [rsp+A8h] [rbp-60h]
	__int128 v98; // [rsp+B8h] [rbp-50h]
	__int128 v99; // [rsp+D8h] [rbp-30h]
	__int128 v100; // [rsp+E8h] [rbp-20h]
	__int128 v101; // [rsp+F8h] [rbp-10h]
	__int128 v102; // [rsp+108h] [rbp+0h]
	__int128 v103[5]; // [rsp+128h] [rbp+20h] BYREF
	int v104; // [rsp+178h] [rbp+70h]

	v2 = *(_OWORD*)(a1 + 80);
	v3 = *(_OWORD*)(a1 + 96);
	v4 = *(_OWORD*)(a1 + 112);
	v5 = *(_BYTE*)(a1 + 29);
	v6 = *(_OWORD*)(a1 + 64);
	v7 = *(_DWORD*)(a1 + 144);
	v9 = 0;
	v10 = 0;
	v85 = 0;
	v97 = v2;
	v99 = v2;
	v98 = v3;
	v87 = 0;
	v88 = 0;
	v100 = v3;
	v95 = v4;
	v101 = v4;
	v86 = 0;
	v102 = *(_OWORD*)(a1 + 128);
	v12 = v102;
	if ((v5 & 8) != 0)
	{
		v13 = *a2;
		v12 = *a2 + v102;
		LODWORD(v102) = v12;
		if ((v5 & 0x20) == 0)
		{
			v85 = v13 > 0;
			v10 = v13 < 0;
			v87 = v13 < 0;
		}
	}
	v14 = DWORD1(v102);
	v15 = (v5 & 0x10) != 0;
	if ((v5 & 0x10) != 0)
	{
		v16 = a2[1];
		v14 = v16 + DWORD1(v102);
		DWORD1(v102) += v16;
		if ((v5 & 0x40) == 0)
		{
			v9 = v16 > 0;
			v86 = v16 < 0;
			v88 = v16 > 0;
		}
	}
	v17 = DWORD2(v102);
	if ((v5 & 0x20) == 0 || (v18 = *a2, v17 = *a2 + DWORD2(v102), DWORD2(v102) = v17, (v5 & 8) != 0))
	{
		v19 = v85;
	}
	else
	{
		v19 = v18 < 0;
		v10 = v18 > 0;
		v85 = v18 < 0;
		v87 = v18 > 0;
	}
	v20 = HIDWORD(v102);
	if ((v5 & 0x40) == 0 || (v21 = a2[1], v20 = v21 + HIDWORD(v102), HIDWORD(v102) += v21, v15))
	{
		v22 = v86;
	}
	else
	{
		v9 = v21 < 0;
		v22 = v21 > 0;
		v88 = v21 < 0;
		v86 = v21 > 0;
	}
	v23 = *((float*)&v101 + 3);
	v24 = *((float*)&v101 + 2);
	v25 = *((float*)&v101 + 1);
	v26 = v99;
	v27 = *(float*)&v101;
	if (v19 || v10 || v9 || v22)
	{
		sub_1400CB890(a1, &v89);
		v28 = v89;
		v29 = DWORD1(v89);
		*(_QWORD*)&v30 = COERCE_UNSIGNED_INT((float)(DWORD2(v89) - v89));
		*(_QWORD*)&v31 = COERCE_UNSIGNED_INT((float)(HIDWORD(v89) - DWORD1(v89)));
		if ((v7 & 1) != 0)
		{
			v90 = v6;
			v32 = *((float*)&v6 + 1);
			v33 = *(float*)&v6;
			v89 = v6;
			v34 = *((float*)&v6 + 1);
			v35 = *(float*)&v6;
		}
		else
		{
			if (v26)
				LODWORD(v35) = sub_14014E200(v26, v30).m128_u32[0];
			else
				v35 = v27 * *(float*)&v30;
			if (*((_QWORD*)&v99 + 1))
				LODWORD(v34) = sub_14014E200(*((__int64*)&v99 + 1), v31).m128_u32[0];
			else
				v34 = v25 * *(float*)&v31;
			if ((_QWORD)v100)
				LODWORD(v33) = sub_14014E200(v100, v30).m128_u32[0];
			else
				v33 = v24 * *(float*)&v30;
			if (*((_QWORD*)&v100 + 1))
				LODWORD(v32) = sub_14014E200(*((__int64*)&v100 + 1), v31).m128_u32[0];
			else
				v32 = v23 * *(float*)&v31;
			v29 = DWORD1(v89);
			v28 = v89;
		}
		*(float*)&v89 = v35 + (float)v12;
		*((float*)&v89 + 1) = v34 + (float)v14;
		v36 = _mm_cvtsi32_si128(0);
		*((float*)&v90 + 1) = v32 + (float)v20;
		*(float*)&v90 = v33 + (float)v17;
		v37 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v36),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), v36)));
		v38 = _mm_add_ps((__m128)v90, v37);
		v39 = _mm_add_ps((__m128)v89, v37);
		v40 = (int)v38.m128_f32[0];
		v41 = (int)v39.m128_f32[0];
		v42 = (int)_mm_shuffle_ps(v38, v38, 85).m128_f32[0];
		v43 = (int)_mm_shuffle_ps(v39, v39, 85).m128_f32[0];
		if (v85)
		{
			v44 = *(_DWORD*)(a1 + 256);
			if (v40 - v41 < v44)
			{
				v45 = v44 + v41 - v40;
				v46 = *(_BYTE*)(a1 + 29);
				if ((v46 & 8) != 0)
				{
					v12 -= v45;
					LODWORD(v102) = v12;
				}
				if ((v46 & 0x20) != 0)
				{
					v17 += v45;
					DWORD2(v102) = v17;
				}
			}
		}
		if (v87)
		{
			v47 = *(_DWORD*)(a1 + 264);
			if (v40 - v41 > v47)
			{
				v48 = *(_BYTE*)(a1 + 29);
				v49 = v47 + v41 - v40;
				if ((v48 & 8) != 0)
				{
					v12 -= v49;
					LODWORD(v102) = v12;
				}
				if ((v48 & 0x20) != 0)
				{
					v17 += v49;
					DWORD2(v102) = v17;
				}
			}
		}
		if (v88)
		{
			v50 = *(_DWORD*)(a1 + 260);
			if (v42 - v43 < v50)
			{
				v51 = v50 + v43 - v42;
				v52 = *(_BYTE*)(a1 + 29);
				if ((v52 & 0x10) != 0)
				{
					v14 -= v51;
					DWORD1(v102) = v14;
				}
				if ((v52 & 0x40) != 0)
				{
					v20 += v51;
					HIDWORD(v102) = v20;
				}
			}
		}
		if (v86 && (v53 = *(_DWORD*)(a1 + 268), v42 - v43 > v53))
		{
			v54 = *(_BYTE*)(a1 + 29);
			v55 = v53 + v43 - v42;
			if ((v54 & 0x10) != 0)
			{
				v14 -= v55;
				DWORD1(v102) = v14;
			}
			v2 = v97;
			v3 = v98;
			v4 = v95;
			if ((v54 & 0x40) != 0)
			{
				v20 += v55;
				HIDWORD(v102) = v20;
			}
		}
		else
		{
			v4 = v95;
			v3 = v98;
			v2 = v97;
		}
	}
	sub_1400CB890(a1, &v89);
	v56 = v89;
	v57 = DWORD1(v89);
	*(_QWORD*)&v58 = COERCE_UNSIGNED_INT((float)(DWORD2(v89) - v89));
	*(_QWORD*)&v59 = COERCE_UNSIGNED_INT((float)(HIDWORD(v89) - DWORD1(v89)));
	if ((v7 & 1) != 0)
	{
		v96 = v6;
		v60 = *((float*)&v6 + 1);
		v61 = *(float*)&v6;
		v95 = v6;
		v62 = *((float*)&v6 + 1);
		v63 = *(float*)&v6;
	}
	else
	{
		if (v26)
			LODWORD(v63) = sub_14014E200(v26, v58).m128_u32[0];
		else
			v63 = v27 * *(float*)&v58;
		if (*((_QWORD*)&v99 + 1))
			LODWORD(v62) = sub_14014E200(*((__int64*)&v99 + 1), v59).m128_u32[0];
		else
			v62 = v25 * *(float*)&v59;
		if ((_QWORD)v100)
			LODWORD(v61) = sub_14014E200(v100, v58).m128_u32[0];
		else
			v61 = v24 * *(float*)&v58;
		if (*((_QWORD*)&v100 + 1))
			LODWORD(v60) = sub_14014E200(*((__int64*)&v100 + 1), v59).m128_u32[0];
		else
			v60 = v23 * *(float*)&v59;
		v57 = DWORD1(v89);
		v56 = v89;
	}
	v64 = _mm_cvtsi32_si128(0);
	*(float*)&v95 = v63 + (float)v12;
	*((float*)&v95 + 1) = v62 + (float)v14;
	v65 = (unsigned __int64)*(unsigned int*)(a1 + 656) >> 30;
	*(float*)&v96 = v61 + (float)v17;
	*((float*)&v96 + 1) = v60 + (float)v20;
	v66 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v56), v64),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), v64)));
	v67 = _mm_add_ps((__m128)v96, v66);
	v68 = _mm_add_ps((__m128)v95, v66);
	v91 = (int)v68.m128_f32[0];
	v93 = (int)v67.m128_f32[0];
	v69 = (int)_mm_shuffle_ps(v67, v67, 85).m128_f32[0];
	v70 = (int)_mm_shuffle_ps(v68, v68, 85).m128_f32[0];
	v92 = v70;
	v94 = v69;
	if ((v65 & 1) != 0)
	{
		v71 = (int)v67.m128_f32[0] - (int)v68.m128_f32[0];
		v72 = v69 - v70;
		*(_QWORD*)&v89 = __PAIR64__(v72, v71);
		if (__PAIR64__(v72, v71) != *(_QWORD*)(a1 + 936))
		{
			if ((v85 || v87) && (v73 = *(_DWORD*)(a1 + 936), v73 > 0))
			{
				v74 = v71 * *(_DWORD*)(a1 + 940) / v73 - v72;
				v75 = *(_BYTE*)(a1 + 29);
				if ((v75 & 0x10) != 0 || (v75 & 0x40) == 0)
					DWORD1(v102) = v14 - v74;
				else
					HIDWORD(v102) = v74 + v20;
			}
			else if (v88 || v86)
			{
				v76 = *(_DWORD*)(a1 + 940);
				if (v76 > 0)
				{
					v77 = *(_DWORD*)(a1 + 936) * v72;
					v78 = *(_BYTE*)(a1 + 29);
					v79 = v77 / v76 - v71;
					if ((v78 & 8) != 0 || (v78 & 0x20) == 0)
						LODWORD(v102) = v12 - v79;
					else
						DWORD2(v102) = v79 + v17;
				}
			}
		}
	}
	v103[0] = v6;
	v103[1] = v2;
	v104 = v7 | 0x300;
	v103[4] = v102;
	v103[2] = v3;
	v103[3] = v4;
	sub_1400CC680(a1, (__int64)v103);
	result = sub_1400D4070(a1, 5u, (char*)a1, "iiii", v91, v92, v93, v94);
	if (!*(_QWORD*)(a1 + 16))
	{
		LODWORD(v84) = v94;
		LODWORD(v83) = v93;
		LODWORD(v82) = v92;
		LODWORD(v81) = v91;
		return sub_1400EAA10(*(_QWORD*)(a1 + 32), 2, (__int64)"Wiiii", a1, v81, v82, v83, v84);
	}
	return result;
}
// 1400CC54C: variable 'v81' is possibly undefined
// 1400CC54C: variable 'v82' is possibly undefined
// 1400CC54C: variable 'v83' is possibly undefined
// 1400CC54C: variable 'v84' is possibly undefined


#include "../winhttp.h"

//----- (0000000140726EC0) ----------------------------------------------------
__int64 __fastcall sub_140726EC0(__int64 a1)
{
	__int64 v2; // r8
	int v3; // esi
	__m128 v4; // xmm12
	float v5; // xmm1_4
	__int64 v6; // rdx
	__m128 v7; // xmm0
	float v8; // xmm1_4
	float v9; // xmm8_4
	float v10; // xmm9_4
	float v11; // xmm10_4
	__m128 v12; // xmm4
	__int64 v13; // r8
	float v14; // xmm2_4
	__int64 v15; // rdx
	__m128 v16; // xmm0
	float v17; // xmm3_4
	float v18; // xmm5_4
	float v19; // xmm6_4
	float v20; // xmm7_4
	__m128 v21; // xmm3
	__int64 v22; // r8
	__m128 v23; // xmm2
	__m128 v24; // xmm1
	__m128 v25; // xmm3
	__m128 v26; // xmm0
	__m128 v27; // xmm4
	__m128 v28; // xmm2
	__m128 v29; // xmm2
	bool v30; // cc
	float v31; // xmm3_4
	__int64 v32; // rdx
	float v33; // xmm0_4
	__int64 v34; // r8
	float v35; // xmm2_4
	__int64 v36; // rdx
	float v37; // xmm0_4
	__int64 v38; // r8
	float v39; // xmm4_4
	__int64 v40; // rdx
	__int64* v41; // rdi
	__int64 v42; // rcx
	_QWORD* v43; // r15
	__int64 v44; // rcx
	int* v45; // rax
	__int64 v46; // r8
	int* v47; // rax
	__int64 v48; // rax
	__int64 v49; // r8
	int* v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // r8
	__int64 v53; // rcx
	int* v54; // rax
	__int64 v55; // r8
	int* v56; // rax
	__int64 v57; // r8
	int* v58; // rax
	__int64 v59; // r8
	int* v60; // rax
	__int64 v61; // r8
	int* v62; // rax
	__int64 v63; // r9
	__int64 v64; // r8
	int* v65; // rax
	int* v66; // rcx
	int* v67; // rax
	unsigned int v68; // r10d
	__int64 v69; // r11
	_QWORD* v70; // r14
	int* v71; // rsi
	__int64 v72; // rcx
	int v73; // r8d
	__int64 v74; // r9
	__int64 v75; // rdx
	bool v76; // zf
	__int64 v77; // rax
	__int64 result; // rax
	int v79; // eax
	__int64 v80; // rcx
	int* v81; // rax
	__int64 v82; // rax
	__m128 v83; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v84; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v85; // [rsp+58h] [rbp-B0h]
	__int64 v86[10]; // [rsp+68h] [rbp-A0h] BYREF

	v2 = 0i64;
	v3 = 2;
	v4 = _mm_add_ps((__m128)xmmword_140C77870, _mm_mul_ps((__m128)xmmword_140C77880, (__m128)xmmword_140B7B320));
	v84 = _mm_sub_ps(v4, (__m128)0i64);
	v83 = _mm_mul_ps(v84, v84);
	LODWORD(v5) = _mm_shuffle_ps(v83, v83, 170).m128_u32[0];
	if (_mm_shuffle_ps(v83, v83, 85).m128_f32[0] > v83.m128_f32[0])
		v2 = 1i64;
	v6 = 1 - v2;
	if (v5 > v83.m128_f32[v2])
		v2 = 2i64;
	v7 = (__m128)v83.m128_u32[-v6 + 3 - v2];
	v7.m128_f32[0] = (float)(v7.m128_f32[0] + v83.m128_f32[v6]) + v83.m128_f32[v2];
	if (v7.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		v12 = 0i64;
		v83 = 0i64;
		v11 = 0.0;
		v10 = 0.0;
		v9 = 0.0;
	}
	else
	{
		v8 = 1.0 / _mm_sqrt_ps(v7).m128_f32[0];
		v9 = v84.m128_f32[0] * v8;
		v10 = v84.m128_f32[1] * v8;
		v11 = v84.m128_f32[2] * v8;
		v83.m128_f32[0] = v84.m128_f32[0] * v8;
		v83.m128_f32[1] = v84.m128_f32[1] * v8;
		v83.m128_f32[2] = v84.m128_f32[2] * v8;
		v12 = v83;
	}
	v13 = 0i64;
	v84 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v12, v12, 210),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps(v12, v12, 201),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
	v83 = _mm_mul_ps(v84, v84);
	LODWORD(v14) = _mm_shuffle_ps(v83, v83, 170).m128_u32[0];
	if (_mm_shuffle_ps(v83, v83, 85).m128_f32[0] > v83.m128_f32[0])
		v13 = 1i64;
	v15 = 1 - v13;
	if (v14 > v83.m128_f32[v13])
		v13 = 2i64;
	v16 = (__m128)v83.m128_u32[-v15 + 3 - v13];
	v16.m128_f32[0] = (float)(v16.m128_f32[0] + v83.m128_f32[v15]) + v83.m128_f32[v13];
	if (v16.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		v21 = 0i64;
		v83 = 0i64;
		v20 = 0.0;
		v19 = 0.0;
		v18 = 0.0;
	}
	else
	{
		v17 = 1.0 / _mm_sqrt_ps(v16).m128_f32[0];
		v18 = v84.m128_f32[0] * v17;
		v19 = v84.m128_f32[1] * v17;
		v20 = v84.m128_f32[2] * v17;
		v83.m128_f32[0] = v84.m128_f32[0] * v17;
		v83.m128_f32[1] = v84.m128_f32[1] * v17;
		v83.m128_f32[2] = v84.m128_f32[2] * v17;
		v21 = v83;
	}
	v22 = 0i64;
	*(float*)(a1 + 880) = v18;
	*(float*)(a1 + 888) = v9;
	*(float*)(a1 + 896) = v19;
	v23 = _mm_shuffle_ps(v21, v21, 210);
	*(_DWORD*)(a1 + 892) = 0;
	*(_DWORD*)(a1 + 908) = 0;
	*(float*)(a1 + 904) = v10;
	*(float*)(a1 + 912) = v20;
	*(float*)(a1 + 920) = v11;
	*(_DWORD*)(a1 + 924) = 0;
	v24 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v12, v12, 210));
	v25 = _mm_mul_ps(v21, v4);
	v83 = v25;
	v26 = _mm_shuffle_ps(v12, v12, 201);
	v27 = _mm_mul_ps(v12, v4);
	v28 = _mm_sub_ps(_mm_mul_ps(v23, v26), v24);
	*(_DWORD*)(a1 + 884) = v28.m128_i32[0];
	*(_DWORD*)(a1 + 900) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
	v26.m128_i32[0] = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
	v29 = _mm_mul_ps(v28, v4);
	*(_DWORD*)(a1 + 916) = v26.m128_i32[0];
	v30 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0] <= v25.m128_f32[0];
	LODWORD(v31) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
	if (!v30)
		v22 = 1i64;
	v32 = 1 - v22;
	if (v31 > v83.m128_f32[v22])
		v22 = 2i64;
	v33 = (float)(v83.m128_f32[-v32 + 3 - v22] + v83.m128_f32[v32]) + v83.m128_f32[v22];
	v83 = v29;
	v34 = 0i64;
	*(float*)(a1 + 928) = -v33;
	v30 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] <= v29.m128_f32[0];
	LODWORD(v35) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
	if (!v30)
		v34 = 1i64;
	v36 = 1 - v34;
	if (v35 > v83.m128_f32[v34])
		v34 = 2i64;
	v37 = (float)(v83.m128_f32[-v36 + 3 - v34] + v83.m128_f32[v36]) + v83.m128_f32[v34];
	v38 = 0i64;
	v83 = v27;
	*(float*)(a1 + 932) = -v37;
	v30 = _mm_shuffle_ps(v27, v27, 85).m128_f32[0] <= v27.m128_f32[0];
	LODWORD(v39) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
	if (!v30)
		v38 = 1i64;
	v40 = 1 - v38;
	v30 = v39 <= v83.m128_f32[v38];
	*(_DWORD*)(a1 + 940) = 1065353216;
	if (!v30)
		v38 = 2i64;
	v86[0] = a1 + 880;
	*(float*)(a1 + 936) = -(float)((float)(v83.m128_f32[-v40 + 3 - v38] + v83.m128_f32[v40]) + v83.m128_f32[v38]);
	sub_1401AFC20(v86, (double*)(a1 + 944));
	v41 = (__int64*)(a1 + 1144);
	v83.m128_u64[0] = 0x431600003DCCCCCDi64;
	*(_QWORD*)(a1 + 1136) = 0x431600003DCCCCCDi64;
	if ((int)sub_1402EC590(v42, (__int64*)(a1 + 1144)) < 0)
		goto LABEL_82;
	v43 = (_QWORD*)(a1 + 1160);
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)*v41 + 40i64))(
		*v41,
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_AttachmentScene_000.m3",
		a1 + 1160,
		0i64) < 0)
		goto LABEL_82;
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 62i64, 1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 63i64, 1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 179i64, 1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 180i64, 1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 181i64, 1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v43 + 728i64))(*v43, 182i64, 1i64);
	(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)*v43 + 648i64))(
		*v43,
		sub_140729540,
		a1);
	v44 = *v43;
	v84.m128_u64[0] = 1118i64;
	v84.m128_u64[1] = 1065353216i64;
	v85 = 0ui64;
	(*(void(__fastcall**)(__int64, _QWORD, __m128*))(*(_QWORD*)v44 + 584i64))(v44, 0i64, &v84);
	(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, int, __int64, int, int, __int64), __int64))(*(_QWORD*)*v43 + 680i64))(
		*v43,
		sub_1407296B0,
		a1);
	(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v43 + 352i64))(*v43, 1i64);
	v84.m128_u64[0] = (unsigned __int64)sub_140729490;
	v84.m128_u64[1] = (unsigned __int64)sub_1407294F0;
	*(_QWORD*)&v85 = a1;
	v45 = sub_14018B280(112i64, 0);
	if (v45)
	{
		*((_QWORD*)v45 + 1) = 0i64;
		*((_QWORD*)v45 + 2) = 0i64;
		*((_QWORD*)v45 + 3) = 0i64;
		*((_QWORD*)v45 + 4) = 0i64;
		*((_QWORD*)v45 + 5) = 0i64;
		v45[18] = 0;
		*((_BYTE*)v45 + 76) = 0;
		*((_QWORD*)v45 + 10) = 0i64;
		*((_QWORD*)v45 + 11) = 0i64;
		*(_QWORD*)v45 = off_140B781A0;
		*((_QWORD*)v45 + 13) = 0i64;
		*((_QWORD*)v45 + 12) = 0i64;
		*((_QWORD*)v45 + 6) = 0i64;
		*((_QWORD*)v45 + 7) = 0i64;
		*((_QWORD*)v45 + 8) = 0i64;
	}
	else
	{
		v45 = 0i64;
	}
	v46 = *v41;
	*(_QWORD*)(a1 + 1168) = v45;
	if ((int)sub_14078AEA0((__int64)v45, a1, v46, &v84) < 0)
		goto LABEL_82;
	v84.m128_u64[1] = a1;
	v84.m128_u64[0] = (unsigned __int64)sub_14072A8F0;
	v47 = sub_14018B280(112i64, 0);
	v48 = v47 ? sub_14078A9A0((__int64)v47) : 0i64;
	v49 = *v41;
	*(_QWORD*)(a1 + 1176) = v48;
	if ((int)sub_14078AAC0(v48, a1, v49, &v84) < 0)
		goto LABEL_82;
	v50 = sub_14018B280(96i64, 0);
	v51 = v50 ? sub_14078A550(v50) : 0i64;
	v52 = *v41;
	*(_QWORD*)(a1 + 1184) = v51;
	if ((int)sub_14078A660(v51, a1, v52) < 0
		|| (*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)*v41 + 40i64))(
			*v41,
			L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_Table_000.m3",
			a1 + 1152,
			0i64) < 0)
	{
		goto LABEL_82;
	}
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v43 + 896i64))(*v43, 21i64, *(_QWORD*)(a1 + 1152));
	v53 = *(_QWORD*)(a1 + 1152);
	v84.m128_u64[0] = 150i64;
	v84.m128_u64[1] = 1065353216i64;
	LODWORD(v85) = 0;
	*(_QWORD*)((char*)&v85 + 4) = 2i64;
	HIDWORD(v85) = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __m128*))(*(_QWORD*)v53 + 584i64))(v53, 0i64, &v84);
	v54 = sub_14018B280(56i64, 0);
	if (v54)
	{
		*((_QWORD*)v54 + 1) = 0i64;
		*((_QWORD*)v54 + 2) = 0i64;
		*((_QWORD*)v54 + 3) = 0i64;
		*((_QWORD*)v54 + 4) = 0i64;
		*((_QWORD*)v54 + 5) = 0i64;
		*(_QWORD*)v54 = off_140B77FC0;
		*((_QWORD*)v54 + 6) = 0i64;
	}
	else
	{
		v54 = 0i64;
	}
	v55 = *v41;
	*(_QWORD*)(a1 + 1392) = v54;
	if ((int)sub_140789010(v54, a1, v55) < 0)
		goto LABEL_82;
	v56 = sub_14018B280(64i64, 0);
	if (v56)
	{
		*((_QWORD*)v56 + 1) = 0i64;
		*((_QWORD*)v56 + 2) = 0i64;
		*((_QWORD*)v56 + 3) = 0i64;
		*((_QWORD*)v56 + 4) = 0i64;
		*(_QWORD*)v56 = off_140B78010;
		*((_QWORD*)v56 + 5) = 0i64;
		v56[12] = 0;
		*((_QWORD*)v56 + 7) = 0i64;
	}
	else
	{
		v56 = 0i64;
	}
	v57 = *v41;
	*(_QWORD*)(a1 + 1400) = v56;
	if ((int)sub_140789170((__int64)v56, a1, v57, 0x79u) < 0)
		goto LABEL_82;
	v58 = sub_14018B280(64i64, 0);
	if (v58)
	{
		*((_QWORD*)v58 + 1) = 0i64;
		*((_QWORD*)v58 + 2) = 0i64;
		*((_QWORD*)v58 + 3) = 0i64;
		*((_QWORD*)v58 + 4) = 0i64;
		*((_QWORD*)v58 + 5) = 0i64;
		*(_QWORD*)v58 = off_140B78010;
		v58[12] = 0;
		*((_QWORD*)v58 + 7) = 0i64;
	}
	else
	{
		v58 = 0i64;
	}
	v59 = *v41;
	*(_QWORD*)(a1 + 1408) = v58;
	if ((int)sub_140789170((__int64)v58, a1, v59, 0x78u) < 0)
		goto LABEL_82;
	v60 = sub_14018B280(64i64, 0);
	if (v60)
	{
		*((_QWORD*)v60 + 1) = 0i64;
		*((_QWORD*)v60 + 2) = 0i64;
		*((_QWORD*)v60 + 3) = 0i64;
		*((_QWORD*)v60 + 4) = 0i64;
		*((_QWORD*)v60 + 5) = 0i64;
		*(_QWORD*)v60 = off_140B78010;
		v60[12] = 0;
		*((_QWORD*)v60 + 7) = 0i64;
	}
	else
	{
		v60 = 0i64;
	}
	v61 = *v41;
	*(_QWORD*)(a1 + 1416) = v60;
	if ((int)sub_140789170((__int64)v60, a1, v61, 0x7Au) < 0)
		goto LABEL_82;
	v62 = sub_14018B280(112i64, 0);
	if (v62)
	{
		*((_QWORD*)v62 + 1) = 0i64;
		*((_QWORD*)v62 + 2) = 0i64;
		*((_QWORD*)v62 + 3) = 0i64;
		*((_QWORD*)v62 + 4) = 0i64;
		*((_QWORD*)v62 + 5) = 0i64;
		*(_QWORD*)v62 = off_140B78060;
		*((_OWORD*)v62 + 4) = 0i64;
		v62[20] = 0;
		v62[21] = 1;
		*((_QWORD*)v62 + 11) = 0i64;
		*((_QWORD*)v62 + 12) = 0i64;
		*((_QWORD*)v62 + 6) = 0i64;
		*((_QWORD*)v62 + 7) = 0i64;
	}
	else
	{
		v62 = 0i64;
	}
	v64 = *v41;
	v83.m128_u64[0] = (unsigned __int64)sub_14072A8C0;
	*(_QWORD*)(a1 + 1368) = v62;
	v83.m128_u64[1] = a1;
	if ((int)sub_1407893A0((__int64)v62, a1, v64, v63, &v83) < 0)
		goto LABEL_82;
	v65 = sub_14018B280(464i64, 0);
	if (v65)
	{
		v66 = v65 + 2;
		*v65 = 3;
		v67 = v65 + 4;
		do
		{
			*(_QWORD*)v67 = 0i64;
			*((_QWORD*)v67 + 1) = 0i64;
			--v3;
			*((_QWORD*)v67 + 2) = 0i64;
			*((_QWORD*)v67 + 3) = 0i64;
			*((_QWORD*)v67 - 1) = off_140B780B0;
			*((_QWORD*)v67 + 4) = 0i64;
			v67[10] = 0;
			*((_QWORD*)v67 + 9) = 0i64;
			*((_QWORD*)v67 + 10) = 0i64;
			v67[22] = 3;
			*((_QWORD*)v67 + 12) = 0i64;
			*((_QWORD*)v67 + 13) = 0i64;
			v67[28] = 0;
			*((_QWORD*)v67 + 15) = 0i64;
			*((_QWORD*)v67 + 16) = 0i64;
			v67[34] = 0;
			*((_QWORD*)v67 + 6) = 0i64;
			*((_QWORD*)v67 + 7) = 0i64;
			*((_QWORD*)v67 + 8) = 0i64;
			v67 += 38;
		} while (v3 >= 0);
	}
	else
	{
		v66 = 0i64;
	}
	v68 = 0;
	*(_QWORD*)(a1 + 1272) = v66;
	v69 = 0i64;
	v70 = (_QWORD*)(a1 + 1208);
	v71 = (int*)&unk_140B46730;
	do
	{
		v72 = *v41;
		v73 = *v71;
		v74 = *v43;
		v75 = v69 + *(_QWORD*)(a1 + 1272);
		v76 = *(_QWORD*)(v75 + 8) == 0i64;
		*(_QWORD*)(v75 + 24) = a1;
		*(_QWORD*)(v75 + 32) = v72;
		if (v76)
		{
			*(_QWORD*)(v75 + 8) = v70;
			*(_QWORD*)(v75 + 16) = *v70;
			*v70 = v75;
			v77 = *(_QWORD*)(v75 + 16);
			if (v77)
				*(_QWORD*)(v77 + 8) = v75 + 16;
		}
		*(_QWORD*)(v75 + 56) = sub_14072A790;
		*(_DWORD*)(v75 + 40) = v68++;
		++v71;
		v69 += 152i64;
		*(_QWORD*)(v75 + 64) = sub_14072A7D0;
		*(_QWORD*)(v75 + 112) = v74;
		*(_DWORD*)(v75 + 120) = v73;
		*(_QWORD*)(v75 + 72) = a1;
	} while (v68 < 3);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)*v41 + 48i64))(*v41, (unsigned int)dword_140C636A8, 0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)*v41 + 80i64))(
		*v41,
		a1 + 880,
		a1 + 944,
		a1 + 1136,
		0);
	result = sub_1407C2CA0((__int64*)(a1 + 1240));
	if ((int)result >= 0)
	{
		v79 = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64))(**(_QWORD**)(a1 + 1240) + 24i64))(
			*(_QWORD*)(a1 + 1240),
			L"Sky\\MMFortunes_001.sky",
			a1 + 1248);
		if (v79 < 0)
			return v79 < 0;
		if ((int)sub_140727A70((__int64*)a1) >= 0)
		{
			sub_140198D60(v80, (int*)L"gachareloadui", (__int64)sub_140727FD0, a1);
			if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
				qword_140C65670,
				L"UI\\Cursors\\Point.tex",
				a1 + 1536) < 0)
				return 1i64;
			v83.m128_i32[0] = 38948;
			v81 = sub_140484600(qword_140C65918 + 80, (int*)&v83);
			v82 = sub_1404846C0((__int64)v81);
			*(_QWORD*)(a1 + 1200) = v82;
			if (v82)
			{
				result = sub_1407129A0((__int64*)(a1 + 1440));
				if ((int)result < 0)
					return result;
				result = sub_1407129A0((__int64*)(a1 + 1448));
				if ((int)result < 0)
					return result;
			LABEL_83:
				*(_DWORD*)(a1 + 20) = 11;
				return 0i64;
			}
		}
	LABEL_82:
		*(_QWORD*)(a1 + 8) = 1i64;
		goto LABEL_83;
	}
	return result;
}
// 1407272D6: variable 'v42' is possibly undefined
// 1407277C7: variable 'v63' is possibly undefined
// 1407279A6: variable 'v80' is possibly undefined
// 140B46058: using guessed type wchar_t aGachareloadui[14];
// 140B46128: using guessed type wchar_t aUiCursorsPoint_6[21];
// 140B46158: using guessed type wchar_t aSkyMmfortunes0[23];
// 140B461D0: using guessed type wchar_t aArtPropMffortu_0[48];
// 140B46230: using guessed type wchar_t aArtPropMffortu[58];
// 140B77FC0: using guessed type __int64 (__fastcall *off_140B77FC0[84])();
// 140B78010: using guessed type __int64 (__fastcall *off_140B78010[74])();
// 140B78060: using guessed type __int64 (__fastcall *off_140B78060[64])();
// 140B780B0: using guessed type __int64 (__fastcall *off_140B780B0[54])();
// 140B781A0: using guessed type __int64 (__fastcall *off_140B781A0[24])();
// 140B7B320: using guessed type __int128 xmmword_140B7B320;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140726EC0: using guessed type __int64 var_F0[10];


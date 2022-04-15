//----- (0000000140124290) ----------------------------------------------------
__int64 __fastcall sub_140124290(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	double a4,
	float a5,
	float a6,
	float a7,
	int a8,
	int a9,
	int a10)
{
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // esi
	__int64 v15; // rcx
	int v16; // edi
	__int64 v17; // rcx
	int v18; // ebx
	__int64 v19; // rcx
	int v20; // eax
	int v21; // r13d
	int v22; // edx
	int* v23; // rax
	__int64 v24; // rdi
	__int64 v25; // rsi
	int* v26; // r10
	__int128* v27; // r8
	__int64 v28; // rdx
	int v29; // ecx
	__int32 v30; // eax
	_QWORD* v31; // r9
	__int64 v32; // rbx
	int* v33; // rax
	__int64 v34; // rax
	__int64* v35; // rcx
	__int64 v36; // rdx
	__m128i si128; // xmm7
	unsigned __int64 v38; // rbx
	unsigned int* v39; // r15
	__int64 v40; // r8
	__int64 v41; // rdx
	__int64 v42; // rcx
	int v43; // r9d
	float* v44; // rcx
	__int64 v45; // r8
	int v46; // edx
	int* v47; // r9
	__m128* v48; // rcx
	__int64 v49; // r8
	bool v50; // cc
	int* v51; // r10
	__int128* v52; // r8
	__int64 v53; // rdx
	__int32 v54; // ecx
	_QWORD* v55; // r9
	__int64 v56; // rbx
	int* v57; // rax
	__int64* v58; // rcx
	__int64 v59; // rdx
	unsigned __int64 v60; // rbx
	unsigned int* v61; // rdi
	__int64 v62; // r8
	__int64 v63; // rdx
	__int64 v64; // rcx
	int v65; // r9d
	float* v66; // rax
	float v67; // xmm9_4
	__int64 v68; // rcx
	__int16* v69; // rax
	__int64 v70; // rcx
	__int16* v71; // rax
	__int64 v72; // rax
	__int64 v73; // rcx
	int v75; // [rsp+48h] [rbp-C0h] BYREF
	_DWORD v76[2]; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v77; // [rsp+58h] [rbp-B0h]
	__int128 v78; // [rsp+68h] [rbp-A0h]
	__int128 v79; // [rsp+78h] [rbp-90h] BYREF
	__int128 v80; // [rsp+88h] [rbp-80h]
	__int128 v81; // [rsp+98h] [rbp-70h]
	__int128 v82; // [rsp+A8h] [rbp-60h]
	int v83; // [rsp+B8h] [rbp-50h]
	__int128 v84; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v85; // [rsp+D8h] [rbp-30h]
	__int128 v86; // [rsp+E8h] [rbp-20h]
	__int128 v87; // [rsp+F8h] [rbp-10h]
	__int128 v88; // [rsp+108h] [rbp+0h]
	int v89; // [rsp+118h] [rbp+10h]
	__m128 v90; // [rsp+128h] [rbp+20h] BYREF
	int v91; // [rsp+138h] [rbp+30h]
	int v92; // [rsp+13Ch] [rbp+34h]
	int v93; // [rsp+144h] [rbp+3Ch]
	__int64 v94; // [rsp+148h] [rbp+40h] BYREF
	__int64 v95; // [rsp+150h] [rbp+48h]

	v77 = a2;
	v75 = a10;
	v12 = sub_1400E58C0(a1, (int*)L"Chat");
	sub_140122A00((int*)&v94, *(_QWORD*)(v12 + 96), a3);
	v13 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v13 + 992))
		v14 = *(_DWORD*)(v13 + 996);
	else
		v14 = sub_14010D1C0(v13);
	v15 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v15 + 992))
		v16 = *(_DWORD*)(v15 + 1008);
	else
		v16 = sub_14010D2F0(v15);
	v17 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v17 + 992))
		v18 = *(_DWORD*)(v17 + 1000);
	else
		v18 = sub_14010CF80(v17);
	v19 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v19 + 992))
		v20 = *(_DWORD*)(v19 + 1004);
	else
		v20 = sub_14010D0A0(v19);
	v21 = HIDWORD(v94);
	v22 = v20 + v18 + v94 + 8;
	if (v22 < 200)
		v22 = 200;
	v76[0] = v22;
	v76[1] = v16 + v14 + HIDWORD(v94) + 80;
	v23 = sub_14018B280(1152i64, 0);
	v24 = 0i64;
	if (v23)
		v25 = sub_1401224C0((__int64)v23, a1, v76, a9, v75);
	else
		v25 = 0i64;
	*(_QWORD*)(v25 + 1096) = sub_140123230(v25, a3, v21);
	v94 = 1056964608i64;
	v90.m128_i32[1] = v21 + 8;
	v95 = 1056964608i64;
	v90.m128_i32[0] = -40;
	v90.m128_i32[2] = 40;
	v90.m128_i32[3] = v21 + 28;
	v26 = sub_14018B280(1152i64, 0);
	if (v26)
	{
		v83 = 0;
		v27 = &v79;
		v28 = 0i64;
		do
		{
			v29 = *(_DWORD*)((char*)&v94 + v28 * 4);
			v30 = v90.m128_i32[v28++];
			*(_DWORD*)((char*)&v80 + v28 * 4 + 12) = v29;
			*(_DWORD*)((char*)&v81 + v28 * 4 + 12) = v30;
			*(_QWORD*)v27 = 0i64;
			v27 = (__int128*)((char*)v27 + 8);
		} while (v28 < 4);
		v31 = *(_QWORD**)(a1 + 2928);
		v89 = v83 | 0x300;
		v84 = v78;
		v86 = v80;
		v85 = v79;
		v87 = v81;
		v88 = v82;
		v32 = sub_140173180((__int64)v26, a1, v25, v31, &v84, 272i64);
	}
	else
	{
		v32 = 0i64;
	}
	*(_QWORD*)(v25 + 1080) = v32;
	if (!*(_QWORD*)(v32 + 792))
	{
		v33 = sub_14018B280(48i64, 0);
		if (v33)
			v34 = sub_1401095E0((__int64)v33);
		else
			v34 = 0i64;
		*(_QWORD*)(v32 + 792) = v34;
	}
	v35 = *(__int64**)(v32 + 792);
	if (v35)
	{
		v36 = *(_QWORD*)(v32 + 32);
		if (v36)
			sub_140109710(v35, v36 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v32 + 792) + 8i64) = dword_140C63664;
	}
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B5C0);
	v90 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v38 = (unsigned int)sub_140141F10(qword_140C63678, &v90);
	v39 = (unsigned int*)(*(_QWORD*)(v25 + 1080) + 712i64);
	if (v39 == (unsigned int*)&v75)
	{
		v40 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v39);
		v40 = qword_140C63678;
		*v39 = v38;
		if (v38 < *(_QWORD*)(v40 + 48))
		{
			v41 = *(_QWORD*)(v40 + 40);
			v42 = 32i64 * (unsigned int)v38;
			v43 = *(_DWORD*)(v42 + v41 + 16);
			if ((unsigned int)(v43 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v42 + v41 + 16) = v43 + 1;
		}
	}
	sub_1401429A0(v40, v38);
	v44 = *(float**)(v25 + 1080);
	*((_DWORD*)v44 + 262) = a8;
	v90.m128_i32[0] = 0;
	v44[263] = a5;
	v44[264] = a6;
	v45 = *(_QWORD*)(v25 + 1080);
	v90.m128_f32[3] = a7 * 5.0;
	*(unsigned __int64*)((char*)v90.m128_u64 + 4) = LODWORD(a7) | 0x4040000000000000i64;
	v91 = -1082130432;
	v92 = -1082130432;
	v46 = 0;
	v47 = (int*)(v45 + 1136);
	v48 = &v90;
	v49 = v45 - (_QWORD)&v90;
	do
	{
		v50 = v48->m128_f32[1] >= 0.0;
		*(unsigned __int64*)((char*)v48[67].m128_u64 + v49) = v48->m128_u64[0];
		*v47 = v46;
		if (!v50)
			break;
		++v46;
		v48 = (__m128*)((char*)v48 + 8);
	} while (v46 < 8);
	sub_140173980(*(_QWORD*)(v25 + 1080), *(float*)&a4);
	v90.m128_u64[1] = 1065353216i64;
	HIDWORD(v94) = v21 + 32;
	v90.m128_u64[0] = 0i64;
	LODWORD(v94) = 4;
	HIDWORD(v95) = v21 + 52;
	LODWORD(v95) = -4;
	v51 = sub_14018B280(2496i64, 0);
	if (v51)
	{
		v83 = 0;
		v52 = &v79;
		v53 = 0i64;
		do
		{
			v54 = v90.m128_i32[v53++];
			v52 = (__int128*)((char*)v52 + 8);
			*(_DWORD*)((char*)&v80 + v53 * 4 + 12) = v54;
			*(_DWORD*)((char*)&v81 + v53 * 4 + 12) = *(int*)((char*)&v93 + v53 * 4);
			*((_QWORD*)v52 - 1) = 0i64;
		} while (v53 < 4);
		v55 = *(_QWORD**)(a1 + 2928);
		v84 = v78;
		v86 = v80;
		v89 = v83 | 0x300;
		v85 = v79;
		v87 = v81;
		v88 = v82;
		v56 = sub_140174660((__int64)v51, a1, v25, v55, &v84, 272i64, 0i64);
	}
	else
	{
		v56 = 0i64;
	}
	*(_QWORD*)(v25 + 1088) = v56;
	if (!*(_QWORD*)(v56 + 792))
	{
		v57 = sub_14018B280(48i64, 0);
		if (v57)
			v24 = sub_1401095E0((__int64)v57);
		*(_QWORD*)(v56 + 792) = v24;
	}
	v58 = *(__int64**)(v56 + 792);
	if (v58)
	{
		v59 = *(_QWORD*)(v56 + 32);
		if (v59)
			sub_140109710(v58, v59 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v56 + 792) + 8i64) = dword_140C63664;
	}
	v90 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v60 = (unsigned int)sub_140141F10(qword_140C63678, &v90);
	v61 = (unsigned int*)(*(_QWORD*)(v25 + 1088) + 712i64);
	if (v61 == (unsigned int*)&v75)
	{
		v62 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v61);
		v62 = qword_140C63678;
		*v61 = v60;
		if (v60 < *(_QWORD*)(v62 + 48))
		{
			v63 = *(_QWORD*)(v62 + 40);
			v64 = 32i64 * (unsigned int)v60;
			v65 = *(_DWORD*)(v64 + v63 + 16);
			if ((unsigned int)(v65 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v64 + v63 + 16) = v65 + 1;
		}
	}
	sub_1401429A0(v62, v60);
	v66 = *(float**)(v25 + 1088);
	v67 = fminf(a6, v66[258]);
	v66[256] = a5;
	v66[257] = a6;
	v66[259] = a7;
	v66[258] = fmaxf(a5, v67);
	sub_140174900(*(_QWORD*)(v25 + 1088), a4);
	sub_140174B80(*(_QWORD*)(v25 + 1088));
	v69 = sub_14034BDD0(v68, 3);
	*(_QWORD*)(v25 + 1024) = sub_140123490(v25, 2, (__int64)v69);
	v71 = sub_14034BDD0(v70, 1);
	*(_QWORD*)(v25 + 1032) = sub_140123490(v25, 1, (__int64)v71);
	v72 = v77;
	*(_QWORD*)(v25 + 1120) = v77;
	if (v72)
		v73 = *(_QWORD*)(v72 + 32);
	else
		v73 = *(_QWORD*)(v25 + 32);
	sub_1400E7280(v73, (void(__fastcall***)(_QWORD))v25, L"DefaultStratum");
	sub_1400E8B00(*(_QWORD*)(v25 + 32), v25);
	return v25;
}
// 140124939: variable 'v68' is possibly undefined
// 14012495A: variable 'v70' is possibly undefined
// 140A1EDC8: using guessed type wchar_t aDefaultstratum_4[15];
// 140A1EFB8: using guessed type wchar_t aChat_5[5];
// 140A1EFC8: using guessed type wchar_t aWhitefill_4[10];
// 140A1F030: using guessed type wchar_t aWhitefill_5[10];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;


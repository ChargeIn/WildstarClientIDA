//----- (0000000140123DE0) ----------------------------------------------------
__int64 __fastcall sub_140123DE0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	float a4,
	int a5,
	int a6,
	float a7,
	int a8,
	int a9,
	int a10)
{
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // r14d
	__int64 v15; // rcx
	int v16; // esi
	__int64 v17; // rcx
	int v18; // edi
	__int64 v19; // rcx
	int v20; // eax
	int v21; // r8d
	int v22; // esi
	int v23; // edx
	int* v24; // rax
	__int64 v25; // rdi
	int* v26; // r10
	__int128* v27; // r8
	__int64 v28; // rdx
	int v29; // ecx
	_QWORD* v30; // r9
	__int64 v31; // rbx
	int* v32; // rax
	__int64 v33; // rax
	__int64* v34; // rcx
	__int64 v35; // rdx
	unsigned __int64 v36; // rbx
	unsigned int* v37; // rsi
	__int64 v38; // r8
	__int64 v39; // rdx
	__int64 v40; // rcx
	int v41; // r9d
	_DWORD* v42; // rcx
	__int64 v43; // r8
	int* v44; // r9
	int v45; // edx
	__m128* v46; // rcx
	__int64 v47; // r8
	bool v48; // cc
	__int64 v49; // rcx
	__int16* v50; // rax
	__int64 v51; // rcx
	__int16* v52; // rax
	__int64 v53; // rax
	__int64 v54; // rcx
	int v56[4]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v57; // [rsp+50h] [rbp-B0h]
	__int128 v58; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v59; // [rsp+70h] [rbp-90h]
	_OWORD v60[2]; // [rsp+80h] [rbp-80h]
	int v61; // [rsp+A0h] [rbp-60h]
	__int128 v62[5]; // [rsp+B0h] [rbp-50h] BYREF
	int v63; // [rsp+100h] [rbp+0h]
	int v64; // [rsp+10Ch] [rbp+Ch]
	__m128 v65; // [rsp+110h] [rbp+10h] BYREF
	int v66; // [rsp+120h] [rbp+20h]
	int v67; // [rsp+124h] [rbp+24h]
	__int64 v68[2]; // [rsp+130h] [rbp+30h] BYREF

	v12 = sub_1400E58C0(a1, (int*)L"Chat");
	sub_140122A00((int*)v68, *(_QWORD*)(v12 + 96), a3);
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
	v21 = v16 + v14;
	v22 = HIDWORD(v68[0]);
	v23 = v20 + v18 + LODWORD(v68[0]) + 8;
	if (v23 < 200)
		v23 = 200;
	v56[0] = v23;
	v56[1] = v21 + HIDWORD(v68[0]) + 56;
	v24 = sub_14018B280(1152i64, 0);
	if (v24)
		v25 = sub_1401224C0((__int64)v24, a1, v56, a9, a10);
	else
		v25 = 0i64;
	*(_QWORD*)(v25 + 1096) = sub_140123230(v25, a3, v22);
	v68[0] = 1056964608i64;
	v65.m128_i32[1] = v22 + 8;
	v68[1] = 1056964608i64;
	v65.m128_i32[0] = -40;
	v65.m128_i32[2] = 40;
	v65.m128_i32[3] = v22 + 28;
	v26 = sub_14018B280(1152i64, 0);
	if (v26)
	{
		v61 = 0;
		v27 = &v58;
		v28 = 0i64;
		do
		{
			v29 = *(_DWORD*)((char*)v68 + v28);
			v28 += 4i64;
			v27 = (__int128*)((char*)v27 + 8);
			*(_DWORD*)((char*)&v59 + v28 + 12) = v29;
			*(_DWORD*)((char*)v60 + v28 + 12) = *(int*)((char*)&v64 + v28);
			*((_QWORD*)v27 - 1) = 0i64;
		} while (v28 < 16);
		v30 = *(_QWORD**)(a1 + 2928);
		v63 = v61 | 0x300;
		v62[0] = v57;
		v62[2] = v59;
		v62[1] = v58;
		v62[3] = v60[0];
		v62[4] = v60[1];
		v31 = sub_140173180((__int64)v26, a1, v25, v30, v62, 272i64);
	}
	else
	{
		v31 = 0i64;
	}
	*(_QWORD*)(v25 + 1080) = v31;
	if (!*(_QWORD*)(v31 + 792))
	{
		v32 = sub_14018B280(48i64, 0);
		if (v32)
			v33 = sub_1401095E0((__int64)v32);
		else
			v33 = 0i64;
		*(_QWORD*)(v31 + 792) = v33;
	}
	v34 = *(__int64**)(v31 + 792);
	if (v34)
	{
		v35 = *(_QWORD*)(v31 + 32);
		if (v35)
			sub_140109710(v34, v35 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v31 + 792) + 8i64) = dword_140C63664;
	}
	v65 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B5C0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v36 = (unsigned int)sub_140141F10(qword_140C63678, &v65);
	v37 = (unsigned int*)(*(_QWORD*)(v25 + 1080) + 712i64);
	if (v37 == (unsigned int*)v68)
	{
		v38 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v37);
		v38 = qword_140C63678;
		*v37 = v36;
		if (v36 < *(_QWORD*)(v38 + 48))
		{
			v39 = *(_QWORD*)(v38 + 40);
			v40 = 32i64 * (unsigned int)v36;
			v41 = *(_DWORD*)(v40 + v39 + 16);
			if ((unsigned int)(v41 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v40 + v39 + 16) = v41 + 1;
		}
	}
	sub_1401429A0(v38, v36);
	v42 = *(_DWORD**)(v25 + 1080);
	v42[264] = a6;
	v42[263] = a5;
	v42[262] = a8;
	v43 = *(_QWORD*)(v25 + 1080);
	*(unsigned __int64*)((char*)v65.m128_u64 + 4) = LODWORD(a7) | 0x4040000000000000i64;
	v44 = (int*)(v43 + 1136);
	v65.m128_i32[0] = 0;
	v66 = -1082130432;
	v65.m128_f32[3] = a7 * 5.0;
	v67 = -1082130432;
	v45 = 0;
	v46 = &v65;
	v47 = v43 - (_QWORD)&v65;
	do
	{
		v48 = v46->m128_f32[1] >= 0.0;
		*(unsigned __int64*)((char*)v46[67].m128_u64 + v47) = v46->m128_u64[0];
		*v44 = v45;
		if (!v48)
			break;
		++v45;
		v46 = (__m128*)((char*)v46 + 8);
	} while (v45 < 8);
	sub_140173980(*(_QWORD*)(v25 + 1080), a4);
	v50 = sub_14034BDD0(v49, 3);
	*(_QWORD*)(v25 + 1024) = sub_140123490(v25, 2, (__int64)v50);
	v52 = sub_14034BDD0(v51, 1);
	v53 = sub_140123490(v25, 1, (__int64)v52);
	v54 = *(_QWORD*)(v25 + 32);
	*(_QWORD*)(v25 + 1032) = v53;
	*(_QWORD*)(v25 + 1120) = 0i64;
	sub_1400E7280(v54, (void(__fastcall***)(_QWORD))v25, L"DefaultStratum");
	sub_1400E8B00(*(_QWORD*)(v25 + 32), v25);
	return v25;
}
// 1401241F3: variable 'v49' is possibly undefined
// 140124214: variable 'v51' is possibly undefined
// 140A1EDC8: using guessed type wchar_t aDefaultstratum_4[15];
// 140A1EF90: using guessed type wchar_t aChat_4[5];
// 140A1EFA0: using guessed type wchar_t aWhitefill_3[10];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;


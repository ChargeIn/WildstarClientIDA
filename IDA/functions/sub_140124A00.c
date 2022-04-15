//----- (0000000140124A00) ----------------------------------------------------
__int64 __fastcall sub_140124A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // r14d
	__int64 v11; // rcx
	int v12; // esi
	__int64 v13; // rcx
	int v14; // edi
	__int64 v15; // rcx
	int v16; // eax
	int v17; // r8d
	int v18; // esi
	int v19; // edx
	int* v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rax
	__int128* v23; // rdx
	__int64 v24; // rcx
	int v25; // eax
	int* v26; // rax
	__int64 v27; // rbx
	int* v28; // rax
	__int64 v29; // rax
	__int64* v30; // rcx
	__int64 v31; // rdx
	unsigned __int64 v32; // rbx
	unsigned int* v33; // rsi
	__int64 v34; // r8
	__int64 v35; // rdx
	__int64 v36; // rcx
	int v37; // r9d
	__int64 v38; // rcx
	__int16* v39; // rax
	__int64 v40; // rcx
	__int16* v41; // rax
	__int64 v42; // rax
	__int64 v43; // rcx
	int v45[2]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v46; // [rsp+48h] [rbp-B8h]
	__int128 v47; // [rsp+50h] [rbp-B0h]
	__int128 v48; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v49; // [rsp+70h] [rbp-90h]
	_OWORD v50[2]; // [rsp+80h] [rbp-80h]
	int v51; // [rsp+A0h] [rbp-60h]
	__int128 v52[5]; // [rsp+B0h] [rbp-50h] BYREF
	int v53; // [rsp+100h] [rbp+0h]
	__int64 v54; // [rsp+110h] [rbp+10h] BYREF
	int v55; // [rsp+118h] [rbp+18h]
	int v56; // [rsp+11Ch] [rbp+1Ch]
	__m128 v57; // [rsp+120h] [rbp+20h] BYREF

	v46 = a4;
	v8 = sub_1400E58C0(a1, (int*)L"Chat");
	sub_140122A00((int*)&v54, *(_QWORD*)(v8 + 96), a3);
	v9 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v9 + 992))
		v10 = *(_DWORD*)(v9 + 996);
	else
		v10 = sub_14010D1C0(v9);
	v11 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v11 + 992))
		v12 = *(_DWORD*)(v11 + 1008);
	else
		v12 = sub_14010D2F0(v11);
	v13 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v13 + 992))
		v14 = *(_DWORD*)(v13 + 1000);
	else
		v14 = sub_14010CF80(v13);
	v15 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v15 + 992))
		v16 = *(_DWORD*)(v15 + 1004);
	else
		v16 = sub_14010D0A0(v15);
	v17 = v12 + v10;
	v18 = HIDWORD(v54);
	v19 = v16 + v14 + v54 + 8;
	if (v19 < 200)
		v19 = 200;
	v45[0] = v19;
	v45[1] = v17 + HIDWORD(v54) + 56;
	v20 = sub_14018B280(1152i64, 0);
	if (v20)
		v21 = sub_1401224C0((__int64)v20, a1, v45, a5, a6);
	else
		v21 = 0i64;
	v22 = sub_140123230(v21, a3, v18);
	v54 = 0i64;
	v56 = 0;
	v55 = 1065353216;
	*(_QWORD*)(v21 + 1096) = v22;
	v57.m128_i32[0] = 4;
	v57.m128_i32[1] = v18 + 8;
	v57.m128_i32[2] = -4;
	v51 = 0;
	v23 = &v48;
	v24 = 0i64;
	v57.m128_i32[3] = v18 + 28;
	do
	{
		v25 = *(_DWORD*)((char*)&v54 + v24);
		v24 += 4i64;
		v23 = (__int128*)((char*)v23 + 8);
		*(_DWORD*)((char*)&v49 + v24 + 12) = v25;
		*(_DWORD*)((char*)v50 + v24 + 12) = *(int*)((char*)&v56 + v24);
		*((_QWORD*)v23 - 1) = 0i64;
	} while (v24 < 16);
	v53 = v51 | 0x300;
	v52[0] = v47;
	v52[2] = v49;
	v52[1] = v48;
	v52[3] = v50[0];
	v52[4] = v50[1];
	v26 = sub_14018B280(1408i64, 0);
	if (v26)
		v27 = sub_14010E4A0((__int64)v26, a1, v21, *(_QWORD**)(a1 + 2928), v52, 272i64, 0i64);
	else
		v27 = 0i64;
	*(_QWORD*)(v21 + 1104) = v27;
	if (!*(_QWORD*)(v27 + 792))
	{
		v28 = sub_14018B280(48i64, 0);
		if (v28)
			v29 = sub_1401095E0((__int64)v28);
		else
			v29 = 0i64;
		*(_QWORD*)(v27 + 792) = v29;
	}
	v30 = *(__int64**)(v27 + 792);
	if (v30)
	{
		v31 = *(_QWORD*)(v27 + 32);
		if (v31)
			sub_140109710(v30, v31 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v27 + 792) + 8i64) = dword_140C63664;
	}
	v57 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B5C0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v32 = (unsigned int)sub_140141F10(qword_140C63678, &v57);
	v33 = (unsigned int*)(*(_QWORD*)(v21 + 1104) + 712i64);
	if (v33 == (unsigned int*)&v54)
	{
		v34 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v33);
		v34 = qword_140C63678;
		*v33 = v32;
		if (v32 < *(_QWORD*)(v34 + 48))
		{
			v35 = *(_QWORD*)(v34 + 40);
			v36 = 32i64 * (unsigned int)v32;
			v37 = *(_DWORD*)(v36 + v35 + 16);
			if ((unsigned int)(v37 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v36 + v35 + 16) = v37 + 1;
		}
	}
	sub_1401429A0(v34, v32);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v21 + 1104) + 80i64))(*(_QWORD*)(v21 + 1104), v46);
	*(_DWORD*)(*(_QWORD*)(v21 + 1104) + 704i64) = 20;
	v39 = sub_14034BDD0(v38, 3);
	*(_QWORD*)(v21 + 1024) = sub_140123490(v21, 2, (__int64)v39);
	v41 = sub_14034BDD0(v40, 1);
	v42 = sub_140123490(v21, 1, (__int64)v41);
	v43 = *(_QWORD*)(v21 + 32);
	*(_QWORD*)(v21 + 1032) = v42;
	*(_QWORD*)(v21 + 1120) = 0i64;
	sub_1400E7280(v43, (void(__fastcall***)(_QWORD))v21, L"DefaultStratum");
	sub_1400E8B00(*(_QWORD*)(v21 + 32), v21);
	return v21;
}
// 140124D68: variable 'v38' is possibly undefined
// 140124D89: variable 'v40' is possibly undefined
// 140A1EDC8: using guessed type wchar_t aDefaultstratum_4[15];
// 140A1F070: using guessed type wchar_t aChat_6[5];
// 140A1F080: using guessed type wchar_t aWhitefill_6[10];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;


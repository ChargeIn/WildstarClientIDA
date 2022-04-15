//----- (0000000140116D40) ----------------------------------------------------
__int64 __fastcall sub_140116D40(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // r15
	__int64 v5; // rax
	int* v6; // r12
	__m128i v7; // xmm2
	unsigned int v8; // eax
	__m128i v9; // xmm0
	__int64 v10; // rax
	int v11; // ecx
	__m128i v12; // xmm3
	__int64 v13; // rax
	_QWORD* v14; // r14
	__int64 v15; // rax
	__int64 v16; // rax
	int* v17; // rdi
	__int64 v18; // rcx
	int* v19; // rsi
	__int64 v20; // rbx
	unsigned __int64 v21; // rbx
	char* v22; // rbx
	unsigned __int64 v23; // r11
	__int64 v24; // rbx
	wchar_t* v25; // rax
	unsigned __int64 v26; // rcx
	unsigned __int64 v27; // rdx
	signed __int64 v28; // r10
	int v29; // ebx
	int* v30; // rax
	int* v31; // rsi
	__int64 v32; // r13
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rdi
	__int64 v36; // rbx
	unsigned __int16* v37; // rbx
	unsigned __int16* v38; // rax
	__int64 v39; // rdx
	int** v40; // rax
	int* v41; // rbx
	int* v42; // rax
	_QWORD* v43; // r14
	int* v44; // rbx
	int* v45; // rdi
	__int64 v46; // r8
	int* v47; // rdx
	int* v48; // rbx
	__int64 v49; // r8
	int* v50; // rdx
	__int64 v51; // r8
	int* v52; // rdx
	__int64 v53; // r15
	__int64 v54; // rbx
	__int64 v55; // r14
	int v56; // r14d
	int v57; // ebx
	__int64 v58; // rdx
	int* v59; // rdi
	int* v60; // rbx
	__int64 v61; // rcx
	__int64 v62; // rcx
	__int64 v63; // rcx
	int* v64; // rbx
	__int64 v65; // rcx
	__int64 v66; // rcx
	__int64 v67; // rcx
	LPCWSTR lpDirectory; // [rsp+20h] [rbp-E0h]
	__m128 TlsValue; // [rsp+40h] [rbp-C0h] BYREF
	LPVOID lpTlsValue; // [rsp+50h] [rbp-B0h]
	int* v71[2]; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v72; // [rsp+70h] [rbp-90h] BYREF
	LPVOID v73; // [rsp+80h] [rbp-80h]
	__int64 v74; // [rsp+90h] [rbp-70h] BYREF
	__int64 v75; // [rsp+98h] [rbp-68h]
	__int128 v76; // [rsp+A0h] [rbp-60h]
	__int64 v77; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v78; // [rsp+B8h] [rbp-48h]
	__int128 v79; // [rsp+C0h] [rbp-40h]
	__int64 v80; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v81; // [rsp+D8h] [rbp-28h]
	__int128 v82; // [rsp+E0h] [rbp-20h]
	int v86; // [rsp+158h] [rbp+58h] BYREF

	v3 = a1;
	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D2550(a1, a2, (int*)a3);
	v5 = *(_QWORD*)(a1 + 472);
	v6 = 0i64;
	v7 = _mm_cvtsi32_si128(0);
	TlsValue = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)a3), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a3 + 4)), v7)));
	if (v5)
		v8 = *(_DWORD*)(v5 + 1300);
	else
		v8 = 0;
	v9 = _mm_cvtsi32_si128(v8);
	v10 = *(_QWORD*)(a1 + 464);
	TlsValue.m128_f32[1] = TlsValue.m128_f32[1] + _mm_cvtepi32_ps(v9).m128_f32[0];
	if (v10)
		v11 = *(_DWORD*)(v10 + 1300);
	else
		v11 = 0;
	v12 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 716));
	TlsValue.m128_f32[0] = TlsValue.m128_f32[0] + (float)v11;
	TlsValue = _mm_sub_ps(
		TlsValue,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v3 + 720)), _mm_cvtsi32_si128(0)))));
	v13 = sub_140141B00(v3 + 1024, &TlsValue);
	v14 = (_QWORD*)v13;
	if (!v13)
	{
		v56 = a2;
		return sub_1400D2550(v3, v56, (int*)a3);
	}
	v15 = sub_1401A6B80(v13, L"BrowserLink");
	if (v15 && sub_1401A4F40(v15 + 32))
	{
		v16 = sub_1401A6B80((__int64)v14, L"BrowserLink");
		if (v16)
			v17 = (int*)sub_1401A4F40(v16 + 32);
		else
			v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		if (*(_WORD*)v17)
		{
			do
				++v18;
			while (*((_WORD*)v17 + v18));
		}
		v20 = (2 * v18) >> 1;
		if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v19 = sub_14018B280(2 * (v20 + 1), 0);
		v21 = 2 * v20;
		sub_1407DB590(v19, v17, v21);
		v22 = (char*)v19 + v21;
		if (v22)
			*(_WORD*)v22 = 0;
		v23 = 0i64;
		v24 = (v22 - (char*)v19) >> 1;
		do
		{
			v25 = off_140B56EE0[v23];
			v26 = 0i64;
			if (*v25)
			{
				do
					++v26;
				while (v25[v26]);
			}
			if (v24 == v26)
			{
				v27 = 0i64;
				if (!v26)
				{
				LABEL_29:
					ShellExecuteW(0i64, L"open", off_140B56EE0[v23], 0i64, 0i64, 5);
					if (v19)
						sub_14018B900((__int64)v19, 0);
					return 0i64;
				}
				v28 = (char*)v19 - (char*)v25;
				while (*(wchar_t*)((char*)v25 + v28) == *v25)
				{
					++v27;
					++v25;
					if (v27 >= v26)
						goto LABEL_29;
				}
			}
			++v23;
		} while (v23 < 0xC);
		TlsValue.m128_u64[1] = 0i64;
		TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v72 = TlsValue;
		v71[0] = (int*)0x141D178F8i64;
		v73 = lpTlsValue;
		v29 = sub_1401971E0(&dword_140C8A110, 22, v71, v19, &v72);
		TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v29)
			DebugBreak();
		if (v19)
			sub_14018B900((__int64)v19, 0);
	}
	v30 = sub_14018B280(112i64, 0);
	*(_QWORD*)v30 = v30;
	*((_QWORD*)v30 + 1) = v30;
	v31 = v30;
	if (!(*(__int64(__fastcall**)(_QWORD*))(*v14 + 48i64))(v14))
		v6 = (int*)sub_1401A4F40((__int64)(v14 + 3));
	v32 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 400i64);
	TlsValue.m128_u64[0] = v32;
	if (*(_QWORD*)(*(_QWORD*)(v32 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v32 + 32) + 112i64))
		sub_14005E2C0(v32);
	v33 = *(_QWORD*)(v32 + 16);
	v34 = sub_14005C1B0(v32, 0, 0);
	*(_DWORD*)(v33 + 8) = 5;
	*(_QWORD*)v33 = v34;
	*(_QWORD*)(v32 + 16) += 16i64;
	v35 = v14[12];
	if (v35)
	{
		do
		{
			v36 = sub_1401A4F40(v35 + 32);
			sub_1401A4F40(v35 + 8);
			lpDirectory = (LPCWSTR)v36;
			sub_1400035B0();
			v37 = (unsigned __int16*)sub_1401A4F40(v35 + 32);
			v38 = (unsigned __int16*)sub_1401A4F40(v35 + 8);
			if (v38)
			{
				v40 = sub_14018DD50(v71, v38);
			}
			else
			{
				v71[0] = 0i64;
				v40 = v71;
			}
			sub_1400F0090(v32, v39, (unsigned __int64*)*v40, v37);
			if (v71[0])
				(*(void(__fastcall**)(int*))(*((_QWORD*)v71[0] - 2) + 8i64))(v71[0] - 4);
			v41 = (int*)sub_1401A4F40(v35 + 32);
			v42 = (int*)sub_1401A4F40(v35 + 8);
			v43 = sub_1401174A0(&v74, v6, v42, v41);
			v44 = sub_14018B280(112i64, 0);
			if (v44 != (int*)-16i64)
				sub_1401175E0((_QWORD*)v44 + 2, (__int64)v43);
			*(_QWORD*)v44 = v31;
			*((_QWORD*)v44 + 1) = *((_QWORD*)v31 + 1);
			**((_QWORD**)v31 + 1) = v44;
			*((_QWORD*)v31 + 1) = v44;
			if (v81)
				sub_14018B900(v81, 0);
			if (v78)
				sub_14018B900(v78, 0);
			if (v75)
				sub_14018B900(v75, 0);
			v35 = *(_QWORD*)(v35 + 56);
		} while (v35);
		v3 = a1;
	}
	if (!*(_BYTE*)(v3 + 1850))
	{
		v45 = *(int**)v31;
		if (*(int**)v31 != v31)
		{
			do
			{
				v46 = *((_QWORD*)v45 + 4);
				v47 = (int*)*((_QWORD*)v45 + 3);
				v48 = v45;
				v45 = *(int**)v45;
				v76 = 0i64;
				v75 = 0i64;
				sub_14001C1B0(&v74, v47, v46);
				v49 = *((_QWORD*)v48 + 8);
				v79 = 0i64;
				v50 = (int*)*((_QWORD*)v48 + 7);
				v78 = 0i64;
				sub_14001C1B0(&v77, v50, v49);
				v51 = *((_QWORD*)v48 + 12);
				v52 = (int*)*((_QWORD*)v48 + 11);
				v82 = 0i64;
				v81 = 0i64;
				sub_14001C1B0(&v80, v52, v51);
				v53 = v81;
				v54 = v78;
				v55 = v75;
				(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, LPCWSTR))(**(_QWORD**)(a1 + 32) + 104i64))(
					*(_QWORD*)(a1 + 32),
					v75,
					v78,
					v81,
					lpDirectory);
				if (v53)
					sub_14018B900(v53, 0);
				if (v54)
					sub_14018B900(v54, 0);
				if (v55)
					sub_14018B900(v55, 0);
			} while (v45 != v31);
			v32 = TlsValue.m128_u64[0];
			v3 = a1;
		}
	}
	v56 = a2;
	v57 = sub_1400578C0(v32);
	v86 = 0;
	sub_1400D4070(v3, 0x3Au, (char*)v3, "STi>b", v6, v57, a2, &v86);
	sub_1400579E0(v32, v58, v57);
	v59 = *(int**)v31;
	if (!v86)
	{
		while (v59 != v31)
		{
			v64 = v59;
			v59 = *(int**)v59;
			v65 = *((_QWORD*)v64 + 11);
			if (v65)
				sub_14018B900(v65, 0);
			v66 = *((_QWORD*)v64 + 7);
			if (v66)
				sub_14018B900(v66, 0);
			v67 = *((_QWORD*)v64 + 3);
			if (v67)
				sub_14018B900(v67, 0);
			sub_14018B900((__int64)v64, 0);
		}
		*(_QWORD*)v31 = v31;
		*((_QWORD*)v31 + 1) = v31;
		sub_14018B900((__int64)v31, 0);
		return sub_1400D2550(v3, v56, (int*)a3);
	}
	while (v59 != v31)
	{
		v60 = v59;
		v59 = *(int**)v59;
		v61 = *((_QWORD*)v60 + 11);
		if (v61)
			sub_14018B900(v61, 0);
		v62 = *((_QWORD*)v60 + 7);
		if (v62)
			sub_14018B900(v62, 0);
		v63 = *((_QWORD*)v60 + 3);
		if (v63)
			sub_14018B900(v63, 0);
		sub_14018B900((__int64)v60, 0);
	}
	*(_QWORD*)v31 = v31;
	*((_QWORD*)v31 + 1) = v31;
	sub_14018B900((__int64)v31, 0);
	return 0i64;
}
// 140116F8F: conditional instruction was optimized away because r11.8<Cu
// 140116FD9: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 14011718C: variable 'v39' is possibly undefined
// 1401172EC: variable 'lpDirectory' is possibly undefined
// 140117377: variable 'v58' is possibly undefined
// 140A1CED0: using guessed type wchar_t aBrowserlink_0[12];
// 140A1CF88: using guessed type wchar_t aBrowserlink_1[12];
// 140B56EE0: using guessed type wchar_t *off_140B56EE0[12];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A110: using guessed type _DWORD dword_140C8A110;


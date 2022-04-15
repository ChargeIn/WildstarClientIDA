#include "../winhttp.h"

//----- (000000014013F3C0) ----------------------------------------------------
__int64 __fastcall sub_14013F3C0(__int64 a1, __int64 a2)
{
	__int64 v3; // r14
	__int64 v4; // rdi
	unsigned __int16* v5; // r15
	__int64 v6; // rax
	__m128i* v7; // r12
	__int64 v8; // rcx
	int* v9; // rax
	__int64 v10; // rsi
	__int64* v11; // rbx
	__int64 v12; // rcx
	__int64* v13; // r14
	__int64 i; // rcx
	__int64 v15; // rax
	_WORD* v16; // rax
	__int64 v17; // rax
	_WORD* v18; // rax
	__int64 v19; // rax
	int v20; // r8d
	__int64 v21; // rdx
	int v22; // eax
	__int64 v23; // rbx
	__int64 v24; // rsi
	int* v25; // rax
	__int64 v26; // r8
	__int64 v27; // rdx
	int v28; // eax
	__int64 v29; // rdx
	__int64 v30; // r8
	int v31; // eax
	__int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // r14
	int* v35; // rsi
	unsigned int* v36; // rbx
	unsigned int v37; // eax
	__int64 v38; // rdx
	__int64 v39; // rcx
	int v40; // r8d
	int v41; // esi
	int* v42; // rax
	__int64 v43; // rcx
	__int64* v44; // rcx
	__int64 v45; // rdx
	__int64* v46; // rax
	__int64 v47; // rbx
	int* v48; // rax
	unsigned __int8 v49; // bl
	unsigned int v51; // eax
	unsigned int v52; // ecx
	int* v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rdx
	__int64 v56; // rsi
	__int64 v57; // rcx
	__int64 v58; // rax
	_DWORD* v59; // rcx
	__int64 v60; // rcx
	__int64 v61; // rbx
	__int64 v62; // rax
	_WORD* v63; // rax
	int v64; // ebx
	__m128 TlsValue; // [rsp+38h] [rbp-69h] BYREF
	LPVOID lpTlsValue; // [rsp+48h] [rbp-59h]
	__m128 v67; // [rsp+58h] [rbp-49h] BYREF
	LPVOID v68; // [rsp+68h] [rbp-39h] BYREF
	int* v69; // [rsp+70h] [rbp-31h]
	int* v70; // [rsp+78h] [rbp-29h]
	int* v71; // [rsp+80h] [rbp-21h]
	unsigned int v72; // [rsp+88h] [rbp-19h] BYREF
	char v73; // [rsp+90h] [rbp-11h] BYREF
	int* v74; // [rsp+98h] [rbp-9h]
	int* v75; // [rsp+A0h] [rbp-1h]
	__int64 v76; // [rsp+B0h] [rbp+Fh]
	int v77; // [rsp+B8h] [rbp+17h]
	unsigned int v78; // [rsp+108h] [rbp+67h] BYREF
	unsigned int v79; // [rsp+10Ch] [rbp+6Bh] BYREF
	__int64 v80; // [rsp+110h] [rbp+6Fh] BYREF
	unsigned int v81; // [rsp+120h] [rbp+7Fh] BYREF
	unsigned int v82; // [rsp+124h] [rbp+83h]

	v80 = a2;
	++* (_DWORD*)(a1 + 16);
	v3 = a2;
	v4 = 0i64;
	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
		v5 = 0i64;
	else
		v5 = (unsigned __int16*)sub_1401A4F40(v3 + 24);
	sub_14013F0D0(a1, &v72, v3);
	LOBYTE(v78) = 0;
	v6 = sub_1401A6B80(v3, L"Image");
	if (v6)
		v7 = (__m128i*)sub_1401A4F40(v6 + 32);
	else
		v7 = 0i64;
	TlsValue = 0i64;
	if (v7)
	{
		v8 = *(_QWORD*)(a1 + 8);
		if (v8)
		{
			if (*(_QWORD*)(v8 + 16))
			{
				v9 = sub_14018B280(16i64, 0);
				v10 = (__int64)v9;
				v69 = v9;
				v70 = v9;
				v71 = v9 + 4;
				if (v9)
					*(_WORD*)v9 = 0;
				v11 = 0i64;
				v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64);
				v67.m128_u64[0] = 0i64;
				v67.m128_u64[1] = (unsigned int)dword_140C63664 | 0x3F80000000000000i64;
				if (v12 && v7->m128i_i16[0] && (v13 = (__int64*)sub_140108E80(v12 + 240, v7)) != 0i64)
				{
					for (i = 0i64; v7->m128i_i16[i]; ++i)
						;
					sub_14001C480((__int64)&v68, v7->m128i_i32, (int*)((char*)v7->m128i_i32 + 2 * i));
					(*(void(__fastcall**)(__int64*)) * v13)(v13);
					v11 = v13;
					sub_140101470(v13, (int*)&v81);
					v10 = (__int64)v69;
					v51 = v82;
					v52 = v81;
				}
				else
				{
					v52 = 0;
					v51 = 0;
				}
				v3 = v80;
				TlsValue = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v52), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v51), _mm_cvtsi32_si128(0))));
				if (v11)
				{
					v15 = sub_1401A6B80(v80, L"Width");
					if (v15)
					{
						v16 = (_WORD*)sub_1401A4F40(v15 + 32);
						if ((unsigned int)sub_1407DF428(v16, (__int64)L"%d", &v78) == 1)
						{
							v17 = sub_1401A6B80(v3, L"Height");
							if (v17)
							{
								v18 = (_WORD*)sub_1401A4F40(v17 + 32);
								if ((unsigned int)sub_1407DF428(v18, (__int64)L"%d", &v79) == 1)
									TlsValue = _mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v78), _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v79), _mm_cvtsi32_si128(0))));
							}
						}
					}
					v19 = *v11;
					LOBYTE(v78) = 1;
					(*(void(__fastcall**)(__int64*))(v19 + 8))(v11);
				}
				if (v10)
					sub_14018B900(v10, 0);
			}
		}
	}
	v20 = *v5;
	v21 = 0i64;
	if (v20 == 84)
	{
		while ((_WORD)v20)
		{
			v20 = v5[v21 + 1];
			v22 = (unsigned __int16)word_140A31D42[v21++];
			if (v20 != v22)
				goto LABEL_31;
		}
		v53 = sub_14018B280(192i64, 0);
		if (v53)
		{
			v54 = *(_QWORD*)(a1 + 8);
			if (v54)
				v55 = *(_QWORD*)(v54 + 16);
			else
				v55 = 0i64;
			v56 = sub_14013E130((__int64)v53, v55, v3, (int*)&v72);
		}
		else
		{
			v56 = 0i64;
		}
		v23 = *(_QWORD*)(a1 + 40);
		v25 = sub_14018B280(24i64, 0);
		if (v25 != (int*)-16i64)
			*((_QWORD*)v25 + 2) = v56;
	}
	else
	{
	LABEL_31:
		v23 = *(_QWORD*)(a1 + 40);
		v24 = *(_QWORD*)(v23 + 8);
		v25 = sub_14018B280(24i64, 0);
		if (v25 != (int*)-16i64)
			*((_QWORD*)v25 + 2) = *(_QWORD*)(v24 + 16);
	}
	*(_QWORD*)v25 = v23;
	v26 = 0i64;
	*((_QWORD*)v25 + 1) = *(_QWORD*)(v23 + 8);
	**(_QWORD**)(v23 + 8) = v25;
	*(_QWORD*)(v23 + 8) = v25;
	v27 = *v5;
	if ((_DWORD)v27 != 116)
		goto LABEL_36;
	while ((_WORD)v27)
	{
		v27 = v5[v26 + 1];
		v28 = (unsigned __int16)word_1409DB516[v26++];
		if ((_DWORD)v27 != v28)
			goto LABEL_36;
	}
	v57 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) + 16i64);
	if (v57)
	{
		if ((*(unsigned __int8(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v57 + 96i64))(v57, v27, v26))
		{
		LABEL_36:
			v29 = *v5;
			v30 = 0i64;
			if ((_DWORD)v29 == 116)
			{
				while ((_WORD)v29)
				{
					v29 = v5[v30 + 1];
					v31 = (unsigned __int16)word_1409DB586[v30++];
					if ((_DWORD)v29 != v31)
						goto LABEL_39;
				}
				v60 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64);
				v61 = *(_QWORD*)(v60 + 16);
				if (!v61
					|| !(*(unsigned __int8(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)v61 + 96i64))(
						*(_QWORD*)(v60 + 16),
						v29,
						v30))
				{
					TlsValue.m128_u64[1] = 0i64;
					TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v58 = 0x141D1DC70i64;
					v59 = &unk_140C8A128;
					goto LABEL_76;
				}
				v81 = 0;
				v62 = sub_1401A6B80(v3, L"Width");
				if (v62)
				{
					v63 = (_WORD*)sub_1401A4F40(v62 + 32);
					sub_1407DF428(v63, (__int64)L"%d", &v81);
				}
				sub_14013EA10(v61, (float)(int)v81);
			}
		LABEL_39:
			v32 = sub_14013F060(a1);
			v33 = *(_QWORD*)(v32 + 768);
			v34 = v32;
			v35 = sub_14018B280(72i64, 0);
			if (v35 != (int*)-16i64)
				sub_14013D990((__int64)(v35 + 4), (int*)(v34 + 704));
			*(_QWORD*)v35 = v33;
			*((_QWORD*)v35 + 1) = *(_QWORD*)(v33 + 8);
			**(_QWORD**)(v33 + 8) = v35;
			*(_QWORD*)(v33 + 8) = v35;
			v36 = (unsigned int*)(v34 + 704);
			if ((unsigned int*)(v34 + 704) != &v72)
			{
				sub_1401429A0(qword_140C63678, *v36);
				v37 = v72;
				*v36 = v72;
				if ((unsigned __int64)v37 < *(_QWORD*)(qword_140C63678 + 48))
				{
					v38 = *(_QWORD*)(qword_140C63678 + 40);
					v39 = 32i64 * v37;
					v40 = *(_DWORD*)(v39 + v38 + 16);
					if ((unsigned int)(v40 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v39 + v38 + 16) = v40 + 1;
				}
			}
			if (&v73 != (char*)(v34 + 712))
				sub_14001C480(v34 + 712, v74, v75);
			v41 = v77;
			*(_QWORD*)(v34 + 744) = v76;
			*(_DWORD*)(v34 + 752) = v41;
			if ((_BYTE)v78)
			{
				v42 = sub_14018B280(128i64, 0);
				if (v42)
				{
					v43 = *(_QWORD*)(a1 + 8);
					if (v43)
						v4 = *(_QWORD*)(v43 + 16);
					v4 = sub_14013DDD0((__int64)v42, v4, v80, &TlsValue, v7, v41);
				}
				sub_1401404D0(v34, v4);
				v44 = *(__int64**)(*(_QWORD*)(a1 + 40) + 8i64);
				v45 = *v44;
				v46 = (__int64*)v44[1];
				*v46 = *v44;
				*(_QWORD*)(v45 + 8) = v46;
				sub_14018B900((__int64)v44, 0);
				v47 = *(_QWORD*)(a1 + 40);
				v48 = sub_14018B280(24i64, 0);
				if (v48 != (int*)-16i64)
					*((_QWORD*)v48 + 2) = v4;
				*(_QWORD*)v48 = v47;
				*((_QWORD*)v48 + 1) = *(_QWORD*)(v47 + 8);
				**(_QWORD**)(v47 + 8) = v48;
				*(_QWORD*)(v47 + 8) = v48;
			}
			v49 = 1;
			goto LABEL_56;
		}
	}
	TlsValue.m128_u64[1] = 0i64;
	TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v58 = 0x141D1DC60i64;
	v59 = &unk_140C8A12C;
LABEL_76:
	v80 = v58;
	v67 = TlsValue;
	v68 = lpTlsValue;
	v64 = sub_140196F30(v59, 13, &v80, &v67);
	TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v64)
		DebugBreak();
	v49 = 0;
LABEL_56:
	if (v74)
		sub_14018B900((__int64)v74, 0);
	sub_1401429A0(qword_140C63678, v72);
	return v49;
}
// 14013F522: conditional instruction was optimized away because rbx.8==0
// 14013F515: conditional instruction was optimized away because r14.8!=0
// 14013F533: conditional instruction was optimized away because rbx.8!=0
// 1409DB514: using guessed type __int16 word_1409DB514;
// 1409DB516: using guessed type __int16 word_1409DB516[55];
// 1409DB584: using guessed type __int16 word_1409DB584;
// 1409DB586: using guessed type __int16 word_1409DB586[171];
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31AD0: using guessed type wchar_t aImage_0[6];
// 140A31D40: using guessed type __int16 word_140A31D40[];
// 140A31D42: using guessed type __int16 word_140A31D42[];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;


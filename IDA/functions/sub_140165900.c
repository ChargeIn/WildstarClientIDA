//----- (0000000140165900) ----------------------------------------------------
__int64 __fastcall sub_140165900(_QWORD* a1)
{
	__int64 v2; // rbx
	char v3; // si
	__int64 v4; // rbx
	__int64 v5; // rax
	_DWORD* v6; // rcx
	__int64* v7; // rax
	__int64 v8; // rax
	__m128i v9; // xmm0
	__int64* v10; // rax
	__int64 v11; // rcx
	__m128i v12; // xmm0
	__int64* v13; // rax
	unsigned int v15; // [rsp+30h] [rbp+8h] BYREF
	unsigned int v16; // [rsp+34h] [rbp+Ch] BYREF
	int v17; // [rsp+38h] [rbp+10h] BYREF
	int v18; // [rsp+3Ch] [rbp+14h]

	v2 = sub_1401657E0(a1);
	v17 = sub_140056D60(a1, 2u);
	v18 = sub_140056D60(a1, 3u);
	v3 = sub_140161CD0(v2, &v17, (int*)&v16, (int*)&v15);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"bValidCell", 0xAui64);
	v6 = (_DWORD*)a1[2];
	v6[2] = 1;
	*v6 = v3 != 0;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"iRow", 4ui64);
	v8 = a1[2];
	v9 = _mm_cvtsi32_si128(v16);
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
	a1[2] += 16i64;
	v10 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v10, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"iCol", 4ui64);
	v11 = a1[2];
	v12 = _mm_cvtsi32_si128(v15);
	*(_DWORD*)(v11 + 8) = 3;
	*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}


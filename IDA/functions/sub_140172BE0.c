#include "../winhttp.h"

//----- (0000000140172BE0) ----------------------------------------------------
__int64 __fastcall sub_140172BE0(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // eax
	__int64 v4; // rcx
	__int64 result; // rax
	__m128i v6; // xmm0
	_DWORD* v7; // rdx
	char v8; // [rsp+50h] [rbp+8h] BYREF
	int v9; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
	int v11; // [rsp+68h] [rbp+20h] BYREF
	int v12; // [rsp+6Ch] [rbp+24h]

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v8 = 0;
	v9 = -1;
	v11 = v3;
	v12 = sub_140056D60(a1, 3u);
	sub_14016E5E0(v2, &v10, &v11, &v8, &v9);
	v4 = a1[2];
	result = 2i64;
	v6 = _mm_cvtsi32_si128(v10);
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	v7 = (_DWORD*)a1[2];
	v7[2] = 1;
	*v7 = v8 != 0;
	a1[2] += 16i64;
	return result;
}


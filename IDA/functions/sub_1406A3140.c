#include "../winhttp.h"

//----- (00000001406A3140) ----------------------------------------------------
__int64 __fastcall sub_1406A3140(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 result; // rax
	__m128i v11; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_1405A8A40(v3, *(_DWORD*)(v4 + 8))) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = (__int64*)sub_140489580(qword_140C65930, *(_DWORD*)(v6 + 428))) != 0i64)
	{
		v8 = *v7;
		v9 = a1[2];
		result = 1i64;
		v11 = _mm_cvtsi32_si128(*(_DWORD*)(v8 + 24));
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406A316B: variable 'v3' is possibly undefined
// 140C65930: using guessed type __int64 qword_140C65930;


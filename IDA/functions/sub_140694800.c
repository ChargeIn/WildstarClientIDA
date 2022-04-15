#include "../winhttp.h"

//----- (0000000140694800) ----------------------------------------------------
__int64 __fastcall sub_140694800(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax
	__int64 v9; // rax

	if (qword_140C65C28
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_140643EA0(qword_140C65C28, ***(_DWORD***)(v3 + 8))) != 0)
	{
		v5 = sub_14048C3D0(*(unsigned int***)(v4 + 40));
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;


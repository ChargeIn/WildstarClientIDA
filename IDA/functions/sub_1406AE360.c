#include "../winhttp.h"

//----- (00000001406AE360) ----------------------------------------------------
__int64 __fastcall sub_1406AE360(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdx
	__m128i v7; // xmm0
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__m128i v11; // xmm0
	__int64 result; // rax
	__int64 v13; // rax
	__int64 v14; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			(v6 = v5) != 0))
	{
		v7 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 88));
		v8 = a1[2];
		*(_DWORD*)(v8 + 8) = 3;
		*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
		v9 = a1[2];
		v10 = HIDWORD(*(_QWORD*)(v6 + 88));
		*(_DWORD*)(v9 + 8) = 3;
		v11 = _mm_cvtsi32_si128(v10);
		result = 2i64;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
		a1[2] += 16i64;
	}
	else
	{
		v13 = a1[2];
		*(_QWORD*)v13 = 0i64;
		*(_DWORD*)(v13 + 8) = 3;
		a1[2] += 16i64;
		v14 = a1[2];
		*(_QWORD*)v14 = 0i64;
		*(_DWORD*)(v14 + 8) = 3;
		a1[2] += 16i64;
		return 2i64;
	}
	return result;
}
// 1406AE392: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;


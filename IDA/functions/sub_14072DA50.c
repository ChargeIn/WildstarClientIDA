#include "../winhttp.h"

//----- (000000014072DA50) ----------------------------------------------------
__int64 __fastcall sub_14072DA50(_QWORD* a1)
{
	_QWORD* v2; // rdx
	__int64 v3; // rcx
	unsigned int v4; // esi
	__int64 v5; // rbx
	unsigned int v6; // eax
	unsigned int v7; // eax
	__int64 v8; // rcx
	__m128i v9; // xmm0
	__int64 result; // rax

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		v4 = *(_DWORD*)(v3 + 60);
		if (!v4)
			v4 = *(_DWORD*)(v3 + 56);
		v5 = *(_QWORD*)qword_140C65A10;
		v6 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 24i64))(*v2);
		v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(v5 + 16))(qword_140C65A10, v4, v6);
		v8 = a1[2];
		v9 = _mm_cvtsi32_si128(v7);
		*(_DWORD*)(v8 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
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
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;


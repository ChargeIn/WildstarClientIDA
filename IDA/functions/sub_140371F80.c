#include "../winhttp.h"

//----- (0000000140371F80) ----------------------------------------------------
__m128* __fastcall sub_140371F80(__m128* a1, unsigned __int64 a2)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rbx
	unsigned __int32 v6; // ebp
	_QWORD* v7; // rcx
	__int64 v8; // rdx
	__m128 v9; // xmm0
	__m128 v10; // xmm3
	__m128** v11; // rdx
	unsigned __int64 v12; // rax

	a1->m128_u64[0] = (unsigned __int64)off_140B55048;
	a1->m128_i32[2] = 1;
	a1->m128_u64[0] = (unsigned __int64)off_140B65A20;
	a1[1].m128_u64[0] = 0i64;
	a1[3].m128_u64[0] = 0i64;
	a1[3].m128_u64[1] = 0i64;
	if (a1[1].m128_u64[0] != a2)
	{
		if (a2)
			(**(void(__fastcall***)(unsigned __int64))a2)(a2);
		v4 = a1[1].m128_u64[0];
		if (v4)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[1].m128_u64[0] = a2;
	}
	v5 = *(_QWORD*)(a2 + 80);
	v6 = *(_DWORD*)(*(_QWORD*)(a2 + 72) + 4 * v5-- - 4);
	sub_140052360((__int64*)(a2 + 72), v5);
	if (!v5)
	{
		v7 = *(_QWORD**)(a2 + 88);
		if (v7)
			*v7 = *(_QWORD*)(a2 + 96);
		v8 = *(_QWORD*)(a2 + 96);
		if (v8)
			*(_QWORD*)(v8 + 88) = *(_QWORD*)(a2 + 88);
		*(_QWORD*)(a2 + 88) = 0i64;
		*(_QWORD*)(a2 + 96) = 0i64;
	}
	a1[1].m128_i32[2] = v6;
	v9 = (__m128)COERCE_UNSIGNED_INT((float)(int)(v6 / *(_DWORD*)(a2 + 52)));
	v10 = (__m128)COERCE_UNSIGNED_INT((float)(int)(v6 % *(_DWORD*)(a2 + 52)));
	v9.m128_f32[0] = (float)(v9.m128_f32[0] * *(float*)(a2 + 60)) + *(float*)(a2 + 64);
	v10.m128_f32[0] = (float)(v10.m128_f32[0] * *(float*)(a2 + 60)) + *(float*)(a2 + 64);
	a1[2] = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 56), v10),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 56), v9));
	v11 = (__m128**)(*(_QWORD*)(a1[1].m128_u64[0] + 16) + 856i64);
	if (!a1[3].m128_u64[0])
	{
		a1[3].m128_u64[0] = (unsigned __int64)v11;
		a1[3].m128_u64[1] = (unsigned __int64)*v11;
		*v11 = a1;
		v12 = a1[3].m128_u64[1];
		if (v12)
			*(_QWORD*)(v12 + 48) = (char*)a1 + 56;
	}
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B65A20: using guessed type __int64 (__fastcall *off_140B65A20[22])();


#include "../winhttp.h"

//----- (00000001407157F0) ----------------------------------------------------
__int64 __fastcall sub_1407157F0(__int64 a1, __int32 a2, unsigned int* a3, _DWORD* a4)
{
	int* v8; // rax
	__m128* v9; // r10
	__int32 v10; // eax
	__m128** i; // rax

	v8 = sub_14018B280(80i64, 0);
	v9 = (__m128*)v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*(_QWORD*)v8 = off_140B73BB0;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = a3[3];
	v9->m128_i32[2] = a2;
	v9[1].m128_u64[0] = 0i64;
	v9->m128_i32[3] = v10;
	if (a4 && a3[3])
		*a4 = 1;
	v9[4] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0i64));
	if (!v9[2].m128_u64[1])
	{
		for (i = (__m128**)(a1 + 48); *i; i = (__m128**) & (*i)[3])
			;
		v9[2].m128_u64[1] = (unsigned __int64)i;
		v9[3].m128_u64[0] = 0i64;
		*i = v9;
	}
	return 0i64;
}
// 140B73BB0: using guessed type __int64 (__fastcall *off_140B73BB0[35])();


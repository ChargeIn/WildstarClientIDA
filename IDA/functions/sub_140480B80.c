#include "../winhttp.h"

//----- (0000000140480B80) ----------------------------------------------------
__int64 __fastcall sub_140480B80(__int64 a1, int a2)
{
	_OWORD* v3; // r8
	int* v4; // r11
	__m128 v5; // xmm1
	__int64 v6; // rax
	__int64 v7; // rcx
	__m128* v8; // rdx
	__int64 result; // rax
	__m128* v10; // rax
	__m128 v11; // [rsp+20h] [rbp-18h] BYREF

	if (a2)
		v3 = (_OWORD*)(a1 + 16 * (a2 - 1 + 2i64));
	else
		v3 = (_OWORD*)(a1 + 144);
	v4 = (int*)qword_140C63750;
	v5 = *(__m128*)(a1 + 16 * (*(int*)qword_140C63750 + 2i64));
	v11 = v5;
	if ((unsigned __int64)a2 < 5)
	{
		v6 = a1 + 16 * (a2 + 2i64);
		v7 = 5i64 - a2;
		do
		{
			v6 += 16i64;
			*(_OWORD*)(v6 - 16) = *v3;
			--v7;
		} while (v7);
	}
	*(_DWORD*)(a1 + 24) &= (1 << a2) - 1;
	v8 = (__m128*)(a1 + 16 * (*v4 + 2i64));
	result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(v5, *v8));
	if ((_DWORD)result)
	{
		v10 = *(__m128**)(a1 + 160);
		if (v10)
			*v10 = *v8;
		result = *(_QWORD*)(a1 + 176);
		if (result)
			return ((__int64(__fastcall*)(__m128*, __m128*, _OWORD*))result)(&v11, v8, v3);
	}
	return result;
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 140480B80: using guessed type __m128 var_18;


#include "../winhttp.h"

//----- (0000000140285AE0) ----------------------------------------------------
__int64 __fastcall sub_140285AE0(__int64 a1, __m128* a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	*(__m128*)* (_QWORD*)(result + 48) = _mm_mul_ps(*(__m128*) * (_QWORD*)(result + 48), *a2);
	return result;
}


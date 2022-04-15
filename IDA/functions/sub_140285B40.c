#include "../winhttp.h"

//----- (0000000140285B40) ----------------------------------------------------
__int64 __fastcall sub_140285B40(__int64 a1, __m128* a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	*(__m128*)* (_QWORD*)(result + 56) = _mm_add_ps(*(__m128*) * (_QWORD*)(result + 56), *a2);
	return result;
}


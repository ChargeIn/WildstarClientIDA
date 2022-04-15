#include "../winhttp.h"

//----- (0000000140168BC0) ----------------------------------------------------
__int64 __fastcall sub_140168BC0(_QWORD* a1, __m128i* a2, __m128i* a3)
{
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v7; // rdx

	v4 = a1[4];
	if (v4)
		result = sub_140109710(a1 + 158, v4 + 240, a3, 0);
	v7 = a1[4];
	if (v7)
		return sub_140109710(a1 + 152, v7 + 240, a2, 0);
	return result;
}


#include "../winhttp.h"

//----- (00000001407965E0) ----------------------------------------------------
__int64 __fastcall sub_1407965E0(_QWORD* a1)
{
	const __m128i* v2; // rax
	char* v3; // rax
	const char* v4; // rdi

	v2 = (const __m128i*)sub_140056BB0(a1, 1u, 0i64);
	v3 = (char*)sub_140796230((__int64)a1, v2, (unsigned __int64*)aPath_5);
	v4 = v3;
	if (v3 && (unsigned int)sub_140057C60(a1, v3))
		sub_1407964F0(a1, v4);
	return 1i64;
}


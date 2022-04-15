#include "../winhttp.h"

//----- (00000001401D1990) ----------------------------------------------------
__int64 __fastcall sub_1401D1990(__int64 a1, __int64 a2, __int64 a3)
{
	const __m128i* v5; // rbx
	const __m128i* v6; // rax

	v5 = (const __m128i*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	v6 = (const __m128i*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a3 + 24i64))(a3, a1);
	return sub_1401D1780(v6, v5);
}


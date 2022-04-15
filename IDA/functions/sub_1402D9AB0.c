#include "../winhttp.h"

//----- (00000001402D9AB0) ----------------------------------------------------
__int64 __fastcall sub_1402D9AB0(__int64 a1, __int64 a2, const __m128i** a3)
{
	int* v7; // rax
	const __m128i* v8; // rax
	const __m128i* v9; // rbx
	int v10; // esi

	if (!qword_140C657F8)
		return 2147500037i64;
	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(2048i64, 1u);
	if (!v7)
		return 2147942414i64;
	v8 = (const __m128i*)sub_1402DB400((__int64)v7);
	v9 = v8;
	if (!v8)
		return 2147942414i64;
	v10 = sub_1402DB830(v8, a1, a2);
	if (v10 >= 0)
	{
		*a3 = v9;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(const __m128i*))(v9->m128i_i64[0] + 8))(v9);
		return (unsigned int)v10;
	}
}
// 140C657F8: using guessed type __int64 qword_140C657F8;


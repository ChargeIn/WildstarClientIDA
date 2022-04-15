#include "../winhttp.h"

//----- (00000001401B5360) ----------------------------------------------------
__int64 __fastcall sub_1401B5360(__int64 a1, _BYTE* a2, __int64 a3, const __m128i* a4)
{
	__int64 result; // rax
	const __m128i* v8; // rax
	const __m128i* v9; // rax

	if (*(_QWORD*)(a1 + 1592))
	{
		v8 = sub_1407DD8D8(a4, 0x5Cu);
		if (v8)
			v9 = (const __m128i*) & v8->m128i_i8[2];
		else
			v9 = a4;
		sub_14001B370(a2, 260i64, L"%s\\%s", a1 + 1072, v9);
		result = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++result;
			while (*(_WORD*)&a2[2 * result]);
		}
	}
	else
	{
		result = 0i64;
		*(_WORD*)a2 = 0;
	}
	return result;
}
// 140A47458: using guessed type wchar_t aSS_12[6];


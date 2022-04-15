#include "../winhttp.h"

//----- (000000014010B980) ----------------------------------------------------
__int64 __fastcall sub_14010B980(__int64 a1, _QWORD* a2, __int64 a3)
{
	const __m128i* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 result; // rax

	v6 = (const __m128i*)sub_1401A6B80(a3, L"Internal");
	if (v6)
		v6 = (const __m128i*)sub_1401A4F40((__int64)v6[2].m128i_i64);
	*(_QWORD*)(a1 + 232) = sub_140108E80((__int64)(a2 + 30), v6);
	v7 = sub_1401A5AE0(a3, L"DecButton");
	if (v7)
		sub_14010B160((char*)(a1 + 16), a2, v7);
	v8 = sub_1401A5AE0(a3, L"IncButton");
	if (v8)
		sub_14010B160((char*)(a1 + 88), a2, v8);
	result = sub_1401A5AE0(a3, L"Thumb");
	if (result)
		return sub_14010B160((char*)(a1 + 160), a2, result);
	return result;
}
// 140A329B8: using guessed type wchar_t aInternal[9];
// 140A329F0: using guessed type wchar_t aIncbutton[10];
// 140A32A08: using guessed type wchar_t aDecbutton[10];
// 140A32AF0: using guessed type wchar_t aThumb[6];


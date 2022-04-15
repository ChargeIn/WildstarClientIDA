#include "../winhttp.h"

//----- (0000000140109710) ----------------------------------------------------
__int64 __fastcall sub_140109710(__int64* a1, __int64 a2, __m128i* a3, char a4)
{
	__int64 v4; // rsi
	void(__fastcall * **v9)(_QWORD); // rsi
	__int64 i; // rcx

	v4 = *a1;
	if (*a1)
	{
		if (!a3)
			goto LABEL_13;
		if (sub_14002C740((__int64)(a1 + 2), a3))
		{
			if (a4)
				*((_DWORD*)a1 + 2) = dword_140C63664;
			return 0i64;
		}
	}
	if (!a3 || !a3->m128i_i16[0])
	{
	LABEL_13:
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*a1 = 0i64;
		}
		return 0i64;
	}
	v9 = (void(__fastcall***)(_QWORD))sub_140108E80(a2, a3);
	if (v9)
	{
		for (i = 0i64; a3->m128i_i16[i]; ++i)
			;
		sub_14001C480((__int64)(a1 + 2), a3->m128i_i32, (int*)((char*)a3->m128i_i32 + 2 * i));
	}
	return sub_1401097F0(a1, v9);
}
// 140C63664: using guessed type int dword_140C63664;


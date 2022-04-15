#include "../winhttp.h"

//----- (00000001408381E0) ----------------------------------------------------
__int64 __fastcall sub_1408381E0(__int64 a1, __int32 a2, unsigned int a3, __int64 a4)
{
	_QWORD* v8; // rax
	unsigned int v9; // esi
	__int64* i; // rbx
	__m128i v12; // [rsp+20h] [rbp-18h] BYREF

	v12.m128i_i32[0] = a2;
	v12.m128i_i64[1] = a4;
	v8 = sub_140837D60((int*)(a1 + 1552), &v12);
	if (v8)
	{
		*(_DWORD*)v8 = a3;
		v9 = 1;
	}
	else
	{
		v9 = 2;
	}
	for (i = *(__int64**)(a1 + 4664); i; i = (__int64*)*i)
	{
		if (*((_DWORD*)i + 4) == a2)
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)i[1] + 8i64))(i[1], a3, a4);
	}
	return v9;
}
// 1408381E0: using guessed type __m128i anonymous_0;


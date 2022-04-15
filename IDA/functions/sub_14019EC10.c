#include "../winhttp.h"

//----- (000000014019EC10) ----------------------------------------------------
void __fastcall sub_14019EC10(__int64 a1)
{
	int v2; // edx
	int v3; // eax
	__int64 v4; // [rsp+30h] [rbp+8h] BYREF

	sub_14004EED0((__int64*)(a1 + 40), 0i64);
	v2 = *(_DWORD*)qword_140C63750;
	v3 = dword_140C3FE20;
	v4 = 0i64;
	if (v2 < dword_140C3FE20)
		v3 = v2;
	sub_14019F340((__int64*)(a1 + 40), dword_140C3FE30[v3], &v4);
	*(_DWORD*)(a1 + 32) = 0;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = -1i64;
}
// 140C3FE20: using guessed type int dword_140C3FE20;
// 140C3FE30: using guessed type unsigned int dword_140C3FE30[12];
// 140C63750: using guessed type __int64 qword_140C63750;


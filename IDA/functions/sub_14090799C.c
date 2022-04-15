#include "../winhttp.h"

//----- (000000014090799C) ----------------------------------------------------
_BYTE* __fastcall sub_14090799C(char* a1)
{
	__int64 v2; // rsi
	_BYTE* v3; // rax
	_BYTE* v4; // rdi

	if (!a1)
		return 0i64;
	v2 = sub_1407E1990((__int64)a1);
	v3 = sub_1407E1500(v2 + 1);
	v4 = v3;
	if (!v3)
		return 0i64;
	if ((unsigned int)sub_1407EA194(v3, v2 + 1, a1))
	{
		sub_1407DC390();
		__debugbreak();
	}
	return v4;
}


#include "../winhttp.h"

//----- (000000014019AD50) ----------------------------------------------------
_QWORD* __fastcall sub_14019AD50(__int64 a1, _QWORD* a2, int a3)
{
	wchar_t* v4; // rdx
	__int64 v5; // rax

	v4 = L"false";
	if (*(_BYTE*)(a3 + a1 + 32))
		v4 = L"true";
	v5 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	if (*v4)
	{
		do
			++v5;
		while (v4[v5]);
	}
	sub_14001C1B0(a2, (int*)v4, (__int64)&v4[v5]);
	return a2;
}
// 140A44118: using guessed type wchar_t aFalse_1[6];
// 140A44128: using guessed type wchar_t aTrue_1[5];


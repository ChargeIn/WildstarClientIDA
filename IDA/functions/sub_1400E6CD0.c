#include "../winhttp.h"

//----- (00000001400E6CD0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400E6CD0(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4, __int64 a5)
{
	char v6[24]; // [rsp+30h] [rbp-18h] BYREF

	v6[0] = 0;
	sub_1400C84B0(a2, a3, a4, a5, (__int64)v6);
	return v6[0] == 0;
}
// 1400E6CD0: using guessed type char var_18[24];


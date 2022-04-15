#include "../winhttp.h"

//----- (00000001406A0570) ----------------------------------------------------
_BOOL8 __fastcall sub_1406A0570(_QWORD* a1)
{
	_BOOL8 result; // rax
	__int64 v3[7]; // [rsp+20h] [rbp-48h] BYREF

	result = sub_1406A04F0((__int64)a1);
	if (result)
	{
		v3[0] = a1[1];
		v3[1] = a1[2];
		v3[2] = a1[3];
		v3[3] = a1[4];
		v3[4] = a1[5];
		v3[5] = a1[6];
		v3[6] = a1[7];
		sub_1403F4900(qword_140C65898, 0x6DAu, (__int64)v3);
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (00000001402BC330) ----------------------------------------------------
__int64 __fastcall sub_1402BC330(_QWORD* a1, __int16 a2)
{
	__int64 v2; // rdx
	__int16 v4; // [rsp+48h] [rbp+10h] BYREF
	__int16 v5; // [rsp+4Ah] [rbp+12h]

	v4 = a2;
	v2 = a1[5];
	v5 = 0;
	return (*(__int64(__fastcall**)(_QWORD*, __int64, __int64, __int16*, __int64))(*a1 + 136i64))(
		a1,
		v2,
		v2,
		&v4,
		1i64);
}


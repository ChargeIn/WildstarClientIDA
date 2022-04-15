#include "../winhttp.h"

//----- (0000000140297B50) ----------------------------------------------------
__int64 __fastcall sub_140297B50(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[5] + 112i64))(a1[5]);
	if ((int)result >= 0)
	{
		result = a1[2];
		if (*(__int64**)(result + 10376) == a1)
			*(_QWORD*)(result + 10376) = 0i64;
	}
	return result;
}
// 140297B50: using guessed type int var_18[6];


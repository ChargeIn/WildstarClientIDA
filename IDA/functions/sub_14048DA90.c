#include "../winhttp.h"

//----- (000000014048DA90) ----------------------------------------------------
__int64 __fastcall sub_14048DA90(__int64 a1, _DWORD* a2, int a3)
{
	__int64 result; // rax
	int v5; // [rsp+40h] [rbp+18h] BYREF

	v5 = a2[15];
	if (a3 || a2[24])
		return sub_14048FC60(a1 + 168, &v5);
	result = sub_1404862B0((__int64)a2);
	if ((int)result < 0)
		return (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a2 + 8i64))(a2);
	return result;
}


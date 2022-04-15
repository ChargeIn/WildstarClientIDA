#include "../winhttp.h"

//----- (00000001406D0E20) ----------------------------------------------------
__int64 __fastcall sub_1406D0E20(__int64 a1, int a2)
{
	int v4; // eax
	__int64 v5; // rdx
	unsigned int v6; // esi
	int v7; // edx
	__int64 result; // rax

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 624i64))(a1);
	v5 = (unsigned int)(a2 >> 31);
	LODWORD(v5) = a2 % v4;
	v6 = a2 / v4;
	v7 = a2 % (*(int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 624i64))(a1, v5);
	result = v6 + 1;
	if (v7 <= 0)
		return v6;
	return result;
}


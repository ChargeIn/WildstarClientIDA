#include "../winhttp.h"

//----- (0000000140732410) ----------------------------------------------------
__int64 __fastcall sub_140732410(__int64 a1)
{
	BOOL v2; // eax
	BOOL* v3; // r8
	BOOL v4; // edx
	__int64 result; // rax

	v2 = sub_1404B9A20();
	v3 = *(BOOL**)(a1 + 16);
	v3[2] = 1;
	v4 = v2;
	result = 1i64;
	*v3 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}


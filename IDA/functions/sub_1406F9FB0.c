#include "../winhttp.h"

//----- (00000001406F9FB0) ----------------------------------------------------
__int64 __fastcall sub_1406F9FB0(__int64 a1)
{
	int* v1; // r8
	unsigned int v2; // edx
	__int64 result; // rax

	v1 = *(int**)(a1 + 16);
	v2 = *(_DWORD*)(qword_140C65898 + 25384);
	v1[2] = 1;
	result = 1i64;
	*v1 = (v2 >> 9) & 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;


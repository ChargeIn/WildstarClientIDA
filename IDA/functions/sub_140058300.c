#include "../winhttp.h"

//----- (0000000140058300) ----------------------------------------------------
_QWORD* __fastcall sub_140058300(__int64 a1, int a2)
{
	_QWORD* result; // rax
	__int64 v3; // r10
	__int64 v4; // rdx

	for (result = (char*)sub_1400580E0(a1, a2) + 16;
		(unsigned __int64)result < *(_QWORD*)(v3 + 16);
		*((_DWORD*)result - 6) = *((_DWORD*)result - 2))
	{
		v4 = *result;
		result += 2;
		*(result - 4) = v4;
	}
	*(_QWORD*)(v3 + 16) -= 16i64;
	return result;
}
// 140058310: variable 'v3' is possibly undefined


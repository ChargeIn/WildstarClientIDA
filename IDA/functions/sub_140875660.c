#include "../winhttp.h"

//----- (0000000140875660) ----------------------------------------------------
__int64 __fastcall sub_140875660(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r10

	result = a1[8];
	v3 = a1[9];
	if (result == v3)
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 128i64))(a1);
	while (*(_DWORD*)(a2 + 24) != *(_DWORD*)result || ((*(_BYTE*)(a2 + 91) & 2) != 0) != *(_BYTE*)(result + 4))
	{
		result += 8i64;
		if (result == v3)
			return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 128i64))(a1);
	}
	return result;
}


#include "../winhttp.h"

//----- (00000001400CA410) ----------------------------------------------------
__int64 __fastcall sub_1400CA410(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(v1 + 2888) == a1)
	{
		v3 = *(_QWORD*)(v1 + 2888);
		if (v3)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v1 + 2888) = 0i64;
		}
		*(_BYTE*)(a1 + 29) &= 0x87u;
	}
	else
	{
		*(_BYTE*)(a1 + 29) &= 0x87u;
	}
	return result;
}


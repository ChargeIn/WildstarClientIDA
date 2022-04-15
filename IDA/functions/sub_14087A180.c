#include "../winhttp.h"

//----- (000000014087A180) ----------------------------------------------------
__int64 __fastcall sub_14087A180(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 136);
	if (v1)
	{
		result = sub_140833130((unsigned __int8)(*(_BYTE*)(*(_QWORD*)(a1 + 24) + 199i64) & 0x1F) << 10, v1);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	return result;
}


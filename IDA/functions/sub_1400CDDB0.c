#include "../winhttp.h"

//----- (00000001400CDDB0) ----------------------------------------------------
__int64 __fastcall sub_1400CDDB0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 688);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 688) = 0i64;
	}
	return result;
}


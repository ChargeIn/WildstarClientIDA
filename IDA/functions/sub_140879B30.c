#include "../winhttp.h"

//----- (0000000140879B30) ----------------------------------------------------
__int64 __fastcall sub_140879B30(__int64 a1, int a2)
{
	__int64 v2; // rcx
	__int64 result; // rax

	if (!a2)
	{
		v2 = *(_QWORD*)(a1 + 56);
		if (v2)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	}
	return result;
}


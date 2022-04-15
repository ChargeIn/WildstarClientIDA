#include "../winhttp.h"

//----- (00000001408C4E80) ----------------------------------------------------
__int64 __fastcall sub_1408C4E80(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 result; // rax

	if (*(_BYTE*)(a1 + 300))
	{
		v4 = *(_QWORD*)(a1 + 320);
		if (v4)
		{
			result = sub_1408CA0F0(v4, a2);
			if (*(_QWORD*)(a1 + 320))
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
			*(_QWORD*)(a1 + 320) = 0i64;
		}
	}
	return result;
}


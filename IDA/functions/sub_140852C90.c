#include "../winhttp.h"

//----- (0000000140852C90) ----------------------------------------------------
__int64 __fastcall sub_140852C90(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 528i64))(a1);
	if (!result)
	{
		result = sub_14086F180();
		v3 = result;
		if (result)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 72i64))(v3, a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
			return v3;
		}
	}
	return result;
}


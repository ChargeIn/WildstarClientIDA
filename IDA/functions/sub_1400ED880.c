#include "../winhttp.h"

//----- (00000001400ED880) ----------------------------------------------------
__int64 __fastcall sub_1400ED880(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64(__fastcall * **v5)(_QWORD); // rcx

	if (a1)
	{
		if (a2)
		{
			if (*a2)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
				*a2 = 0i64;
			}
			result = *(_QWORD*)(a1 + 40);
			*a2 = result;
			v5 = *(__int64(__fastcall****)(_QWORD))(a1 + 40);
			if (v5)
				return (**v5)(v5);
		}
	}
	else if (*a2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		*a2 = 0i64;
	}
	return result;
}


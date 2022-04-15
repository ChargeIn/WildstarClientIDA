#include "../winhttp.h"

//----- (000000014031A220) ----------------------------------------------------
__int64 __fastcall sub_14031A220(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	_WORD* v5; // rdx

	result = sub_14032D6B0(a1, a2, a3);
	if ((int)result >= 0)
	{
		v5 = *(_WORD**)(*(_QWORD*)(a1 + 416) + 3776i64);
		if (v5 && *v5)
		{
			(*(void(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 16i64) + 40i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64),
				v5,
				a1 + 1080,
				0i64);
			return 0i64;
		}
		else
		{
			return 2147942487i64;
		}
	}
	return result;
}


#include "../winhttp.h"

//----- (00000001400B6120) ----------------------------------------------------
__int64 __fastcall sub_1400B6120(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v7; // rcx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 24))(a2);
	v5 = *(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8));
	if (!*(_QWORD*)v5)
		return 0i64;
	while (v4 != **(_QWORD**)v5
		|| !(*(unsigned int(__fastcall**)(__int64, __int64))(a1 + 32))(a2, *(_QWORD*)v5 + 16i64))
	{
		v5 = *(_QWORD*)v5 + 8i64;
		if (!*(_QWORD*)v5)
			return 0i64;
	}
	v7 = *(_QWORD*)v5;
	*(_QWORD*)v5 = *(_QWORD*)(*(_QWORD*)v5 + 8i64);
	sub_14018B900(v7, 0);
	--* (_QWORD*)a1;
	return 1i64;
}


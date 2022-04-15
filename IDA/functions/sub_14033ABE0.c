#include "../winhttp.h"

//----- (000000014033ABE0) ----------------------------------------------------
void __fastcall sub_14033ABE0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx

	if (!*(_QWORD*)(a1 + 200))
		*(_QWORD*)(a1 + 200) = sub_14018B280(64i64, 0);
	v4 = *(_QWORD*)(a1 + 192);
	if (v4 != a2)
	{
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 192) = a2;
	}
}


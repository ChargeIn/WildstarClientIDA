#include "../winhttp.h"

//----- (000000014085AD00) ----------------------------------------------------
void __fastcall sub_14085AD00(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64* v6; // rcx
	__int64 v7; // rcx

	if ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 72))
	{
		if (!*(_BYTE*)(a2 + 36))
		{
			v4 = *(_QWORD*)(a1 + 56);
			if (v4)
				++* (_WORD*)(v4 + 78);
		}
		*(_BYTE*)(a2 + 36) = 1;
	}
	v5 = *(_QWORD*)(a1 + 72);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 288i64))(v5);
	v6 = *(__int64**)(a1 + 104);
	if (v6)
	{
		v7 = *v6;
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 288i64))(v7, a2);
	}
}


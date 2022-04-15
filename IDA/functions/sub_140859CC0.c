#include "../winhttp.h"

//----- (0000000140859CC0) ----------------------------------------------------
void __fastcall sub_140859CC0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64* v5; // rcx
	__int64 v6; // rcx

	if (((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 72)) && !*(_BYTE*)(a2 + 36))
	{
		sub_140851F80(a1, (_WORD*)(a2 + 34), *(_BYTE*)(a2 + 37));
		*(_BYTE*)(a2 + 36) = 1;
	}
	v4 = *(_QWORD*)(a1 + 72);
	if (v4)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 296i64))(v4, a2);
	v5 = *(__int64**)(a1 + 104);
	if (v5)
	{
		v6 = *v5;
		if (v6)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 296i64))(v6, a2);
	}
}


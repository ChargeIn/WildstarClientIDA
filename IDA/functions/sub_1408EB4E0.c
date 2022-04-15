#include "../winhttp.h"

//----- (00000001408EB4E0) ----------------------------------------------------
__int64 __fastcall sub_1408EB4E0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdx
	__int64 v4; // rdx

	sub_1408EB870(a1 + 144);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v2 = *(_QWORD*)(a1 + 376);
	if (v2)
	{
		sub_140881720(dword_140C10F28, v2);
		*(_QWORD*)(a1 + 376) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 392);
	if (v3)
	{
		sub_140881720(dword_140C10F28, v3);
		*(_QWORD*)(a1 + 392) = 0i64;
		*(_DWORD*)(a1 + 400) = 0;
		*(_WORD*)(a1 + 404) = 0;
	}
	v4 = *(_QWORD*)(a1 + 408);
	if (v4)
	{
		sub_140881720(dword_140C10F28, v4);
		*(_QWORD*)(a1 + 408) = 0i64;
	}
	return sub_140880F80(a1);
}
// 140C10F28: using guessed type int dword_140C10F28;


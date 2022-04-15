#include "../winhttp.h"

//----- (00000001401C2660) ----------------------------------------------------
__int64 __fastcall sub_1401C2660(__int64 a1)
{
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 24i64))(
		*(_QWORD*)(a1 + 96),
		0xFFFFFFFFi64))
	{
		DeleteFileW(*(LPCWSTR*)(a1 + 88));
		sub_140008410(a1 + 104);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	}
	return 0i64;
}


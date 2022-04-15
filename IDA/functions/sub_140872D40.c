#include "../winhttp.h"

//----- (0000000140872D40) ----------------------------------------------------
void __fastcall sub_140872D40(__int64 a1)
{
	__int64 v1; // rdx
	void(__fastcall * **v3)(_QWORD, _QWORD); // rsi
	int v4; // ebx

	v1 = *(_QWORD*)(a1 + 32);
	if (v1)
	{
		sub_140838CC0((_QWORD*)qword_140C61BB0, v1);
		(*(void(__fastcall**)(_QWORD, __int64(__fastcall***)()))(**(_QWORD**)(a1 + 32) + 32i64))(
			*(_QWORD*)(a1 + 32),
			&off_140C10F70);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v3 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 24);
	if (v3)
	{
		v4 = dword_140C10F28;
		(**v3)(*(_QWORD*)(a1 + 24), 0i64);
		sub_140881720(v4, (__int64)v3);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C61BB0: using guessed type __int64 qword_140C61BB0;


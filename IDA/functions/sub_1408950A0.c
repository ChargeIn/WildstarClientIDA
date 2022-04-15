#include "../winhttp.h"

//----- (00000001408950A0) ----------------------------------------------------
void __fastcall sub_1408950A0(__int64 a1)
{
	__int64 i; // rbx
	__int64 v3; // rax
	int v4; // esi

	for (i = *(_QWORD*)(a1 + 8); i; i = *(_QWORD*)(a1 + 8))
	{
		v3 = *(_QWORD*)(i + 8);
		if (v3)
		{
			*(_QWORD*)(a1 + 8) = v3;
		}
		else
		{
			*(_QWORD*)(a1 + 8) = 0i64;
			*(_QWORD*)(a1 + 16) = 0i64;
		}
		v4 = dword_140C10F20;
		(**(void(__fastcall***)(__int64, _QWORD))i)(i, 0i64);
		sub_140881720(v4, i);
	}
}
// 1408950C5: conditional instruction was optimized away because rbx.8!=0
// 1408950E7: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;


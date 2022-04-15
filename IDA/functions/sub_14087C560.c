#include "../winhttp.h"

//----- (000000014087C560) ----------------------------------------------------
__int64 __fastcall sub_14087C560(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // ebx

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
	{
		*(_QWORD*)(a1 + 16) = v1;
		sub_140881720(dword_140C10F20, v1);
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
	}
	v3 = dword_140C10F20;
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	return sub_140881720(v3, a1);
}
// 140C10F20: using guessed type int dword_140C10F20;


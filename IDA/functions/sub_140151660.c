#include "../winhttp.h"

//----- (0000000140151660) ----------------------------------------------------
void __fastcall sub_140151660(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rcx
	__int64 v4; // rcx

	if (*(_QWORD*)(a1 + 88))
	{
		sub_140151D90(a1 + 72, *(_QWORD**)(*(_QWORD*)(a1 + 80) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 80) + 16i64) = *(_QWORD*)(a1 + 80);
		*(_QWORD*)(*(_QWORD*)(a1 + 80) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 80) + 24i64) = *(_QWORD*)(a1 + 80);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 80), 0);
	v3 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 40) = off_140B56A08;
	if (v3)
		sub_1400579E0(v3, v2, *(_DWORD*)(a1 + 48));
	v4 = *(_QWORD*)(a1 + 16);
	if (v4)
		sub_14018B900(v4, 0);
}
// 1401516C6: variable 'v2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();


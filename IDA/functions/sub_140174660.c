#include "../winhttp.h"

//----- (0000000140174660) ----------------------------------------------------
__int64 __fastcall sub_140174660(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	*(_QWORD*)a1 = off_140B5D400;
	*(_DWORD*)(a1 + 1036) = 1065353216;
	*(_WORD*)(a1 + 1040) = 0;
	*(_DWORD*)(a1 + 1044) = 0;
	sub_1400C35F0(a1 + 1056);
	sub_1400C35F0(a1 + 1472);
	sub_1400C35F0(a1 + 1888);
	sub_1401095E0(a1 + 2304);
	sub_1401095E0(a1 + 2352);
	sub_1401095E0(a1 + 2400);
	sub_1401095E0(a1 + 2448);
	*(_QWORD*)(a1 + 432) |= 0x400ui64;
	if (a4 && a4 != (_QWORD*)-408i64 && a4 != (_QWORD*)-568i64)
	{
		sub_1400C3880(a1 + 1888, (__int64)(a4 + 71), 2, 0, 0);
		sub_1400C3880(a1 + 1056, (__int64)(a4 + 53), 2, 0, 0);
		sub_1400C3880(a1 + 1472, (__int64)(a4 + 62), 2, 0, 0);
	}
	return a1;
}
// 140B5D400: using guessed type __int64 (__fastcall *off_140B5D400[25])();


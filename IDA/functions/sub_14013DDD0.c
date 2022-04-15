#include "../winhttp.h"

//----- (000000014013DDD0) ----------------------------------------------------
__int64 __fastcall sub_14013DDD0(__int64 a1, __int64 a2, __int64 a3, _OWORD* a4, __m128i* a5, int a6)
{
	int* v9; // rax

	*(_QWORD*)(a1 + 16) = a3;
	*(_BYTE*)(a1 + 24) = 0;
	*(_QWORD*)a1 = &off_140B58150;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	sub_1400ED880(a2, (__int64*)(a1 + 8));
	*(_QWORD*)a1 = off_140B58050;
	sub_1401095E0(a1 + 40);
	*(_DWORD*)(a1 + 88) = a6;
	*(_OWORD*)(a1 + 96) = 0i64;
	*(_OWORD*)(a1 + 112) = *a4;
	if (a2)
		sub_140109710((__int64*)(a1 + 40), a2 + 240, a5, 0);
	v9 = sub_14018B280(864i64, 0);
	if (v9)
		*(_QWORD*)(a1 + 32) = sub_14013FEB0((__int64)v9, a2);
	else
		*(_QWORD*)(a1 + 32) = 0i64;
	return a1;
}
// 140B58050: using guessed type __int64 (__fastcall *off_140B58050[33])();
// 140B58150: using guessed type __int64 (__fastcall *off_140B58150)();


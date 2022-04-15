#include "../winhttp.h"

//----- (00000001408CBF90) ----------------------------------------------------
__int64 __fastcall sub_1408CBF90(__int64 a1)
{
	__int64 v2; // rcx

	v2 = a1 + 32;
	*(_QWORD*)(v2 - 32) = off_1409B15D0;
	*(_QWORD*)(v2 - 24) = 0i64;
	*(_QWORD*)(v2 - 16) = 0i64;
	sub_1408CC6B0(v2);
	return a1;
}
// 1409B15D0: using guessed type __int64 (__fastcall *off_1409B15D0[6])();


#include "../winhttp.h"

//----- (00000001408F6CF0) ----------------------------------------------------
__int64 __fastcall sub_1408F6CF0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = a1 + 96;
	*(_QWORD*)(v2 - 96) = off_1409C6270;
	*(_QWORD*)(v2 - 88) = 0i64;
	*(_QWORD*)(v2 - 80) = 0i64;
	*(_QWORD*)(v2 - 72) = 0i64;
	*(_QWORD*)(v2 - 64) = 0i64;
	*(_QWORD*)(v2 - 56) = 0i64;
	*(_QWORD*)(v2 - 48) = 0i64;
	*(_QWORD*)(v2 - 40) = 0i64;
	sub_1408F92B0(v2);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	return a1;
}
// 1409C6270: using guessed type __int64 (__fastcall *off_1409C6270[6])();


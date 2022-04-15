#include "../winhttp.h"

//----- (00000001408A6E00) ----------------------------------------------------
__int64 __fastcall sub_1408A6E00(__int64 a1)
{
	__int64 v2; // rcx

	v2 = a1 + 32;
	*(_QWORD*)(v2 - 32) = off_1409A9E80;
	*(_QWORD*)(v2 - 24) = 0i64;
	*(_QWORD*)(v2 - 16) = 0i64;
	*(_QWORD*)(v2 - 8) = 0i64;
	sub_1408A7E40(v2);
	sub_1408A7E40(a1 + 56);
	sub_1408A9130(a1 + 80);
	sub_1408AA980(a1 + 108);
	sub_1408A7540(a1 + 128);
	return a1;
}
// 1409A9E80: using guessed type __int64 (__fastcall *off_1409A9E80[6])();


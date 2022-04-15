#include "../winhttp.h"

//----- (00000001408CE0E0) ----------------------------------------------------
__int64 __fastcall sub_1408CE0E0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = a1 + 72;
	*(_QWORD*)(v2 - 72) = off_1409B1660;
	*(_QWORD*)(v2 - 64) = 0i64;
	*(_QWORD*)(v2 - 56) = 0i64;
	*(_QWORD*)(v2 - 48) = 2048i64;
	*(_DWORD*)(v2 - 40) = 0;
	*(_DWORD*)(v2 - 36) = 1065353216;
	*(_QWORD*)(v2 - 32) = 2048i64;
	*(_DWORD*)(v2 - 24) = 0;
	*(_DWORD*)(v2 - 20) = 1065353216;
	sub_1408AC600(v2);
	return a1;
}
// 1409B1660: using guessed type __int64 (__fastcall *off_1409B1660[6])();


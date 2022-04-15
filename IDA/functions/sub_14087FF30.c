#include "../winhttp.h"

//----- (000000014087FF30) ----------------------------------------------------
__int64 __fastcall sub_14087FF30(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int16 v4; // cx
	__int64 result; // rax

	sub_1408611A0(a1, a2);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)a1 = off_1409A7600;
	sub_140881360(a1 + 64);
	v3 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 80) = 0;
	v4 = *(_WORD*)(v3 + 376);
	result = a1;
	*(_WORD*)(a1 + 84) = v4;
	return result;
}
// 1409A7600: using guessed type __int64 (__fastcall *off_1409A7600[8])();


#include "../winhttp.h"

//----- (00000001408F2290) ----------------------------------------------------
__int64 __fastcall sub_1408F2290(__int64 a1, char a2)
{
	__int64 v3; // rdx

	v3 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)a1 = off_1409C6070;
	if (v3)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	*(_QWORD*)a1 = &off_1409A70C8;
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A70C8: using guessed type __int64 (__fastcall *off_1409A70C8)();
// 1409C6070: using guessed type __int64 (__fastcall *off_1409C6070[6])();


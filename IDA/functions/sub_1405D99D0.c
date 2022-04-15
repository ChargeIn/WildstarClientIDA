#include "../winhttp.h"

//----- (00000001405D99D0) ----------------------------------------------------
__int64 __fastcall sub_1405D99D0(__int64 a1, char a2)
{
	int v3; // edx

	v3 = *(_DWORD*)(a1 + 336);
	*(_QWORD*)a1 = off_140B6E0F0;
	if (v3)
		sub_1405644E0(a1, v3);
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6E0F0: using guessed type __int64 (__fastcall *off_140B6E0F0[21])();


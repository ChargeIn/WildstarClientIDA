#include "../winhttp.h"

//----- (0000000140115FC0) ----------------------------------------------------
__int64 __fastcall sub_140115FC0(__int64 a1, char a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdx

	v3 = a1 + 1024;
	*(_QWORD*)(v3 - 1024) = off_140B56F40;
	sub_140140120(v3);
	sub_1400C6030(a1, v5);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140115FEC: variable 'v5' is possibly undefined
// 140B56F40: using guessed type __int64 (__fastcall *off_140B56F40[25])();


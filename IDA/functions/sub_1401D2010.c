#include "../winhttp.h"

//----- (00000001401D2010) ----------------------------------------------------
__int64 __fastcall sub_1401D2010(__int64 a1, char a2)
{
	*(_QWORD*)a1 = off_140B5FB00;
	sub_1401D2520(a1);
	*(_QWORD*)a1 = off_140B5FDB0;
	if (*(_QWORD*)(a1 + 688))
		CloseHandle(*(HANDLE*)(a1 + 688));
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B5FB00: using guessed type __int64 (__fastcall *off_140B5FB00[10])();
// 140B5FDB0: using guessed type __int64 (__fastcall *off_140B5FDB0[10])();


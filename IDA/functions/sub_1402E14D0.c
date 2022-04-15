#include "../winhttp.h"

//----- (00000001402E14D0) ----------------------------------------------------
__int64 __fastcall sub_1402E14D0(__int64 a1)
{
	*(_QWORD*)a1 = off_140B62FE0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	sub_1402E2870((_QWORD*)(a1 + 40));
	*(_QWORD*)(a1 + 80) = 0i64;
	sub_1402E27F0((_QWORD*)(a1 + 88));
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	sub_1407E4830((int*)(a1 + 128), 0i64, 0x60ui64);
	*(_QWORD*)(a1 + 224) = 0i64;
	return a1;
}
// 140B62FE0: using guessed type __int64 (__fastcall *off_140B62FE0[28])();


#include "../winhttp.h"

//----- (0000000140319E40) ----------------------------------------------------
__int64 __fastcall sub_140319E40(__int64 a1)
{
	sub_14032D190(a1);
	*(_QWORD*)a1 = off_140B64310;
	*(_QWORD*)(a1 + 1096) = 0i64;
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	sub_1407E4830((int*)(a1 + 1112), 0i64, 0x50ui64);
	sub_1407E4830((int*)(a1 + 1192), 0i64, 0x50ui64);
	sub_1407E4830((int*)(a1 + 1272), 0i64, 0x50ui64);
	sub_1407E4830((int*)(a1 + 1352), 0i64, 0x50ui64);
	*(_QWORD*)(a1 + 1432) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	return a1;
}
// 140B64310: using guessed type __int64 (__fastcall *off_140B64310[21])();


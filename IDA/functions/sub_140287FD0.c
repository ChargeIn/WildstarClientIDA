#include "../winhttp.h"

//----- (0000000140287FD0) ----------------------------------------------------
__int64 __fastcall sub_140287FD0(__int64 a1)
{
	return sub_14001FEC0(
		**(__int64(__fastcall***)(unsigned __int64, __int64, __int64))(a1 + 16),
		(__int64*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) + 8i64 * *(_QWORD*)a1),
		*(_QWORD*)(a1 + 8) - *(_QWORD*)a1,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64));
}


#include "../winhttp.h"

//----- (00000001405F23E0) ----------------------------------------------------
__int64 __fastcall sub_1405F23E0(unsigned int* a1)
{
	int v2; // eax

	v2 = (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 336i64))(a1);
	if (v2 == 23 || v2 == 30)
		return a1[6];
	else
		return (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 368i64))(a1);
}


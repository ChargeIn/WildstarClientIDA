#include "../winhttp.h"

//----- (00000001400FDC70) ----------------------------------------------------
void __fastcall sub_1400FDC70(__int64 a1, int* a2)
{
	if ((int)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3) <= 0)
		sub_140100CD0(0i64, *(_QWORD*)(a1 + 8), a2);
	else
		sub_140100CD0(**(_QWORD**)(a1 + 32), *(_QWORD*)(a1 + 8), a2);
}


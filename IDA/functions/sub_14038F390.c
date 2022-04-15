#include "../winhttp.h"

//----- (000000014038F390) ----------------------------------------------------
__int64 __fastcall sub_14038F390(_OWORD* a1, _OWORD* a2)
{
	a1[4] = *a2;
	a1[5] = a2[1];
	a1[6] = a2[2];
	a1[7] = a2[3];
	return (*(__int64(__fastcall**)(_OWORD*))(*(_QWORD*)a1 + 48i64))(a1);
}


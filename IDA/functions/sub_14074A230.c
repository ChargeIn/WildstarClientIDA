#include "../winhttp.h"

//----- (000000014074A230) ----------------------------------------------------
bool __fastcall sub_14074A230(__int64 a1, __int64 a2)
{
	double v3; // xmm0_8

	v3 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 216i64))(a1);
	return (*(float(__fastcall**)(__int64))(*(_QWORD*)a2 + 216i64))(a2) > *(float*)&v3;
}


#include "../winhttp.h"

//----- (00000001405C8520) ----------------------------------------------------
__int64 __fastcall sub_1405C8520(__int64 a1)
{
	__int64 v2; // rbx

	v2 = (__int64)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1) << 32;
	return v2 | (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
}


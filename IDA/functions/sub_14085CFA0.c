#include "../winhttp.h"

//----- (000000014085CFA0) ----------------------------------------------------
bool __fastcall sub_14085CFA0(__int64* a1)
{
	__int64 v1; // rcx

	v1 = *a1;
	return v1 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 112i64))(v1) == 12;
}


#include "../winhttp.h"

//----- (00000001408797A0) ----------------------------------------------------
double __fastcall sub_1408797A0(__int64 a1)
{
	__int64 v1; // rcx
	double result; // xmm0_8

	v1 = *(_QWORD*)(a1 + 56);
	if (!v1)
		return 0.0;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 56i64))(v1);
	return result;
}


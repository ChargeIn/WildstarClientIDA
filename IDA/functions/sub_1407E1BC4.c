#include "../winhttp.h"

//----- (00000001407E1BC4) ----------------------------------------------------
const char* __fastcall sub_1407E1BC4(__int64 a1)
{
	const char* result; // rax

	result = "Unknown exception";
	if (*(_QWORD*)(a1 + 8))
		return *(const char**)(a1 + 8);
	return result;
}


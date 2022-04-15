#include "../winhttp.h"

//----- (00000001408ABAA0) ----------------------------------------------------
__int64 __fastcall sub_1408ABAA0(__int64 a1)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 2456); i = (unsigned int)(i + 1))
		result = sub_1408ADC30(a1 + 8 * (i + 2 * (i + 134)), *(_QWORD*)(a1 + 16));
	return result;
}


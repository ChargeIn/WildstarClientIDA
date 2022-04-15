#include "../winhttp.h"

//----- (00000001408AD4F0) ----------------------------------------------------
__int64 __fastcall sub_1408AD4F0(__int64 a1)
{
	__int64 result; // rax
	unsigned int i; // ebx

	result = sub_1408ACBB0(a1);
	for (i = 0; i < *(_DWORD*)(a1 + 728); ++i)
		result = sub_1408B1430(32i64 * i + a1 + 752);
	return result;
}


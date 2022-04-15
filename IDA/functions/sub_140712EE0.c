#include "../winhttp.h"

//----- (0000000140712EE0) ----------------------------------------------------
__int64 __fastcall sub_140712EE0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(unsigned int*)(result + 56);
	return result;
}


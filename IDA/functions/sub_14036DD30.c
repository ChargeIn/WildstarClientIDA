#include "../winhttp.h"

//----- (000000014036DD30) ----------------------------------------------------
__int64 __fastcall sub_14036DD30(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 4784);
	if (result)
		return *(unsigned int*)(result + 24);
	return result;
}


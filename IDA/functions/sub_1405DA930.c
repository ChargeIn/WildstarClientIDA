#include "../winhttp.h"

//----- (00000001405DA930) ----------------------------------------------------
__int64 __fastcall sub_1405DA930(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 176);
	if (v1)
		return *(unsigned int*)(v1 + 16);
	else
		return 152i64;
}


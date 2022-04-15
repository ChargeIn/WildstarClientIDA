#include "../winhttp.h"

//----- (000000014086FE20) ----------------------------------------------------
__int64 __fastcall sub_14086FE20(__int64 a1, float a2, __int64* a3)
{
	__int64 v3; // rbx
	__int64 i; // rbx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 56);
	if (v3)
	{
		for (i = *(_QWORD*)(v3 + 24); i; i = *(_QWORD*)(i + 32))
			result = sub_14085F320(i, a2, a3, 0);
	}
	return result;
}


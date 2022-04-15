#include "../winhttp.h"

//----- (000000014086FCB0) ----------------------------------------------------
__int64 __fastcall sub_14086FCB0(
	__int64 a1,
	__int64(__fastcall* a2)(__int64, __int64, __int64),
	__int64 a3,
	__int64 a4)
{
	__int64 v4; // rbx
	__int64 i; // rbx
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 56);
	if (v4)
	{
		for (i = *(_QWORD*)(v4 + 24); i; i = *(_QWORD*)(i + 32))
		{
			if (!a3 || a3 == *(_QWORD*)(i + 176))
				result = a2(i, a3, a4);
		}
	}
	return result;
}


#include "../winhttp.h"

//----- (00000001401A9A10) ----------------------------------------------------
__int64 __fastcall sub_1401A9A10(__int64 a1)
{
	__int64 v1; // rdi
	__int64 result; // rax
	unsigned int v4; // ebp
	bool v5; // zf

	v1 = *(_QWORD*)(a1 + 40);
	result = sub_1401CD200(v1);
	v4 = *(_DWORD*)(v1 + 40);
	if (v4 > *(_DWORD*)(a1 + 24))
		v4 = *(_DWORD*)(a1 + 24);
	if (v4)
	{
		result = (__int64)sub_1407DB590(*(int**)(a1 + 16), *(int**)(v1 + 32), v4);
		*(_QWORD*)(a1 + 16) += v4;
		*(_QWORD*)(v1 + 32) += v4;
		*(_DWORD*)(a1 + 28) += v4;
		*(_DWORD*)(a1 + 24) -= v4;
		v5 = *(_DWORD*)(v1 + 40) == v4;
		*(_DWORD*)(v1 + 40) -= v4;
		if (v5)
		{
			result = *(_QWORD*)(v1 + 16);
			*(_QWORD*)(v1 + 32) = result;
		}
	}
	return result;
}


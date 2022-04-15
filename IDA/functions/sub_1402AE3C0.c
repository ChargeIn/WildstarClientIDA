#include "../winhttp.h"

//----- (00000001402AE3C0) ----------------------------------------------------
__int64 __fastcall sub_1402AE3C0(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v2; // rdx
	__int64 v3; // rdx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			v2 = *(_QWORD**)(a1 + 64);
			if (v2)
				*v2 = *(_QWORD*)(a1 + 72);
			v3 = *(_QWORD*)(a1 + 72);
			if (v3)
				*(_QWORD*)(v3 + 64) = *(_QWORD*)(a1 + 64);
			*(_QWORD*)(a1 + 64) = 0i64;
			*(_QWORD*)(a1 + 72) = 0i64;
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}


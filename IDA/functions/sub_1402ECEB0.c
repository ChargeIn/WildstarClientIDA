#include "../winhttp.h"

//----- (00000001402ECEB0) ----------------------------------------------------
__int64 __fastcall sub_1402ECEB0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8

	result = *(_QWORD*)(a2 + 72);
	if (result || *(_QWORD*)(a1 + 2328) == a2)
	{
		if (result)
		{
			v3 = *(_QWORD*)(a2 + 80);
			if (v3)
			{
				*(_QWORD*)(v3 + 72) = result;
				*(_QWORD*)(result + 80) = v3;
			}
			else
			{
				*(_QWORD*)(a1 + 2320) = result;
				*(_QWORD*)(result + 80) = 0i64;
			}
			*(_QWORD*)(a2 + 80) = 0i64;
			*(_QWORD*)(a2 + 72) = 0i64;
			--* (_DWORD*)(a1 + 2336);
		}
		else
		{
			result = *(_QWORD*)(a2 + 80);
			*(_QWORD*)(a1 + 2328) = result;
			if (result)
				*(_QWORD*)(result + 72) = 0i64;
			else
				*(_QWORD*)(a1 + 2320) = 0i64;
			*(_QWORD*)(a2 + 80) = 0i64;
			*(_QWORD*)(a2 + 72) = 0i64;
			--* (_DWORD*)(a1 + 2336);
		}
	}
	return result;
}


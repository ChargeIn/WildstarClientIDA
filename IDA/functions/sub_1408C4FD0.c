#include "../winhttp.h"

//----- (00000001408C4FD0) ----------------------------------------------------
__int64 __fastcall sub_1408C4FD0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx

	result = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(result + 152))
	{
		v3 = 0i64;
		if (*(_BYTE*)(a1 + 296))
		{
			do
			{
				v4 = *(_QWORD*)(a1 + 312);
				v5 = 192 * v3;
				v3 = (unsigned int)(v3 + 1);
				*(_QWORD*)(v5 + v4 + 160) = 0i64;
				*(_QWORD*)(v5 + v4 + 168) = 0i64;
				result = *(unsigned __int8*)(a1 + 296);
			} while ((unsigned int)v3 < (unsigned int)result);
		}
	}
	return result;
}


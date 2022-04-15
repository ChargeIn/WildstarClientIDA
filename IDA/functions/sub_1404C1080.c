#include "../winhttp.h"

//----- (00000001404C1080) ----------------------------------------------------
__int64 __fastcall sub_1404C1080(unsigned int* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 264i64))(a1);
	if (a1[76])
	{
		v3 = a1[32];
		result = (unsigned int)(v3 - 1);
		if ((unsigned int)result > 2)
		{
			if ((_DWORD)v3 != 4 || (result = sub_140724910((__int64)a1), !(_DWORD)result))
			{
				sub_1404C9520(v3, (__int64)a1);
				return sub_1404C69F0((__int64)a1);
			}
		}
	}
	return result;
}
// 1404C10BD: variable 'v3' is possibly undefined


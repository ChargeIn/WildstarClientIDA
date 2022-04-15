#include "../winhttp.h"

//----- (00000001402FBDC0) ----------------------------------------------------
__int64 __fastcall sub_1402FBDC0(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax
	__int64 i; // rcx

	result = *(unsigned int*)(a1 + 1200);
	if ((_DWORD)result)
	{
		for (i = *(_QWORD*)(a1 + 1248); i; i = *(_QWORD*)(i + 1248))
		{
			if (*(_DWORD*)(i + 1200) == (_DWORD)result)
				break;
		}
	}
	else
	{
		i = 0i64;
	}
	*a2 = i;
	if (i)
		return (**(__int64(__fastcall***)(__int64))i)(i);
	return result;
}


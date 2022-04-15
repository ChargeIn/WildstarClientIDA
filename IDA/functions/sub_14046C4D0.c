#include "../winhttp.h"

//----- (000000014046C4D0) ----------------------------------------------------
__int64 __fastcall sub_14046C4D0(__int64 a1)
{
	__int64 result; // rax
	int v2; // edi
	__int64 v4; // r8

	result = *(_QWORD*)(a1 + 24);
	v2 = 0;
	*(_DWORD*)(a1 + 6400) = 0;
	if (result)
	{
		if (*(_DWORD*)(result + 160))
		{
			result = sub_1405A8B30(a1, a1, 0);
			if ((_DWORD)result == 101)
			{
				*(_DWORD*)(a1 + 6400) = 1;
				return result;
			}
			*(_DWORD*)(a1 + 6400) = 2;
		}
		result = *(_QWORD*)(a1 + 24);
		v4 = *(unsigned int*)(result + 156);
		if ((_DWORD)v4)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v4,
					a1,
					0i64,
					0);
			LOBYTE(v2) = (_DWORD)result != 0;
			*(_DWORD*)(a1 + 6400) = v2 + 1;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;


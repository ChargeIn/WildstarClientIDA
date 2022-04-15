#include "../winhttp.h"

//----- (0000000140091DC0) ----------------------------------------------------
__int64 __fastcall sub_140091DC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_140090840(a1, a2, a3);
	if ((int)result >= 0)
	{
		result = sub_140090590(a1, a2, a3 + 664);
		if ((int)result >= 0)
		{
			result = sub_140090730(a1, v7, a3 + 744);
			if ((int)result >= 0)
				return sub_14006C090(a1, (_DWORD*)(a3 + 800), 1ui64);
		}
	}
	return result;
}
// 140091E1B: variable 'v7' is possibly undefined


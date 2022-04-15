#include "../winhttp.h"

//----- (00000001400995F0) ----------------------------------------------------
__int64 __fastcall sub_1400995F0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_1400988F0(a1, a2, a3);
	if ((int)result >= 0)
	{
		result = sub_1400989D0(a1, v6, (_DWORD*)(a3 + 24));
		if ((int)result >= 0)
			return sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
	}
	return result;
}
// 140099625: variable 'v6' is possibly undefined


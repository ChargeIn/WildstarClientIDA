#include "../winhttp.h"

//----- (0000000140574B70) ----------------------------------------------------
__int64 __fastcall sub_140574B70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // r8

	if (!a1)
		return 0i64;
	if (!a2)
		return 0i64;
	v6 = *(unsigned int*)(a3 + 20);
	if (!(_DWORD)v6)
		return 0i64;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
		+ 24i64))(
			qword_140C659A0,
			a1,
			v6,
			a2,
			0i64,
			0);
	if ((_DWORD)result)
	{
		v8 = *(unsigned int*)(a3 + 28);
		if ((_DWORD)v8)
			return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					a2,
					v8,
					a1,
					0i64,
					0);
		else
			return 1i64;
	}
	return result;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;


#include "../winhttp.h"

//----- (0000000140872F10) ----------------------------------------------------
__int64 __fastcall sub_140872F10(_QWORD* a1, __int64 a2, __int64* a3, int a4, __int64 a5, __int64 a6)
{
	__int64 result; // rax

	a1[7] = a2;
	a1[8] = 0i64;
	result = sub_140872C70((__int64)a1, a2, a3, a4, a5);
	if ((_DWORD)result == 1)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)(), _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)a1[7] + 48i64))(
			a1[7],
			&off_140C10F70,
			a1[3],
			a1[4],
			a6,
			a6);
		if ((_DWORD)result == 1)
			return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[7] + 16i64))(a1[7]);
	}
	return result;
}
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();


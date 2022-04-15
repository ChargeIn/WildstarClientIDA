#include "../winhttp.h"

//----- (000000014087F9E0) ----------------------------------------------------
__int64 __fastcall sub_14087F9E0(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rcx
	__int64 result; // rax

	if (a1)
	{
		v1 = dword_140C10F20;
		*a1 = off_1409A75E0;
		v3 = a1[66];
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			a1[66] = 0i64;
		}
		return sub_140881720(v1, (__int64)a1);
	}
	return result;
}
// 1409A75E0: using guessed type __int64 (__fastcall *off_1409A75E0[12])();
// 140C10F20: using guessed type int dword_140C10F20;


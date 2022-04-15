#include "../winhttp.h"

//----- (0000000140712760) ----------------------------------------------------
__int64 __fastcall sub_140712760(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // eax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B739B0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 0;
	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v3 = sub_1400518A0(qword_140C63628, 46, 1, 0);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(qword_140C65848, a1 + 48, v3);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B739B0: using guessed type __int64 (__fastcall *off_140B739B0[3])();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;


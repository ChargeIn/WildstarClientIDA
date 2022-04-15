#include "../winhttp.h"

//----- (0000000140615630) ----------------------------------------------------
__int64 __fastcall sub_140615630(__int64 a1)
{
	unsigned int v1; // eax
	unsigned int v2; // eax
	unsigned int v3; // eax
	unsigned int v4; // eax

	*(_DWORD*)(a1 + 31160) = -8388609;
	v1 = sub_1400518A0(qword_140C63628, 71, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v1);
	v2 = sub_1400518A0(qword_140C63628, 38, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v2);
	v3 = sub_1400518A0(qword_140C63628, 89, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v3);
	v4 = sub_1400518A0(qword_140C63628, 115, 2, 0);
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v4);
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;


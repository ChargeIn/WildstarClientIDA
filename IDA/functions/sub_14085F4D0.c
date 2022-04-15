#include "../winhttp.h"

//----- (000000014085F4D0) ----------------------------------------------------
__int64 __fastcall sub_14085F4D0(__int64 a1, char a2, int a3)
{
	__int64 v4; // rcx
	char v5; // si
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 184);
	v5 = a3;
	if (v4 && (a3 & 0xFFFFFFEF) != 0)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 80i64))(v4);
	if ((v5 & 0x10) != 0)
	{
		*(_BYTE*)(a1 + 383) &= ~1u;
		*(_BYTE*)(a1 + 383) |= (a2 & 0x10) != 0;
	}
	return result;
}


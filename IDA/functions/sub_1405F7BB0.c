#include "../winhttp.h"

//----- (00000001405F7BB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F7BB0(__int64 a1, int a2)
{
	return !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 368i64))(a1)
		|| !a2
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 368i64))(a1) == a2;
}


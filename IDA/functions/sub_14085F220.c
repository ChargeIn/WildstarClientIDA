#include "../winhttp.h"

//----- (000000014085F220) ----------------------------------------------------
bool __fastcall sub_14085F220(__int64 a1)
{
	char v1; // dl
	char v2; // cl

	v1 = *(_BYTE*)(a1 + 379);
	if ((v1 & 3) != 1 || (v1 & 0xC) != 4)
		return 0;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 88) + 76i64) & 8) != 0)
		v2 = *(_BYTE*)(*(_QWORD*)(a1 + 176) + 19i64);
	else
		v2 = *(_BYTE*)(a1 + 443);
	return (v2 & 7) == 1;
}


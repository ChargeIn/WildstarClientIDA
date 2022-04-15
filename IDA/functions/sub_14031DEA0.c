#include "../winhttp.h"

//----- (000000014031DEA0) ----------------------------------------------------
__int64 __fastcall sub_14031DEA0(__int64 a1)
{
	if (!*(_QWORD*)(a1 + 8) || **(_BYTE**)(a1 + 1256) != 1)
		return *(unsigned int*)(a1 + 1328);
	return *(_DWORD*)(a1 + 80) && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
}


#include "../winhttp.h"

//----- (0000000140884950) ----------------------------------------------------
bool __fastcall sub_140884950(__int64 a1, __int64 a2)
{
	bool result; // al

	*(_DWORD*)a2 = *(_DWORD*)(*(_QWORD*)(a1 - 24) + 272i64);
	*(_QWORD*)(a2 + 8) = *(_QWORD*)(a1 - 16);
	*(_QWORD*)(a2 + 16) = **(_QWORD**)(a1 - 80);
	result = (*(_BYTE*)(a1 - 3) & 0x10) != 0;
	*(_BYTE*)(a2 + 24) = result;
	return result;
}


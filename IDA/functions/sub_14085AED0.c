#include "../winhttp.h"

//----- (000000014085AED0) ----------------------------------------------------
bool __fastcall sub_14085AED0(__int64 a1, int a2)
{
	bool result; // al

	while (1)
	{
		result = a2 == *(_DWORD*)(a1 + 24);
		if (a2 == *(_DWORD*)(a1 + 24) || !*(_QWORD*)(a1 + 72) || (*(_BYTE*)(a1 + 90) & 8) != 0)
			break;
		a1 = *(_QWORD*)(a1 + 72);
	}
	return result;
}


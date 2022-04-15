#include "../winhttp.h"

//----- (00000001402801D0) ----------------------------------------------------
int __fastcall sub_1402801D0(__int64 a1, BOOL a2)
{
	int result; // eax

	result = !a2;
	if ((*(_DWORD*)(a1 + 8560) == 0) != result)
	{
		*(_DWORD*)(a1 + 8560) = a2;
		return ShowCursor(a2);
	}
	return result;
}


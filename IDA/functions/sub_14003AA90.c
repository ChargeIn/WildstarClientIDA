#include "../winhttp.h"

//----- (000000014003AA90) ----------------------------------------------------
__int64 __fastcall sub_14003AA90(__int64 a1, __int64 a2, int a3)
{
	*(_DWORD*)a2 = a3;
	*(_QWORD*)(a2 + 8) = a1;
	return a2;
}


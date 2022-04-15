#include "../winhttp.h"

//----- (0000000140417D90) ----------------------------------------------------
__int64 __fastcall sub_140417D90(__int64 a1, int a2)
{
	__int64* v2; // rax
	__int64 v3; // rcx

	v2 = (__int64*)sub_140417660(a1, a2);
	if (v2 && (v3 = *v2) != 0 && *(_DWORD*)(v3 + 1180) && v3 != -344 && *(_DWORD*)(v3 + 1180))
		return v3 + 344;
	else
		return 0i64;
}


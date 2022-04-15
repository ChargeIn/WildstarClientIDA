#include "../winhttp.h"

//----- (000000014035C010) ----------------------------------------------------
__int64 __fastcall sub_14035C010(__int64 a1, int* a2)
{
	int v2; // r9d
	int v3; // eax

	v2 = *a2;
	if (*a2 < *(_DWORD*)(a1 + 2408))
		return 0i64;
	if (v2 >= *(_DWORD*)(a1 + 2416))
		return 0i64;
	v3 = a2[1];
	if (v3 < *(_DWORD*)(a1 + 2412) || v3 >= *(_DWORD*)(a1 + 2420))
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)(a1 + 2448)
			+ 8i64
			* (v2 % *(_DWORD*)(a1 + 2424)
				+ *(_DWORD*)(a1 + 2424)
				* (v3 % *(_DWORD*)(a1 + 2428) + *(_DWORD*)(a1 + 2428) * (v3 % *(_DWORD*)(a1 + 2428) < 0))
				+ *(_DWORD*)(a1 + 2424) * (unsigned int)(v2 % *(_DWORD*)(a1 + 2424) < 0)));
}


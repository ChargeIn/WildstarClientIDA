#include "../winhttp.h"

//----- (0000000140355330) ----------------------------------------------------
__int64 __fastcall sub_140355330(__int64 a1, _DWORD* a2)
{
	int i; // r14d
	int j; // ebx
	__int64 v6; // rcx
	__int64 v7; // rdi

	for (i = *(_DWORD*)(a1 + 2192); i < *(_DWORD*)(a1 + 2200); ++i)
	{
		for (j = *(_DWORD*)(a1 + 2188); j < *(_DWORD*)(a1 + 2196); ++j)
		{
			v6 = j % *(_DWORD*)(a1 + 2204)
				+ *(_DWORD*)(a1 + 2204)
				* (i % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (i % *(_DWORD*)(a1 + 2208) < 0))
				+ *(_DWORD*)(a1 + 2204) * (unsigned int)(j % *(_DWORD*)(a1 + 2204) < 0);
			if (j >= *a2 && j < a2[2] && i >= a2[1] && i < a2[3])
			{
				v7 = 8 * v6;
				sub_14037EA00(*(__m128***)(8 * v6 + *(_QWORD*)(a1 + 2272)));
				sub_140381180(*(_QWORD*)(v7 + *(_QWORD*)(a1 + 2272)));
			}
		}
	}
	return 0i64;
}


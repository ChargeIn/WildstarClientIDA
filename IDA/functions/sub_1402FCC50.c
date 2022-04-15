#include "../winhttp.h"

//----- (00000001402FCC50) ----------------------------------------------------
__int64 __fastcall sub_1402FCC50(__int64 a1)
{
	unsigned int v1; // edi
	unsigned int i; // ebx
	__int64 v4; // rcx
	unsigned int v5; // eax

	v1 = 0;
	if (!*(_QWORD*)(a1 + 1424))
		return 0i64;
	for (i = 0; i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64); ++i)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1424) + 8i64 * i);
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 112i64))(v4);
			if (v1 < v5)
				v1 = v5;
		}
	}
	return v1;
}


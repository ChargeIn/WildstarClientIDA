#include "../winhttp.h"

//----- (00000001402FCB10) ----------------------------------------------------
void __fastcall sub_1402FCB10(__int64 a1, int a2)
{
	bool v3; // zf
	__int64 i; // rbx
	__int64 v5; // rcx

	if (*(_DWORD*)(a1 + 1444) != a2)
	{
		v3 = *(_QWORD*)(a1 + 1424) == 0i64;
		*(_DWORD*)(a1 + 1444) = a2;
		if (!v3)
		{
			if (*(_DWORD*)(a1 + 1440))
			{
				if (a2)
				{
					for (i = 0i64; (unsigned int)i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64); i = (unsigned int)(i + 1))
					{
						v5 = *(_QWORD*)(*(_QWORD*)(a1 + 1424) + 8 * i);
						if (v5)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 64i64))(v5, 0xFFFFFFFFi64);
					}
				}
			}
		}
	}
}


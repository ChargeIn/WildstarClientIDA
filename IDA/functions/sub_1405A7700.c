#include "../winhttp.h"

//----- (00000001405A7700) ----------------------------------------------------
__int64 __fastcall sub_1405A7700(__int64 a1)
{
	unsigned __int64 i; // rsi
	__int64 v3; // rbx
	__int64 v4; // rdi

	for (i = 0i64; i < *(_QWORD*)(a1 + 8); ++i)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * i);
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(v3 + 8);
				while (*(_QWORD*)(v3 + 24))
				{
					if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 8i64))(*(_QWORD*)(v3 + 24)))
						*(_QWORD*)(v3 + 24) = 0i64;
				}
				v3 = v4;
			} while (v4);
		}
	}
	return 1i64;
}


#include "../winhttp.h"

//----- (00000001408E77A0) ----------------------------------------------------
__int64 __fastcall sub_1408E77A0(__int64 a1, __int64 a2)
{
	unsigned int i; // ebx
	__int64 v5; // rsi
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 56))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 128); ++i)
		{
			v5 = 8i64 * i;
			if (*(_QWORD*)(v5 + *(_QWORD*)(a1 + 56)))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
				*(_QWORD*)(v5 + *(_QWORD*)(a1 + 56)) = 0i64;
			}
		}
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 16i64))(a2, *(_QWORD*)(a1 + 56));
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	return result;
}


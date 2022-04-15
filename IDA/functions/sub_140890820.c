#include "../winhttp.h"

//----- (0000000140890820) ----------------------------------------------------
__int64 __fastcall sub_140890820(__int64 a1, __int64* a2)
{
	__int64 v3; // r8
	__int64 result; // rax
	int v5; // eax
	__int64 v6; // rdx

	v3 = (unsigned int)(*(_DWORD*)(a1 + 280) - 1);
	if ((_DWORD)v3 == *(_DWORD*)(a1 + 256))
	{
		*(_QWORD*)(a1 + 272) = 0i64;
		*(_QWORD*)(a1 + 264) = 0i64;
		result = *a2;
		*(_QWORD*)(a1 + 8i64 * (unsigned int)(*(_DWORD*)(a1 + 256))++) = *a2;
	}
	else
	{
		result = *a2;
		if (*(_QWORD*)(a1 + 8 * v3) != *a2)
		{
			*(_QWORD*)(a1 + 272) = 0i64;
			*(_QWORD*)(a1 + 264) = 0i64;
			if (*(_DWORD*)(a1 + 256) - 1 >= (int)v3)
			{
				v5 = *(_DWORD*)(a1 + 256);
				v6 = (unsigned int)(v5 - v3);
				do
				{
					--v5;
					--v6;
				} while (v6);
				*(_DWORD*)(a1 + 256) = v5;
			}
			result = *a2;
			*(_QWORD*)(a1 + 8i64 * (unsigned int)(*(_DWORD*)(a1 + 256))++) = *a2;
		}
	}
	return result;
}

